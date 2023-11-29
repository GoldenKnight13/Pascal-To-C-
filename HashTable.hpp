#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

#pragma warning(disable: 4996 6011 6387)

#define CAPACITY 3 // Size of the HashTable.
#define MAX_LINES_REFERENCE 20 // Array's size of reference lines for identifier

/* Funcion hash, suma el ASCII de los caracteres y retorna el modulo de la capacidad */
unsigned long hash_function(const char* str)
{
    unsigned long i = 0;

    for (unsigned int j = 0; str[j]; j++)
        i += str[j];

    return i % CAPACITY;
}

/* Tipos de variables y en donde aparecen*/
enum Var_Types { BOOLEAN, INTEGER, CHAR, FLOAT, STRING };
enum Var_concept { CONSTANT, VARIABLE, ARRAY, FUNCTION, PROCEDURE };

/* Valor de la tabla hash: tipo, longitud de memoria, ubicacion, donde fue definido, cuantas veces se uso*/
struct data_value
{
    unsigned long memory_assign;
    Var_Types type;
    Var_concept concept;
    unsigned long bytes_size;
    unsigned long source_line_definition;
    char source_lines_used[MAX_LINES_REFERENCE];
    unsigned int scope;
};


// Defines the HashTable item.
struct Ht_item
{
    /* Identificador y valor */
    char* identifier_string;
    data_value value;

};

// Defines the HashTable.
struct HashTable
{
    // Contains an array of pointers to items.
    Ht_item* items[CAPACITY] = { NULL };        //Elementos a la mano 
    vector<Ht_item*> collision_list[CAPACITY];  //Permite manejar colisiones 
    int count;      //Numero de elementos
};

//Inserta un elemento que presenta colision
vector<Ht_item> collision_list_insert(vector<Ht_item> collision_list, Ht_item item)
{
    // Inserts the item onto the LinkedList.
    collision_list.push_back(item);
    return collision_list;
}

//Crea un item de la tabla hash 
Ht_item* create_item(const char* value)
{
    // Creates a pointer to a new HashTable item.  
    Ht_item* item = (Ht_item*)malloc(sizeof(Ht_item));  //Le asigna memoria
    item->identifier_string = (char*)malloc(strlen(value) + 1); //Asigna memoria para el identificador
    strcpy(item->identifier_string, value); //Asigna el nombre
    return item;    //Regresa lo que se va a guardar
}

//Crea la tabla hash
void create_table(HashTable& table)
{
    // Creates a new HashTable.
    table.count = 0;    //No tiene elementos guardados
    for (int i = 0; i < CAPACITY; i++)
    {
        table.items[i] = NULL;              //Llena los espacios de NULL (nada / vacios)
        table.collision_list[i].clear();    //Lo mismo con la tabla de colisiones
    }
}

//Quita un item de la talba
void free_item(Ht_item* item)
{
    // Frees an item
    free(item->identifier_string);  //Libera la memoria donde esta almacenado su identificador
    free(item);                     //Igual al elemento
}

//Elimina la tabla Hash
void free_table(HashTable& table)
{
    // Frees the table.
    for (unsigned int i = 0; i < CAPACITY; i++)
        if (table.items[i] != NULL)
        {
            //Libera todos los elementos de la lista de colisiones
            for (Ht_item* actual : table.collision_list[i])
                free_item(actual);
            table.collision_list[i].clear();
            free_item(table.items[i]);  //Libera los items guardados
            table.items[i] = NULL;
        }
    table.count = 0;    //Reestablece el numero de elementos a 0
}

void handle_collision(HashTable& table, unsigned long index, Ht_item* item)
{
    // Insert to the list.
    table.collision_list[index].push_back(item);    //Inserta el elemento en la lista de colisiones 
}

void ht_insert(HashTable& table, const char* value, data_value data)
{
    // Creates the item.
    Ht_item* item = create_item(value);         //Crea el item 
    item->value.bytes_size = data.bytes_size;   //Inserta la cantidad de bytes que ocupa
    item->value.type = data.type;               //"" el tipo
    item->value.concept = data.concept;         //"" el concepto
    item->value.memory_assign = data.memory_assign; //La asignacion de memoria
    item->value.scope = data.scope;                 //Ubiacion
    item->value.source_line_definition = data.source_line_definition;   //Cuando fue definido
    strcpy(item->value.source_lines_used, data.source_lines_used);      //Veces usado
    // Computes the index.
    unsigned int index = hash_function(value);  //Le asigna el indice basado en el HASH
    if (table.items[index] == NULL)
        // Insert directly.
        table.items[index] = item;
    else
        //Handle the collision.
        handle_collision(table, index, item);
    table.count++;      //Aumenta el numero de elementos guardados
}

//Busca si un elemento especifico esta en la tabla hash
bool ht_search(HashTable table, const char* key, unsigned long& index, long& collision_list_position)
{
    // Searches for the key in the HashTable.
    // Returns NULL if it doesn't exist.
    index = hash_function(key);
    Ht_item* item = table.items[index];

    // Provide only non-NULL values.
    if (item != NULL)
    {
        //Si es igual al identificador dado responde que si 
        if (strcmp(item->identifier_string, key) == 0)
            return true;

        collision_list_position = -1;   //Busca en la lista de colision
        for (Ht_item* actual : table.collision_list[index])
        {
            collision_list_position++;
            if (strcmp(actual->identifier_string, key) == 0)
                return true;
        }
    }
    //Si no lo encuentra responde que no existe
    return false;
}

//Borra un elemento de la tabla
void ht_delete(HashTable& table, const char* key)
{
    // Deletes an item from the table.
    int index = hash_function(key);
    Ht_item* item = table.items[index];
    if (item == NULL)
        // Does not exist.
        return; //Si no lo encuentra no hace nada
    else
    {
        //Si lo encuentra y no existe colision
        if (strcmp(item->identifier_string, key) == 0 && table.collision_list[index].size() == 0)
        {
            // Collision list does not exist.
            // Remove the item.
            // Set table index to NULL.
            table.items[index] = NULL;  //Libera el item y el espacio de la tabla hash
            free_item(item);
            table.count--;  //Dismuniye el contador de elementos
            return;
        }

        //Si existe colision
        else if (strcmp(item->identifier_string, key) == 0 && table.collision_list[index].size() != 0)
        {
            // Collision list exists.
            if (strcmp(item->identifier_string, key) == 0)
            {
                // Remove this item.
                // Set the head of the list as the new item.
                //Pone a la mano el primer elemento de la lista de colisiones 
                strcpy(table.items[index]->identifier_string, table.collision_list[index].at(0)->identifier_string);
                table.items[index]->value.bytes_size = table.collision_list[index].at(0)->value.bytes_size;
                table.items[index]->value.type = table.collision_list[index].at(0)->value.type;
                table.items[index]->value.memory_assign = table.collision_list[index].at(0)->value.memory_assign;
                table.items[index]->value.scope = table.collision_list[index].at(0)->value.scope;
                table.items[index]->value.source_line_definition = table.collision_list[index].at(0)->value.source_line_definition;
                strcpy(table.items[index]->value.source_lines_used, table.collision_list[index].at(0)->value.source_lines_used);
                table.collision_list[index].erase(table.collision_list[index].begin());
                table.count--;  //Reduce el numero de elementos en 1
                return;
            }
        }
        // Find on collision list and delete.
        for (unsigned long it = 0; it < table.collision_list[index].size(); it++)

            //Si lo enuentra
            if (strcmp(table.collision_list[index].at(it)->identifier_string, key) == 0)
            {
                free(table.collision_list[index].at(it)->identifier_string);    //Libera el identificador
                table.collision_list[index].erase(table.collision_list[index].begin() + it);    //Borra el elemento de la tabla de colision
                if (table.collision_list[index].size() == 0)
                    table.collision_list[index].clear();    //Elimina la tabla de colision si solo queda 1 elemento
                table.count--;  //Reduce el numero de elementos
                return;
            }

    }
}

//Muestra los elementos del valor buscado
void print_search(HashTable& table, const char* key)
{
    unsigned long pos = 0;
    long collision_pos_lis = -1;

    //Hace una busqueda para saber si existe
    if (!ht_search(table, key, pos, collision_pos_lis))
    {
        printf("Key:%s does not exist\n", key); //Si no existe nos lo hace saber
        return;
    }
    else if (collision_pos_lis != -1)
        //Si solo existe un elemento de la tabla muestra el identificador, la posicion a la mano y la posicion en la lista de colision
        printf("Key:%s, Index:%d, Collision list position:%d\n", key, pos, collision_pos_lis);
    else
        printf("Key:%s, Index:%d\n", key, pos); //Si hay mas elementos en la tabla de colision se regresa la posicion a la mano
}

//Muestra todos los contenidos de la tabla hash
void print_table(HashTable table)
{
    printf("\nHash Table\n-------------------\n");

    for (int i = 0; i < CAPACITY; i++)
        if (table.items[i])
        {
            printf("Index:%d, Key:%s\n", i, table.items[i]->identifier_string);
            for (unsigned long it = 0; it < table.collision_list[i].size(); it++)
                printf("Index:%d, Collision list position:%d, Key:%s\n", i, it, table.collision_list[i].at(it)->identifier_string);
        }
    printf("-------------------\n\n");
}