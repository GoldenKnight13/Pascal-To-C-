%{
#include <stdio.h>

#pragma warning(disable: 4996 6011 6385 4244 4267)

#include <malloc.h> // para las definiciones de malloc, free que provocan warning
#include <stdlib.h> // para las definiciones de exit que provocan warning

#include "parser.tab.h"

%}

/*Primitivas*/
LETRA [A-z]
DIGITO_NO_CERO [1-9]
EXPONENCIAL	e|E

/*Simbolos especiales*/
QUOTATION_MARK	\"

/*Falta complementarlo bien*/
COMMENT 	\'		


%%

"program"	{
			return PROGRAM;
		}
		
"function"	{
			return FUNCTION;
		}
		
"procedure"	{
			return PROCEDURE;
		}
		
"begin"	{
			return BEGIN;
		}
	
"end"	{
			return END;
		}



"var"	{
		return VAR;
	}
	
"const"	{
		return CONST;
	}

"integer"	{
			return INTEGER;
		}
		
"real"	{
		return REAL;
	}
	
"char"	{
		return CHAR;
	}
	
"string"	{
			return STRING;
		}
		
"boolean"	{
			return BOOLEAN;
		}
		
"array"	{
		return ARRAY;
	}
	
"of"	{
		return OF;
	}



"and"	{
		return AND;
	}

"or"	{
		return OR;
	}
	
"not"	{
		return NOT;
	}


	
"+"	{
		return PLUS;
	}
	
"-"	{
		return MINUS;
	}
	
"*"	{
		return MULTIPLICATION;
	}
	
"/"	{
		return DIVISION;
	}
	
"div"	{
		return DIV;
	}

"mod"	{
		return MOD;
	}
	
{EXPONENCIAL}	{
			return EXP;
		}
	

	
"while"	{
		return WHILE;
	}
	
"do"	{
		return DO;
	}
	
"for"	{
		return FOR;
	}
	
"to"	{
		return TO;
	}
	
"downto"	{
			return DOWNTO;
		}
		


"read"	{
		return READ;
	}
	
"write"	{
		return WRITE;
	}
	
"readln"	{
			return READLN;
		}
	
"writeln"	{
			return WRITELN;
		}

		

"if"	{
		return IF;
	}
	
"then"	{
		return THEN;
	}
	
"else"	{
		return ELSE;
	}

	
	
":="	{
		return ASSIGN;
	}
	
".."	{
		return DOUBLE_DOT;
	}

"("	{
		return L_PARENT;
	}
	
")"	{
		return R_PARENT;
	}
	
"["	{
		return L_S_BRACKET;
	}
	
"]"	{
		return R_S_BRACKET;
	}
	
";"	{
		return SEMICOLON;
	}
	
"."	{
		return DOT;
	}
	
","	{
		return COMMA;
	}
	
":"	{
		return COLON;
	}
	
"="	{
		return EQUAL;
	}
	
"$"	{
		return MONEY_SIGN;
	}
	
"&"	{
		return AMPERSAND;
	}
	
"%"	{
		return PERCENTAGE;
	}
	
"{"	{
		return L_BRACKET;
	}
	
"}"	{
		return R_BRACKET;
	}

"<"	{
		return LESS;
	}
	
">"	{
		return GREATER;
	}
	
"#"	{
		return GATITO;
	}
	
{QUOTATION_MARK}	{
				return QUOTATION_MARK;
			}
			
"<>"	{
		return NOT_EQUAL;
	}
	
	
	
{LETRA}	{
		yyval = yytext;
		return LETRA;
	}
	
{DIGITO_NO_CERO}	{
				yyval = atoi(yytext);
				return DIGITO_NO_CERO;
			}
		
"0"	{
		yyval = atoi(yytext);
		return CERO;
	}
	


.	{ yyerror("Caracter invalido"); }


%%

int yywrap(void){
	return 1;
}