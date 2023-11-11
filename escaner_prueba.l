%{
#include <stdio.h>

#pragma warning(disable: 4996 6011 6385 4244 4267)

#include <malloc.h> // para las definiciones de malloc, free que provocan warning
#include <stdlib.h> // para las definiciones de exit que provocan warning

%}

%option outfile="escaner_prueba.c"

/*Primitivas*/
LETRA [A-z]
DIGITO_NO_CERO [1-9]
EXPONENCIAL	e|E

/*Simbolos especiales*/
QUOTATION_MARK	\"

/*Falta complementarlo bien*/
COMMENT 		\'		


%%

"program"	{
			printf("Program\n");
		}
		
"function"	{
			printf("Function\n");
		}
		
"procedure"	{
			printf("Procedure\n");
		}
		
"begin"	{
			printf("Begin\n");
		}
	
"end"	{
			printf("End\n");
		}



"var"	{
		printf("var\n");
	}
	
"const"	{
		printf("const\n");
	}

"integer"	{
			printf("integer\n");
		}
		
"real"	{
		printf("real\n");
	}
	
"char"	{
		printf("char\n");
	}
	
"string"	{
			printf("string\n");
		}
		
"boolean"	{
			printf("boolean\n");
		}
		
"array"	{
		printf("array\n");
	}
	
"of"	{
		printf("of\n");
	}



"and"	{
		printf("and\n");
	}

"or"	{
		printf("or\n");
	}
	
"not"	{
		printf("not\n");
	}


	
"+"	{
		printf("Plus\n");
	}
	
"-"	{
		printf("Minus\n");
	}
	
"*"	{
		printf("Multiplication\n");
	}
	
"/"	{
		printf("Division\n");
	}
	
"div"	{
		printf("div\n");
	}

"mod"	{
		printf("mod\n");
	}
	
{EXPONENCIAL}	{
			printf("exp\n");
		}
	

	
"while"	{
		printf("while\n");
	}
	
"do"	{
		printf("do\n");
	}
	
"for"	{
		printf("for\n");
	}
	
"to"	{
		printf("to\n");
	}
	
"downto"	{
			printf("downto\n");
		}
		


"read"	{
		printf("read\n");
	}
	
"write"	{
		printf("write\n");
	}
	
"readln"	{
			printf("readln\n");
		}
	
"writeln"	{
			printf("writeln\n");
		}

		

"if"	{
		printf("if\n");
	}
	
"then"	{
		printf("then\n");
	}
	
"else"	{
		printf("else\n");
	}

	
	
":="	{
		printf("Assigner\n");
	}
	
".."	{
		printf("Double dot\n");
	}

"("	{
		printf("Left parent\n");
	}
	
")"	{
		printf("Right parent\n");
	}
	
"["	{
		printf("Left bracket\n");
	}
	
"]"	{
		printf("Right bracket\n");
	}
	
";"	{
		printf("End line\n");
	}
	
"."	{
		printf("dot\n");
	}
	
","	{
		printf("comma\n");
	}
	
":"	{
		printf("colon\n");
	}
	
"="	{
		printf("equals\n");
	}
	
"$"	{
		printf("$\n");
	}
	
"&"	{
		printf("&\n");
	}
	
"%"	{
		printf("Percentage\n");
	}
	
"{"	{
		printf("Bracket 1\n");
	}
	
"}"	{
		printf("Bracket 2\n");
	}

"<"	{
		printf("<\n");
	}
	
">"	{
		printf(">\n");
	}
	
"#"	{
		printf("Gatito\n");
	}
	
{QUOTATION_MARK}	{
				printf("Quotation mark\n");
			}
			
"<>"	{
		printf("Not equal\n");
	}
	
	
	
{LETRA}	{
		printf("Letra: %s\n", yytext);
	}
	
{DIGITO_NO_CERO}	{
				printf("Digito: %s\n", yytext);
			}
		
"0"	{
		printf("Digito: 0\n");
	}
	


.	{ /* Ignora todo */ }


%%



int main(int argc, char* argv[]){

	FILE* file = fopen("Prueba.txt", "r");
	if(file == NULL){
		return 1;
	}
	
	yyin = file;
	yylex();
	return 0;
}

int yywrap(void){
	return 1;
}