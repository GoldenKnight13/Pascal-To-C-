%{

#include <stdio.h>
#include<stdlib.h>
#include <malloc.h>
#pragma warning(disable: 4996 4013 4244 4267)

#include"unistd.h"
#include"getopt.h"

extern FILE* yyin;
extern int yylex();


void yyerror(char* code) {
   printf("Error %s\n", code);
   exit(1); /* Sale del programa */
}

int line = 1;

%}

%union{
	char* str;
	int num;
}


/*Tokens*/
%token PROGRAM FUNCTION PROCEDURE BEGIN_TOKEN END
%token VAR TOKEN_CONST TOKEN_INTEGER REAL TOKEN_CHAR TOKEN_STRING TOKEN_BOOLEAN ARRAY OF
%token AND OR NOT
%token PLUS MINUS MULTIPLICATION DIVISION DIV MOD
%token <str> EXP
%token WHILE DO FOR TO DOWNTO
%token READ WRITE READLN WRITELN
%token IF THEN ELSE
%token ASSIGN L_PARENT R_PARENT L_S_BRACKET R_S_BRACKET SEMICOLON DOT COMMA COLON EQUAL MONEY_SIGN AMPERSAND 
%token PERCENTAGE L_BRACKET R_BRACKET LESS GREATER GATITO QUOTATION_MARK NOT_EQUAL DOUBLE_DOT
%token OPEN_COMMENT CLOSE_COMMENT
%token <str> LETRA 
%token <num> DIGITO_NO_CERO 
%token <num> CERO

/* Valores no terminales */
%type <str> letra
%type <num> digito
%type <str> identificador_siguiente
%type <str> identificador
%type <str> identificador_lista

%type <str> tipo
%type <str> estandar_tipo


%%

programa:	comentario PROGRAM identificador L_PARENT identificador_lista R_PARENT cambio_linea declaraciones subprograma_declaraciones instruccion_compuesta DOT;

identificador:	letra { $$ = $1; }
		| letra identificador_siguiente  {
			char* combine = (char*)malloc( (strlen($1) + strlen($2) + 1) * sizeof(char) );
			strcpy(combine, $1);
			strcat(combine, $2);
			$$ = combine;
		}
		;
		
identificador_siguiente:	letra identificador_siguiente {
					char* combine = (char*)malloc( (strlen($1) + strlen($2) + 1) * sizeof(char) );
					strcpy(combine, $1);
					strcat(combine, $2);
					$$ = combine;
				}
				| digito identificador_siguiente { 
					char aux [2];
					sprintf(aux, "%d", $1);
					char* combine = (char*)malloc( ( strlen(aux) + strlen($2) + 1) * sizeof(char) );
					strcpy(combine, aux);
					strcat(combine, $2);
					$$ = combine; 
				}
				| /* vacio */ { 
					char* combine = (char*)malloc( (strlen("") + 1) * sizeof(char) );
					strcpy(combine, "");
					$$ = combine;
				}
				;
						
letra:	LETRA	{ 
		char* combine = (char*)malloc( (strlen($1) + 1) * sizeof(char) );
		strcpy(combine, $1);
		$$ = combine;
	}
	| EXP 	{
		char* combine = (char*)malloc( (strlen($1) + 1) * sizeof(char) );
		strcpy(combine, $1);
		$$ = combine;
	}
	;
				
digito:	DIGITO_NO_CERO	{ $$ = $1; }
	| CERO	{ $$ = $1; }
	;
	
relop:	AND
	| OR
	;
	
addop:	PLUS
	| MINUS
	;
	
mulop:	MULTIPLICATION
	| DIVISION
	| DIV
	| MOD
	;
	
identificador_lista:	identificador {$$ = $1;}
			| identificador_lista COMMA identificador {
				char* combine = (char*)malloc( (strlen($1) + strlen(",") + strlen($3) + 1) * sizeof(char) );
				strcpy(combine, $1);
				strcat(combine, ",");
				strcat(combine, $3);
				$$ = combine;
			}
			;
			
declaraciones:	declaraciones_variables
		| declaraciones_constantes
		;
		
declaraciones_variables:	declaraciones_variables VAR identificador_lista COLON tipo {
					printf("Identificador: %s\nTipo: %s\nConcepto: %s\nLinea: %d\n", $3, $5, "VAR", line);
				} cambio_linea
				| /*vacio*/
				;
				
declaraciones_constantes:	declaraciones_constantes TOKEN_CONST identificador EQUAL constante_entera {
					printf("Identificador: %s\nTipo: %s\nConcepto: %s\nLinea: %d\n", $3, "INTEGER", "CONST", line);
				} cambio_linea
				| declaraciones_constantes TOKEN_CONST identificador EQUAL constante_real {
					printf("Identificador: %s\nTipo: %s\nConcepto: %s\nLinea: %d\n", $3, "REAL", "CONST", line);
				} cambio_linea
				| declaraciones_constantes TOKEN_CONST identificador EQUAL constante_cadena {
					printf("Identificador: %s\nTipo: %s\nConcepto: %s\nLinea: %d\n", $3, "STRING", "CONST", line);
				} cambio_linea
				| /*vacio*/
				;
				
tipo:	estandar_tipo	{ $$ = $1 }
	| ARRAY L_S_BRACKET numero_entero DOUBLE_DOT numero_entero R_S_BRACKET OF estandar_tipo	{ $$ = "ARRAY"; }
	;	

estandar_tipo:	TOKEN_INTEGER	{ $$ = "INTEGER"; }
		| REAL	{ $$ = "REAL"; }
		| TOKEN_CHAR	{ $$ = "CHAR"; }
		| TOKEN_STRING	{ $$ = "STRING"; }
		| TOKEN_BOOLEAN	{ $$ = "BOOLEAN"; }
		;
		
subprograma_declaraciones:	subprograma_declaraciones subprograma_declaracion cambio_linea
				| /*vacio*/
				;
				
subprograma_declaracion:	subprograma_encabezado declaraciones subprograma_declaraciones instruccion_compuesta
				;
				
subprograma_encabezado:	FUNCTION identificador argumentos COLON estandar_tipo {
					printf("Identificador: %s\nTipo: %s\nConcepto: %s\nLinea: %d\n", $2, $5, "FUNCTION", line);
				} cambio_linea
			| PROCEDURE identificador argumentos {
					printf("Identificador: %s\nTipo: %s\nConcepto: %s\nLinea: %d\n", $2, "", "PROCEDURE", line);
				} cambio_linea
			;
			
argumentos:	L_PARENT parametros_lista R_PARENT
		| /*vacio*/
		;
		
parametros_lista:	identificador_lista COLON tipo
			| parametros_lista SEMICOLON identificador_lista COLON tipo
			;
			
instruccion_compuesta:	BEGIN_TOKEN instrucciones_opcionales END
			;
			
instrucciones_opcionales:	instrucciones_lista
				| /*vacio*/
				;
				
instrucciones_lista:	instrucciones
			| instrucciones_lista cambio_linea instrucciones
			;
			
instrucciones:	variable_asignacion
		| procedure_instruccion
		| instruccion_compuesta
		| if_instruccion
		| repeticion_instruccion
		| lectura_instruccion
		| escritura_instruccion
		;
		
repeticion_instruccion:	WHILE relop_expresion DO instrucciones
			| FOR for_asignacion TO expresion DO instrucciones
			| FOR for_asignacion DOWNTO expresion DO instrucciones
			;
			
lectura_instruccion:	READ L_PARENT identificador R_PARENT
			| READLN L_PARENT identificador R_PARENT
			;
			
escritura_instruccion: WRITE L_PARENT constante_cadena COMMA identificador R_PARENT
			| WRITELN L_PARENT constante_cadena COMMA identificador R_PARENT
			| WRITE L_PARENT constante_cadena R_PARENT
			| WRITELN L_PARENT constante_cadena R_PARENT
			| WRITE L_PARENT constante_cadena COMMA expresion R_PARENT
			| WRITELN L_PARENT constante_cadena COMMA expresion R_PARENT
			| WRITE L_PARENT identificador R_PARENT
			| WRITELN L_PARENT identificador  R_PARENT
			;
			
constante_cadena:	QUOTATION_MARK cadena QUOTATION_MARK
			;
			
cadena:	cadena caracter_alfanumerico
	| /*vacio*/
	;
	
caracter_alfanumerico:	letra
			| digito
			| MONEY_SIGN
			| AMPERSAND
			| DIVISION 
			| PLUS
			| MINUS
			| MULTIPLICATION
			| PERCENTAGE
			| EQUAL
			| COLON
			| L_BRACKET
			| R_BRACKET
			| GREATER
			| LESS
			| cambio_linea
			| L_S_BRACKET 
			| R_S_BRACKET
			| COMMA
			| DOT
			| GATITO 
			;
			
if_instruccion:	IF relop_expresion THEN instrucciones
		| IF relop_expresion THEN instrucciones ELSE instrucciones
		;
		
variable_asignacion:	variable ASSIGN expresion
			;
			
for_asignacion:	variable_asignacion
		| variable
		;
		
variable:	identificador
		| identificador L_S_BRACKET expresion R_S_BRACKET
		;
		
procedure_instruccion:	identificador
			| identificador L_PARENT expresion_lista R_PARENT
			;
			
relop_expresion:	relop_expresion OR relop_and
			| relop_and
			;
			
relop_and:	relop_and AND	relop_not
		| relop_not
		;
		
relop_not:	NOT relop_not 
		| relop_paren
		;
		
relop_paren:	L_PARENT relop_expresion R_PARENT
		| relop_expresion_simple
		;
		
relop_expresion_simple:	expresion relop expresion
			| comparacion
			;
			
expresion_lista:	expresion
			| expresion_lista COMMA expresion
			;

expresion:	termino
		| expresion addop termino
		;
		
termino:	factor
		| termino mulop factor
		;
		
llamado_funcion:	identificador L_PARENT expresion_lista R_PARENT
			;
		
factor:	identificador
	| identificador L_S_BRACKET expresion R_S_BRACKET
	| llamado_funcion
	| constante_entera
	| constante_real
	| signo factor
	| L_PARENT expresion R_PARENT
	;

signo:	PLUS
	| MINUS
	| /*vacio*/
	;
	
constante_entera:	signo numero_entero
			;
			
numero_entero:	DIGITO_NO_CERO numero
		;
	
numero:	numero digito
	| /*vacio*/
	;
	
constante_real:	signo numero_entero DOT numero_entero
		| signo numero_entero DOT numero_entero exponente
		;
		
exponente:	EXP signo numero_entero
		;
		
comentario:	OPEN_COMMENT contenido CLOSE_COMMENT
		| /* vacio */
		;

contenido:	tokens_disponibles contenido
		| tokens_disponibles
		| /*vacio*/
		;

cambio_linea:	SEMICOLON comentario
		;
		
tokens_disponibles:	caracter_alfanumerico
			| PROGRAM
			| FUNCTION
			| PROCEDURE
			| BEGIN_TOKEN
			| END
			| VAR
			| TOKEN_CONST
			| TOKEN_INTEGER
			| REAL
			| TOKEN_CHAR
			| TOKEN_STRING
			| TOKEN_BOOLEAN
			| ARRAY
			| OF
			| AND
			| OR
			| NOT
			| DIV
			| MOD
			| WHILE
			| DO
			| FOR
			| TO
			| DOWNTO
			| READ
			| WRITE
			| READLN
			| WRITELN
			| IF
			| THEN
			| ELSE
			;
			
comparacion:	identificador EQUAL expresion_comparador
		| identificador GREATER expresion_comparador
		| identificador LESS expresion_comparador
		| identificador NOT_EQUAL expresion_comparador
		| identificador GREATER EQUAL expresion_comparador
		| identificador LESS EQUAL expresion_comparador
		;
		
expresion_comparador:	identificador
			| signo digito
			;

%%

extern FILE* yyin;
int main(int argc, char* argv[]) {

    FILE* file = fopen("C:/Users/sonic/Documents/UP/Semestre 7/Lenguajes/Proyecto Final/Pruebas.txt","r");
    if (!file){
    	yyerror("Archivo no encontrado");
    }
    
    yyin = file;
    yyparse();
    printf("Programa reconocido correctamente\n");
    printf("Lineas: %d\n", line);
    return 0;
}