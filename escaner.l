%{
#include <stdio.h>

#pragma warning(disable: 4996 6011 6385 4244 4267)

#include <malloc.h> // para las definiciones de malloc, free que provocan warning
#include <stdlib.h> // para las definiciones de exit que provocan warning

#include "parser.tab.h"

extern int line;
extern void yyerror(char* code);
extern void yyerror(const char* error);

%}

/*Primitivas*/
LETRA [A-z]
DIGITO_NO_CERO [1-9]
EXPONENCIAL	e|E

/*Simbolos especiales*/
QUOTATION_MARK	\"

/*Falta complementarlo bien*/
OPEN_COMMENT "(*"
CLOSE_COMMENT "*)"

IGNORES [\t]+


%%

{IGNORES}	{ /* Ignores */ }
" "		{ /* Ignores */ }
"\n"		{line++;}



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
			return BEGIN_TOKEN;
		}
	
"end"	{
			return END;
		}



"var"	{
		return VAR;
	}
	
"const"	{
		return TOKEN_CONST;
	}

"integer"	{
			return TOKEN_INTEGER;
		}
		
"real"	{
		return REAL;
	}
	
"char"	{
		return TOKEN_CHAR;
	}
	
"string"	{
			return TOKEN_STRING;
		}
		
"boolean"	{
			return TOKEN_BOOLEAN;
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
			yylval.str = yytext;
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

	

{OPEN_COMMENT}	{	
			return OPEN_COMMENT;
		}
		
{CLOSE_COMMENT}	{
			return CLOSE_COMMENT;
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
		yylval.str = yytext;
		return LETRA;
	}
	
{DIGITO_NO_CERO}	{
				yylval.num = atoi(yytext);
				return DIGITO_NO_CERO;
			}
		
"0"	{
		yylval.num = atoi(yytext);
		return CERO;
	}
	
	

.	{ yyerror("Caracter invalido"); }


%%

int yywrap(void){
	return 1;
}



