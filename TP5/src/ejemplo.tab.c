
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
     CTE_CARACTER = 293,
     INCLUDE = 294,
     DEFINE = 295,
     COMENTARIO_SIMPLE = 296,
     COMENTARIO_MULTIPLE = 297
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
#line 206 "ejemplo.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 218 "ejemplo.tab.c"

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
#define YYLAST   530

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  168
/* YYNRULES -- Number of states.  */
#define YYNSTATES  283

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,     2,     2,    49,    64,     2,
      50,    51,    47,    45,    53,    46,    60,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    57,    52,
      44,    54,    43,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    58,     2,    59,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    56,    62,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    18,
      22,    23,    25,    28,    31,    32,    34,    36,    40,    42,
      46,    48,    52,    54,    58,    60,    62,    64,    68,    73,
      75,    78,    82,    85,    86,    88,    89,    93,    95,    99,
     101,   105,   108,   110,   113,   115,   116,   118,   120,   125,
     130,   132,   138,   139,   141,   143,   147,   149,   152,   155,
     158,   161,   163,   165,   166,   168,   172,   175,   177,   181,
     185,   187,   189,   191,   193,   195,   197,   200,   202,   206,
     207,   210,   213,   215,   218,   219,   221,   223,   226,   229,
     230,   233,   239,   247,   253,   259,   267,   277,   282,   286,
     290,   294,   297,   300,   304,   306,   308,   310,   312,   314,
     316,   320,   322,   326,   327,   329,   331,   335,   337,   343,
     344,   346,   348,   350,   352,   354,   356,   358,   362,   364,
     368,   370,   374,   378,   380,   384,   388,   392,   396,   398,
     402,   406,   408,   412,   416,   420,   422,   425,   428,   431,
     434,   437,   440,   443,   446,   451,   456,   458,   463,   468,
     472,   476,   479,   482,   483,   485,   489,   491,   493
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      66,     0,    -1,    -1,    66,    67,    -1,   127,    -1,    98,
      -1,    39,    -1,    40,    -1,     1,    52,    -1,    70,    71,
      52,    -1,    -1,    70,    -1,    33,    69,    -1,    76,    69,
      -1,    -1,    72,    -1,    73,    -1,    72,    53,    73,    -1,
      85,    -1,    85,    54,    74,    -1,   114,    -1,    55,    75,
      56,    -1,    74,    -1,    75,    53,    74,    -1,    32,    -1,
      77,    -1,    36,    -1,    34,    35,    82,    -1,    34,    55,
      78,    56,    -1,    79,    -1,    78,    79,    -1,    80,    83,
      52,    -1,    76,    81,    -1,    -1,    80,    -1,    -1,    55,
      78,    56,    -1,    84,    -1,    83,    53,    84,    -1,    85,
      -1,    87,    57,   115,    -1,   105,    88,    -1,    88,    -1,
     105,    88,    -1,    88,    -1,    -1,    85,    -1,    35,    -1,
      88,    58,   116,    59,    -1,    88,    50,    90,    51,    -1,
      91,    -1,    91,    53,    60,    60,    60,    -1,    -1,    89,
      -1,    92,    -1,    91,    53,    92,    -1,    70,    -1,    70,
      86,    -1,    70,    94,    -1,    80,    95,    -1,   105,    96,
      -1,    96,    -1,   105,    -1,    -1,    94,    -1,    50,    94,
      51,    -1,    96,    97,    -1,    97,    -1,    58,   116,    59,
      -1,    50,    90,    51,    -1,   100,    -1,    99,    -1,   107,
      -1,   108,    -1,   110,    -1,   109,    -1,   112,    52,    -1,
      52,    -1,    55,   101,    56,    -1,    -1,   101,   102,    -1,
     101,   104,    -1,   127,    -1,   102,   127,    -1,    -1,   102,
      -1,    98,    -1,   104,    98,    -1,    47,   106,    -1,    -1,
      47,   106,    -1,    19,    50,   112,    51,    98,    -1,    19,
      50,   112,    51,    98,    20,    98,    -1,    21,    50,   112,
      51,    98,    -1,    22,    50,   112,    51,    98,    -1,    23,
      98,    22,    50,   112,    51,    52,    -1,    24,    50,   113,
      52,   113,    52,   113,    51,    98,    -1,    28,   115,    57,
      98,    -1,    29,    57,    98,    -1,    35,    57,    98,    -1,
      25,   113,    52,    -1,    27,    52,    -1,    26,    52,    -1,
      30,    35,    52,    -1,    35,    -1,     4,    -1,     3,    -1,
      38,    -1,     5,    -1,    31,    -1,    50,   112,    51,    -1,
     114,    -1,   112,    53,   114,    -1,    -1,   112,    -1,   115,
      -1,   124,   117,   114,    -1,   118,    -1,   118,    61,   112,
      57,   115,    -1,    -1,   115,    -1,    54,    -1,    14,    -1,
      15,    -1,    16,    -1,    17,    -1,   119,    -1,   118,     6,
     119,    -1,   120,    -1,   119,     7,   120,    -1,   121,    -1,
     120,     8,   121,    -1,   120,     9,   121,    -1,   122,    -1,
     121,    44,   122,    -1,   121,    43,   122,    -1,   121,    11,
     122,    -1,   121,    10,   122,    -1,   123,    -1,   122,    45,
     123,    -1,   122,    46,   123,    -1,   124,    -1,   123,    47,
     124,    -1,   123,    48,   124,    -1,   123,    49,   124,    -1,
     125,    -1,    12,   124,    -1,    13,   124,    -1,    46,   124,
      -1,    45,   124,    -1,    62,   124,    -1,    63,   124,    -1,
      64,   124,    -1,   105,   124,    -1,    37,    50,   124,    51,
      -1,    37,    50,    93,    51,    -1,   111,    -1,   125,    58,
     112,    59,    -1,   125,    50,   126,    51,    -1,   125,    60,
      35,    -1,   125,    18,    35,    -1,   125,    12,    -1,   125,
      13,    -1,    -1,   114,    -1,   126,    53,   114,    -1,   128,
      -1,    68,    -1,    70,    86,   103,   100,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   107,   110,   111,   112,   113,   114,   118,
     191,   192,   195,   196,   203,   204,   207,   208,   211,   212,
     215,   216,   219,   220,   223,   224,   225,   228,   229,   232,
     233,   236,   239,   242,   243,   246,   247,   250,   251,   254,
     255,   258,   279,   287,   296,   303,   304,   307,   308,   309,
     312,   313,   316,   320,   323,   324,   327,   328,   335,   338,
     341,   342,   343,   355,   356,   359,   360,   361,   364,   365,
     369,   370,   371,   372,   373,   374,   377,   378,   381,   384,
     385,   386,   389,   390,   393,   394,   397,   398,   401,   404,
     405,   408,   409,   410,   413,   414,   415,   418,   419,   420,
     423,   424,   425,   426,   430,   435,   441,   447,   452,   457,
     458,   461,   462,   465,   466,   469,   470,   473,   474,   477,
     478,   481,   482,   483,   484,   485,   488,   489,   492,   493,
     496,   497,   498,   501,   502,   503,   504,   505,   508,   509,
     510,   513,   514,   515,   516,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   532,   533,   534,   535,
     536,   537,   538,   541,   542,   543,   547,   548,   599
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
  "COMENTARIO_MULTIPLE", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'('", "')'", "';'", "','", "'='", "'{'", "'}'", "':'", "'['", "']'",
  "'.'", "'?'", "'~'", "'!'", "'&'", "$accept", "input", "line",
  "declaracion", "especDeclaracionBis", "especDeclaracion",
  "listaDeclaradoresBis", "listaDeclaradores", "declarador",
  "inicializador", "listaDeInicializadores", "especTipo",
  "especStructUnion", "listaDeclaracionesStruct", "declaracionStruct",
  "listaCalificadores", "listaCalificadoresBis", "opcionLista",
  "declaradoresStruct", "declaStruct", "decla1", "decla2", "declaBis",
  "declaradorDirecto", "listaTiposParametros", "listaTiposParametrosBis",
  "listaParametros", "declaracionParametro", "nombreTipo",
  "declaradorAbstracto", "declaradorAbstractoBis",
  "declaradorAbstractoDirecto", "opcionExpresion", "sentencia",
  "sentExpresion", "sentCompuesta", "decalracionOSentencia",
  "listaDeclaraciones", "listaDeclaracionesBis", "listaSentencias",
  "puntero", "punteroBis", "sentSeleccion", "sentIteracion",
  "sentEtiquetada", "sentSalto", "expPrimaria", "exp", "expOp",
  "expAsignacion", "expCondicional", "expCondicionalBis", "operAsignacion",
  "expOr", "expAnd", "expIgualdad", "expRelacional", "expAditiva",
  "expMultiplicativa", "expUnaria", "expSufijo", "listaArgumentos",
  "declaracionExterna", "definicionFuncion", 0
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
     295,   296,   297,    62,    60,    43,    45,    42,    47,    37,
      40,    41,    59,    44,    61,   123,   125,    58,    91,    93,
      46,    63,   126,    33,    38
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    67,    67,    67,    67,    67,    68,
      69,    69,    70,    70,    71,    71,    72,    72,    73,    73,
      74,    74,    75,    75,    76,    76,    76,    77,    77,    78,
      78,    79,    80,    81,    81,    82,    82,    83,    83,    84,
      84,    85,    85,    86,    86,    87,    87,    88,    88,    88,
      89,    89,    90,    90,    91,    91,    92,    92,    92,    93,
      94,    94,    94,    95,    95,    96,    96,    96,    97,    97,
      98,    98,    98,    98,    98,    98,    99,    99,   100,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   105,   106,
     106,   107,   107,   107,   108,   108,   108,   109,   109,   109,
     110,   110,   110,   110,   111,   111,   111,   111,   111,   111,
     111,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   117,   117,   117,   117,   117,   118,   118,   119,   119,
     120,   120,   120,   121,   121,   121,   121,   121,   122,   122,
     122,   123,   123,   123,   123,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   125,   125,   125,   125,
     125,   125,   125,   126,   126,   126,   127,   127,   128
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     2,     3,
       0,     1,     2,     2,     0,     1,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     3,     4,     1,
       2,     3,     2,     0,     1,     0,     3,     1,     3,     1,
       3,     2,     1,     2,     1,     0,     1,     1,     4,     4,
       1,     5,     0,     1,     1,     3,     1,     2,     2,     2,
       2,     1,     1,     0,     1,     3,     2,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     0,
       2,     2,     1,     2,     0,     1,     1,     2,     2,     0,
       2,     5,     7,     5,     5,     7,     9,     4,     3,     3,
       3,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     0,     1,     1,     3,     1,     5,     0,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     4,     1,     4,     4,     3,
       3,     2,     2,     0,     1,     3,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,   106,   105,   108,     0,     0,     0,
       0,     0,     0,     0,   113,     0,     0,     0,     0,     0,
     109,    24,    10,     0,   104,    26,     0,   107,     6,     7,
       0,     0,    89,     0,    77,    79,     0,     0,     0,     3,
     167,    14,    10,    25,     5,    71,    70,     0,    72,    73,
      75,    74,   156,     0,   111,   115,   117,   126,   128,   130,
     133,   138,   141,   145,     4,   166,     8,   104,   146,   147,
       0,     0,     0,     0,   113,   114,     0,   102,   101,     0,
     141,     0,     0,    12,    11,    35,     0,     0,     0,   149,
     148,    89,    88,     0,     0,   150,   151,   152,    47,     0,
      15,    16,    18,    84,    44,     0,    13,   153,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   124,   125,   121,     0,
     161,   162,     0,   163,     0,     0,     0,     0,     0,     0,
       0,   100,     0,    98,   103,     0,    27,    33,     0,    29,
      45,    99,    63,     0,     0,    90,   110,    78,    86,    80,
      81,    82,     9,     0,     0,    85,     0,    52,   119,    43,
     112,   127,     0,   129,   131,   132,   137,   136,   135,   134,
     139,   140,   142,   143,   144,   116,   160,   164,     0,     0,
     159,     0,     0,     0,     0,   113,    97,     0,    34,    32,
      28,    30,     0,    37,    39,     0,    42,     0,    52,   119,
      64,    59,    61,    67,    62,   155,   154,    83,    87,    17,
       0,    19,    20,   168,    56,    53,     0,    50,    54,   120,
       0,     0,   158,     0,   157,    91,    93,    94,     0,     0,
      36,    31,    45,     0,    41,     0,     0,     0,    52,    66,
      60,    22,     0,    57,    44,    58,    62,    49,     0,    48,
     118,   165,     0,     0,   113,    38,    40,    69,    65,    68,
       0,    21,    43,     0,    55,    92,    95,     0,    23,     0,
       0,    51,    96
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    39,    40,    83,    41,    99,   100,   101,   221,
     252,    42,    43,   148,   149,   150,   199,   146,   202,   203,
     102,   103,   205,   206,   225,   245,   227,   228,   153,   210,
     211,   212,   213,    44,    45,    46,    94,   159,   166,   160,
      47,    92,    48,    49,    50,    51,    52,    53,    76,    54,
      55,   230,   129,    56,    57,    58,    59,    60,    61,    62,
      63,   188,   161,    65
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -209
static const yytype_int16 yypact[] =
{
    -209,   251,  -209,   -27,  -209,  -209,  -209,   466,   466,   -20,
      24,    30,   358,    37,   466,    53,    56,   466,    42,    96,
    -209,  -209,   159,   -16,   120,  -209,   147,  -209,  -209,  -209,
     466,   466,   113,   466,  -209,  -209,   466,   466,   466,  -209,
    -209,    -9,   159,  -209,  -209,  -209,  -209,   466,  -209,  -209,
    -209,  -209,  -209,    86,  -209,  -209,     4,   194,   204,    13,
     169,   162,    81,    34,  -209,  -209,  -209,  -209,  -209,  -209,
     466,   466,   466,   183,   466,   154,   168,  -209,  -209,   167,
    -209,   358,   173,  -209,  -209,   171,   137,   358,   394,  -209,
    -209,   113,  -209,    20,   304,  -209,  -209,  -209,  -209,   177,
     178,  -209,   176,   159,   136,   197,  -209,  -209,  -209,   466,
     466,   466,   466,   466,   466,   466,   466,   466,   466,   466,
     466,   466,   466,   466,  -209,  -209,  -209,  -209,  -209,   466,
    -209,  -209,   199,   466,   466,   200,    51,   101,   104,   186,
     187,  -209,   358,  -209,  -209,   137,  -209,   137,    47,  -209,
      -9,  -209,    75,   190,   191,  -209,  -209,  -209,  -209,   159,
     358,  -209,  -209,    -9,   430,   159,   188,   159,   466,   150,
    -209,   194,    36,   204,    13,    13,   169,   169,   169,   169,
     162,   162,  -209,  -209,  -209,  -209,  -209,  -209,   110,     5,
    -209,   358,   358,   358,   466,   466,  -209,   100,  -209,  -209,
    -209,  -209,   166,  -209,   181,   189,   -18,   197,   117,   466,
    -209,  -209,    18,  -209,    28,  -209,  -209,  -209,  -209,  -209,
     430,  -209,  -209,  -209,   112,  -209,   193,   192,  -209,  -209,
     198,   466,  -209,   466,  -209,   227,  -209,  -209,   123,   196,
    -209,  -209,    -9,   466,   -18,   207,   208,   201,   159,  -209,
      18,  -209,    -8,  -209,   -18,  -209,    71,  -209,    17,  -209,
    -209,  -209,   358,   209,   466,  -209,  -209,  -209,  -209,  -209,
     430,  -209,   -18,   202,  -209,  -209,  -209,   214,  -209,   206,
     358,  -209,  -209
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -209,  -209,  -209,  -209,   225,   -21,  -209,  -209,   106,  -208,
    -209,   -57,  -209,   126,  -130,   -77,  -209,  -209,  -209,    50,
    -141,    25,  -209,   -39,  -209,   127,  -209,    35,  -209,  -188,
    -209,  -201,  -196,   -12,  -209,   129,  -209,   215,  -209,  -209,
     -26,   211,  -209,  -209,  -209,  -209,  -209,   -11,   -68,   -92,
     -10,    90,  -209,  -209,   195,   210,   -71,    27,   103,    -3,
    -209,  -209,     7,  -209
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -47
static const yytype_int16 yytable[] =
{
      73,    84,   104,    75,    68,    69,   140,    79,    64,   204,
     110,   152,   251,   250,    80,   105,   249,   170,   201,    85,
     246,    84,    93,   115,   116,    66,    98,    89,    90,   147,
      70,   147,   167,    95,    96,    97,   255,   185,    32,    86,
     168,   187,   174,   175,   107,   270,   130,   131,   271,    21,
      22,    23,   132,    25,   249,   250,   117,   118,   109,   136,
     137,   138,   278,    75,   234,   111,   169,   201,   248,   143,
     198,   156,   222,   109,    71,   151,   209,   273,   208,    21,
      72,    23,   158,    25,   133,   154,   209,    74,   147,   109,
     147,   147,   134,   231,   135,   124,   125,   126,   127,    81,
     172,   204,   191,   200,   109,    77,    98,    80,    78,    80,
      80,    80,    80,    80,    80,    80,    80,    80,   182,   183,
     184,   208,    32,   189,   207,   208,   214,   239,   222,   209,
     196,    82,    21,   209,    23,   128,    25,   207,   108,   109,
     147,   261,   176,   177,   178,   179,   224,    98,   218,    21,
      22,    23,   192,    25,   109,   193,   240,   109,   229,    32,
      91,   232,   208,   233,    32,    80,   217,   208,   244,    21,
     209,    23,   217,    25,   263,   209,   109,    87,   222,   235,
     236,   237,   214,   238,    75,   254,   167,   224,   -42,   -42,
     -42,    21,    22,    23,   168,    25,   277,    88,   256,   229,
     167,   112,   -41,   -41,   -41,   139,    80,   109,   168,   121,
     122,   123,   113,   114,   119,   120,   207,   272,   241,   242,
     141,   260,   180,   181,   142,   144,   145,   224,    80,   162,
     164,   163,    98,   266,   186,   190,   194,   224,   -46,   195,
      80,   215,   216,    35,   257,   258,   243,   262,   264,   253,
     275,     2,     3,    75,     4,     5,     6,   259,   267,   268,
     269,   276,   279,     7,     8,   280,   281,   106,   282,   219,
       9,   197,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,   265,   274,   226,   223,    30,    31,    32,   247,
       0,    33,   155,    34,     0,   171,    35,     4,     5,     6,
       0,     0,     0,    36,    37,    38,     7,     8,   165,     0,
       0,     0,   173,     9,     0,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     0,     0,     0,     0,     0,    30,
      31,    32,     0,     0,    33,     0,    34,     0,     0,    35,
     157,     4,     5,     6,     0,     0,    36,    37,    38,     0,
       7,     8,     0,     0,     0,     0,     0,     9,     0,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,    24,     0,    26,    27,     4,     5,     6,
       0,     0,     0,    30,    31,    32,     7,     8,    33,     0,
      34,     0,     0,    35,     0,     0,     0,     0,     0,     0,
      36,    37,    38,     0,     0,    20,    21,     0,    23,    67,
      25,    26,    27,     4,     5,     6,     0,     0,     0,    30,
      31,    32,     7,     8,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,    37,    38,     0,
       0,    20,     0,     0,     0,    67,     0,    26,    27,     4,
       5,     6,     0,     0,     0,    30,    31,    32,     7,     8,
      33,     0,     0,     0,     0,   220,     0,     0,     0,     0,
       0,     0,    36,    37,    38,     0,     0,    20,     0,     0,
       0,    67,     0,    26,    27,     0,     0,     0,     0,     0,
       0,    30,    31,    32,     0,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,    37,
      38
};

static const yytype_int16 yycheck[] =
{
      12,    22,    41,    14,     7,     8,    74,    17,     1,   150,
       6,    88,   220,   214,    17,    41,   212,   109,   148,    35,
     208,    42,    33,    10,    11,    52,    35,    30,    31,    86,
      50,    88,    50,    36,    37,    38,   224,   129,    47,    55,
      58,   133,   113,   114,    47,    53,    12,    13,    56,    32,
      33,    34,    18,    36,   250,   256,    43,    44,    53,    70,
      71,    72,   270,    74,    59,    61,   105,   197,    50,    81,
     147,    51,   164,    53,    50,    87,    58,    60,    50,    32,
      50,    34,    94,    36,    50,    88,    58,    50,   145,    53,
     147,   148,    58,    57,    60,    14,    15,    16,    17,    57,
     111,   242,    51,    56,    53,    52,    35,   110,    52,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    50,    47,   134,   150,    50,   152,   195,   220,    58,
     142,    35,    32,    58,    34,    54,    36,   163,    52,    53,
     197,   233,   115,   116,   117,   118,   167,    35,   160,    32,
      33,    34,    51,    36,    53,    51,    56,    53,   168,    47,
      47,    51,    50,    53,    47,   168,   159,    50,   207,    32,
      58,    34,   165,    36,    51,    58,    53,    57,   270,   191,
     192,   193,   208,   194,   195,   224,    50,   208,    52,    53,
      54,    32,    33,    34,    58,    36,   264,    50,   224,   209,
      50,     7,    52,    53,    54,    22,   209,    53,    58,    47,
      48,    49,     8,     9,    45,    46,   242,   256,    52,    53,
      52,   231,   119,   120,    57,    52,    55,   248,   231,    52,
      54,    53,    35,   243,    35,    35,    50,   258,    57,    52,
     243,    51,    51,    55,    51,    53,    57,    20,    52,   224,
     262,     0,     1,   264,     3,     4,     5,    59,    51,    51,
      59,    52,    60,    12,    13,    51,    60,    42,   280,   163,
      19,   145,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,   242,   258,   167,   166,    45,    46,    47,   209,
      -1,    50,    91,    52,    -1,   110,    55,     3,     4,     5,
      -1,    -1,    -1,    62,    63,    64,    12,    13,   103,    -1,
      -1,    -1,   112,    19,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    50,    -1,    52,    -1,    -1,    55,
      56,     3,     4,     5,    -1,    -1,    62,    63,    64,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    35,    -1,    37,    38,     3,     4,     5,
      -1,    -1,    -1,    45,    46,    47,    12,    13,    50,    -1,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    64,    -1,    -1,    31,    32,    -1,    34,    35,
      36,    37,    38,     3,     4,     5,    -1,    -1,    -1,    45,
      46,    47,    12,    13,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    -1,
      -1,    31,    -1,    -1,    -1,    35,    -1,    37,    38,     3,
       4,     5,    -1,    -1,    -1,    45,    46,    47,    12,    13,
      50,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    -1,    -1,    31,    -1,    -1,
      -1,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    66,     0,     1,     3,     4,     5,    12,    13,    19,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      45,    46,    47,    50,    52,    55,    62,    63,    64,    67,
      68,    70,    76,    77,    98,    99,   100,   105,   107,   108,
     109,   110,   111,   112,   114,   115,   118,   119,   120,   121,
     122,   123,   124,   125,   127,   128,    52,    35,   124,   124,
      50,    50,    50,    98,    50,   112,   113,    52,    52,   115,
     124,    57,    35,    69,    70,    35,    55,    57,    50,   124,
     124,    47,   106,   112,   101,   124,   124,   124,    35,    71,
      72,    73,    85,    86,    88,   105,    69,   124,    52,    53,
       6,    61,     7,     8,     9,    10,    11,    43,    44,    45,
      46,    47,    48,    49,    14,    15,    16,    17,    54,   117,
      12,    13,    18,    50,    58,    60,   112,   112,   112,    22,
     113,    52,    57,    98,    52,    55,    82,    76,    78,    79,
      80,    98,    80,    93,   124,   106,    51,    56,    98,   102,
     104,   127,    52,    53,    54,   102,   103,    50,    58,    88,
     114,   119,   112,   120,   121,   121,   122,   122,   122,   122,
     123,   123,   124,   124,   124,   114,    35,   114,   126,   112,
      35,    51,    51,    51,    50,    52,    98,    78,    80,    81,
      56,    79,    83,    84,    85,    87,    88,   105,    50,    58,
      94,    95,    96,    97,   105,    51,    51,   127,    98,    73,
      55,    74,   114,   100,    70,    89,    90,    91,    92,   115,
     116,    57,    51,    53,    59,    98,    98,    98,   112,   113,
      56,    52,    53,    57,    88,    90,    94,   116,    50,    97,
      96,    74,    75,    86,    88,    94,   105,    51,    53,    59,
     115,   114,    20,    51,    52,    84,   115,    51,    51,    59,
      53,    56,    88,    60,    92,    98,    52,   113,    74,    60,
      51,    60,    98
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
        case 8:

/* Line 1455 of yacc.c  */
#line 114 "ejemplo.y"
    {agregarError(&errores,"Error Sintactico",yylineno);;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 118 "ejemplo.y"
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

  case 13:

/* Line 1455 of yacc.c  */
#line 196 "ejemplo.y"
    {
                                                       tipoDatoFuncion = (char*)malloc(strlen(tipoDato));
                                                       if(strcmp(tipoDato,"")) strcpy(tipoDatoFuncion, tipoDato);
                                                       tipoDato = strdup((yyvsp[(1) - (2)].cval));
                                                  ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 207 "ejemplo.y"
    {cantidad = 1; ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 208 "ejemplo.y"
    {cantidad = 2;;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 211 "ejemplo.y"
    { tipDecla = 1; ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 212 "ejemplo.y"
    {   tipDecla = 2; ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 216 "ejemplo.y"
    {flagArray = 1;;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 258 "ejemplo.y"
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

  case 42:

/* Line 1455 of yacc.c  */
#line 279 "ejemplo.y"
    {
                              if(tip!=3){
                                   variable[contadorVariables] = strdup((yyvsp[(1) - (1)].cval)); 
                                   contadorVariables++;
                              }
                         ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 287 "ejemplo.y"
    {
                                        tipoDatoPuntero = (char*)realloc(tipoDatoPuntero, cantidadPuntero);
                                        while(cantidadPuntero!=0){
                                             strcat(tipoDatoPuntero, "*");
                                             cantidadPuntero--;
                                        }
                                        nombre = strdup((yyvsp[(2) - (2)].cval));

                                   ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 296 "ejemplo.y"
    {
                              tipoDatoPuntero = (char*)malloc(strlen(""));
                              strcpy(tipoDatoPuntero, ""); 
                              nombre = strdup((yyvsp[(1) - (1)].cval));
                         ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 307 "ejemplo.y"
    {tip = 1;;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 308 "ejemplo.y"
    {tip = 2;;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 309 "ejemplo.y"
    {tip = 3;;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 316 "ejemplo.y"
    {
                              tipoDatoFuncion = (char*)malloc(strlen(tipoDato));
                              strcpy(tipoDatoFuncion, tipoDato);
                         ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 323 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 324 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 327 "ejemplo.y"
    {agregarParametro(&listaParametros, "-", (yyvsp[(1) - (1)].cval),yylineno); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 328 "ejemplo.y"
    {
                                                  char* aux = (char*)malloc(strlen((yyvsp[(1) - (2)].cval))+strlen(tipoDatoPuntero));
                                                  strcpy(aux, (yyvsp[(1) - (2)].cval));
                                                  strcat(aux, tipoDatoPuntero);
                                                  agregarParametro(&listaParametros, nombre, aux,yylineno);
                                                  cantidadPuntero = 0;
                                             ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 343 "ejemplo.y"
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

  case 78:

/* Line 1455 of yacc.c  */
#line 381 "ejemplo.y"
    {/*printf("Se encontro una Sentencia Compuesta. \n");*/ ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 401 "ejemplo.y"
    {cantidadPuntero++;;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 405 "ejemplo.y"
    {cantidadPuntero++;;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 408 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Seleccion IF.\n");*/ ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 409 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Seleccion IF/ELSE.\n");*/ ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 410 "ejemplo.y"
    {/*printf("Se enconto una Sentencia de Seleccion SWITCH.\n");*/ ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 413 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion WHILE.\n");*/ ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 414 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion DO WHILE.\n");*/ ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 415 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion FOR.\n");*/ ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 418 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Etiqueta CASE.\n");*/ ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 419 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Etiqueta DEFAULT.\n");*/ ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 423 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto RETURN. \n"); */;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 424 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto BREAK.\n"); */;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 425 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto CONTINUE.\n"); */;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 426 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto GOTO. \n"); */;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 430 "ejemplo.y"
    {
                                   tipoParametroInvocacion = tipoInicializador = tipoVariable(tabla,(yyvsp[(1) - (1)].cval)); 
                                   variableExpresion[contadorVariableExpresion] = strdup(tipoVariable(tabla,(yyvsp[(1) - (1)].cval)));
                                   contadorVariableExpresion++;
                              ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 435 "ejemplo.y"
    {
                                   (yyval.dval) = (yyvsp[(1) - (1)].ival); 
                                   tipoParametroInvocacion = tipoInicializador = "int"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("int");
                                   contadorVariableExpresion++;
                              ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 441 "ejemplo.y"
    {
                                   (yyval.dval) = (yyvsp[(1) - (1)].dval); 
                                   tipoParametroInvocacion = tipoInicializador = "double"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("double");
                                   contadorVariableExpresion++;
                              ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 447 "ejemplo.y"
    {
                                   tipoParametroInvocacion = tipoInicializador = "char"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("char");
                                   contadorVariableExpresion++;
                              ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 452 "ejemplo.y"
    {
                                   tipoParametroInvocacion = "char*"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("char*");
                                   contadorVariableExpresion++;
                              ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 458 "ejemplo.y"
    {(yyval.dval) = ( (yyvsp[(2) - (3)].dval) ); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 470 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(3) - (3)].dval); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 474 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 489 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) || (yyvsp[(3) - (3)].dval); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 493 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) && (yyvsp[(3) - (3)].dval); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 497 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 498 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 502 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 503 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 504 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) <= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 505 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 509 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); flagOperacionBinaria = 1;;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 510 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); flagOperacionBinaria = 2; ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 514 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval);  flagOperacionBinaria = 3;;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 515 "ejemplo.y"
    {if((yyvsp[(3) - (3)].dval) == 0) {agregarError(&errores,"ERROR/: No se puede dividir por 0",yylineno);} else {(yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval);  flagOperacionBinaria = 4;};}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 516 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].ival) % (yyvsp[(3) - (3)].ival); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 520 "ejemplo.y"
    {(yyval.dval) = ++ (yyvsp[(2) - (2)].dval); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 521 "ejemplo.y"
    {(yyval.dval) = -- (yyvsp[(2) - (2)].dval); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 522 "ejemplo.y"
    {(yyval.dval) = - (yyvsp[(2) - (2)].dval); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 523 "ejemplo.y"
    {(yyval.dval) = + (yyvsp[(2) - (2)].dval); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 524 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 525 "ejemplo.y"
    {(yyval.dval) = ! (yyvsp[(2) - (2)].dval); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 526 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 527 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 528 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 529 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 533 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 534 "ejemplo.y"
    {(yyval.dval) = 0; validarInvocacion(tabla,(yyvsp[(1) - (4)].cval),parametrosInvocacion,yylineno); parametrosInvocacion = NULL; tipoInicializador = tipoFuncion(tabla,(yyvsp[(1) - (4)].cval)); contadorVariableExpresion = 0;;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 535 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 536 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 537 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) ++; ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 538 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) --; ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 542 "ejemplo.y"
    {agregarNodo(&parametrosInvocacion,tipoParametroInvocacion);;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 543 "ejemplo.y"
    {agregarNodo(&parametrosInvocacion,tipoParametroInvocacion);;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 547 "ejemplo.y"
    {/*printf("Se define la funcion %s con %d parametros y devolucion de tipo %s  \n",nombre,contadorParametros,tipoDato); contadorParametros = 0;*/ agregarFuncion(&tabla.listaFuncionesDeclaradas, &tabla.listaFuncionesDefinidas,nombre,tipoDatoFuncion,&listaParametros,yylineno, 1); contadorParametros = 0; listaParametros = NULL; cantidadPuntero = 0;;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 548 "ejemplo.y"
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

  case 168:

/* Line 1455 of yacc.c  */
#line 599 "ejemplo.y"
    {nombre = (yyvsp[(2) - (4)].cval);;}
    break;



/* Line 1455 of yacc.c  */
#line 2492 "ejemplo.tab.c"
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
#line 603 "ejemplo.y"
 

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
