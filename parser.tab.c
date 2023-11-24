
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */



#include <stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996 4013 4244 4267)




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     FUNCTION = 259,
     PROCEDURE = 260,
     BEGIN_TOKEN = 261,
     END = 262,
     VAR = 263,
     CONST = 264,
     INTEGER = 265,
     REAL = 266,
     CHAR = 267,
     STRING = 268,
     BOOLEAN = 269,
     ARRAY = 270,
     OF = 271,
     AND = 272,
     OR = 273,
     NOT = 274,
     PLUS = 275,
     MINUS = 276,
     MULTIPLICATION = 277,
     DIVISION = 278,
     DIV = 279,
     MOD = 280,
     EXP = 281,
     WHILE = 282,
     DO = 283,
     FOR = 284,
     TO = 285,
     DOWNTO = 286,
     READ = 287,
     WRITE = 288,
     READLN = 289,
     WRITELN = 290,
     IF = 291,
     THEN = 292,
     ELSE = 293,
     ASSIGN = 294,
     L_PARENT = 295,
     R_PARENT = 296,
     L_S_BRACKET = 297,
     R_S_BRACKET = 298,
     SEMICOLON = 299,
     DOT = 300,
     COMMA = 301,
     COLON = 302,
     EQUAL = 303,
     MONEY_SIGN = 304,
     AMPERSAND = 305,
     PERCENTAGE = 306,
     L_BRACKET = 307,
     R_BRACKET = 308,
     LESS = 309,
     GREATER = 310,
     GATITO = 311,
     QUOTATION_MARK = 312,
     NOT_EQUAL = 313,
     DOUBLE_DOT = 314,
     OPEN_COMMENT = 315,
     CLOSE_COMMENT = 316,
     LETRA = 317,
     DIGITO_NO_CERO = 318,
     CERO = 319
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{


	char* str;
	int num;



} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  64
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   383

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  183
/* YYNRULES -- Number of states.  */
#define YYNSTATES  303

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    15,    17,    20,    23,    26,    27,    29,
      31,    33,    35,    37,    39,    41,    43,    45,    47,    49,
      51,    53,    57,    59,    61,    68,    69,    76,    83,    90,
      91,    93,   102,   104,   106,   108,   110,   112,   116,   117,
     122,   129,   134,   138,   139,   143,   149,   153,   155,   156,
     158,   162,   164,   166,   168,   170,   172,   174,   176,   181,
     188,   195,   200,   205,   212,   219,   224,   229,   236,   243,
     248,   253,   257,   260,   261,   263,   265,   267,   269,   271,
     273,   275,   277,   279,   281,   283,   285,   287,   289,   291,
     293,   295,   297,   299,   301,   303,   308,   315,   319,   321,
     323,   325,   330,   332,   337,   341,   343,   347,   349,   352,
     354,   358,   360,   364,   366,   368,   372,   374,   378,   380,
     384,   389,   391,   396,   398,   400,   402,   405,   409,   411,
     413,   414,   417,   420,   423,   424,   429,   435,   439,   443,
     444,   447,   449,   450,   453,   455,   457,   459,   461,   463,
     465,   467,   469,   471,   473,   475,   477,   479,   481,   483,
     485,   487,   489,   491,   493,   495,   497,   499,   501,   503,
     505,   507,   509,   511,   513,   515,   517,   521,   525,   529,
     533,   538,   543,   545
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      66,     0,    -1,   116,     3,    67,    40,    74,    41,   118,
      75,    80,    85,    45,    -1,    69,    -1,    69,    68,    -1,
      69,    68,    -1,    70,    68,    -1,    -1,    62,    -1,    26,
      -1,    63,    -1,    64,    -1,    17,    -1,    18,    -1,    20,
      -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,    25,
      -1,    67,    -1,    74,    46,    67,    -1,    76,    -1,    77,
      -1,    76,     8,    74,    47,    78,   118,    -1,    -1,    77,
       9,    67,    48,   111,   118,    -1,    77,     9,    67,    48,
     114,   118,    -1,    77,     9,    67,    48,    92,   118,    -1,
      -1,    79,    -1,    15,    42,   112,    59,   112,    43,    16,
      79,    -1,    10,    -1,    11,    -1,    12,    -1,    13,    -1,
      14,    -1,    80,    81,   118,    -1,    -1,    82,    75,    80,
      85,    -1,     4,    67,    83,    47,    79,   118,    -1,     5,
      67,    83,   118,    -1,    40,    84,    41,    -1,    -1,    74,
      47,    78,    -1,    84,    44,    74,    47,    78,    -1,     6,
      86,     7,    -1,    87,    -1,    -1,    88,    -1,    87,   118,
      88,    -1,    96,    -1,    99,    -1,    85,    -1,    95,    -1,
      89,    -1,    90,    -1,    91,    -1,    27,   100,    28,    88,
      -1,    29,    97,    30,   106,    28,    88,    -1,    29,    97,
      31,   106,    28,    88,    -1,    32,    40,    67,    41,    -1,
      34,    40,    67,    41,    -1,    33,    40,    92,    46,    67,
      41,    -1,    35,    40,    92,    46,    67,    41,    -1,    33,
      40,    92,    41,    -1,    35,    40,    92,    41,    -1,    33,
      40,    92,    46,   106,    41,    -1,    35,    40,    92,    46,
     106,    41,    -1,    33,    40,    67,    41,    -1,    35,    40,
      67,    41,    -1,    57,    93,    57,    -1,    93,    94,    -1,
      -1,    69,    -1,    70,    -1,    49,    -1,    50,    -1,    23,
      -1,    20,    -1,    21,    -1,    22,    -1,    51,    -1,    48,
      -1,    47,    -1,    52,    -1,    53,    -1,    55,    -1,    54,
      -1,   118,    -1,    42,    -1,    43,    -1,    46,    -1,    45,
      -1,    56,    -1,    36,   100,    37,    88,    -1,    36,   100,
      37,    88,    38,    88,    -1,    98,    39,   106,    -1,    96,
      -1,    98,    -1,    67,    -1,    67,    42,   106,    43,    -1,
      67,    -1,    67,    40,   105,    41,    -1,   100,    18,   101,
      -1,   101,    -1,   101,    17,   102,    -1,   102,    -1,    19,
     102,    -1,   103,    -1,    40,   100,    41,    -1,   104,    -1,
     106,    71,   106,    -1,   120,    -1,   106,    -1,   105,    46,
     106,    -1,   107,    -1,   106,    72,   107,    -1,   109,    -1,
     107,    73,   109,    -1,    67,    40,   105,    41,    -1,    67,
      -1,    67,    42,   106,    43,    -1,   108,    -1,   111,    -1,
     114,    -1,   110,   109,    -1,    40,   106,    41,    -1,    20,
      -1,    21,    -1,    -1,   110,   112,    -1,    63,   113,    -1,
     113,    70,    -1,    -1,   110,   112,    45,   112,    -1,   110,
     112,    45,   112,   115,    -1,    26,   110,   112,    -1,    60,
     117,    61,    -1,    -1,   119,   117,    -1,   119,    -1,    -1,
      44,   116,    -1,    94,    -1,     3,    -1,     4,    -1,     5,
      -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,    11,    -1,    12,    -1,    13,    -1,    14,    -1,    15,
      -1,    16,    -1,    17,    -1,    18,    -1,    19,    -1,    24,
      -1,    25,    -1,    27,    -1,    28,    -1,    29,    -1,    30,
      -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,    35,
      -1,    36,    -1,    37,    -1,    38,    -1,    67,    48,   121,
      -1,    67,    55,   121,    -1,    67,    54,   121,    -1,    67,
      58,   121,    -1,    67,    55,    48,   121,    -1,    67,    54,
      48,   121,    -1,    67,    -1,   110,    70,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    34,    34,    36,    37,    40,    41,    42,    45,    46,
      49,    50,    53,    54,    57,    58,    61,    62,    63,    64,
      67,    68,    71,    72,    75,    76,    79,    80,    81,    82,
      85,    86,    89,    90,    91,    92,    93,    96,    97,   100,
     103,   104,   106,   107,   110,   111,   114,   117,   118,   121,
     122,   125,   126,   127,   128,   129,   130,   131,   134,   135,
     136,   139,   140,   143,   144,   145,   146,   147,   148,   149,
     150,   153,   156,   157,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   183,   184,   187,   190,   191,
     194,   195,   198,   199,   202,   203,   206,   207,   210,   211,
     214,   215,   218,   219,   222,   223,   226,   227,   230,   231,
     234,   237,   238,   239,   240,   241,   242,   243,   246,   247,
     248,   251,   254,   257,   258,   261,   262,   265,   268,   269,
     272,   273,   274,   277,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   314,   315,   316,   317,
     318,   319,   322,   323
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "FUNCTION", "PROCEDURE",
  "BEGIN_TOKEN", "END", "VAR", "CONST", "INTEGER", "REAL", "CHAR",
  "STRING", "BOOLEAN", "ARRAY", "OF", "AND", "OR", "NOT", "PLUS", "MINUS",
  "MULTIPLICATION", "DIVISION", "DIV", "MOD", "EXP", "WHILE", "DO", "FOR",
  "TO", "DOWNTO", "READ", "WRITE", "READLN", "WRITELN", "IF", "THEN",
  "ELSE", "ASSIGN", "L_PARENT", "R_PARENT", "L_S_BRACKET", "R_S_BRACKET",
  "SEMICOLON", "DOT", "COMMA", "COLON", "EQUAL", "MONEY_SIGN", "AMPERSAND",
  "PERCENTAGE", "L_BRACKET", "R_BRACKET", "LESS", "GREATER", "GATITO",
  "QUOTATION_MARK", "NOT_EQUAL", "DOUBLE_DOT", "OPEN_COMMENT",
  "CLOSE_COMMENT", "LETRA", "DIGITO_NO_CERO", "CERO", "$accept",
  "programa", "identificador", "identificador_siguiente", "letra",
  "digito", "relop", "addop", "mulop", "identificador_lista",
  "declaraciones", "declaraciones_variables", "declaraciones_constantes",
  "tipo", "estandar_tipo", "subprograma_declaraciones",
  "subprograma_declaracion", "subprograma_encabezado", "argumentos",
  "parametros_lista", "instruccion_compuesta", "instrucciones_opcionales",
  "instrucciones_lista", "instrucciones", "repeticion_instruccion",
  "lectura_instruccion", "escritura_instruccion", "constante_cadena",
  "cadena", "caracter_alfanumerico", "if_instruccion",
  "variable_asignacion", "for_asignacion", "variable",
  "procedure_instruccion", "relop_expresion", "relop_and", "relop_not",
  "relop_paren", "relop_expresion_simple", "expresion_lista", "expresion",
  "termino", "llamado_funcion", "factor", "signo", "constante_entera",
  "numero_entero", "numero", "constante_real", "exponente", "comentario",
  "contenido", "cambio_linea", "tokens_disponibles", "comparacion",
  "expresion_comparador", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    68,    69,    69,
      70,    70,    71,    71,    72,    72,    73,    73,    73,    73,
      74,    74,    75,    75,    76,    76,    77,    77,    77,    77,
      78,    78,    79,    79,    79,    79,    79,    80,    80,    81,
      82,    82,    83,    83,    84,    84,    85,    86,    86,    87,
      87,    88,    88,    88,    88,    88,    88,    88,    89,    89,
      89,    90,    90,    91,    91,    91,    91,    91,    91,    91,
      91,    92,    93,    93,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    95,    95,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     110,   111,   112,   113,   113,   114,   114,   115,   116,   116,
     117,   117,   117,   118,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   120,   120,   120,   120,
     120,   120,   121,   121
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    11,     1,     2,     2,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     6,     0,     6,     6,     6,     0,
       1,     8,     1,     1,     1,     1,     1,     3,     0,     4,
       6,     4,     3,     0,     3,     5,     3,     1,     0,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     4,     6,
       6,     4,     4,     6,     6,     4,     4,     6,     6,     4,
       4,     3,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     6,     3,     1,     1,
       1,     4,     1,     4,     3,     1,     3,     1,     2,     1,
       3,     1,     3,     1,     1,     3,     1,     3,     1,     3,
       4,     1,     4,     1,     1,     1,     2,     3,     1,     1,
       0,     2,     2,     2,     0,     4,     5,     3,     3,     0,
       2,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       4,     4,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     139,   142,     0,     0,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,    79,    80,    81,    78,   162,   163,     9,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      90,    91,   139,    93,    92,    84,    83,    76,    77,    82,
      85,    86,    88,    87,    94,     8,    10,    11,    74,    75,
     144,     0,    89,   141,     1,     0,   143,   138,   140,     0,
       3,     0,     4,     7,     7,    20,     0,     5,     6,     0,
       0,    25,    21,    38,    22,    23,     0,     0,     0,     0,
       0,    48,     0,    25,     0,     0,     0,    43,    43,   130,
       0,     0,     0,     0,     0,   130,   102,    53,     0,    47,
      49,    55,    56,    57,    54,    51,     0,    52,    37,    38,
       2,     0,   130,     0,     0,     0,   130,   128,   129,   130,
     121,     0,   105,   107,   109,   111,     0,   116,   123,   118,
       0,   124,   125,   113,   100,    98,     0,    99,     0,     0,
       0,     0,     0,   130,   130,    46,     0,   130,     0,    32,
      33,    34,    35,    36,     0,     0,    30,    73,     0,     0,
       0,     0,     0,     0,     0,    41,   108,     0,     0,   130,
     130,   130,   130,   130,   130,   130,     0,   130,    12,    13,
      14,    15,   130,   130,    16,    17,    18,    19,   130,   130,
     134,   121,   126,   131,   130,   130,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,    50,    97,    39,     0,
      24,     0,    28,    26,    27,     0,    42,     0,     0,   110,
     127,     0,     0,   182,     0,   176,   130,   178,   130,   177,
     179,   104,    58,   106,   112,   117,   119,     0,   132,     0,
       0,     0,    61,    69,    65,   130,    62,    70,    66,   130,
      95,   103,   130,   101,     0,    71,    72,    44,     0,    40,
     120,   122,   183,   181,   180,   133,   135,     0,     0,   121,
       0,   121,     0,     0,   115,     0,     0,   130,   136,    59,
      60,    63,    67,    64,    68,    96,     0,    45,     0,     0,
     137,     0,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   201,    72,    70,    59,   192,   193,   198,    76,
      83,    84,    85,   165,   166,    86,    92,    93,   124,   173,
     107,   108,   109,   110,   111,   112,   113,   168,   221,    60,
     114,   115,   146,   116,   117,   131,   132,   133,   134,   135,
     213,   136,   137,   138,   139,   140,   141,   203,   248,   142,
     288,     3,    61,    62,    63,   143,   235
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -219
static const yytype_int16 yypact[] =
{
     -49,   219,    22,    36,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,   -49,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,    38,  -219,   219,  -219,     4,  -219,  -219,  -219,    41,
      54,     4,  -219,    54,    54,  -219,    64,  -219,  -219,   134,
       4,   122,  -219,  -219,   187,   155,   109,     4,     4,     4,
       4,   156,   134,   122,   159,   121,   153,   167,   167,    39,
       4,   179,   220,   240,   249,    39,   303,  -219,   271,   134,
    -219,  -219,  -219,  -219,  -219,  -219,   253,  -219,  -219,  -219,
    -219,   319,     0,     4,   288,   134,    39,  -219,  -219,    39,
     154,    -4,   322,  -219,  -219,  -219,   320,    29,  -219,  -219,
     137,  -219,  -219,  -219,   302,  -219,   268,   253,     4,    81,
       4,    81,     5,    71,    71,  -219,   156,    71,   109,  -219,
    -219,  -219,  -219,  -219,   307,   134,  -219,  -219,   134,   297,
     134,   134,   304,   108,   291,  -219,  -219,    65,    15,    71,
      71,   149,   125,   274,   149,    39,   156,    39,  -219,  -219,
    -219,  -219,    71,    71,  -219,  -219,  -219,  -219,    71,    71,
    -219,    87,  -219,   316,    71,    71,   321,   323,    98,   324,
     325,   157,   156,   247,   135,    20,  -219,   135,  -219,   297,
    -219,   264,  -219,  -219,  -219,   319,  -219,     4,   134,  -219,
    -219,   250,    83,  -219,   289,  -219,   149,  -219,   149,  -219,
    -219,   322,  -219,  -219,   135,    29,  -219,   120,   289,   297,
     151,   185,  -219,  -219,  -219,    71,  -219,  -219,  -219,    71,
     329,  -219,    71,  -219,   309,  -219,  -219,  -219,   308,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,   337,   156,   156,   283,
     238,   306,   256,   156,   135,   297,   319,   336,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,   326,  -219,   297,   354,
    -219,   291,  -219
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -219,  -219,   -62,   285,    -1,   -68,  -219,  -219,  -219,   -79,
     278,  -219,  -219,  -218,  -173,   254,  -219,  -219,   276,  -219,
     -76,  -219,  -219,  -141,  -219,  -219,  -219,    35,  -219,   158,
    -219,   272,  -219,   275,  -219,   -74,   191,  -113,  -219,  -219,
     198,   -45,   188,  -219,  -128,  -106,   258,  -200,  -219,   260,
    -219,   341,   315,   -75,  -219,  -219,  -136
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -101
static const yytype_int16 yytable[] =
{
      58,   228,    74,    69,    81,    74,    74,   267,    95,    75,
      94,     1,   202,   176,   185,   216,   169,   118,    82,   264,
     127,   128,    64,   185,   186,    75,    96,    97,    98,   106,
      27,   152,   188,   189,   156,   190,   191,   130,   144,    65,
     190,   191,   212,   130,   172,   242,   237,   239,   240,   276,
     175,   194,   195,   196,   197,   177,   230,   167,   126,   127,
     128,    75,    58,   263,   130,    27,    55,   130,   297,    73,
     246,   260,    73,    73,   243,   234,   234,   234,   234,   129,
      27,    71,   218,   185,   178,   296,   206,   207,   209,   210,
     220,   127,   128,   222,   106,   223,   224,    27,   300,    67,
     273,    55,   274,   190,   191,    79,   229,    27,   214,   215,
      80,   199,   217,    89,    90,    91,    55,    56,    57,   233,
     233,   233,   233,   130,   106,   130,   271,   179,   302,   180,
     234,   -29,   234,    55,   214,   232,   289,   290,   167,   254,
     190,   191,   295,    55,   255,   127,   128,   244,   268,   226,
     106,    27,   227,   269,   247,   190,   191,   127,   128,   250,
     251,   230,    91,    27,    88,    75,   272,    80,   121,   127,
     128,   190,   191,   236,   233,    27,   233,   199,    42,   277,
     275,   298,    27,    99,   208,   100,   211,    55,   101,   102,
     103,   104,   105,   279,   179,    87,   180,   281,   258,    55,
     200,   122,   181,   259,   120,   190,   191,   123,   182,   183,
     280,    55,   184,   278,   282,   106,   106,   284,    55,   148,
      58,   106,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   190,   191,
     149,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,   190,   191,   155,   292,
     150,    55,    56,    57,    21,    22,    23,    24,   261,   151,
      27,   270,   157,   262,   127,   128,   262,   294,   204,   205,
      27,   159,   160,   161,   162,   163,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,   265,   238,   179,   291,   180,    55,    56,    57,   159,
     160,   161,   162,   163,   164,   174,    55,   188,   189,   187,
     190,   191,  -100,   153,   154,   154,   179,   293,   180,   219,
      80,   225,    56,    57,    80,   286,   127,   128,    77,    78,
     200,   249,   252,   287,   253,   256,   257,   283,   285,   299,
     301,   119,   145,   158,   125,   147,   241,   231,    68,   266,
     170,   245,   171,    66
};

static const yytype_uint16 yycheck[] =
{
       1,   174,    70,    65,    79,    73,    74,   225,    87,    71,
      86,    60,   140,   126,    18,   156,   122,    92,    80,   219,
      20,    21,     0,    18,    28,    87,    88,    89,    90,    91,
      26,   105,    17,    18,   109,    20,    21,    99,   100,     3,
      20,    21,    37,   105,   123,   186,   182,   183,   184,   249,
     125,    22,    23,    24,    25,   129,    41,    57,    19,    20,
      21,   123,    63,    43,   126,    26,    62,   129,   286,    70,
     198,   212,    73,    74,   187,   181,   182,   183,   184,    40,
      26,    40,   158,    18,   129,   285,   148,   149,   150,   151,
     165,    20,    21,   168,   156,   170,   171,    26,   298,    61,
     236,    62,   238,    20,    21,    41,    41,    26,   153,   154,
      46,    40,   157,     4,     5,     6,    62,    63,    64,   181,
     182,   183,   184,   185,   186,   187,    43,    40,   301,    42,
     236,     9,   238,    62,   179,   180,   277,   278,    57,    41,
      20,    21,   283,    62,    46,    20,    21,   192,   227,    41,
     212,    26,    44,   228,   199,    20,    21,    20,    21,   204,
     205,    41,     6,    26,     9,   227,   234,    46,    47,    20,
      21,    20,    21,    48,   236,    26,   238,    40,    44,    28,
     248,   287,    26,    27,   149,    29,   151,    62,    32,    33,
      34,    35,    36,   255,    40,     8,    42,   259,    41,    62,
      63,    48,    48,    46,    45,    20,    21,    40,    54,    55,
     255,    62,    58,    28,   259,   277,   278,   262,    62,    40,
     221,   283,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    20,    21,
      40,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    20,    21,     7,    41,
      40,    62,    63,    64,    20,    21,    22,    23,    41,    40,
      26,    41,    39,    46,    20,    21,    46,    41,    30,    31,
      26,    10,    11,    12,    13,    14,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    48,    40,    41,    42,    62,    63,    64,    10,
      11,    12,    13,    14,    15,    47,    62,    17,    18,    17,
      20,    21,    39,    40,    42,    42,    40,    41,    42,    42,
      46,    47,    63,    64,    46,    47,    20,    21,    73,    74,
      63,    45,    41,    26,    41,    41,    41,    38,    59,    43,
      16,    93,   100,   119,    98,   100,   185,   179,    63,   221,
     122,   193,   122,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    60,    66,   116,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    62,    63,    64,    69,    70,
      94,   117,   118,   119,     0,     3,   116,    61,   117,    67,
      69,    40,    68,    69,    70,    67,    74,    68,    68,    41,
      46,   118,    67,    75,    76,    77,    80,     8,     9,     4,
       5,     6,    81,    82,    85,    74,    67,    67,    67,    27,
      29,    32,    33,    34,    35,    36,    67,    85,    86,    87,
      88,    89,    90,    91,    95,    96,    98,    99,   118,    75,
      45,    47,    48,    40,    83,    83,    19,    20,    21,    40,
      67,   100,   101,   102,   103,   104,   106,   107,   108,   109,
     110,   111,   114,   120,    67,    96,    97,    98,    40,    40,
      40,    40,   100,    40,    42,     7,   118,    39,    80,    10,
      11,    12,    13,    14,    15,    78,    79,    57,    92,   110,
     111,   114,    74,    84,    47,   118,   102,   100,   106,    40,
      42,    48,    54,    55,    58,    18,    28,    17,    17,    18,
      20,    21,    71,    72,    22,    23,    24,    25,    73,    40,
      63,    67,   109,   112,    30,    31,    67,    67,    92,    67,
      67,    92,    37,   105,   106,   106,    88,   106,    85,    42,
     118,    93,   118,   118,   118,    47,    41,    44,    79,    41,
      41,   105,   106,    67,   110,   121,    48,   121,    48,   121,
     121,   101,    88,   102,   106,   107,   109,   106,   113,    45,
     106,   106,    41,    41,    41,    46,    41,    41,    41,    46,
      88,    41,    46,    43,   112,    57,    94,    78,    74,   118,
      41,    43,    70,   121,   121,    70,   112,    28,    28,    67,
     106,    67,   106,    38,   106,    59,    47,    26,   115,    88,
      88,    41,    41,    41,    41,    88,   112,    78,   110,    43,
     112,    16,    79
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}






int yyerror(char *s) {

   printf("Error %s\n", s);
   exit(1); /* Sale del programa */
   return 0;
   
}

extern FILE* yyin;

int main(int argc, char * argv[]) {

    FILE* file = fopen("C:/Users/sonic/Documents/UP/Semestre 7/Lenguajes/Proyecto Final/Pruebas.txt","r");
    if (!file){
    	yyerror("Archivo no encontrado");
    }
    
    yyin = file;
    yyparse();
    printf("Programa reconocido correctamente\n");
    return 0;
   
}
