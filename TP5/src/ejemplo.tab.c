
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

/* Line 189 of yacc.c  */
#line 1 "ejemplo.y"


#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "tablaDeSimbolos.h"

extern int yylineno;
extern int yylex();
int yyerror (char* );
int yywrap(){
return(1);
}

extern FILE* yyin;
extern FILE* yyout;

char* tipoInicializador;
char* tipoInicializadorFuncion;
char* tipoDato;
char* tipoDatoAuxiliar;
char* tipoDatoFuncion;
char* tipoDatoPuntero;
char* tipoVariable;
char* tipoVariableBis;
char* nombre;
char* nombreFuncion;
char* variable[20];
char* variableExpresion[20];
char* tipoParametroInvocacion;
char* tipoParametroReturn;
char* valorTipoFuncion;

char esArray[20];
char flagError = 0;
char flagOperacionBinaria = 0; 
char flagArray = 0;
char flagArrayBis = 0;
char flagReturn = 0;
char flagFuncion = 0;

int lineaVariable[10];
int jerarquia = 0;
int contadorVariables = 0;
int contadorParametros = 0;
int tip = 0;
int tipDecla = 0;
int cantidad = 0;
int cantidadPuntero = 0;
int contadorVariableExpresion = 0;
Nodo *parametrosInvocacion;
ListaVariables *listaVariablesAuxiliares;
TablaDeSimbolos tabla;




/* Line 189 of yacc.c  */
#line 132 "ejemplo.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
     REAL = 258,
     ENTERO = 259,
     LITERAL_CADENA = 260,
     OR = 261,
     AND = 262,
     IGUALDAD = 263,
     DESIGUALDAD = 264,
     MAYORIGUAL = 265,
     MENORIGUAL = 266,
     INCREMENTO = 267,
     DECREMENTO = 268,
     ASIGNACION_INCREMENTO = 269,
     ASIGNACION_DECREMENTO = 270,
     ASIGNACION_PRODUCTO = 271,
     ASIGNACION_DIVISION = 272,
     FLECHA = 273,
     IF = 274,
     ELSE = 275,
     SWITCH = 276,
     WHILE = 277,
     DO = 278,
     FOR = 279,
     RETURN = 280,
     CONTINUE = 281,
     BREAK = 282,
     CASE = 283,
     DEFAULT = 284,
     GOTO = 285,
     NULL1 = 286,
     TIPO_DATO = 287,
     CLASE_ALMACENAMIENTO = 288,
     STRUCT_UNION = 289,
     ID = 290,
     IDBIS = 291,
     SIZEOF = 292,
     CTE_CARACTER = 293,
     INCLUDE = 294,
     DEFINE = 295,
     COMENTARIO_SIMPLE = 296,
     COMENTARIO_MULTIPLE = 297,
     ERROR_LEXICO = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 59 "ejemplo.y"

  int ival;
  double dval;
  char cval[1000];



/* Line 214 of yacc.c  */
#line 219 "ejemplo.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 231 "ejemplo.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   602

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNRULES -- Number of states.  */
#define YYNSTATES  324

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      53,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,     2,     2,     2,    50,    66,     2,
      51,    52,    48,    46,    55,    47,    62,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    59,    54,
      45,    56,    44,    63,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,    58,    64,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    15,    19,    23,    27,
      29,    32,    36,    37,    39,    41,    42,    45,    51,    52,
      54,    57,    60,    61,    63,    65,    69,    71,    75,    77,
      81,    83,    87,    89,    91,    93,    95,    97,   101,   106,
     108,   111,   117,   120,   121,   123,   124,   128,   130,   134,
     136,   140,   143,   145,   148,   150,   151,   153,   155,   160,
     161,   167,   169,   175,   176,   178,   180,   184,   186,   189,
     192,   195,   197,   198,   200,   202,   204,   206,   208,   212,
     214,   219,   223,   224,   235,   236,   239,   241,   243,   245,
     248,   249,   251,   253,   256,   259,   260,   263,   269,   277,
     283,   289,   299,   311,   318,   324,   328,   332,   335,   338,
     342,   344,   346,   348,   350,   352,   354,   358,   360,   364,
     365,   367,   369,   370,   375,   377,   383,   384,   386,   388,
     390,   392,   394,   396,   398,   402,   404,   408,   410,   414,
     418,   420,   424,   428,   432,   436,   438,   442,   446,   448,
     452,   456,   460,   462,   465,   468,   471,   474,   477,   480,
     483,   486,   491,   496,   498,   499,   505,   506,   512,   516,
     520,   523,   526,   528,   532,   534,   536,   537,   538
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      68,     0,    -1,    71,    72,    -1,    68,    69,    -1,    53,
      -1,   137,    71,    72,    -1,   103,    71,    72,    -1,    39,
      71,    53,    -1,    70,    71,    53,    -1,    43,    -1,     1,
      53,    -1,    40,    35,   118,    -1,    -1,    42,    -1,    41,
      -1,    -1,    53,    72,    -1,    75,    76,    54,    71,    72,
      -1,    -1,    75,    -1,    33,    74,    -1,    81,    74,    -1,
      -1,    77,    -1,    78,    -1,    77,    55,    78,    -1,    91,
      -1,    91,    56,    79,    -1,   121,    -1,    57,    80,    58,
      -1,    79,    -1,    80,    55,    79,    -1,    32,    -1,    83,
      -1,    36,    -1,    32,    -1,    83,    -1,    34,    35,    88,
      -1,    34,    57,    84,    58,    -1,    85,    -1,    84,    85,
      -1,    86,    89,    54,    71,    72,    -1,    82,    87,    -1,
      -1,    86,    -1,    -1,    57,    84,    58,    -1,    90,    -1,
      89,    55,    90,    -1,    91,    -1,    93,    59,   123,    -1,
     112,    94,    -1,    94,    -1,   112,    94,    -1,    94,    -1,
      -1,    91,    -1,    35,    -1,    94,    60,   124,    61,    -1,
      -1,    94,    95,    51,    97,    52,    -1,    98,    -1,    98,
      55,    62,    62,    62,    -1,    -1,    96,    -1,    99,    -1,
      98,    55,    99,    -1,    75,    -1,    75,    92,    -1,    75,
     101,    -1,    86,   102,    -1,   112,    -1,    -1,   101,    -1,
     105,    -1,   104,    -1,   114,    -1,   115,    -1,   117,    71,
      72,    -1,   116,    -1,   119,    54,    71,    72,    -1,    54,
      71,    72,    -1,    -1,    57,   106,    71,    72,   107,    71,
      72,    58,    71,    72,    -1,    -1,   108,   107,    -1,   109,
      -1,   111,    -1,   137,    -1,   109,   137,    -1,    -1,   109,
      -1,   103,    -1,   111,   103,    -1,    48,   113,    -1,    -1,
      48,   113,    -1,    19,    51,   119,    52,   103,    -1,    19,
      51,   119,    52,   103,    20,   103,    -1,    21,    51,   119,
      52,   103,    -1,    22,    51,   119,    52,   103,    -1,    23,
     103,    22,    51,   119,    52,    54,    71,    72,    -1,    24,
      51,   120,    54,   120,    54,   120,    52,    71,    72,   103,
      -1,    28,   123,    59,    71,    72,   103,    -1,    29,    59,
      71,    72,   103,    -1,    35,    59,   103,    -1,    25,   120,
      54,    -1,    27,    54,    -1,    26,    54,    -1,    30,    35,
      54,    -1,    35,    -1,     4,    -1,     3,    -1,    38,    -1,
       5,    -1,    31,    -1,    51,   119,    52,    -1,   121,    -1,
     119,    55,   121,    -1,    -1,   119,    -1,   123,    -1,    -1,
     132,   122,   125,   121,    -1,   126,    -1,   126,    63,   119,
      59,   123,    -1,    -1,   123,    -1,    56,    -1,    14,    -1,
      15,    -1,    16,    -1,    17,    -1,   127,    -1,   126,     6,
     127,    -1,   128,    -1,   127,     7,   128,    -1,   129,    -1,
     128,     8,   129,    -1,   128,     9,   129,    -1,   130,    -1,
     129,    45,   130,    -1,   129,    44,   130,    -1,   129,    11,
     130,    -1,   129,    10,   130,    -1,   131,    -1,   130,    46,
     131,    -1,   130,    47,   131,    -1,   132,    -1,   131,    48,
     132,    -1,   131,    49,   132,    -1,   131,    50,   132,    -1,
     133,    -1,    12,   132,    -1,    13,   132,    -1,    47,   132,
      -1,    46,   132,    -1,    64,   132,    -1,    65,   132,    -1,
      66,   132,    -1,   112,   132,    -1,    37,    51,   132,    52,
      -1,    37,    51,   100,    52,    -1,   118,    -1,    -1,   133,
     134,    60,   119,    61,    -1,    -1,   133,   135,    51,   136,
      52,    -1,   133,    62,    35,    -1,   133,    18,    35,    -1,
     133,    12,    -1,   133,    13,    -1,   121,    -1,   136,    55,
     121,    -1,   138,    -1,    73,    -1,    -1,    -1,    75,    92,
     139,   110,   140,   105,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   120,   123,   124,   125,   126,   127,   128,
     134,   137,   140,   141,   142,   145,   146,   150,   166,   167,
     170,   171,   182,   183,   186,   187,   190,   191,   194,   195,
     198,   199,   202,   203,   204,   207,   208,   211,   212,   215,
     216,   219,   222,   225,   226,   229,   230,   233,   234,   237,
     238,   241,   264,   274,   283,   290,   291,   294,   295,   296,
     296,   299,   300,   303,   307,   310,   311,   314,   315,   322,
     325,   328,   340,   341,   345,   346,   347,   348,   349,   350,
     353,   415,   418,   418,   421,   422,   425,   426,   429,   430,
     433,   434,   437,   438,   441,   444,   445,   448,   449,   450,
     453,   454,   455,   458,   459,   460,   463,   485,   486,   487,
     491,   497,   504,   511,   517,   523,   524,   527,   528,   531,
     532,   535,   536,   536,   550,   551,   554,   555,   558,   559,
     560,   561,   562,   565,   566,   569,   570,   573,   574,   575,
     578,   579,   580,   581,   582,   585,   586,   587,   590,   591,
     592,   593,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   609,   610,   610,   611,   611,   612,   613,
     614,   615,   618,   619,   623,   624,   677,   677,   677
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "REAL", "ENTERO", "LITERAL_CADENA", "OR",
  "AND", "IGUALDAD", "DESIGUALDAD", "MAYORIGUAL", "MENORIGUAL",
  "INCREMENTO", "DECREMENTO", "ASIGNACION_INCREMENTO",
  "ASIGNACION_DECREMENTO", "ASIGNACION_PRODUCTO", "ASIGNACION_DIVISION",
  "FLECHA", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "RETURN",
  "CONTINUE", "BREAK", "CASE", "DEFAULT", "GOTO", "NULL1", "TIPO_DATO",
  "CLASE_ALMACENAMIENTO", "STRUCT_UNION", "ID", "IDBIS", "SIZEOF",
  "CTE_CARACTER", "INCLUDE", "DEFINE", "COMENTARIO_SIMPLE",
  "COMENTARIO_MULTIPLE", "ERROR_LEXICO", "'>'", "'<'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'('", "')'", "'\\n'", "';'", "','", "'='", "'{'", "'}'",
  "':'", "'['", "']'", "'.'", "'?'", "'~'", "'!'", "'&'", "$accept",
  "input", "line", "lineaControl", "opcionComentario", "opcionBarraN",
  "declaracion", "especDeclaracionBis", "especDeclaracion",
  "listaDeclaradoresBis", "listaDeclaradores", "declarador",
  "inicializador", "listaDeInicializadores", "especTipo", "especTipoBis",
  "especStructUnion", "listaDeclaracionesStruct", "declaracionStruct",
  "listaCalificadores", "listaCalificadoresBis", "opcionLista",
  "declaradoresStruct", "declaStruct", "decla1", "decla2", "declaBis",
  "declaradorDirecto", "$@1", "listaTiposParametros",
  "listaTiposParametrosBis", "listaParametros", "declaracionParametro",
  "nombreTipo", "declaradorAbstracto", "declaradorAbstractoBis",
  "sentencia", "sentExpresion", "sentCompuesta", "$@2",
  "decalracionOSentencia", "decalracionOSentenciaBis",
  "listaDeclaraciones", "listaDeclaracionesBis", "listaSentencias",
  "puntero", "punteroBis", "sentSeleccion", "sentIteracion",
  "sentEtiquetada", "sentSalto", "expPrimaria", "exp", "expOp",
  "expAsignacion", "$@3", "expCondicional", "expCondicionalBis",
  "operAsignacion", "expOr", "expAnd", "expIgualdad", "expRelacional",
  "expAditiva", "expMultiplicativa", "expUnaria", "expSufijo", "$@4",
  "$@5", "listaArgumentos", "declaracionExterna", "definicionFuncion",
  "$@6", "$@7", 0
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
     295,   296,   297,   298,    62,    60,    43,    45,    42,    47,
      37,    40,    41,    10,    59,    44,    61,   123,   125,    58,
      91,    93,    46,    63,   126,    33,    38
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    68,    69,    69,    69,    69,    69,    69,
      69,    70,    71,    71,    71,    72,    72,    73,    74,    74,
      75,    75,    76,    76,    77,    77,    78,    78,    79,    79,
      80,    80,    81,    81,    81,    82,    82,    83,    83,    84,
      84,    85,    86,    87,    87,    88,    88,    89,    89,    90,
      90,    91,    91,    92,    92,    93,    93,    94,    94,    95,
      94,    96,    96,    97,    97,    98,    98,    99,    99,    99,
     100,   101,   102,   102,   103,   103,   103,   103,   103,   103,
     104,   104,   106,   105,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   113,   113,   114,   114,   114,
     115,   115,   115,   116,   116,   116,   117,   117,   117,   117,
     118,   118,   118,   118,   118,   118,   118,   119,   119,   120,
     120,   121,   122,   121,   123,   123,   124,   124,   125,   125,
     125,   125,   125,   126,   126,   127,   127,   128,   128,   128,
     129,   129,   129,   129,   129,   130,   130,   130,   131,   131,
     131,   131,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   133,   134,   133,   135,   133,   133,   133,
     133,   133,   136,   136,   137,   137,   139,   140,   138
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     3,     3,     3,     3,     1,
       2,     3,     0,     1,     1,     0,     2,     5,     0,     1,
       2,     2,     0,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     3,     4,     1,
       2,     5,     2,     0,     1,     0,     3,     1,     3,     1,
       3,     2,     1,     2,     1,     0,     1,     1,     4,     0,
       5,     1,     5,     0,     1,     1,     3,     1,     2,     2,
       2,     1,     0,     1,     1,     1,     1,     1,     3,     1,
       4,     3,     0,    10,     0,     2,     1,     1,     1,     2,
       0,     1,     1,     2,     2,     0,     2,     5,     7,     5,
       5,     9,    11,     6,     5,     3,     3,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     0,
       1,     1,     0,     4,     1,     5,     0,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     4,     1,     0,     5,     0,     5,     3,     3,
       2,     2,     1,     3,     1,     1,     0,     0,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      12,    14,    13,     0,    15,     1,     0,   112,   111,   114,
       0,     0,     0,     0,     0,     0,     0,   119,     0,     0,
       0,     0,     0,   115,    32,    18,     0,   110,    34,     0,
     113,    12,     0,     9,     0,     0,    95,     0,     4,    12,
      82,     0,     0,     0,     3,    12,   175,    22,    18,    33,
      12,    75,    74,     0,    76,    77,    79,    12,   163,     0,
     117,   121,   124,   133,   135,   137,   140,   145,   148,   152,
      12,   174,    15,     2,    10,   110,   153,   154,     0,     0,
       0,     0,   119,   120,     0,   108,   107,     0,   148,    12,
       0,    20,    19,    45,     0,     0,     0,     0,     0,   156,
     155,    95,    94,     0,    15,    12,   157,   158,   159,     0,
      57,     0,    23,    24,    26,   176,    54,     0,    21,    15,
     160,    15,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   170,
     171,     0,     0,     0,     0,    15,    16,     0,     0,     0,
       0,     0,   106,    12,    15,   109,     0,    37,    35,    43,
      36,     0,    39,    55,   105,    72,     0,     0,     7,    11,
      96,   116,    81,    15,     8,    12,     0,     0,    90,   126,
       0,    53,     6,    78,    15,   118,   134,     0,   136,   138,
     139,   144,   143,   142,   141,   146,   147,   149,   150,   151,
     129,   130,   131,   132,   128,     0,   169,   168,     0,     0,
       5,     0,     0,     0,     0,   119,    15,     0,     0,    44,
      42,    38,    40,     0,    47,    49,     0,    52,     0,    73,
      70,    71,   162,   161,    84,    15,    25,     0,    27,    28,
      91,   177,    88,   127,     0,    63,    80,     0,   123,     0,
     172,     0,    97,    99,   100,     0,     0,     0,   104,    46,
      12,    55,     0,    51,    92,    12,    84,    86,    87,    17,
      30,     0,    89,     0,    58,    67,    64,     0,    61,    65,
     125,   165,   167,     0,     0,     0,   119,   103,    15,    48,
      50,    15,    85,    93,     0,    29,   178,    68,    54,    69,
      71,    60,     0,   173,    98,    12,     0,    41,     0,    31,
      53,     0,    66,    15,    12,    12,     0,   101,    15,    15,
      62,     0,    83,   102
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    44,    45,     4,    73,    46,    91,    47,   111,
     112,   113,   238,   271,    48,   159,    49,   161,   162,   163,
     220,   157,   223,   224,   114,   115,   226,   227,   180,   276,
     277,   278,   279,   166,   229,   230,   264,    51,    52,   105,
     265,   266,   267,   241,   268,    53,   102,    54,    55,    56,
      57,    58,    59,    84,    60,   138,    61,   244,   205,    62,
      63,    64,    65,    66,    67,    68,    69,   143,   144,   251,
     242,    71,   178,   273
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -213
static const yytype_int16 yypact[] =
{
      95,  -213,  -213,   331,   -39,  -213,    -5,  -213,  -213,  -213,
     536,   536,     2,    30,    49,   441,    59,   536,    69,    87,
     536,    92,    83,  -213,  -213,   111,   -27,   102,  -213,    79,
    -213,    95,   147,  -213,   536,   536,   137,   536,  -213,    95,
    -213,   536,   536,   536,  -213,    95,  -213,   -13,   111,  -213,
      95,  -213,  -213,   536,  -213,  -213,  -213,    95,  -213,   133,
    -213,  -213,     9,   192,   181,    41,   146,   -10,    28,    37,
      95,  -213,   -39,  -213,  -213,  -213,  -213,  -213,   536,   536,
     536,   182,   536,   148,   153,  -213,  -213,   157,  -213,    95,
     158,  -213,  -213,   160,   143,   441,   478,   165,   104,  -213,
    -213,   137,  -213,    35,   -39,    95,  -213,  -213,  -213,   166,
    -213,   168,   169,  -213,   164,  -213,     3,   190,  -213,   -39,
    -213,   -39,    95,   536,   536,   536,   536,   536,   536,   536,
     536,   536,   536,   536,   536,   536,   536,   536,    98,  -213,
    -213,   191,   193,   167,   178,   -39,  -213,    43,    64,    76,
     179,   180,  -213,    95,   -39,  -213,   143,  -213,  -213,   143,
    -213,   -21,  -213,   -13,  -213,   184,   183,   186,  -213,  -213,
    -213,  -213,  -213,   -39,  -213,    95,   -13,   515,   111,   536,
     188,    66,  -213,  -213,   -39,  -213,   192,    14,   181,    41,
      41,   146,   146,   146,   146,   -10,   -10,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,  -213,   536,  -213,  -213,   536,   536,
    -213,   441,   441,   441,   536,   536,   -39,   441,    71,  -213,
    -213,  -213,  -213,   141,  -213,   185,   189,   -33,   190,  -213,
    -213,  -213,  -213,  -213,   386,   -39,  -213,   515,  -213,  -213,
     111,  -213,  -213,  -213,   194,   111,  -213,   536,  -213,     6,
    -213,    97,   220,  -213,  -213,   124,   195,   441,  -213,  -213,
      95,   -13,   536,   -33,  -213,    95,   386,   111,   441,  -213,
    -213,   126,  -213,   196,  -213,   -13,  -213,   198,   187,  -213,
    -213,  -213,  -213,   536,   441,   197,   536,  -213,   -39,  -213,
    -213,   -39,  -213,  -213,   515,  -213,  -213,  -213,   -33,  -213,
     190,  -213,     0,  -213,  -213,    95,   200,  -213,   199,  -213,
     -33,   201,  -213,   -39,    95,    95,   204,  -213,   -39,   -39,
    -213,   441,  -213,  -213
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -213,  -213,  -213,  -213,   -29,    29,  -213,   208,   -24,  -213,
    -213,    67,  -212,  -213,  -213,  -213,   -65,    91,  -135,   -79,
    -213,  -213,  -213,    -2,  -157,   -15,  -213,   -42,  -213,  -213,
    -213,  -213,   -40,  -213,    -8,  -213,    -3,  -213,    -4,  -213,
       4,  -213,    93,  -213,  -213,   -38,   172,  -213,  -213,  -213,
    -213,   176,   -14,   -75,  -103,  -213,    -1,  -213,  -213,  -213,
     151,   154,    70,    27,    72,    36,  -213,  -213,  -213,  -213,
       1,  -213,  -213,  -213
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -167
static const yytype_int16 yytable[] =
{
      50,    92,    97,    83,    70,   116,   225,   151,    93,   117,
     104,   158,    81,    26,    72,   124,   109,   165,   -59,    87,
     185,   119,   110,   103,    92,   270,   222,   179,   121,   160,
      94,   160,    24,    25,    26,    36,    28,   221,   135,   136,
     137,   145,  -122,  -122,  -122,  -122,    76,    77,    74,   139,
     140,   129,   130,    78,   -59,   141,    88,   -52,   -52,   -52,
     154,   123,   311,   179,   147,   148,   149,   281,    83,   123,
      99,   100,   125,   247,   239,   181,   173,   106,   107,   108,
     219,    79,   309,   222,  -122,   131,   132,   171,  -166,   120,
     123,   160,   164,   184,   160,   211,   160,  -164,   123,   142,
      80,   146,   248,   158,   225,    26,   250,     7,     8,     9,
      82,   187,   200,   201,   202,   203,   212,   -59,    90,   123,
     -51,   -51,   -51,    85,   216,   228,   179,   231,   213,   259,
      96,   123,   167,   172,   239,    23,     1,     2,   228,    75,
     256,    86,    30,    24,    25,    26,   235,    28,   182,   282,
     183,    89,   283,   160,   204,    37,   191,   192,   193,   194,
      88,    95,    88,    88,    88,    88,    88,    88,    88,    88,
      88,   197,   198,   199,   210,   158,   285,    26,   243,   123,
     303,   294,    98,   217,   295,   101,   263,   122,   123,   127,
     128,   239,   133,   134,   249,   260,   261,   189,   190,   126,
     255,    83,   234,   123,   150,   195,   196,   152,   252,   253,
     254,   306,   155,   246,   258,    88,   153,   156,   168,   174,
     177,   275,   175,   228,   176,   110,   206,   208,   207,   209,
     214,   288,    36,   298,   215,   232,   291,   300,   233,   245,
     284,   272,   302,   236,   -56,   257,   280,   218,   262,   286,
     301,   305,   314,    40,   287,   274,   118,   315,   310,   289,
     297,   290,   312,   316,   269,   293,   320,   299,   272,   296,
     292,   240,    83,   170,   169,   186,   313,     0,   275,     0,
     188,   304,     0,    88,     0,   318,   319,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   307,   323,     0,
     308,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     0,     7,     8,     9,     0,     0,     0,
       0,     0,   317,    10,    11,     0,     0,   321,   322,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     0,     0,    33,     0,     0,    34,    35,    36,
       0,     0,    37,     0,    38,    39,     0,     0,    40,     7,
       8,     9,     0,     0,     0,    41,    42,    43,    10,    11,
       0,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     0,     0,     0,     0,     0,
       0,     0,    34,    35,    36,     0,     0,    37,     0,     0,
      39,     0,     0,    40,     7,     8,     9,     0,     0,     0,
      41,    42,    43,    10,    11,     0,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,     0,     0,    27,     0,    29,    30,
       0,     7,     8,     9,     0,     0,     0,    34,    35,    36,
      10,    11,    37,     0,     0,    39,     0,     0,    40,     0,
       0,     0,     0,     0,     0,    41,    42,    43,     0,    23,
     158,     0,    26,    75,     0,    29,    30,     0,     7,     8,
       9,     0,     0,     0,    34,    35,    36,    10,    11,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     9,    41,    42,    43,     0,    23,     0,    10,    11,
      75,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,     0,     0,    37,    23,     0,     0,
       0,    75,   237,    29,    30,     0,     0,     0,     0,    41,
      42,    43,    34,    35,    36,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      41,    42,    43
};

static const yytype_int16 yycheck[] =
{
       3,    25,    31,    17,     3,    47,   163,    82,    35,    47,
      39,    32,    15,    34,    53,     6,    45,    96,    51,    20,
     123,    50,    35,    37,    48,   237,   161,    60,    57,    94,
      57,    96,    32,    33,    34,    48,    36,    58,    48,    49,
      50,    70,    14,    15,    16,    17,    10,    11,    53,    12,
      13,    10,    11,    51,    51,    18,    20,    54,    55,    56,
      89,    55,    62,    60,    78,    79,    80,    61,    82,    55,
      34,    35,    63,    59,   177,   117,   105,    41,    42,    43,
     159,    51,   294,   218,    56,    44,    45,    52,    51,    53,
      55,   156,    95,   122,   159,    52,   161,    60,    55,    62,
      51,    72,   205,    32,   261,    34,   209,     3,     4,     5,
      51,   125,    14,    15,    16,    17,    52,    51,    35,    55,
      54,    55,    56,    54,   153,   163,    60,   165,    52,    58,
      51,    55,    96,   104,   237,    31,    41,    42,   176,    35,
     215,    54,    38,    32,    33,    34,   175,    36,   119,    52,
     121,    59,    55,   218,    56,    51,   129,   130,   131,   132,
     124,    59,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   145,    32,    52,    34,   179,    55,
     283,    55,    35,   154,    58,    48,   228,    54,    55,     8,
       9,   294,    46,    47,   208,    54,    55,   127,   128,     7,
     214,   215,   173,    55,    22,   133,   134,    54,   211,   212,
     213,   286,    54,   184,   217,   179,    59,    57,    53,    53,
      56,   245,    54,   261,    55,    35,    35,    60,    35,    51,
      51,   260,    48,   275,    54,    52,   265,   275,    52,    51,
      20,   240,    55,   176,    59,   216,   247,   156,    59,    54,
      52,    54,    52,    57,   257,    61,    48,    58,   300,   261,
     275,   262,   302,    62,   235,   268,    62,   275,   267,   273,
     266,   178,   286,   101,    98,   124,   305,    -1,   302,    -1,
     126,   284,    -1,   247,    -1,   314,   315,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,   321,    -1,
     291,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     0,     1,    -1,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,   313,    12,    13,    -1,    -1,   318,   319,    -1,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    43,    -1,    -1,    46,    47,    48,
      -1,    -1,    51,    -1,    53,    54,    -1,    -1,    57,     3,
       4,     5,    -1,    -1,    -1,    64,    65,    66,    12,    13,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    -1,    -1,    51,    -1,    -1,
      54,    -1,    -1,    57,     3,     4,     5,    -1,    -1,    -1,
      64,    65,    66,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    35,    -1,    37,    38,
      -1,     3,     4,     5,    -1,    -1,    -1,    46,    47,    48,
      12,    13,    51,    -1,    -1,    54,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    -1,    31,
      32,    -1,    34,    35,    -1,    37,    38,    -1,     3,     4,
       5,    -1,    -1,    -1,    46,    47,    48,    12,    13,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    64,    65,    66,    -1,    31,    -1,    12,    13,
      35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    -1,    -1,    51,    31,    -1,    -1,
      -1,    35,    57,    37,    38,    -1,    -1,    -1,    -1,    64,
      65,    66,    46,    47,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,    68,    71,     0,     1,     3,     4,     5,
      12,    13,    19,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    43,    46,    47,    48,    51,    53,    54,
      57,    64,    65,    66,    69,    70,    73,    75,    81,    83,
     103,   104,   105,   112,   114,   115,   116,   117,   118,   119,
     121,   123,   126,   127,   128,   129,   130,   131,   132,   133,
     137,   138,    53,    72,    53,    35,   132,   132,    51,    51,
      51,   103,    51,   119,   120,    54,    54,   123,   132,    59,
      35,    74,    75,    35,    57,    59,    51,    71,    35,   132,
     132,    48,   113,   119,    71,   106,   132,   132,   132,    71,
      35,    76,    77,    78,    91,    92,    94,   112,    74,    71,
     132,    71,    54,    55,     6,    63,     7,     8,     9,    10,
      11,    44,    45,    46,    47,    48,    49,    50,   122,    12,
      13,    18,    62,   134,   135,    71,    72,   119,   119,   119,
      22,   120,    54,    59,    71,    54,    57,    88,    32,    82,
      83,    84,    85,    86,   103,    86,   100,   132,    53,   118,
     113,    52,    72,    71,    53,    54,    55,    56,   139,    60,
      95,    94,    72,    72,    71,   121,   127,   119,   128,   129,
     129,   130,   130,   130,   130,   131,   131,   132,   132,   132,
      14,    15,    16,    17,    56,   125,    35,    35,    60,    51,
      72,    52,    52,    52,    51,    54,    71,    72,    84,    86,
      87,    58,    85,    89,    90,    91,    93,    94,   112,   101,
     102,   112,    52,    52,    72,    71,    78,    57,    79,   121,
     109,   110,   137,   123,   124,    51,    72,    59,   121,   119,
     121,   136,   103,   103,   103,   119,   120,    72,   103,    58,
      54,    55,    59,    94,   103,   107,   108,   109,   111,    72,
      79,    80,   137,   140,    61,    75,    96,    97,    98,    99,
     123,    61,    52,    55,    20,    52,    54,   103,    71,    90,
     123,    71,   107,   103,    55,    58,   105,    92,    94,   101,
     112,    52,    55,   121,   103,    54,   120,    72,    72,    79,
      94,    62,    99,    71,    52,    58,    62,    72,    71,    71,
      62,    72,    72,   103
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
        case 7:

/* Line 1455 of yacc.c  */
#line 126 "ejemplo.y"
    {agregarFuncionesExternas(&tabla.listaFuncionesExternas, &tabla.listaVariablesExternas, (yyvsp[(1) - (3)].cval), yylineno-1);;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 128 "ejemplo.y"
    {
                         char *error = malloc(strlen("Error Lexico: ") + strlen((yyvsp[(1) - (1)].cval)) + 1);
                         strcpy(error, "Error Lexico: ");
                         strcat(error, (yyvsp[(1) - (1)].cval));
                         agregarError(&errores, error, yylineno);
                    ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 134 "ejemplo.y"
    {agregarError(&errores,"Error Sintactico",yylineno-1); tabla.listaParametros = NULL; cantidadPuntero = 0; contadorParametros = 0;;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 137 "ejemplo.y"
    {agregarVariablesExternasBis(&tabla.listaVariablesExternas, (yyvsp[(2) - (3)].cval), tipoInicializador, yylineno);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 150 "ejemplo.y"
    {
          nombre = (yyvsp[(2) - (5)].cval);
          
          while(contadorVariables!=0 && tip != 3){
               contadorVariables--;
               agregarVariable(&tabla.listaVariables, &listaVariablesAuxiliares, variable[contadorVariables], tipoDato, tipoInicializador, yylineno-1, flagError, esArray[contadorVariables], tipDecla, jerarquia, lineaVariable[contadorVariables]);               tipoInicializador = "vacio";
          }
          strcpy(tipoDato, "");
          contadorVariableExpresion = 0;
          contadorVariables = 0;
          flagArray = 0;
          flagError = 0;
          flagOperacionBinaria = 0;
     ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 171 "ejemplo.y"
    {
                                                       if(tip == 3 && flagFuncion == 0 && strcmp(tipoDato,"")) {
                                                            tipoDatoFuncion = (char*)realloc(tipoDatoFuncion, strlen(tipoDato));
                                                            strcpy(tipoDatoFuncion, tipoDato);
                                                            flagFuncion = 1;
                                                       }
                                                       tipoDato = strdup((yyvsp[(1) - (2)].cval));
                                                  ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 186 "ejemplo.y"
    {cantidad = 1; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 187 "ejemplo.y"
    {cantidad = 2;;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 190 "ejemplo.y"
    { tipDecla = 1; ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 191 "ejemplo.y"
    {   tipDecla = 2; ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 195 "ejemplo.y"
    {flagArray = 1;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 241 "ejemplo.y"
    {
                                        if(tip!=3){
                                             tipoDato = (char*)realloc(tipoDato, strlen(tipoDato)+cantidadPuntero);
                                             while(cantidadPuntero!=0){
                                                  strcat(tipoDato, "*");
                                                  cantidadPuntero--;
                                             }
                                             variable[contadorVariables] = (yyvsp[(2) - (2)].cval);
                                             lineaVariable[contadorVariables] = yylineno;
                                             esArray[contadorVariables] = flagArray;
                                             contadorVariables++;

                                             /*variable[contadorVariables] = (char*)malloc(strlen($<cval>2)+cantidadPuntero);
                                             strcpy(variable[contadorVariables],"\0"); 
                                             while(cantidadPuntero!=0){
                                                  strcat(variable[contadorVariables], "*");
                                                  cantidadPuntero--;
                                             }
                                             strcat(variable[contadorVariables],$<cval>2); 
                                             contadorVariables++;*/
                                        }

                                   ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 264 "ejemplo.y"
    { 
                              if(tip!=3){
                                   variable[contadorVariables] = strdup((yyvsp[(1) - (1)].cval)); 
                                   lineaVariable[contadorVariables] = yylineno;
                                   esArray[contadorVariables] = flagArray;
                                   contadorVariables++;
                              }
                         ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 274 "ejemplo.y"
    {
                                        tipoDatoPuntero = (char*)malloc(cantidadPuntero);
                                        strcpy(tipoDatoPuntero, "");
                                        while(cantidadPuntero!=0){
                                             strcat(tipoDatoPuntero, "*");
                                             cantidadPuntero--;
                                        }
                                        nombre = strdup((yyvsp[(2) - (2)].cval));
                                   ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 283 "ejemplo.y"
    {
                              tipoDatoPuntero = (char*)malloc(strlen(""));
                              strcpy(tipoDatoPuntero, ""); 
                              nombre = strdup((yyvsp[(1) - (1)].cval));
                         ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 294 "ejemplo.y"
    {tip = 1;flagArray=0;;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 295 "ejemplo.y"
    {tip = 2; flagArray=1;;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 296 "ejemplo.y"
    {tip = 3;flagArray=0;;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 303 "ejemplo.y"
    {
                              tipoDatoFuncion = (char*)realloc(tipoDatoFuncion, strlen(tipoDato));
                              strcpy(tipoDatoFuncion, tipoDato);
                         ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 310 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 311 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 314 "ejemplo.y"
    {agregarParametro(&tabla.listaParametros, "-", (yyvsp[(1) - (1)].cval),yylineno-1, flagArray); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 315 "ejemplo.y"
    {
                                                  char* aux = (char*)malloc(strlen((yyvsp[(1) - (2)].cval))+strlen(tipoDatoPuntero));
                                                  strcpy(aux, (yyvsp[(1) - (2)].cval));
                                                  strcat(aux, tipoDatoPuntero);
                                                  agregarParametro(&tabla.listaParametros, nombre, aux,yylineno-1, flagArray);
                                                  cantidadPuntero = 0;
                                             ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 328 "ejemplo.y"
    {
                                   tipoDatoPuntero = (char*)realloc(tipoDatoPuntero, strlen((yyvsp[(1) - (1)].cval))+cantidadPuntero);
                                   strcpy(tipoDatoPuntero, (yyvsp[(1) - (1)].cval));
                                   while(cantidadPuntero!=0){
                                        strcat(tipoDatoPuntero, "*");
                                        cantidadPuntero--;
                                   }
                                   agregarParametro(&tabla.listaParametros, "-", tipoDatoPuntero,yylineno-1, flagArray); 
                                   cantidadPuntero = 0;
                              ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 353 "ejemplo.y"
    {   
                                             while(contadorVariableExpresion && !flagArray){
                                                  
                                                  if(contadorVariableExpresion == 1 || !strcmp(variableExpresion[0],variableExpresion[contadorVariableExpresion-1])) {
                                                       contadorVariableExpresion--;
                                                       tipoInicializador = variableExpresion[0];
                                                  }
                                                  else if(flagOperacionBinaria==1) {

                                                       char *error = malloc(strlen(variableExpresion[0])+strlen(variableExpresion[contadorVariableExpresion-1])+strlen("Error Semantico: Se quiere sumar un valor de tipo ")+strlen(" a un valor de tipo ") + 1);
                                                       strcpy(error,"Se quiere sumar un valor de tipo ");
                                                       strcat(error,variableExpresion[0]);
                                                       strcat(error," a un valor de tipo ");
                                                       strcat(error, variableExpresion[contadorVariableExpresion-1]);
                                                       agregarError(&errores, error, yylineno-1);
                                                       flagError = 1;
                                                       contadorVariableExpresion = 0;
                                                  }
                                                  else if(flagOperacionBinaria==2) {

                                                       char *error = malloc(strlen(variableExpresion[0])+strlen(variableExpresion[contadorVariableExpresion-1])+strlen("Error Semantico: Se quiere restar un valor de tipo ")+strlen(" a un valor de tipo ") + 1);
                                                       strcpy(error,"Se quiere restar un valor de tipo ");
                                                       strcat(error,variableExpresion[0]);
                                                       strcat(error," a un valor de tipo ");
                                                       strcat(error, variableExpresion[contadorVariableExpresion-1]);
                                                       agregarError(&errores, error, yylineno-1);
                                                       flagError = 1;
                                                       contadorVariableExpresion = 0;
                                                  }
                                                  else if(flagOperacionBinaria==3) {

                                                       char *error = malloc(strlen(variableExpresion[0])+strlen(variableExpresion[contadorVariableExpresion-1])+strlen("Error Semantico: Se quiere multiplicar un valor de tipo ")+strlen(" a un valor de tipo ") + 1);
                                                       strcpy(error,"Se quiere multiplicar un valor de tipo ");
                                                       strcat(error,variableExpresion[0]);
                                                       strcat(error," a un valor de tipo ");
                                                       strcat(error, variableExpresion[contadorVariableExpresion-1]);
                                                       agregarError(&errores, error, yylineno-1);
                                                       flagError = 1;
                                                       contadorVariableExpresion = 0;
                                                  }
                                                  else if(flagOperacionBinaria==4) {

                                                       char *error = malloc(strlen(variableExpresion[0])+strlen(variableExpresion[contadorVariableExpresion-1])+strlen("Error Semantico: Se quiere dividir un valor de tipo ")+strlen(" a un valor de tipo ") + 1);
                                                       strcpy(error,"Se quiere dividir un valor de tipo ");
                                                       strcat(error,variableExpresion[0]);
                                                       strcat(error," a un valor de tipo ");
                                                       strcat(error, variableExpresion[contadorVariableExpresion-1]);
                                                       agregarError(&errores, error, yylineno-1);
                                                       flagError = 1;
                                                       contadorVariableExpresion = 0;
                                                  } 
                                                  else if(!flagOperacionBinaria){
                                                       contadorVariableExpresion = 0;
                                                  }
                                             }
                                             contadorVariableExpresion = 0;
                                             contadorVariables = 0;
                                             flagArray = 0;
                                             flagArrayBis = 0;
                                             flagError = 0;
                                             flagOperacionBinaria = 0;
                                        ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 418 "ejemplo.y"
    {jerarquia++; contadorVariableExpresion = 0; contadorVariables = 0; flagArrayBis = 0;;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 418 "ejemplo.y"
    {/*printf("Se encontro una Sentencia Compuesta. \n");*/sacarVariables(&listaVariablesAuxiliares, jerarquia); jerarquia--;;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 441 "ejemplo.y"
    {cantidadPuntero++;;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 445 "ejemplo.y"
    {cantidadPuntero++;;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 448 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Seleccion IF.\n");*/ ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 449 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Seleccion IF/ELSE.\n");*/ ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 450 "ejemplo.y"
    {/*printf("Se enconto una Sentencia de Seleccion SWITCH.\n");*/ ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 453 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion WHILE.\n");*/ ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 454 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion DO WHILE.\n");*/ ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 455 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion FOR.\n");*/ ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 458 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Etiqueta CASE.\n");*/ ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 459 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Etiqueta DEFAULT.\n");*/ ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 463 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto RETURN. \n"); */
                                   if(strcmp(tipoInicializadorFuncion,valorTipoFuncion)){
                                        if(!strcmp(tipoInicializadorFuncion,"")){
                                             char *error = (char *)malloc(strlen("Error Semantico en la devolucion de la funcion ") + strlen(nombreFuncion) + strlen(": El parametro no existe ") + 1);
                                             strcpy(error, "Error Semantico en la devolucion de la funcion ");
                                             strcat(error, nombreFuncion);
                                             strcat(error, ": El parametro no existe ");
                                             agregarError(&errores, error, yylineno);
                                        }
                                        else{
                                             char *error = (char *)malloc(strlen("Error Semantico en la devolucion de la funcion ") + strlen(nombreFuncion) + strlen(": Se quiere devolver el parametro de tipo ") + strlen(tipoInicializadorFuncion) + strlen(", mientras que la funcion devuelve ") +strlen(valorTipoFuncion) + 1);
                                             strcpy(error, "Error Semantico en la devolucion de la funcion ");
                                             strcat(error, nombreFuncion);
                                             strcat(error, ": Se quiere devolver el parametro de tipo ");
                                             strcat(error, tipoInicializadorFuncion);
                                             strcat(error, ", mientras que la funcion devuelve ");
                                             strcat(error, valorTipoFuncion);
                                             agregarError(&errores, error, yylineno);
                                        }
                                   }
                                   flagReturn = 0;
                              ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 485 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto BREAK.\n"); */;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 486 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto CONTINUE.\n"); */;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 487 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto GOTO. \n"); */;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 491 "ejemplo.y"
    {    if(esArrayVariable(&listaVariablesAuxiliares,(yyvsp[(1) - (1)].cval), jerarquia)!=2) flagArray = esArrayVariable(&listaVariablesAuxiliares,(yyvsp[(1) - (1)].cval), jerarquia);
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = tipo(tabla, &listaVariablesAuxiliares, &tabla.listaParametros, (yyvsp[(1) - (1)].cval), jerarquia); 
                                   variableExpresion[contadorVariableExpresion] = strdup(tipo(tabla, &listaVariablesAuxiliares, &tabla.listaParametros, (yyvsp[(1) - (1)].cval), jerarquia));
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 497 "ejemplo.y"
    {
                                   (yyval.dval) = (yyvsp[(1) - (1)].ival); 
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "int"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("int");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 504 "ejemplo.y"
    {
                                   (yyval.dval) = (yyvsp[(1) - (1)].dval); 
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "double"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("double");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 511 "ejemplo.y"
    {
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "char"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("char");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 517 "ejemplo.y"
    {
                                   tipoParametroInvocacion = tipoInicializadorFuncion = "char*"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("char*");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 524 "ejemplo.y"
    {(yyval.dval) = ( (yyvsp[(2) - (3)].dval) ); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 536 "ejemplo.y"
    {tipoVariableBis = strdup(tipoVariable);;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 536 "ejemplo.y"
    {
                                                            (yyval.dval) = (yyvsp[(3) - (4)].dval); 
                                                            
                                                            if(strcmp(tipoVariableBis,variableExpresion[0])){
                                                                 char *error = (char *)malloc(strlen("Error Semantico: Se quiere asignar un valor de tipo ") + strlen(variableExpresion[0]) + strlen(" a un valor de tipo ") + strlen(tipoVariableBis) + 1);
                                                                 strcpy(error, "Error Semantico: Se quiere asignar un valor de tipo ");
                                                                 strcat(error, variableExpresion[0]);
                                                                 strcat(error, " a un valor de tipo ");
                                                                 strcat(error, tipoVariableBis);
                                                                 agregarError(&errores, error, yylineno);
                                                            };
                                                       ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 551 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 566 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) || (yyvsp[(3) - (3)].dval); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 570 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) && (yyvsp[(3) - (3)].dval); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 574 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 575 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 579 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 580 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 581 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) <= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 582 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 586 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); flagOperacionBinaria = 1;;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 587 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); flagOperacionBinaria = 2; ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 591 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval);  flagOperacionBinaria = 3;;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 592 "ejemplo.y"
    {if((yyvsp[(3) - (3)].dval) == 0) {agregarError(&errores,"ERROR/: No se puede dividir por 0",yylineno-1);} else {(yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval);  flagOperacionBinaria = 4;};}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 593 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].ival) % (yyvsp[(3) - (3)].ival); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 597 "ejemplo.y"
    {(yyval.dval) = ++ (yyvsp[(2) - (2)].dval); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 598 "ejemplo.y"
    {(yyval.dval) = -- (yyvsp[(2) - (2)].dval); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 599 "ejemplo.y"
    {(yyval.dval) = - (yyvsp[(2) - (2)].dval); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 600 "ejemplo.y"
    {(yyval.dval) = + (yyvsp[(2) - (2)].dval); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 601 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 602 "ejemplo.y"
    {(yyval.dval) = ! (yyvsp[(2) - (2)].dval); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 603 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 604 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 605 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 606 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 609 "ejemplo.y"
    {if (tip!=3 && !flagArrayBis) tipoVariable = strdup(tipo(tabla, &listaVariablesAuxiliares, &tabla.listaParametros, (yyvsp[(1) - (1)].cval), jerarquia));;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 610 "ejemplo.y"
    {tipoVariable = strdup(tipo(tabla, &listaVariablesAuxiliares, &tabla.listaParametros, (yyvsp[(1) - (1)].cval), jerarquia)); flagArrayBis = 1;;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 610 "ejemplo.y"
    {(yyval.dval) = 0; flagArray = 1;;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 611 "ejemplo.y"
    {tipoVariable = strdup(tipo(tabla, &listaVariablesAuxiliares, &tabla.listaParametros, (yyvsp[(1) - (1)].cval), jerarquia)); tip = 3;;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 611 "ejemplo.y"
    {(yyval.dval) = 0; validarInvocacion(tabla,(yyvsp[(1) - (5)].cval),parametrosInvocacion,yylineno); parametrosInvocacion = NULL; tipoInicializadorFuncion = strdup(tipoFuncion(tabla, (yyvsp[(1) - (5)].cval))); contadorVariableExpresion = 0; tip = 3;;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 612 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 613 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 614 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) ++; ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 615 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) --; ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 618 "ejemplo.y"
    {agregarNodo(&parametrosInvocacion,tipoInicializadorFuncion, flagArray);;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 619 "ejemplo.y"
    {agregarNodo(&parametrosInvocacion,tipoInicializadorFuncion, flagArray);;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 623 "ejemplo.y"
    {/*printf("Se define la funcion %s con %d parametros y devolucion de tipo %s  \n",nombre,contadorParametros,tipoDato); contadorParametros = 0;*/ agregarFuncion(&tabla.listaFuncionesDeclaradas, &tabla.listaFuncionesDefinidas,nombreFuncion,valorTipoFuncion,&tabla.listaParametros,yylineno-1, 1); contadorParametros = 0; tabla.listaParametros = NULL; cantidadPuntero = 0; flagFuncion = 0;;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 624 "ejemplo.y"
    {
                       switch(tip){
                         case 1:
                              if(tipDecla == 1){
                                   if(cantidad == 1){
                                        //printf("Se declara la variable %s de tipo %s  \n",nombre,tipoDato);
                                   }
                                   else if(cantidad == 2){
                                        //printf("Se declaran variables de tipo %s  \n",tipoDato);
                                   } 
                              }
                              else if(tipDecla == 2){
                                   if(cantidad == 1){
                                        //printf("Se inicializa la variable %s de tipo %s \n",nombre,tipoDato);
                                   }
                                   else if(cantidad == 2){
                                        //printf("Se inicializan variables de tipo %s \n",tipoDato);
                                   } 
                              }
                              break;
                         case 2:
                              if(tipDecla == 1){
                                   if(cantidad == 1){
                                        //printf("Se declara el arreglo %s de tipo %s  \n",nombre,tipoDato);
                                   }
                                   else if(cantidad == 2){
                                        //printf("Se declaran arreglos de tipo %s \n",tipoDato);
                                   }  
                              }
                              else if(tipDecla == 2){
                                   if(cantidad == 1){
                                        //printf("Se inicializa el arreglo %s de tipo %s \n",nombre,tipoDato);
                                   }
                                   else if(cantidad == 2){
                                        //printf("Se inicializan arreglos de tipo %s \n",tipoDato);
                                   }   
                              }
                              break;
                         case 3:
                              if(tipDecla == 1){
                                   //printf("Se declara la funcion %s con %d parametros y devolucion de tipo %s  \n",nombre,contadorParametros,tipoDato); 
                                   contadorParametros = 0;
                                   agregarFuncion(&tabla.listaFuncionesDeclaradas, &tabla.listaFuncionesDefinidas,nombre,tipoDatoFuncion,&tabla.listaParametros,yylineno-1, 0);
                                   cantidadPuntero = 0;
                                   tabla.listaParametros = NULL;
                                   flagFuncion = 0;
                              }
                              break;     
                       }
                       tip = 0;
                  ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 677 "ejemplo.y"
    {nombreFuncion = strdup((yyvsp[(2) - (2)].cval)); valorTipoFuncion = strdup((yyvsp[(1) - (2)].cval)); if(strcmp(valorTipoFuncion,"void")) flagReturn = 1;;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 677 "ejemplo.y"
    {contadorVariableExpresion = 0; contadorVariables = 0;;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 677 "ejemplo.y"
    {
               flagFuncion = 0; 
               if(flagReturn){
                    char *error = (char *)malloc(strlen("Error Semantico en la funcion ") + strlen(nombreFuncion) + strlen(": Deberia utilizar return.") + 1);
                    strcpy(error, "Warning: En la funcion ");
                    strcat(error, nombreFuncion);
                    strcat(error, " deberia utilizar return.");
                    agregarError(&errores, error, yylineno);
               }
               flagReturn = 0;
     ;}
    break;



/* Line 1455 of yacc.c  */
#line 2686 "ejemplo.tab.c"
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



/* Line 1675 of yacc.c  */
#line 692 "ejemplo.y"
 

int yyerror (char *mensaje) 
{
  //printf ("Error Sintactico: %s\n", mensaje);
}

void main(){

     #ifdef BISON_DEBUG
          yydebug = 1;
     #endif 
     yyout = fopen("salida.txt","w");
     yyin = fopen("entrada.txt", "r");

     tabla.listaVariables = NULL;
     tabla.listaParametros = NULL;
     tabla.listaVariablesExternas = NULL;
     tabla.listaFuncionesDeclaradas = NULL;
     tabla.listaFuncionesDefinidas = NULL;
     tabla.listaFuncionesExternas = NULL;
     parametrosInvocacion = NULL;
     listaVariablesAuxiliares = NULL;
     tipoInicializador = strdup("vacio");
     tipoDato = strdup("");

     yyparse();
     imprimirTabla(tabla);
     imprimirErrores(&errores);
     system("PAUSE");
}
