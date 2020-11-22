
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
char flagAnd = 0;
char esID = 0;

int lineaAux;
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
#line 134 "ejemplo.tab.c"

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
#line 61 "ejemplo.y"

  int ival;
  double dval;
  char cval[1000];



/* Line 214 of yacc.c  */
#line 221 "ejemplo.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 233 "ejemplo.tab.c"

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
#define YYLAST   598

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  181
/* YYNRULES -- Number of states.  */
#define YYNSTATES  330

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
      54,    57,    60,    61,    63,    65,    70,    72,    76,    78,
      82,    84,    89,    91,    93,    95,    97,    99,   103,   109,
     111,   114,   120,   123,   124,   126,   127,   132,   134,   138,
     140,   144,   147,   149,   152,   154,   155,   157,   159,   164,
     165,   171,   173,   179,   180,   182,   184,   188,   190,   193,
     196,   199,   201,   202,   204,   206,   208,   210,   212,   216,
     218,   223,   227,   228,   229,   241,   242,   245,   247,   249,
     251,   254,   255,   257,   259,   262,   265,   266,   269,   275,
     283,   289,   295,   305,   317,   324,   330,   334,   338,   341,
     344,   348,   350,   352,   354,   356,   358,   360,   364,   366,
     370,   371,   373,   375,   376,   381,   383,   389,   390,   392,
     394,   396,   398,   400,   402,   404,   408,   410,   414,   416,
     420,   424,   426,   430,   434,   438,   442,   444,   448,   452,
     454,   458,   462,   466,   468,   471,   474,   477,   480,   483,
     486,   487,   491,   494,   499,   504,   506,   507,   513,   514,
     520,   524,   528,   531,   534,   535,   537,   541,   543,   545,
     546,   547
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      68,     0,    -1,    71,    72,    -1,    68,    69,    -1,    53,
      -1,   139,    71,    72,    -1,   103,    71,    72,    -1,    39,
      71,    53,    -1,    70,    71,    53,    -1,    43,    -1,     1,
      53,    -1,    40,    35,   119,    -1,    -1,    42,    -1,    41,
      -1,    -1,    53,    72,    -1,    75,    76,    54,    71,    72,
      -1,    -1,    75,    -1,    33,    74,    -1,    81,    74,    -1,
      -1,    77,    -1,    78,    -1,    77,    55,    72,    78,    -1,
      91,    -1,    91,    56,    79,    -1,   122,    -1,    57,    80,
      58,    -1,    79,    -1,    80,    55,    72,    79,    -1,    32,
      -1,    83,    -1,    36,    -1,    32,    -1,    83,    -1,    34,
      35,    88,    -1,    34,    57,    72,    84,    58,    -1,    85,
      -1,    84,    85,    -1,    86,    89,    54,    71,    72,    -1,
      82,    87,    -1,    -1,    86,    -1,    -1,    57,    72,    84,
      58,    -1,    90,    -1,    89,    55,    90,    -1,    91,    -1,
      93,    59,   124,    -1,   113,    94,    -1,    94,    -1,   113,
      94,    -1,    94,    -1,    -1,    91,    -1,    35,    -1,    94,
      60,   125,    61,    -1,    -1,    94,    95,    51,    97,    52,
      -1,    98,    -1,    98,    55,    62,    62,    62,    -1,    -1,
      96,    -1,    99,    -1,    98,    55,    99,    -1,    75,    -1,
      75,    92,    -1,    75,   101,    -1,    86,   102,    -1,   113,
      -1,    -1,   101,    -1,   105,    -1,   104,    -1,   115,    -1,
     116,    -1,   118,    71,    72,    -1,   117,    -1,   120,    54,
      71,    72,    -1,    54,    71,    72,    -1,    -1,    -1,    57,
     106,    71,    72,   108,    71,    72,   107,    58,    71,    72,
      -1,    -1,   109,   108,    -1,   110,    -1,   112,    -1,   139,
      -1,   110,   139,    -1,    -1,   110,    -1,   103,    -1,   112,
     103,    -1,    48,   114,    -1,    -1,    48,   114,    -1,    19,
      51,   120,    52,   103,    -1,    19,    51,   120,    52,   103,
      20,   103,    -1,    21,    51,   120,    52,   103,    -1,    22,
      51,   120,    52,   103,    -1,    23,   103,    22,    51,   120,
      52,    54,    71,    72,    -1,    24,    51,   121,    54,   121,
      54,   121,    52,    71,    72,   103,    -1,    28,   124,    59,
      71,    72,   103,    -1,    29,    59,    71,    72,   103,    -1,
      35,    59,   103,    -1,    25,   121,    54,    -1,    27,    54,
      -1,    26,    54,    -1,    30,    35,    54,    -1,    35,    -1,
       4,    -1,     3,    -1,    38,    -1,     5,    -1,    31,    -1,
      51,   120,    52,    -1,   122,    -1,   120,    55,   122,    -1,
      -1,   120,    -1,   124,    -1,    -1,   133,   123,   126,   122,
      -1,   127,    -1,   127,    63,   120,    59,   124,    -1,    -1,
     124,    -1,    56,    -1,    14,    -1,    15,    -1,    16,    -1,
      17,    -1,   128,    -1,   127,     6,   128,    -1,   129,    -1,
     128,     7,   129,    -1,   130,    -1,   129,     8,   130,    -1,
     129,     9,   130,    -1,   131,    -1,   130,    45,   131,    -1,
     130,    44,   131,    -1,   130,    11,   131,    -1,   130,    10,
     131,    -1,   132,    -1,   131,    46,   132,    -1,   131,    47,
     132,    -1,   133,    -1,   132,    48,   133,    -1,   132,    49,
     133,    -1,   132,    50,   133,    -1,   135,    -1,    12,   133,
      -1,    13,   133,    -1,    47,   133,    -1,    46,   133,    -1,
      64,   133,    -1,    65,   133,    -1,    -1,    66,   134,   133,
      -1,   113,   133,    -1,    37,    51,   133,    52,    -1,    37,
      51,   100,    52,    -1,   119,    -1,    -1,   135,   136,    60,
     120,    61,    -1,    -1,   135,   137,    51,   138,    52,    -1,
     135,    62,    35,    -1,   135,    18,    35,    -1,   135,    12,
      -1,   135,    13,    -1,    -1,   122,    -1,   138,    55,   122,
      -1,   140,    -1,    73,    -1,    -1,    -1,    75,    92,   141,
     111,   142,   105,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   121,   121,   122,   125,   126,   127,   128,   129,   130,
     133,   136,   139,   140,   141,   144,   145,   149,   165,   166,
     169,   170,   182,   183,   186,   187,   190,   191,   194,   195,
     198,   199,   202,   203,   204,   207,   208,   211,   212,   215,
     216,   219,   222,   225,   226,   229,   230,   233,   234,   237,
     238,   241,   256,   266,   275,   282,   283,   286,   287,   288,
     288,   291,   292,   295,   299,   302,   303,   306,   307,   314,
     317,   320,   332,   333,   337,   338,   339,   340,   341,   342,
     345,   346,   349,   354,   349,   357,   358,   361,   362,   365,
     366,   369,   370,   373,   374,   377,   380,   381,   384,   385,
     386,   389,   390,   391,   394,   395,   396,   399,   410,   411,
     412,   416,   422,   428,   434,   439,   444,   445,   448,   449,
     452,   453,   456,   492,   492,   504,   505,   508,   509,   512,
     513,   514,   515,   516,   519,   520,   523,   524,   527,   528,
     529,   532,   533,   534,   535,   536,   539,   540,   541,   544,
     545,   546,   547,   550,   551,   552,   553,   554,   555,   556,
     557,   557,   558,   559,   560,   563,   569,   569,   570,   570,
     571,   572,   573,   574,   577,   578,   579,   583,   584,   637,
     637,   637
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
  "sentencia", "sentExpresion", "sentCompuesta", "$@2", "$@3",
  "decalracionOSentencia", "decalracionOSentenciaBis",
  "listaDeclaraciones", "listaDeclaracionesBis", "listaSentencias",
  "puntero", "punteroBis", "sentSeleccion", "sentIteracion",
  "sentEtiquetada", "sentSalto", "expPrimaria", "exp", "expOp",
  "expAsignacion", "$@4", "expCondicional", "expCondicionalBis",
  "operAsignacion", "expOr", "expAnd", "expIgualdad", "expRelacional",
  "expAditiva", "expMultiplicativa", "expUnaria", "@5", "expSufijo", "$@6",
  "$@7", "listaArgumentos", "declaracionExterna", "definicionFuncion",
  "$@8", "$@9", 0
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
     104,   104,   106,   107,   105,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   114,   114,   115,   115,
     115,   116,   116,   116,   117,   117,   117,   118,   118,   118,
     118,   119,   119,   119,   119,   119,   119,   119,   120,   120,
     121,   121,   122,   123,   122,   124,   124,   125,   125,   126,
     126,   126,   126,   126,   127,   127,   128,   128,   129,   129,
     129,   130,   130,   130,   130,   130,   131,   131,   131,   132,
     132,   132,   132,   133,   133,   133,   133,   133,   133,   133,
     134,   133,   133,   133,   133,   135,   136,   135,   137,   135,
     135,   135,   135,   135,   138,   138,   138,   139,   139,   141,
     142,   140
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     3,     3,     3,     3,     1,
       2,     3,     0,     1,     1,     0,     2,     5,     0,     1,
       2,     2,     0,     1,     1,     4,     1,     3,     1,     3,
       1,     4,     1,     1,     1,     1,     1,     3,     5,     1,
       2,     5,     2,     0,     1,     0,     4,     1,     3,     1,
       3,     2,     1,     2,     1,     0,     1,     1,     4,     0,
       5,     1,     5,     0,     1,     1,     3,     1,     2,     2,
       2,     1,     0,     1,     1,     1,     1,     1,     3,     1,
       4,     3,     0,     0,    11,     0,     2,     1,     1,     1,
       2,     0,     1,     1,     2,     2,     0,     2,     5,     7,
       5,     5,     9,    11,     6,     5,     3,     3,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       0,     1,     1,     0,     4,     1,     5,     0,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     2,     2,     2,     2,     2,     2,
       0,     3,     2,     4,     4,     1,     0,     5,     0,     5,
       3,     3,     2,     2,     0,     1,     3,     1,     1,     0,
       0,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      12,    14,    13,     0,    15,     1,     0,   113,   112,   115,
       0,     0,     0,     0,     0,     0,     0,   120,     0,     0,
       0,     0,     0,   116,    32,    18,     0,   111,    34,     0,
     114,    12,     0,     9,     0,     0,    96,     0,     4,    12,
      82,     0,     0,   160,     3,    12,   178,    22,    18,    33,
      12,    75,    74,     0,    76,    77,    79,    12,   165,     0,
     118,   122,   125,   134,   136,   138,   141,   146,   149,   153,
      12,   177,    15,     2,    10,   111,   154,   155,     0,     0,
       0,     0,   120,   121,     0,   109,   108,     0,   149,    12,
       0,    20,    19,    45,    15,     0,     0,     0,     0,   157,
     156,    96,    95,     0,    15,    12,   158,   159,     0,     0,
      57,     0,    23,    24,    26,   179,    54,     0,    21,    15,
     162,    15,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   172,
     173,     0,     0,     0,     0,    15,    16,     0,     0,     0,
       0,     0,   107,    12,    15,   110,    15,    37,     0,   106,
      35,    43,    36,    72,     0,     0,     7,    11,    97,   117,
      81,    15,   161,     8,    12,    15,     0,    91,   127,     0,
      53,     6,    78,    15,   119,   135,     0,   137,   139,   140,
     145,   144,   143,   142,   147,   148,   150,   151,   152,   130,
     131,   132,   133,   129,     0,   171,   170,     0,   174,     5,
       0,     0,     0,     0,   120,    15,     0,     0,     0,    39,
      55,    44,    42,    73,    70,    71,   164,   163,    85,    15,
       0,     0,    27,    28,    92,   180,    89,   128,     0,    63,
      80,     0,   124,     0,   175,     0,    98,   100,   101,     0,
       0,     0,   105,     0,    38,    40,     0,    47,    49,     0,
      52,     0,    93,    12,    85,    87,    88,    17,    25,    30,
       0,    90,     0,    58,    67,    64,     0,    61,    65,   126,
     167,   169,     0,     0,     0,   120,   104,    46,    12,    55,
       0,    51,    15,    86,    94,    15,    29,   181,    68,    54,
      69,    71,    60,     0,   176,    99,    12,     0,    15,    48,
      50,    83,     0,    53,     0,    66,    15,    12,    41,     0,
      31,     0,   102,    15,    12,    62,     0,    15,   103,    84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    44,    45,     4,    73,    46,    91,    47,   111,
     112,   113,   232,   270,    48,   161,    49,   218,   219,   220,
     222,   157,   256,   257,   114,   115,   259,   260,   179,   275,
     276,   277,   278,   164,   223,   224,   262,    51,    52,   105,
     319,   263,   264,   265,   235,   266,    53,   102,    54,    55,
      56,    57,    58,    59,    84,    60,   138,    61,   238,   204,
      62,    63,    64,    65,    66,    67,    68,   108,    69,   143,
     144,   245,   236,    71,   177,   272
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -225
static const yytype_int16 yypact[] =
{
     163,  -225,  -225,   327,   -34,  -225,   -13,  -225,  -225,  -225,
     532,   532,   -22,    14,    21,   437,    27,   532,   -18,    -8,
     532,    26,    56,  -225,  -225,   155,   -15,    46,  -225,    64,
    -225,   163,   107,  -225,   532,   532,    98,   532,  -225,   163,
    -225,   532,   532,  -225,  -225,   163,  -225,    -5,   155,  -225,
     163,  -225,  -225,   532,  -225,  -225,  -225,   163,  -225,   115,
    -225,  -225,    12,   144,   202,    72,   172,   105,    33,    90,
     163,  -225,   -34,  -225,  -225,  -225,  -225,  -225,   532,   532,
     532,   143,   532,   123,   130,  -225,  -225,   131,  -225,   163,
     139,  -225,  -225,   138,   -34,   437,   474,   148,    28,  -225,
    -225,    98,  -225,     9,   -34,   163,  -225,  -225,   532,   153,
    -225,   158,   159,  -225,   160,  -225,   112,   188,  -225,   -34,
    -225,   -34,   163,   532,   532,   532,   532,   532,   532,   532,
     532,   532,   532,   532,   532,   532,   532,   532,    38,  -225,
    -225,   195,   197,   173,   186,   -34,  -225,    18,    43,    45,
     189,   185,  -225,   163,   -34,  -225,   -34,  -225,    94,  -225,
    -225,    94,  -225,   193,   190,   191,  -225,  -225,  -225,  -225,
    -225,   -34,  -225,  -225,   163,   -34,   511,   155,   532,   194,
     120,  -225,  -225,   -34,  -225,   144,   -20,   202,    72,    72,
     172,   172,   172,   172,   105,   105,  -225,  -225,  -225,  -225,
    -225,  -225,  -225,  -225,   532,  -225,  -225,   532,   532,  -225,
     437,   437,   437,   532,   532,   -34,   437,    94,   125,  -225,
      -5,  -225,  -225,  -225,  -225,  -225,  -225,  -225,   382,   -34,
      -5,   511,  -225,  -225,   155,  -225,  -225,  -225,   192,   155,
    -225,   532,  -225,    -4,  -225,    49,   226,  -225,  -225,    55,
     196,   437,  -225,   128,  -225,  -225,   167,  -225,   198,   199,
     -26,   188,  -225,   163,   382,   155,   437,  -225,  -225,  -225,
      54,  -225,   203,  -225,    -5,  -225,   200,   201,  -225,  -225,
    -225,  -225,   532,   437,   207,   532,  -225,  -225,   163,    -5,
     532,   -26,   -34,  -225,  -225,   -34,  -225,  -225,  -225,   -26,
    -225,   188,  -225,    86,  -225,  -225,   163,   210,   -34,  -225,
    -225,  -225,   511,   -26,   187,  -225,   -34,   163,  -225,   206,
    -225,   205,  -225,   -34,   163,  -225,   437,   -34,  -225,  -225
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -225,  -225,  -225,  -225,   -29,     2,  -225,   220,   -24,  -225,
    -225,    17,  -224,  -225,  -225,  -225,   -74,    37,  -191,   -81,
    -225,  -225,  -225,   -19,  -212,    -2,  -225,   -36,  -225,  -225,
    -225,  -225,   -48,  -225,     4,  -225,    -3,  -225,    -1,  -225,
    -225,     5,  -225,   104,  -225,  -225,   -38,   174,  -225,  -225,
    -225,  -225,   178,   -11,   -65,  -118,  -225,   -17,  -225,  -225,
    -225,   161,   156,    99,    68,    95,     3,  -225,  -225,  -225,
    -225,  -225,     1,  -225,  -225,  -225
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -169
static const yytype_int16 yytable[] =
{
      50,    92,    97,    87,    70,   184,    83,   269,   258,   117,
     104,   116,    81,    76,    77,   163,   109,   151,   124,    72,
      93,   119,   162,    88,    92,   -59,   103,   255,   121,    78,
     110,     7,     8,     9,   178,   123,    85,    99,   100,   241,
      74,   145,    94,    36,   106,   107,    86,  -123,  -123,  -123,
    -123,   123,   199,   200,   201,   202,   120,   280,   233,    23,
     154,   169,   255,    75,   123,    79,    30,   147,   148,   149,
     210,    83,    80,   123,   146,   125,   171,   258,    82,    37,
     221,   180,   129,   130,   162,    89,   242,   162,   320,  -123,
     244,    90,   159,   183,   203,   211,   158,   212,   123,   165,
     123,   281,   139,   140,   282,    95,   170,   284,   141,   295,
     123,   172,   296,   233,   186,    96,   131,   132,    24,    25,
      26,   181,    28,   182,   215,   225,   160,    88,    26,    88,
      88,    88,    88,    88,    88,    88,    88,    88,   196,   197,
     198,  -168,    98,   162,   162,   229,   101,   209,   314,   250,
    -166,   126,   142,   135,   136,   137,   216,   160,   217,    26,
     160,   237,    26,   -59,   304,   150,   -52,   -52,   -52,   122,
     123,   -59,   178,   228,   -51,   -51,   -51,   230,   123,   162,
     178,    88,   261,   254,   152,   240,   287,    24,    25,    26,
     153,    28,   261,   155,   233,   156,   243,   190,   191,   192,
     193,   166,   249,    83,     1,     2,   173,   246,   247,   248,
     127,   128,   174,   252,   175,   274,   176,   251,   133,   134,
     307,   288,   289,   110,   279,   291,   188,   189,   194,   195,
     205,   267,   206,   207,   292,   271,   301,   208,   299,   214,
     213,    36,   226,   227,    88,   239,   283,   268,   286,   321,
     285,   261,   302,   273,   253,   315,   303,   -56,   290,   308,
      40,   306,   317,   294,   324,   313,   271,   325,   118,   293,
     309,   297,   298,   310,    83,   168,   167,   316,   300,   274,
     305,   234,   187,     0,     0,   185,     0,     0,   323,     0,
       0,     0,     0,    88,   311,   327,     0,   312,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     318,     0,     0,     0,     0,     0,     0,     0,   322,     0,
       0,     0,     0,   328,     0,   326,     0,     5,     6,   329,
       7,     8,     9,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     0,     0,
      33,     0,     0,    34,    35,    36,     0,     0,    37,     0,
      38,    39,     0,     0,    40,     7,     8,     9,     0,     0,
       0,    41,    42,    43,    10,    11,     0,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,    34,    35,
      36,     0,     0,    37,     0,     0,    39,     0,     0,    40,
       7,     8,     9,     0,     0,     0,    41,    42,    43,    10,
      11,     0,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,    27,     0,    29,    30,     0,     7,     8,     9,
       0,     0,     0,    34,    35,    36,    10,    11,    37,     0,
       0,    39,     0,     0,    40,     0,     0,     0,     0,     0,
       0,    41,    42,    43,     0,    23,   160,     0,    26,    75,
       0,    29,    30,     0,     7,     8,     9,     0,     0,     0,
      34,    35,    36,    10,    11,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     9,    41,    42,
      43,     0,    23,     0,    10,    11,    75,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
       0,     0,    37,    23,     0,     0,     0,    75,   231,    29,
      30,     0,     0,     0,     0,    41,    42,    43,    34,    35,
      36,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    41,    42,    43
};

static const yytype_int16 yycheck[] =
{
       3,    25,    31,    20,     3,   123,    17,   231,   220,    47,
      39,    47,    15,    10,    11,    96,    45,    82,     6,    53,
      35,    50,    96,    20,    48,    51,    37,   218,    57,    51,
      35,     3,     4,     5,    60,    55,    54,    34,    35,    59,
      53,    70,    57,    48,    41,    42,    54,    14,    15,    16,
      17,    55,    14,    15,    16,    17,    53,    61,   176,    31,
      89,    52,   253,    35,    55,    51,    38,    78,    79,    80,
      52,    82,    51,    55,    72,    63,   105,   289,    51,    51,
     161,   117,    10,    11,   158,    59,   204,   161,   312,    56,
     208,    35,    95,   122,    56,    52,    94,    52,    55,    96,
      55,    52,    12,    13,    55,    59,   104,    52,    18,    55,
      55,   108,    58,   231,   125,    51,    44,    45,    32,    33,
      34,   119,    36,   121,   153,   163,    32,   124,    34,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,    51,    35,   217,   218,   174,    48,   145,    62,   214,
      60,     7,    62,    48,    49,    50,   154,    32,   156,    34,
      32,   178,    34,    51,   282,    22,    54,    55,    56,    54,
      55,    51,    60,   171,    54,    55,    56,   175,    55,   253,
      60,   178,   220,    58,    54,   183,    58,    32,    33,    34,
      59,    36,   230,    54,   312,    57,   207,   129,   130,   131,
     132,    53,   213,   214,    41,    42,    53,   210,   211,   212,
       8,     9,    54,   216,    55,   239,    56,   215,    46,    47,
     285,    54,    55,    35,   241,   261,   127,   128,   133,   134,
      35,   229,    35,    60,   263,   234,   274,    51,   274,    54,
      51,    48,    52,    52,   241,    51,    20,   230,   251,    62,
      54,   289,    52,    61,   217,   303,    55,    59,    59,   288,
      57,    54,    52,   266,    58,   301,   265,    62,    48,   264,
     289,   272,   274,   290,   285,   101,    98,   306,   274,   303,
     283,   177,   126,    -1,    -1,   124,    -1,    -1,   317,    -1,
      -1,    -1,    -1,   290,   292,   324,    -1,   295,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,
      -1,    -1,    -1,   326,    -1,   323,    -1,     0,     1,   327,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
      43,    -1,    -1,    46,    47,    48,    -1,    -1,    51,    -1,
      53,    54,    -1,    -1,    57,     3,     4,     5,    -1,    -1,
      -1,    64,    65,    66,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,    57,
       3,     4,     5,    -1,    -1,    -1,    64,    65,    66,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    35,    -1,    37,    38,    -1,     3,     4,     5,
      -1,    -1,    -1,    46,    47,    48,    12,    13,    51,    -1,
      -1,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    -1,    31,    32,    -1,    34,    35,
      -1,    37,    38,    -1,     3,     4,     5,    -1,    -1,    -1,
      46,    47,    48,    12,    13,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    64,    65,
      66,    -1,    31,    -1,    12,    13,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      -1,    -1,    51,    31,    -1,    -1,    -1,    35,    57,    37,
      38,    -1,    -1,    -1,    -1,    64,    65,    66,    46,    47,
      48,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66
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
     103,   104,   105,   113,   115,   116,   117,   118,   119,   120,
     122,   124,   127,   128,   129,   130,   131,   132,   133,   135,
     139,   140,    53,    72,    53,    35,   133,   133,    51,    51,
      51,   103,    51,   120,   121,    54,    54,   124,   133,    59,
      35,    74,    75,    35,    57,    59,    51,    71,    35,   133,
     133,    48,   114,   120,    71,   106,   133,   133,   134,    71,
      35,    76,    77,    78,    91,    92,    94,   113,    74,    71,
     133,    71,    54,    55,     6,    63,     7,     8,     9,    10,
      11,    44,    45,    46,    47,    48,    49,    50,   123,    12,
      13,    18,    62,   136,   137,    71,    72,   120,   120,   120,
      22,   121,    54,    59,    71,    54,    57,    88,    72,   103,
      32,    82,    83,    86,   100,   133,    53,   119,   114,    52,
      72,    71,   133,    53,    54,    55,    56,   141,    60,    95,
      94,    72,    72,    71,   122,   128,   120,   129,   130,   130,
     131,   131,   131,   131,   132,   132,   133,   133,   133,    14,
      15,    16,    17,    56,   126,    35,    35,    60,    51,    72,
      52,    52,    52,    51,    54,    71,    72,    72,    84,    85,
      86,    86,    87,   101,   102,   113,    52,    52,    72,    71,
      72,    57,    79,   122,   110,   111,   139,   124,   125,    51,
      72,    59,   122,   120,   122,   138,   103,   103,   103,   120,
     121,    72,   103,    84,    58,    85,    89,    90,    91,    93,
      94,   113,   103,   108,   109,   110,   112,    72,    78,    79,
      80,   139,   142,    61,    75,    96,    97,    98,    99,   124,
      61,    52,    55,    20,    52,    54,   103,    58,    54,    55,
      59,    94,    71,   108,   103,    55,    58,   105,    92,    94,
     101,   113,    52,    55,   122,   103,    54,   121,    71,    90,
     124,    72,    72,    94,    62,    99,    71,    52,    72,   107,
      79,    62,    72,    71,    58,    62,    72,    71,   103,    72
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
#line 128 "ejemplo.y"
    {agregarFuncionesExternas(&tabla.listaFuncionesExternas, &tabla.listaVariablesExternas, (yyvsp[(1) - (3)].cval), yylineno-1);;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 130 "ejemplo.y"
    {    
                         agregarErrores(&errores, yylineno, 1, "Error Lexico: $", (yyvsp[(1) - (1)].cval));
                    ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 133 "ejemplo.y"
    {agregarErrores(&errores, yylineno, 0, "Error Sintactico"); tabla.listaParametros = NULL; cantidadPuntero = 0; contadorParametros = 0;;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 136 "ejemplo.y"
    {agregarVariablesExternasBis(&tabla.listaVariablesExternas, (yyvsp[(2) - (3)].cval), tipoInicializador, yylineno);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 149 "ejemplo.y"
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
#line 170 "ejemplo.y"
    {
                                                       if(tip == 3 && flagFuncion == 0 && strcmp(tipoDato,"")) {
                                                            tipoDatoFuncion = (char*)realloc(tipoDatoFuncion, strlen(tipoDato));
                                                            strcpy(tipoDatoFuncion, tipoDato);
                                                            flagFuncion = 1;
                                                       }
                                                       tipoVariable = strdup((yyvsp[(1) - (2)].cval));
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

                                        }

                                   ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 256 "ejemplo.y"
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
#line 266 "ejemplo.y"
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
#line 275 "ejemplo.y"
    {
                              tipoDatoPuntero = (char*)malloc(strlen(""));
                              strcpy(tipoDatoPuntero, ""); 
                              nombre = strdup((yyvsp[(1) - (1)].cval));
                         ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 286 "ejemplo.y"
    {tip = 1;flagArray=0;;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 287 "ejemplo.y"
    {tip = 2; flagArray=1;;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 288 "ejemplo.y"
    {tip = 3;flagArray=0;;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 295 "ejemplo.y"
    {
                              tipoDatoFuncion = (char*)realloc(tipoDatoFuncion, strlen(tipoDato));
                              strcpy(tipoDatoFuncion, tipoDato);
                         ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 302 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 303 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 306 "ejemplo.y"
    {agregarParametro(&tabla.listaParametros, "-", (yyvsp[(1) - (1)].cval),yylineno-1, flagArray); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 307 "ejemplo.y"
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
#line 320 "ejemplo.y"
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

  case 82:

/* Line 1455 of yacc.c  */
#line 349 "ejemplo.y"
    {
                         jerarquia++; 
                         contadorVariableExpresion = 0; 
                         contadorVariables = 0; 
                         flagArrayBis = 0;
                    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 354 "ejemplo.y"
    {lineaAux = yylineno;;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 354 "ejemplo.y"
    {sacarVariables(&listaVariablesAuxiliares, jerarquia); jerarquia--; contadorVariableExpresion = 0;;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 377 "ejemplo.y"
    {cantidadPuntero++;;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 381 "ejemplo.y"
    {cantidadPuntero++;;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 384 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Seleccion IF.\n");*/ ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 385 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Seleccion IF/ELSE.\n");*/ ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 386 "ejemplo.y"
    {/*printf("Se enconto una Sentencia de Seleccion SWITCH.\n");*/ ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 389 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion WHILE.\n");*/ ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 390 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion DO WHILE.\n");*/ ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 391 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion FOR.\n");*/ ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 394 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Etiqueta CASE.\n");*/ ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 395 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Etiqueta DEFAULT.\n");*/ ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 399 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto RETURN. \n"); */
                                   if(strcmp(tipoInicializadorFuncion,valorTipoFuncion)){
                                        if(!strcmp(tipoInicializadorFuncion,"")){
                                             agregarErrores(&errores, yylineno, 1, "Error Semantico en la devolucion de la funcion $ : El parametro no existe.", nombreFuncion);
                                        }
                                        else{
                                             agregarErrores(&errores, yylineno, 3, "Error Semantico en la devolucion de la funcion $: Se quiere devolver el parametro de tipo $, mientras que la funcion devuelve $.", nombreFuncion, tipoInicializadorFuncion, valorTipoFuncion);
                                        }
                                   }
                                   flagReturn = 0;
                              ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 410 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto BREAK.\n"); */;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 411 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto CONTINUE.\n"); */;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 412 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto GOTO. \n"); */;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 416 "ejemplo.y"
    {    if(esArrayVariable(&listaVariablesAuxiliares,(yyvsp[(1) - (1)].cval), jerarquia)!=2) flagArray = esArrayVariable(&listaVariablesAuxiliares,(yyvsp[(1) - (1)].cval), jerarquia);
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = tipo(tabla, &listaVariablesAuxiliares, &tabla.listaParametros, (yyvsp[(1) - (1)].cval), jerarquia); 
                                   variableExpresion[contadorVariableExpresion] = strdup(tipo(tabla, &listaVariablesAuxiliares, &tabla.listaParametros, (yyvsp[(1) - (1)].cval), jerarquia));
                                   contadorVariableExpresion++;
                                   esID = 1;
                              ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 422 "ejemplo.y"
    {
                                   (yyval.dval) = (yyvsp[(1) - (1)].ival); 
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "int"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("int");
                                   contadorVariableExpresion++;
                              ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 428 "ejemplo.y"
    {
                                   (yyval.dval) = (yyvsp[(1) - (1)].dval); 
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "double"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("double");
                                   contadorVariableExpresion++;
                              ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 434 "ejemplo.y"
    {
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "char"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("char");
                                   contadorVariableExpresion++;
                              ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 439 "ejemplo.y"
    {
                                   tipoParametroInvocacion = tipoInicializadorFuncion = "char*"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("char*");
                                   contadorVariableExpresion++;
                              ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 445 "ejemplo.y"
    {(yyval.dval) = ( (yyvsp[(2) - (3)].dval) ); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 456 "ejemplo.y"
    {
                         while(contadorVariableExpresion && !flagArray){
                                                  
                              if(contadorVariableExpresion == 1 || !strcmp(variableExpresion[0],variableExpresion[contadorVariableExpresion-1])) {
                                   contadorVariableExpresion--;
                                   tipoInicializador = variableExpresion[0];
                              }
                              else if(flagOperacionBinaria==1) {
                                   agregarErrores(&errores, yylineno, 2, "Se quiere sumar un valor de tipo $ a un valor de tipo $.", variableExpresion[0], variableExpresion[contadorVariableExpresion-1]);
                                   flagError = 1;
                                   contadorVariableExpresion = 0;
                              }
                              else if(flagOperacionBinaria==2) {
                                   agregarErrores(&errores, yylineno, 2, "Se quiere restar un valor de tipo $ a un valor de tipo $.", variableExpresion[0], variableExpresion[contadorVariableExpresion-1]);
                                   flagError = 1;
                                   contadorVariableExpresion = 0;
                              }
                              else if(flagOperacionBinaria==3) {
                                   agregarErrores(&errores, yylineno, 2, "Se quiere multiplicar un valor de tipo $ a un valor de tipo $.", variableExpresion[0], variableExpresion[contadorVariableExpresion-1]);
                                   flagError = 1;
                                   contadorVariableExpresion = 0;
                              }
                              else if(flagOperacionBinaria==4) {
                                   agregarErrores(&errores, yylineno, 2, "Se quiere dividir un valor de tipo $ a un valor de tipo $.", variableExpresion[0], variableExpresion[contadorVariableExpresion-1]);
                                   flagError = 1;
                                   contadorVariableExpresion = 0;
                              } 
                              else if(!flagOperacionBinaria){
                                   contadorVariableExpresion = 0;
                              }
                         }
                         contadorVariableExpresion = 0;
                         flagArrayBis = 0;
                         flagError = 0;
                         flagOperacionBinaria = 0;
                    ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 492 "ejemplo.y"
    {tipoVariableBis = strdup(tipoVariable); contadorVariableExpresion = 0;;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 492 "ejemplo.y"
    {
                                                            (yyval.dval) = (yyvsp[(3) - (4)].dval); 
                                                            
                                                            if(tip == 3) variableExpresion[0] = strdup(tipoVariable);
                                                            if(!strcmp(tipoVariableBis,"")) agregarErrores(&errores, yylineno, 1, "Error Semantico: La variable $ no existe.", (yyvsp[(1) - (4)].cval));
                                                            else if(strcmp(tipoVariableBis,variableExpresion[0])){
                                                                 agregarErrores(&errores, yylineno, 2, "Error Semantico: Se quiere asignar un valor de tipo $ a un valor de tipo $.", variableExpresion[0], tipoVariableBis);
                                                            };
                                                            tip = 0;
                                                       ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 505 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 520 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) || (yyvsp[(3) - (3)].dval); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 524 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) && (yyvsp[(3) - (3)].dval); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 528 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 529 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 533 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 534 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 535 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) <= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 536 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 540 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); flagOperacionBinaria = 1;;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 541 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); flagOperacionBinaria = 2; ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 545 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval);  flagOperacionBinaria = 3;;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 546 "ejemplo.y"
    {if((yyvsp[(3) - (3)].dval) == 0) {agregarErrores(&errores, yylineno, 0, "ERROR/: No se puede dividir por 0.");} else {(yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval);  flagOperacionBinaria = 4;};}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 547 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].ival) % (yyvsp[(3) - (3)].ival); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 551 "ejemplo.y"
    {(yyval.dval) = ++ (yyvsp[(2) - (2)].dval); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 552 "ejemplo.y"
    {(yyval.dval) = -- (yyvsp[(2) - (2)].dval); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 553 "ejemplo.y"
    {(yyval.dval) = - (yyvsp[(2) - (2)].dval); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 554 "ejemplo.y"
    {(yyval.dval) = + (yyvsp[(2) - (2)].dval); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 555 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 556 "ejemplo.y"
    {(yyval.dval) = ! (yyvsp[(2) - (2)].dval); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 557 "ejemplo.y"
    {flagAnd = 1;;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 557 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (3)].dval); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 558 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 559 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 560 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 563 "ejemplo.y"
    {    
                              if (tip!=3 && !flagArrayBis && esID) {
                                   tipoVariable = strdup(tipo(tabla, &listaVariablesAuxiliares, &tabla.listaParametros, (yyvsp[(1) - (1)].cval), jerarquia));
                              }
                              esID = 0;
                         ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 569 "ejemplo.y"
    {tipoVariable = strdup(tipo(tabla, &listaVariablesAuxiliares, &tabla.listaParametros, (yyvsp[(1) - (1)].cval), jerarquia)); flagArrayBis = 1;;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 569 "ejemplo.y"
    {(yyval.dval) = 0; flagArray = 1;;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 570 "ejemplo.y"
    {tipoVariable = strdup(tipoFuncion(tabla, (yyvsp[(1) - (1)].cval))); tip = 3;;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 570 "ejemplo.y"
    {(yyval.dval) = 0; validarInvocacion(tabla,(yyvsp[(1) - (5)].cval),parametrosInvocacion,yylineno, flagAnd); parametrosInvocacion = NULL; tipoInicializadorFuncion = strdup(tipoFuncion(tabla, (yyvsp[(1) - (5)].cval))); contadorVariableExpresion = 0; tip = 3;;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 571 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 572 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 573 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) ++; ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 574 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) --; ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 578 "ejemplo.y"
    {agregarNodo(&parametrosInvocacion,tipoInicializadorFuncion, flagArray);;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 579 "ejemplo.y"
    {agregarNodo(&parametrosInvocacion,tipoInicializadorFuncion, flagArray);;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 583 "ejemplo.y"
    {/*printf("Se define la funcion %s con %d parametros y devolucion de tipo %s  \n",nombre,contadorParametros,tipoDato); contadorParametros = 0;*/ agregarFuncion(&tabla.listaFuncionesDeclaradas, &tabla.listaFuncionesDefinidas,nombreFuncion,valorTipoFuncion,&tabla.listaParametros,yylineno-1, 1); contadorParametros = 0; tabla.listaParametros = NULL; cantidadPuntero = 0; flagFuncion = 0;;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 584 "ejemplo.y"
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

  case 179:

/* Line 1455 of yacc.c  */
#line 637 "ejemplo.y"
    {nombreFuncion = strdup((yyvsp[(2) - (2)].cval)); valorTipoFuncion = strdup((yyvsp[(1) - (2)].cval)); if(strcmp(valorTipoFuncion,"void")) flagReturn = 1;;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 637 "ejemplo.y"
    {contadorVariableExpresion = 0; contadorVariables = 0;;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 637 "ejemplo.y"
    {
               flagFuncion = 0; 
               if(flagReturn){
                    agregarErrores(&errores, lineaAux, 1, "Warning: La funcion $ deberia utilizar return.", nombreFuncion);
               }
               flagReturn = 0;
     ;}
    break;



/* Line 1455 of yacc.c  */
#line 2658 "ejemplo.tab.c"
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
#line 648 "ejemplo.y"
 

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
