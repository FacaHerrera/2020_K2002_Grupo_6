
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

char* tipoInicializador = "vacio";
char* tipoDato = "";
char* tipoDatoFuncion;
char* tipoDatoPuntero;
char* nombre;
char* variable[20];
char* variableExpresion[20];
char* tipoParametroInvocacion;

char flagError = 0;
char flagOperacionBinaria = 0; 
char flagArray = 0;

int contadorVariables = 0;
int contadorParametros = 0;
int tip = 0;
int tipDecla = 0;
int cantidad = 0;
int cantidadPuntero = 0;
int contadorVariableExpresion = 0;

Nodo *parametrosInvocacion;
ListaParametros *listaParametros;
TablaDeSimbolos tabla;




/* Line 189 of yacc.c  */
#line 120 "ejemplo.tab.c"

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
     CTE_CARACTER = 293
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 47 "ejemplo.y"

  int ival;
  double dval;
  char cval[30];



/* Line 214 of yacc.c  */
#line 202 "ejemplo.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 214 "ejemplo.tab.c"

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   545

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNRULES -- Number of states.  */
#define YYNSTATES  281

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,     2,     2,    45,    60,     2,
      46,    47,    43,    41,    49,    42,    56,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,    48,
      40,    50,    39,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,    58,     2,     2,     2,
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    14,    18,    19,
      21,    24,    27,    28,    30,    32,    36,    38,    42,    44,
      48,    50,    54,    56,    58,    60,    64,    69,    71,    74,
      78,    81,    82,    84,    85,    89,    91,    95,    97,   101,
     104,   106,   109,   111,   112,   114,   116,   121,   126,   128,
     134,   135,   137,   139,   143,   145,   148,   151,   154,   157,
     159,   161,   162,   164,   168,   171,   173,   177,   181,   183,
     185,   187,   189,   191,   193,   196,   198,   202,   203,   206,
     209,   211,   214,   215,   217,   219,   222,   225,   226,   229,
     235,   243,   249,   255,   263,   273,   278,   282,   286,   290,
     293,   296,   300,   302,   304,   306,   308,   310,   312,   316,
     318,   322,   323,   325,   327,   331,   333,   339,   340,   342,
     344,   346,   348,   350,   352,   354,   358,   360,   364,   366,
     370,   374,   376,   380,   384,   388,   392,   394,   398,   402,
     404,   408,   412,   416,   418,   421,   424,   427,   430,   433,
     436,   439,   442,   447,   452,   454,   459,   464,   468,   472,
     475,   478,   479,   481,   485,   487,   489
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    -1,    62,    63,    -1,   123,    -1,    94,
      -1,     1,    48,    -1,    66,    67,    48,    -1,    -1,    66,
      -1,    33,    65,    -1,    72,    65,    -1,    -1,    68,    -1,
      69,    -1,    68,    49,    69,    -1,    81,    -1,    81,    50,
      70,    -1,   110,    -1,    51,    71,    52,    -1,    70,    -1,
      71,    49,    70,    -1,    32,    -1,    73,    -1,    36,    -1,
      34,    35,    78,    -1,    34,    51,    74,    52,    -1,    75,
      -1,    74,    75,    -1,    76,    79,    48,    -1,    72,    77,
      -1,    -1,    76,    -1,    -1,    51,    74,    52,    -1,    80,
      -1,    79,    49,    80,    -1,    81,    -1,    83,    53,   111,
      -1,   101,    84,    -1,    84,    -1,   101,    84,    -1,    84,
      -1,    -1,    81,    -1,    35,    -1,    84,    54,   112,    55,
      -1,    84,    46,    86,    47,    -1,    87,    -1,    87,    49,
      56,    56,    56,    -1,    -1,    85,    -1,    88,    -1,    87,
      49,    88,    -1,    66,    -1,    66,    82,    -1,    66,    90,
      -1,    76,    91,    -1,   101,    92,    -1,    92,    -1,   101,
      -1,    -1,    90,    -1,    46,    90,    47,    -1,    92,    93,
      -1,    93,    -1,    54,   112,    55,    -1,    46,    86,    47,
      -1,    96,    -1,    95,    -1,   103,    -1,   104,    -1,   106,
      -1,   105,    -1,   108,    48,    -1,    48,    -1,    51,    97,
      52,    -1,    -1,    97,    98,    -1,    97,   100,    -1,   123,
      -1,    98,   123,    -1,    -1,    98,    -1,    94,    -1,   100,
      94,    -1,    43,   102,    -1,    -1,    43,   102,    -1,    19,
      46,   108,    47,    94,    -1,    19,    46,   108,    47,    94,
      20,    94,    -1,    21,    46,   108,    47,    94,    -1,    22,
      46,   108,    47,    94,    -1,    23,    94,    22,    46,   108,
      47,    48,    -1,    24,    46,   109,    48,   109,    48,   109,
      47,    94,    -1,    28,   111,    53,    94,    -1,    29,    53,
      94,    -1,    35,    53,    94,    -1,    25,   109,    48,    -1,
      27,    48,    -1,    26,    48,    -1,    30,    35,    48,    -1,
      35,    -1,     4,    -1,     3,    -1,    38,    -1,     5,    -1,
      31,    -1,    46,   108,    47,    -1,   110,    -1,   108,    49,
     110,    -1,    -1,   108,    -1,   111,    -1,   120,   113,   110,
      -1,   114,    -1,   114,    57,   108,    53,   111,    -1,    -1,
     111,    -1,    50,    -1,    14,    -1,    15,    -1,    16,    -1,
      17,    -1,   115,    -1,   114,     6,   115,    -1,   116,    -1,
     115,     7,   116,    -1,   117,    -1,   116,     8,   117,    -1,
     116,     9,   117,    -1,   118,    -1,   117,    40,   118,    -1,
     117,    39,   118,    -1,   117,    11,   118,    -1,   117,    10,
     118,    -1,   119,    -1,   118,    41,   119,    -1,   118,    42,
     119,    -1,   120,    -1,   119,    43,   120,    -1,   119,    44,
     120,    -1,   119,    45,   120,    -1,   121,    -1,    12,   120,
      -1,    13,   120,    -1,    42,   120,    -1,    41,   120,    -1,
      58,   120,    -1,    59,   120,    -1,    60,   120,    -1,   101,
     120,    -1,    37,    46,   120,    47,    -1,    37,    46,    89,
      47,    -1,   107,    -1,   121,    54,   108,    55,    -1,   121,
      46,   122,    47,    -1,   121,    56,    35,    -1,   121,    18,
      35,    -1,   121,    12,    -1,   121,    13,    -1,    -1,   110,
      -1,   122,    49,   110,    -1,   124,    -1,    64,    -1,    66,
      82,    99,    96,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   102,   102,   103,   106,   107,   108,   112,   185,   186,
     189,   190,   197,   198,   201,   202,   205,   206,   209,   210,
     213,   214,   217,   218,   219,   222,   223,   226,   227,   230,
     233,   236,   237,   240,   241,   244,   245,   248,   249,   252,
     273,   281,   290,   297,   298,   301,   302,   303,   306,   307,
     310,   314,   317,   318,   321,   322,   329,   332,   335,   336,
     337,   349,   350,   353,   354,   355,   358,   359,   363,   364,
     365,   366,   367,   368,   371,   372,   375,   378,   379,   380,
     383,   384,   387,   388,   391,   392,   395,   398,   399,   402,
     403,   404,   407,   408,   409,   412,   413,   414,   417,   418,
     419,   420,   424,   429,   435,   441,   446,   451,   452,   455,
     456,   459,   460,   463,   464,   467,   468,   471,   472,   475,
     476,   477,   478,   479,   482,   483,   486,   487,   490,   491,
     492,   495,   496,   497,   498,   499,   502,   503,   504,   507,
     508,   509,   510,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   526,   527,   528,   529,   530,   531,
     532,   535,   536,   537,   541,   542,   593
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
  "CTE_CARACTER", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "'('",
  "')'", "';'", "','", "'='", "'{'", "'}'", "':'", "'['", "']'", "'.'",
  "'?'", "'~'", "'!'", "'&'", "$accept", "input", "line", "declaracion",
  "especDeclaracionBis", "especDeclaracion", "listaDeclaradoresBis",
  "listaDeclaradores", "declarador", "inicializador",
  "listaDeInicializadores", "especTipo", "especStructUnion",
  "listaDeclaracionesStruct", "declaracionStruct", "listaCalificadores",
  "listaCalificadoresBis", "opcionLista", "declaradoresStruct",
  "declaStruct", "decla1", "decla2", "declaBis", "declaradorDirecto",
  "listaTiposParametros", "listaTiposParametrosBis", "listaParametros",
  "declaracionParametro", "nombreTipo", "declaradorAbstracto",
  "declaradorAbstractoBis", "declaradorAbstractoDirecto",
  "opcionExpresion", "sentencia", "sentExpresion", "sentCompuesta",
  "decalracionOSentencia", "listaDeclaraciones", "listaDeclaracionesBis",
  "listaSentencias", "puntero", "punteroBis", "sentSeleccion",
  "sentIteracion", "sentEtiquetada", "sentSalto", "expPrimaria", "exp",
  "expOp", "expAsignacion", "expCondicional", "expCondicionalBis",
  "operAsignacion", "expOr", "expAnd", "expIgualdad", "expRelacional",
  "expAditiva", "expMultiplicativa", "expUnaria", "expSufijo",
  "listaArgumentos", "declaracionExterna", "definicionFuncion", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,    62,
      60,    43,    45,    42,    47,    37,    40,    41,    59,    44,
      61,   123,   125,    58,    91,    93,    46,    63,   126,    33,
      38
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    63,    63,    63,    64,    65,    65,
      66,    66,    67,    67,    68,    68,    69,    69,    70,    70,
      71,    71,    72,    72,    72,    73,    73,    74,    74,    75,
      76,    77,    77,    78,    78,    79,    79,    80,    80,    81,
      81,    82,    82,    83,    83,    84,    84,    84,    85,    85,
      86,    86,    87,    87,    88,    88,    88,    89,    90,    90,
      90,    91,    91,    92,    92,    92,    93,    93,    94,    94,
      94,    94,    94,    94,    95,    95,    96,    97,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   102,   102,   103,
     103,   103,   104,   104,   104,   105,   105,   105,   106,   106,
     106,   106,   107,   107,   107,   107,   107,   107,   107,   108,
     108,   109,   109,   110,   110,   111,   111,   112,   112,   113,
     113,   113,   113,   113,   114,   114,   115,   115,   116,   116,
     116,   117,   117,   117,   117,   117,   118,   118,   118,   119,
     119,   119,   119,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   121,   121,   121,   121,   121,   121,
     121,   122,   122,   122,   123,   123,   124
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     3,     0,     1,
       2,     2,     0,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     3,     4,     1,     2,     3,
       2,     0,     1,     0,     3,     1,     3,     1,     3,     2,
       1,     2,     1,     0,     1,     1,     4,     4,     1,     5,
       0,     1,     1,     3,     1,     2,     2,     2,     2,     1,
       1,     0,     1,     3,     2,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     0,     2,     2,
       1,     2,     0,     1,     1,     2,     2,     0,     2,     5,
       7,     5,     5,     7,     9,     4,     3,     3,     3,     2,
       2,     3,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     0,     1,     1,     3,     1,     5,     0,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     4,     1,     4,     4,     3,     3,     2,
       2,     0,     1,     3,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,   104,   103,   106,     0,     0,     0,
       0,     0,     0,     0,   111,     0,     0,     0,     0,     0,
     107,    22,     8,     0,   102,    24,     0,   105,     0,     0,
      87,     0,    75,    77,     0,     0,     0,     3,   165,    12,
       8,    23,     5,    69,    68,     0,    70,    71,    73,    72,
     154,     0,   109,   113,   115,   124,   126,   128,   131,   136,
     139,   143,     4,   164,     6,   102,   144,   145,     0,     0,
       0,     0,   111,   112,     0,   100,    99,     0,   139,     0,
       0,    10,     9,    33,     0,     0,     0,   147,   146,    87,
      86,     0,     0,   148,   149,   150,    45,     0,    13,    14,
      16,    82,    42,     0,    11,   151,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   120,   121,   122,   123,   119,     0,   159,   160,
       0,   161,     0,     0,     0,     0,     0,     0,     0,    98,
       0,    96,   101,     0,    25,    31,     0,    27,    43,    97,
      61,     0,     0,    88,   108,    76,    84,    78,    79,    80,
       7,     0,     0,    83,     0,    50,   117,    41,   110,   125,
       0,   127,   129,   130,   135,   134,   133,   132,   137,   138,
     140,   141,   142,   114,   158,   162,     0,     0,   157,     0,
       0,     0,     0,   111,    95,     0,    32,    30,    26,    28,
       0,    35,    37,     0,    40,     0,    50,   117,    62,    57,
      59,    65,    60,   153,   152,    81,    85,    15,     0,    17,
      18,   166,    54,    51,     0,    48,    52,   118,     0,     0,
     156,     0,   155,    89,    91,    92,     0,     0,    34,    29,
      43,     0,    39,     0,     0,     0,    50,    64,    58,    20,
       0,    55,    42,    56,    60,    47,     0,    46,   116,   163,
       0,     0,   111,    36,    38,    67,    63,    66,     0,    19,
      41,     0,    53,    90,    93,     0,    21,     0,     0,    49,
      94
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    37,    38,    81,    39,    97,    98,    99,   219,
     250,    40,    41,   146,   147,   148,   197,   144,   200,   201,
     100,   101,   203,   204,   223,   243,   225,   226,   151,   208,
     209,   210,   211,    42,    43,    44,    92,   157,   164,   158,
      45,    90,    46,    47,    48,    49,    50,    51,    74,    52,
      53,   228,   127,    54,    55,    56,    57,    58,    59,    60,
      61,   186,   159,    63
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -203
static const yytype_int16 yypact[] =
{
    -203,   249,  -203,    -9,  -203,  -203,  -203,   485,   485,    29,
      44,    74,   348,    79,   485,   118,   123,   485,    92,   120,
    -203,  -203,   154,   -14,   130,  -203,    86,  -203,   485,   485,
     151,   485,  -203,  -203,   485,   485,   485,  -203,  -203,    84,
     154,  -203,  -203,  -203,  -203,   485,  -203,  -203,  -203,  -203,
    -203,   100,  -203,  -203,     5,   195,   150,    25,   170,   131,
      13,    33,  -203,  -203,  -203,  -203,  -203,  -203,   485,   485,
     485,   184,   485,   164,   169,  -203,  -203,   165,  -203,   348,
     172,  -203,  -203,   173,   159,   348,   397,  -203,  -203,   151,
    -203,     6,   298,  -203,  -203,  -203,  -203,   181,   183,  -203,
     180,   154,    45,   198,  -203,  -203,  -203,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,  -203,  -203,  -203,  -203,  -203,   485,  -203,  -203,
     199,   485,   485,   201,    57,    89,   156,   191,   192,  -203,
     348,  -203,  -203,   159,  -203,   159,    50,  -203,    84,  -203,
      42,   194,   196,  -203,  -203,  -203,  -203,   154,   348,  -203,
    -203,    84,   441,   154,   188,   154,   485,   119,  -203,   195,
     -15,   150,    25,    25,   170,   170,   170,   170,   131,   131,
    -203,  -203,  -203,  -203,  -203,  -203,   160,    48,  -203,   348,
     348,   348,   485,   485,  -203,   105,  -203,  -203,  -203,  -203,
     167,  -203,   189,   193,    14,   198,    97,   485,  -203,  -203,
     106,  -203,   108,  -203,  -203,  -203,  -203,  -203,   441,  -203,
    -203,  -203,   107,  -203,   197,   206,  -203,  -203,   190,   485,
    -203,   485,  -203,   227,  -203,  -203,   161,   208,  -203,  -203,
      84,   485,    14,   210,   211,   204,   154,  -203,   106,  -203,
      -8,  -203,    14,  -203,    46,  -203,    16,  -203,  -203,  -203,
     348,   212,   485,  -203,  -203,  -203,  -203,  -203,   441,  -203,
      14,   207,  -203,  -203,  -203,   217,  -203,   209,   348,  -203,
    -203
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -203,  -203,  -203,  -203,   229,   -21,  -203,  -203,   127,  -202,
    -203,   -69,  -203,   124,  -124,   -76,  -203,  -203,  -203,    49,
    -139,    71,  -203,   -33,  -203,   129,  -203,    40,  -203,  -182,
    -203,  -200,  -192,   -12,  -203,   134,  -203,   203,  -203,  -203,
     -26,   216,  -203,  -203,  -203,  -203,  -203,   -11,   -70,   -84,
     -10,    99,  -203,  -203,   205,   202,   111,    85,   110,    -3,
    -203,  -203,     7,  -203
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -45
static const yytype_int16 yytable[] =
{
      71,    82,   138,    73,    66,    67,   102,    77,    62,   202,
     150,   108,   248,   103,    78,   145,   249,   145,   247,    82,
      91,    83,   199,   168,   244,    87,    88,   122,   123,   124,
     125,    93,    94,    95,   107,   113,   114,    84,   229,    64,
     253,   268,   105,   183,   269,   128,   129,   185,    21,    22,
      23,   130,    25,   154,   248,   107,   247,   134,   135,   136,
     165,    73,   109,   126,   115,   116,   276,   141,   166,   196,
     167,   199,   271,   149,   145,    68,   145,   145,   220,   131,
     156,    96,    21,   152,    23,    30,    25,   132,   206,   133,
      69,   165,   206,   -40,   -40,   -40,   207,   107,   170,   166,
     207,   202,   198,   232,   189,    78,   107,    78,    78,    78,
      78,    78,    78,    78,    78,    78,   180,   181,   182,    96,
      70,   187,   205,   237,   212,    72,   145,    30,   194,    21,
      22,    23,    86,    25,   220,   205,   190,    21,   107,    23,
      30,    25,    96,   206,   222,    79,   216,   259,   106,   107,
      30,   207,   246,   206,   206,    80,   227,   238,   111,   112,
     207,   207,   207,    78,   215,   165,    75,   -39,   -39,   -39,
     215,    76,   242,   166,   119,   120,   121,   233,   234,   235,
     212,   236,    73,    85,   220,   222,    21,    22,    23,   252,
      25,    21,   275,    23,    89,    25,   254,   227,   174,   175,
     176,   177,   110,   191,    78,   107,   137,   230,   261,   231,
     107,   117,   118,   107,   205,   239,   240,   139,   140,   258,
     142,   270,   172,   173,   143,   222,    78,   178,   179,   160,
     162,   264,   161,    96,   184,   222,   188,   192,    78,    33,
     193,   213,   -44,   214,   255,   257,   241,   260,   273,     2,
       3,    73,     4,     5,     6,   256,   262,   265,   266,   267,
     274,     7,     8,   277,   278,   279,   280,   195,     9,   104,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   217,   263,
      28,    29,    30,   251,   224,    31,   272,    32,   221,     0,
      33,     4,     5,     6,   163,   153,   245,    34,    35,    36,
       7,     8,   171,   169,     0,     0,     0,     9,     0,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,     0,    28,
      29,    30,     0,     0,    31,     0,    32,     0,     0,    33,
     155,     4,     5,     6,     0,     0,    34,    35,    36,     0,
       7,     8,     0,     0,     0,     0,     0,     9,     0,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,    24,     0,    26,    27,     0,     0,    28,
      29,    30,     0,     0,    31,     0,    32,     0,     0,    33,
       4,     5,     6,     0,     0,     0,    34,    35,    36,     7,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,    21,
       0,    23,    65,    25,    26,    27,     0,     0,    28,    29,
      30,     0,     0,    31,     4,     5,     6,     0,     0,     0,
       0,     0,     0,     7,     8,    34,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,    65,     0,    26,    27,
       0,     0,    28,    29,    30,     0,     0,    31,     4,     5,
       6,     0,   218,     0,     0,     0,     0,     7,     8,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
      65,     0,    26,    27,     0,     0,    28,    29,    30,     0,
       0,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36
};

static const yytype_int16 yycheck[] =
{
      12,    22,    72,    14,     7,     8,    39,    17,     1,   148,
      86,     6,   212,    39,    17,    84,   218,    86,   210,    40,
      31,    35,   146,   107,   206,    28,    29,    14,    15,    16,
      17,    34,    35,    36,    49,    10,    11,    51,    53,    48,
     222,    49,    45,   127,    52,    12,    13,   131,    32,    33,
      34,    18,    36,    47,   254,    49,   248,    68,    69,    70,
      46,    72,    57,    50,    39,    40,   268,    79,    54,   145,
     103,   195,    56,    85,   143,    46,   145,   146,   162,    46,
      92,    35,    32,    86,    34,    43,    36,    54,    46,    56,
      46,    46,    46,    48,    49,    50,    54,    49,   109,    54,
      54,   240,    52,    55,    47,   108,    49,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    35,
      46,   132,   148,   193,   150,    46,   195,    43,   140,    32,
      33,    34,    46,    36,   218,   161,    47,    32,    49,    34,
      43,    36,    35,    46,   165,    53,   158,   231,    48,    49,
      43,    54,    46,    46,    46,    35,   166,    52,     8,     9,
      54,    54,    54,   166,   157,    46,    48,    48,    49,    50,
     163,    48,   205,    54,    43,    44,    45,   189,   190,   191,
     206,   192,   193,    53,   268,   206,    32,    33,    34,   222,
      36,    32,   262,    34,    43,    36,   222,   207,   113,   114,
     115,   116,     7,    47,   207,    49,    22,    47,    47,    49,
      49,    41,    42,    49,   240,    48,    49,    48,    53,   229,
      48,   254,   111,   112,    51,   246,   229,   117,   118,    48,
      50,   241,    49,    35,    35,   256,    35,    46,   241,    51,
      48,    47,    53,    47,    47,    55,    53,    20,   260,     0,
       1,   262,     3,     4,     5,    49,    48,    47,    47,    55,
      48,    12,    13,    56,    47,    56,   278,   143,    19,    40,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   161,   240,
      41,    42,    43,   222,   165,    46,   256,    48,   164,    -1,
      51,     3,     4,     5,   101,    89,   207,    58,    59,    60,
      12,    13,   110,   108,    -1,    -1,    -1,    19,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
      52,     3,     4,     5,    -1,    -1,    58,    59,    60,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    35,    -1,    37,    38,    -1,    -1,    41,
      42,    43,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
       3,     4,     5,    -1,    -1,    -1,    58,    59,    60,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,    -1,    -1,    46,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    13,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    37,    38,
      -1,    -1,    41,    42,    43,    -1,    -1,    46,     3,     4,
       5,    -1,    51,    -1,    -1,    -1,    -1,    12,    13,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      35,    -1,    37,    38,    -1,    -1,    41,    42,    43,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    62,     0,     1,     3,     4,     5,    12,    13,    19,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    41,    42,
      43,    46,    48,    51,    58,    59,    60,    63,    64,    66,
      72,    73,    94,    95,    96,   101,   103,   104,   105,   106,
     107,   108,   110,   111,   114,   115,   116,   117,   118,   119,
     120,   121,   123,   124,    48,    35,   120,   120,    46,    46,
      46,    94,    46,   108,   109,    48,    48,   111,   120,    53,
      35,    65,    66,    35,    51,    53,    46,   120,   120,    43,
     102,   108,    97,   120,   120,   120,    35,    67,    68,    69,
      81,    82,    84,   101,    65,   120,    48,    49,     6,    57,
       7,     8,     9,    10,    11,    39,    40,    41,    42,    43,
      44,    45,    14,    15,    16,    17,    50,   113,    12,    13,
      18,    46,    54,    56,   108,   108,   108,    22,   109,    48,
      53,    94,    48,    51,    78,    72,    74,    75,    76,    94,
      76,    89,   120,   102,    47,    52,    94,    98,   100,   123,
      48,    49,    50,    98,    99,    46,    54,    84,   110,   115,
     108,   116,   117,   117,   118,   118,   118,   118,   119,   119,
     120,   120,   120,   110,    35,   110,   122,   108,    35,    47,
      47,    47,    46,    48,    94,    74,    76,    77,    52,    75,
      79,    80,    81,    83,    84,   101,    46,    54,    90,    91,
      92,    93,   101,    47,    47,   123,    94,    69,    51,    70,
     110,    96,    66,    85,    86,    87,    88,   111,   112,    53,
      47,    49,    55,    94,    94,    94,   108,   109,    52,    48,
      49,    53,    84,    86,    90,   112,    46,    93,    92,    70,
      71,    82,    84,    90,   101,    47,    49,    55,   111,   110,
      20,    47,    48,    80,   111,    47,    47,    55,    49,    52,
      84,    56,    88,    94,    48,   109,    70,    56,    47,    56,
      94
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
        case 6:

/* Line 1455 of yacc.c  */
#line 108 "ejemplo.y"
    {agregarError(&errores,"Error Sintactico",yylineno);;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 112 "ejemplo.y"
    {
          nombre = (yyvsp[(2) - (3)].cval);
          if(!flagArray){
               while(contadorVariableExpresion){
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
                         agregarError(&errores, error, yylineno);
                         flagError = 1;
                         contadorVariableExpresion = 0;
                    }
                    else if(flagOperacionBinaria==2) {

                         char *error = malloc(strlen(variableExpresion[0])+strlen(variableExpresion[contadorVariableExpresion-1])+strlen("Error Semantico: Se quiere restar un valor de tipo ")+strlen(" a un valor de tipo ") + 1);
                         strcpy(error,"Se quiere restar un valor de tipo ");
                         strcat(error,variableExpresion[0]);
                         strcat(error," a un valor de tipo ");
                         strcat(error, variableExpresion[contadorVariableExpresion-1]);
                         agregarError(&errores, error, yylineno);
                         flagError = 1;
                         contadorVariableExpresion = 0;
                    }
                    else if(flagOperacionBinaria==3) {

                         char *error = malloc(strlen(variableExpresion[0])+strlen(variableExpresion[contadorVariableExpresion-1])+strlen("Error Semantico: Se quiere multiplicar un valor de tipo ")+strlen(" a un valor de tipo ") + 1);
                         strcpy(error,"Se quiere multiplicar un valor de tipo ");
                         strcat(error,variableExpresion[0]);
                         strcat(error," a un valor de tipo ");
                         strcat(error, variableExpresion[contadorVariableExpresion-1]);
                         agregarError(&errores, error, yylineno);
                         flagError = 1;
                         contadorVariableExpresion = 0;
                    }
                    else if(flagOperacionBinaria==4) {

                         char *error = malloc(strlen(variableExpresion[0])+strlen(variableExpresion[contadorVariableExpresion-1])+strlen("Error Semantico: Se quiere dividir un valor de tipo ")+strlen(" a un valor de tipo ") + 1);
                         strcpy(error,"Se quiere dividir un valor de tipo ");
                         strcat(error,variableExpresion[0]);
                         strcat(error," a un valor de tipo ");
                         strcat(error, variableExpresion[contadorVariableExpresion-1]);
                         agregarError(&errores, error, yylineno);
                         flagError = 1;
                         contadorVariableExpresion = 0;
                    } 
               }
               while(contadorVariables!=0 && tip != 3){
                    contadorVariables--;
                    agregarVariable(&tabla.listaVariables, variable[contadorVariables], tipoDato, tipoInicializador, yylineno, flagError);
                    tipoInicializador = "vacio";
               }
               
          }
          else{
               agregarVariable(&tabla.listaVariables, variable[0], tipoDato, tipoInicializador, yylineno, flagError);
               tipoInicializador = "vacio";
          }
          strcpy(tipoDato, "");
          contadorVariableExpresion = 0;
          contadorVariables = 0;
          flagArray = 0;
          flagError = 0;
          flagOperacionBinaria = 0;
     ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 190 "ejemplo.y"
    {
                                                       tipoDatoFuncion = (char*)malloc(strlen(tipoDato));
                                                       if(strcmp(tipoDato,"")) strcpy(tipoDatoFuncion, tipoDato);
                                                       tipoDato = strdup((yyvsp[(1) - (2)].cval));
                                                  ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 201 "ejemplo.y"
    {cantidad = 1; ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 202 "ejemplo.y"
    {cantidad = 2;;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 205 "ejemplo.y"
    { tipDecla = 1; ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 206 "ejemplo.y"
    {   tipDecla = 2; ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 210 "ejemplo.y"
    {flagArray = 1;;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 252 "ejemplo.y"
    {
                                        if(tip!=3){
                                             tipoDato = (char*)realloc(tipoDato, strlen(tipoDato)+cantidadPuntero);
                                             while(cantidadPuntero!=0){
                                                  strcat(tipoDato, "*");
                                                  cantidadPuntero--;
                                             }
                                             variable[contadorVariables] = (yyvsp[(2) - (2)].cval);
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

  case 40:

/* Line 1455 of yacc.c  */
#line 273 "ejemplo.y"
    {
                              if(tip!=3){
                                   variable[contadorVariables] = strdup((yyvsp[(1) - (1)].cval)); 
                                   contadorVariables++;
                              }
                         ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 281 "ejemplo.y"
    {
                                        tipoDatoPuntero = (char*)realloc(tipoDatoPuntero, cantidadPuntero);
                                        while(cantidadPuntero!=0){
                                             strcat(tipoDatoPuntero, "*");
                                             cantidadPuntero--;
                                        }
                                        nombre = strdup((yyvsp[(2) - (2)].cval));

                                   ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 290 "ejemplo.y"
    {
                              tipoDatoPuntero = (char*)malloc(strlen(""));
                              strcpy(tipoDatoPuntero, ""); 
                              nombre = strdup((yyvsp[(1) - (1)].cval));
                         ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 301 "ejemplo.y"
    {tip = 1;;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 302 "ejemplo.y"
    {tip = 2;;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 303 "ejemplo.y"
    {tip = 3;;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 310 "ejemplo.y"
    {
                              tipoDatoFuncion = (char*)malloc(strlen(tipoDato));
                              strcpy(tipoDatoFuncion, tipoDato);
                         ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 317 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 318 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 321 "ejemplo.y"
    {agregarParametro(&listaParametros, "-", (yyvsp[(1) - (1)].cval),yylineno); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 322 "ejemplo.y"
    {
                                                  char* aux = (char*)malloc(strlen((yyvsp[(1) - (2)].cval))+strlen(tipoDatoPuntero));
                                                  strcpy(aux, (yyvsp[(1) - (2)].cval));
                                                  strcat(aux, tipoDatoPuntero);
                                                  agregarParametro(&listaParametros, nombre, aux,yylineno);
                                                  cantidadPuntero = 0;
                                             ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 337 "ejemplo.y"
    {
                                   tipoDatoPuntero = (char*)realloc(tipoDatoPuntero, strlen((yyvsp[(1) - (1)].cval))+cantidadPuntero);
                                   strcpy(tipoDatoPuntero, (yyvsp[(1) - (1)].cval));
                                   while(cantidadPuntero!=0){
                                        strcat(tipoDatoPuntero, "*");
                                        cantidadPuntero--;
                                   }
                                   agregarParametro(&listaParametros, "-", tipoDatoPuntero,yylineno); 
                                   cantidadPuntero = 0;
                              ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 375 "ejemplo.y"
    {/*printf("Se encontro una Sentencia Compuesta. \n");*/ ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 395 "ejemplo.y"
    {cantidadPuntero++;;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 399 "ejemplo.y"
    {cantidadPuntero++;;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 402 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Seleccion IF.\n");*/ ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 403 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Seleccion IF/ELSE.\n");*/ ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 404 "ejemplo.y"
    {/*printf("Se enconto una Sentencia de Seleccion SWITCH.\n");*/ ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 407 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion WHILE.\n");*/ ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 408 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion DO WHILE.\n");*/ ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 409 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion FOR.\n");*/ ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 412 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Etiqueta CASE.\n");*/ ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 413 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Etiqueta DEFAULT.\n");*/ ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 417 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto RETURN. \n"); */;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 418 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto BREAK.\n"); */;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 419 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto CONTINUE.\n"); */;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 420 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto GOTO. \n"); */;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 424 "ejemplo.y"
    {
                                   tipoParametroInvocacion = tipoInicializador = tipoVariable(tabla,(yyvsp[(1) - (1)].cval)); 
                                   variableExpresion[contadorVariableExpresion] = strdup(tipoVariable(tabla,(yyvsp[(1) - (1)].cval)));
                                   contadorVariableExpresion++;
                              ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 429 "ejemplo.y"
    {
                                   (yyval.dval) = (yyvsp[(1) - (1)].ival); 
                                   tipoParametroInvocacion = tipoInicializador = "int"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("int");
                                   contadorVariableExpresion++;
                              ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 435 "ejemplo.y"
    {
                                   (yyval.dval) = (yyvsp[(1) - (1)].dval); 
                                   tipoParametroInvocacion = tipoInicializador = "double"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("double");
                                   contadorVariableExpresion++;
                              ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 441 "ejemplo.y"
    {
                                   tipoParametroInvocacion = tipoInicializador = "char"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("char");
                                   contadorVariableExpresion++;
                              ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 446 "ejemplo.y"
    {
                                   tipoParametroInvocacion = "char*"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("char*");
                                   contadorVariableExpresion++;
                              ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 452 "ejemplo.y"
    {(yyval.dval) = ( (yyvsp[(2) - (3)].dval) ); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 464 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(3) - (3)].dval); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 468 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 483 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) || (yyvsp[(3) - (3)].dval); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 487 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) && (yyvsp[(3) - (3)].dval); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 491 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 492 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 496 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 497 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 498 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) <= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 499 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 503 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); flagOperacionBinaria = 1;;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 504 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); flagOperacionBinaria = 2; ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 508 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval);  flagOperacionBinaria = 3;;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 509 "ejemplo.y"
    {if((yyvsp[(3) - (3)].dval) == 0) {agregarError(&errores,"ERROR/: No se puede dividir por 0",yylineno);} else {(yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval);  flagOperacionBinaria = 4;};}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 510 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].ival) % (yyvsp[(3) - (3)].ival); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 514 "ejemplo.y"
    {(yyval.dval) = ++ (yyvsp[(2) - (2)].dval); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 515 "ejemplo.y"
    {(yyval.dval) = -- (yyvsp[(2) - (2)].dval); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 516 "ejemplo.y"
    {(yyval.dval) = - (yyvsp[(2) - (2)].dval); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 517 "ejemplo.y"
    {(yyval.dval) = + (yyvsp[(2) - (2)].dval); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 518 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 519 "ejemplo.y"
    {(yyval.dval) = ! (yyvsp[(2) - (2)].dval); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 520 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 521 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 522 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 523 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 527 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 528 "ejemplo.y"
    {(yyval.dval) = 0; validarInvocacion(tabla,(yyvsp[(1) - (4)].cval),parametrosInvocacion,yylineno); parametrosInvocacion = NULL; tipoInicializador = tipoFuncion(tabla,(yyvsp[(1) - (4)].cval)); contadorVariableExpresion = 0;;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 529 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 530 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 531 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) ++; ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 532 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) --; ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 536 "ejemplo.y"
    {agregarNodo(&parametrosInvocacion,tipoParametroInvocacion);;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 537 "ejemplo.y"
    {agregarNodo(&parametrosInvocacion,tipoParametroInvocacion);;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 541 "ejemplo.y"
    {/*printf("Se define la funcion %s con %d parametros y devolucion de tipo %s  \n",nombre,contadorParametros,tipoDato); contadorParametros = 0;*/ agregarFuncion(&tabla.listaFuncionesDeclaradas, &tabla.listaFuncionesDefinidas,nombre,tipoDatoFuncion,&listaParametros,yylineno, 1); contadorParametros = 0; listaParametros = NULL; cantidadPuntero = 0;;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 542 "ejemplo.y"
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
                                   agregarFuncion(&tabla.listaFuncionesDeclaradas, &tabla.listaFuncionesDefinidas,nombre,tipoDatoFuncion,&listaParametros,yylineno, 0);
                                   cantidadPuntero = 0;
                                   listaParametros = NULL;
                              }
                              break;     
                       }
                  ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 593 "ejemplo.y"
    {nombre = (yyvsp[(2) - (4)].cval);;}
    break;



/* Line 1455 of yacc.c  */
#line 2488 "ejemplo.tab.c"
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
#line 597 "ejemplo.y"
 

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
     tabla.listaFuncionesDeclaradas = NULL;
     tabla.listaFuncionesDefinidas = NULL;
     listaParametros = NULL;
     parametrosInvocacion = NULL;

     yyparse();
     imprimirTabla(tabla);
     imprimirErrores(&errores);
     system("PAUSE");
}
