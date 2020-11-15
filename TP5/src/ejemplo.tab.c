
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
char* tipoDatoFuncion;
char* tipoDatoPuntero;
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
char flagReturn = 0;
char flagFuncion = 0;

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
#line 127 "ejemplo.tab.c"

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
     SIZEOF = 291,
     CTE_CARACTER = 292,
     INCLUDE = 293,
     DEFINE = 294,
     COMENTARIO_SIMPLE = 295,
     COMENTARIO_MULTIPLE = 296
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 54 "ejemplo.y"

  int ival;
  double dval;
  char cval[1000];



/* Line 214 of yacc.c  */
#line 212 "ejemplo.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 224 "ejemplo.tab.c"

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
#define YYLAST   547

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
/* YYNRULES -- Number of states.  */
#define YYNSTATES  310

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      51,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,     2,     2,    48,    64,     2,
      49,    50,    46,    44,    53,    45,    60,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    57,    52,
      43,    54,    42,    61,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    13,    16,    19,    22,
      25,    29,    30,    33,    38,    39,    41,    44,    47,    48,
      50,    52,    56,    58,    62,    64,    68,    70,    74,    76,
      78,    82,    87,    89,    92,    97,   100,   101,   103,   104,
     108,   110,   114,   116,   120,   123,   125,   128,   130,   131,
     133,   135,   140,   141,   147,   149,   155,   156,   158,   160,
     164,   166,   169,   172,   175,   178,   180,   182,   183,   185,
     189,   192,   194,   198,   202,   204,   206,   208,   210,   212,
     214,   218,   221,   228,   229,   232,   235,   237,   240,   241,
     243,   245,   248,   251,   252,   255,   261,   269,   275,   281,
     290,   301,   307,   312,   316,   321,   325,   329,   334,   336,
     338,   340,   342,   344,   346,   350,   352,   356,   357,   359,
     361,   365,   367,   373,   374,   376,   378,   380,   382,   384,
     386,   388,   392,   394,   398,   400,   404,   408,   410,   414,
     418,   422,   426,   428,   432,   436,   438,   442,   446,   450,
     452,   455,   458,   461,   464,   467,   470,   473,   476,   481,
     486,   488,   493,   498,   502,   506,   509,   512,   513,   515,
     519,   521,   523,   524
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      66,     0,    -1,    69,    -1,    66,    67,    -1,    51,    -1,
     130,    69,    -1,   101,    69,    -1,    38,    51,    -1,    68,
      51,    -1,     1,    51,    -1,    39,    35,   114,    -1,    -1,
      51,    69,    -1,    72,    73,    52,    69,    -1,    -1,    72,
      -1,    33,    71,    -1,    78,    71,    -1,    -1,    74,    -1,
      75,    -1,    74,    53,    75,    -1,    87,    -1,    87,    54,
      76,    -1,   117,    -1,    55,    77,    56,    -1,    76,    -1,
      77,    53,    76,    -1,    32,    -1,    79,    -1,    34,    35,
      84,    -1,    34,    55,    80,    56,    -1,    81,    -1,    80,
      81,    -1,    82,    85,    52,    69,    -1,    78,    83,    -1,
      -1,    82,    -1,    -1,    55,    80,    56,    -1,    86,    -1,
      85,    53,    86,    -1,    87,    -1,    89,    57,   118,    -1,
     108,    90,    -1,    90,    -1,   108,    90,    -1,    90,    -1,
      -1,    87,    -1,    35,    -1,    90,    58,   119,    59,    -1,
      -1,    90,    91,    49,    93,    50,    -1,    94,    -1,    94,
      53,    60,    60,    60,    -1,    -1,    92,    -1,    95,    -1,
      94,    53,    95,    -1,    72,    -1,    72,    88,    -1,    72,
      97,    -1,    82,    98,    -1,   108,    99,    -1,    99,    -1,
     108,    -1,    -1,    97,    -1,    49,    97,    50,    -1,    99,
     100,    -1,   100,    -1,    58,   119,    59,    -1,    49,    93,
      50,    -1,   103,    -1,   102,    -1,   110,    -1,   111,    -1,
     113,    -1,   112,    -1,   115,    52,    69,    -1,    52,    69,
      -1,    55,    69,   104,    69,    56,    69,    -1,    -1,   104,
     105,    -1,   104,   107,    -1,   130,    -1,   105,   130,    -1,
      -1,   105,    -1,   101,    -1,   107,   101,    -1,    46,   109,
      -1,    -1,    46,   109,    -1,    19,    49,   115,    50,   101,
      -1,    19,    49,   115,    50,   101,    20,   101,    -1,    21,
      49,   115,    50,   101,    -1,    22,    49,   115,    50,   101,
      -1,    23,   101,    22,    49,   115,    50,    52,    69,    -1,
      24,    49,   116,    52,   116,    52,   116,    50,    69,   101,
      -1,    28,   118,    57,    69,   101,    -1,    29,    57,    69,
     101,    -1,    35,    57,   101,    -1,    25,   116,    52,    69,
      -1,    27,    52,    69,    -1,    26,    52,    69,    -1,    30,
      35,    52,    69,    -1,    35,    -1,     4,    -1,     3,    -1,
      37,    -1,     5,    -1,    31,    -1,    49,   115,    50,    -1,
     117,    -1,   115,    53,   117,    -1,    -1,   115,    -1,   118,
      -1,   127,   120,   117,    -1,   121,    -1,   121,    61,   115,
      57,   118,    -1,    -1,   118,    -1,    54,    -1,    14,    -1,
      15,    -1,    16,    -1,    17,    -1,   122,    -1,   121,     6,
     122,    -1,   123,    -1,   122,     7,   123,    -1,   124,    -1,
     123,     8,   124,    -1,   123,     9,   124,    -1,   125,    -1,
     124,    43,   125,    -1,   124,    42,   125,    -1,   124,    11,
     125,    -1,   124,    10,   125,    -1,   126,    -1,   125,    44,
     126,    -1,   125,    45,   126,    -1,   127,    -1,   126,    46,
     127,    -1,   126,    47,   127,    -1,   126,    48,   127,    -1,
     128,    -1,    12,   127,    -1,    13,   127,    -1,    45,   127,
      -1,    44,   127,    -1,    62,   127,    -1,    63,   127,    -1,
      64,   127,    -1,   108,   127,    -1,    36,    49,   127,    50,
      -1,    36,    49,    96,    50,    -1,   114,    -1,   128,    58,
     115,    59,    -1,   128,    49,   129,    50,    -1,   128,    60,
      35,    -1,   128,    18,    35,    -1,   128,    12,    -1,   128,
      13,    -1,    -1,   117,    -1,   129,    53,   117,    -1,   131,
      -1,    70,    -1,    -1,    72,    88,   132,   106,   103,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   112,   112,   113,   116,   117,   118,   119,   120,   121,
     124,   127,   128,   132,   199,   200,   203,   204,   215,   216,
     219,   220,   223,   224,   227,   228,   231,   232,   235,   236,
     239,   240,   243,   244,   247,   250,   253,   254,   257,   258,
     261,   262,   265,   266,   269,   291,   300,   309,   316,   317,
     320,   321,   322,   322,   325,   326,   329,   333,   336,   337,
     340,   341,   348,   351,   354,   355,   356,   368,   369,   372,
     373,   374,   377,   378,   382,   383,   384,   385,   386,   387,
     390,   391,   394,   397,   398,   399,   402,   403,   406,   407,
     410,   411,   414,   417,   418,   421,   422,   423,   426,   427,
     428,   431,   432,   433,   436,   458,   459,   460,   464,   470,
     477,   484,   490,   496,   497,   500,   501,   504,   505,   508,
     509,   512,   513,   516,   517,   520,   521,   522,   523,   524,
     527,   528,   531,   532,   535,   536,   537,   540,   541,   542,
     543,   544,   547,   548,   549,   552,   553,   554,   555,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
     571,   572,   573,   574,   575,   576,   577,   580,   581,   582,
     586,   587,   640,   640
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
  "CLASE_ALMACENAMIENTO", "STRUCT_UNION", "ID", "SIZEOF", "CTE_CARACTER",
  "INCLUDE", "DEFINE", "COMENTARIO_SIMPLE", "COMENTARIO_MULTIPLE", "'>'",
  "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "')'", "'\\n'", "';'",
  "','", "'='", "'{'", "'}'", "':'", "'['", "']'", "'.'", "'?'", "'~'",
  "'!'", "'&'", "$accept", "input", "line", "lineaControl", "opcionBarraN",
  "declaracion", "especDeclaracionBis", "especDeclaracion",
  "listaDeclaradoresBis", "listaDeclaradores", "declarador",
  "inicializador", "listaDeInicializadores", "especTipo",
  "especStructUnion", "listaDeclaracionesStruct", "declaracionStruct",
  "listaCalificadores", "listaCalificadoresBis", "opcionLista",
  "declaradoresStruct", "declaStruct", "decla1", "decla2", "declaBis",
  "declaradorDirecto", "$@1", "listaTiposParametros",
  "listaTiposParametrosBis", "listaParametros", "declaracionParametro",
  "nombreTipo", "declaradorAbstracto", "declaradorAbstractoBis",
  "declaradorAbstractoDirecto", "opcionExpresion", "sentencia",
  "sentExpresion", "sentCompuesta", "decalracionOSentencia",
  "listaDeclaraciones", "listaDeclaracionesBis", "listaSentencias",
  "puntero", "punteroBis", "sentSeleccion", "sentIteracion",
  "sentEtiquetada", "sentSalto", "expPrimaria", "exp", "expOp",
  "expAsignacion", "expCondicional", "expCondicionalBis", "operAsignacion",
  "expOr", "expAnd", "expIgualdad", "expRelacional", "expAditiva",
  "expMultiplicativa", "expUnaria", "expSufijo", "listaArgumentos",
  "declaracionExterna", "definicionFuncion", "$@2", 0
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
     295,   296,    62,    60,    43,    45,    42,    47,    37,    40,
      41,    10,    59,    44,    61,   123,   125,    58,    91,    93,
      46,    63,   126,    33,    38
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    67,    67,    67,    67,    67,    67,
      68,    69,    69,    70,    71,    71,    72,    72,    73,    73,
      74,    74,    75,    75,    76,    76,    77,    77,    78,    78,
      79,    79,    80,    80,    81,    82,    83,    83,    84,    84,
      85,    85,    86,    86,    87,    87,    88,    88,    89,    89,
      90,    90,    91,    90,    92,    92,    93,    93,    94,    94,
      95,    95,    95,    96,    97,    97,    97,    98,    98,    99,
      99,    99,   100,   100,   101,   101,   101,   101,   101,   101,
     102,   102,   103,   104,   104,   104,   105,   105,   106,   106,
     107,   107,   108,   109,   109,   110,   110,   110,   111,   111,
     111,   112,   112,   112,   113,   113,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   115,   115,   116,   116,   117,
     117,   118,   118,   119,   119,   120,   120,   120,   120,   120,
     121,   121,   122,   122,   123,   123,   123,   124,   124,   124,
     124,   124,   125,   125,   125,   126,   126,   126,   126,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     128,   128,   128,   128,   128,   128,   128,   129,   129,   129,
     130,   130,   132,   131
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     2,     2,
       3,     0,     2,     4,     0,     1,     2,     2,     0,     1,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       3,     4,     1,     2,     4,     2,     0,     1,     0,     3,
       1,     3,     1,     3,     2,     1,     2,     1,     0,     1,
       1,     4,     0,     5,     1,     5,     0,     1,     1,     3,
       1,     2,     2,     2,     2,     1,     1,     0,     1,     3,
       2,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       3,     2,     6,     0,     2,     2,     1,     2,     0,     1,
       1,     2,     2,     0,     2,     5,     7,     5,     5,     8,
      10,     5,     4,     3,     4,     3,     3,     4,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     0,     1,     1,
       3,     1,     5,     0,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     4,     4,
       1,     4,     4,     3,     3,     2,     2,     0,     1,     3,
       1,     1,     0,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      11,    11,     0,     2,    12,     1,     0,   110,   109,   112,
       0,     0,     0,     0,     0,     0,     0,   117,     0,     0,
       0,     0,     0,   113,    28,    14,     0,   108,     0,   111,
       0,     0,     0,     0,    93,     0,     4,    11,    11,     0,
       0,     0,     3,     0,   171,    18,    14,    29,    11,    75,
      74,     0,    76,    77,    79,    78,   160,     0,   115,   119,
     121,   130,   132,   134,   137,   142,   145,   149,    11,   170,
       9,   108,   150,   151,     0,     0,     0,     0,   117,   118,
       0,    11,    11,     0,   145,    11,     0,    16,    15,    38,
       0,     0,     0,     7,     0,   153,   152,    93,    92,     0,
      81,    83,   154,   155,   156,     8,    50,     0,    19,    20,
      22,   172,    47,     0,    17,     6,   157,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,   127,   128,   129,   125,     0,   165,
     166,     0,   167,     0,     0,     5,     0,     0,     0,     0,
       0,    11,   106,   105,    11,     0,    11,     0,    30,    36,
       0,    32,    48,   103,    67,     0,     0,    10,    94,   114,
      11,    11,     0,     0,    88,   123,     0,    46,    80,   116,
     131,     0,   133,   135,   136,   141,   140,   139,   138,   143,
     144,   146,   147,   148,   120,   164,   168,     0,     0,   163,
       0,     0,     0,     0,   117,   104,     0,   102,   107,     0,
      37,    35,    31,    33,     0,    40,    42,     0,    45,     0,
      56,   123,    68,    63,    65,    71,    66,   159,   158,     0,
      90,    84,    85,    86,    13,    21,     0,    23,    24,    89,
       0,   124,     0,    56,     0,   162,     0,   161,    95,    97,
      98,     0,     0,   101,    39,    11,    48,     0,    44,    60,
      57,     0,    54,    58,     0,     0,    56,    70,    64,    11,
      87,    91,    26,     0,   173,    51,     0,   122,   169,     0,
       0,   117,    34,    41,    43,    61,    47,    62,    66,    73,
       0,    69,    72,    82,     0,    25,    53,    96,    11,     0,
      46,     0,    59,    27,    99,    11,     0,     0,    55,   100
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    42,    43,     3,    44,    87,    45,   107,   108,
     109,   237,   273,    46,    47,   160,   161,   162,   211,   158,
     214,   215,   110,   111,   217,   218,   176,   260,   261,   262,
     263,   165,   222,   223,   224,   225,    48,    49,    50,   170,
     231,   240,   232,    51,    98,    52,    53,    54,    55,    56,
      57,    80,    58,    59,   242,   138,    60,    61,    62,    63,
      64,    65,    66,    67,   197,   233,    69,   174
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -223
static const yytype_int16 yypact[] =
{
     -32,   -32,   286,  -223,  -223,  -223,     1,  -223,  -223,  -223,
     483,   483,    42,    48,    60,   392,    68,   483,   -17,    -9,
     483,   -12,    23,  -223,  -223,   150,   -13,    79,   109,  -223,
     100,   160,   483,   483,   132,   483,  -223,   -32,   -32,   483,
     483,   483,  -223,   148,  -223,    -8,   150,  -223,   -32,  -223,
    -223,   483,  -223,  -223,  -223,  -223,  -223,    94,  -223,  -223,
       9,   197,   165,   102,   185,   143,    89,    41,   -32,  -223,
    -223,  -223,  -223,  -223,   483,   483,   483,   202,   483,   174,
     179,   -32,   -32,   183,  -223,   -32,   181,  -223,  -223,   190,
     176,   392,   427,  -223,    26,  -223,  -223,   132,  -223,   112,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,   198,   196,  -223,
     199,  -223,   127,   216,  -223,  -223,  -223,   -32,   483,   483,
     483,   483,   483,   483,   483,   483,   483,   483,   483,   483,
     483,   483,   483,  -223,  -223,  -223,  -223,  -223,   483,  -223,
    -223,   217,   483,   483,   220,  -223,   118,   156,   166,   207,
     206,   -32,  -223,  -223,   -32,   392,   -32,   176,  -223,   176,
      -6,  -223,    -8,  -223,   108,   209,   210,  -223,  -223,  -223,
     339,   -32,    -8,   462,   150,   483,   212,   149,  -223,  -223,
     197,    61,   165,   102,   102,   185,   185,   185,   185,   143,
     143,  -223,  -223,  -223,  -223,  -223,  -223,   172,    -4,  -223,
     392,   392,   392,   483,   483,  -223,   392,  -223,  -223,   105,
    -223,  -223,  -223,  -223,   184,  -223,   205,   213,    24,   216,
      62,   483,  -223,  -223,    44,  -223,    49,  -223,  -223,   208,
    -223,   150,   392,  -223,  -223,  -223,   462,  -223,  -223,   150,
     211,  -223,   204,   150,   483,  -223,   483,  -223,   249,  -223,
    -223,   173,   221,  -223,  -223,   -32,    -8,   483,    24,   114,
    -223,   222,   223,  -223,   224,   218,   150,  -223,    44,   -32,
    -223,  -223,  -223,   111,  -223,  -223,   225,  -223,  -223,   392,
     226,   483,  -223,  -223,  -223,  -223,    24,  -223,    11,  -223,
      55,  -223,  -223,  -223,   462,  -223,  -223,  -223,   -32,   229,
      24,   228,  -223,  -223,  -223,   -32,   232,   392,  -223,  -223
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -223,  -223,  -223,  -223,    -1,  -223,   234,   -23,  -223,  -223,
     110,  -222,  -223,   -74,  -223,   124,  -147,   -83,  -223,  -223,
    -223,    27,  -156,    25,  -223,   -42,  -223,  -223,    51,  -223,
      -5,  -223,  -203,  -223,  -214,  -190,   -14,  -223,    56,  -223,
     121,  -223,  -223,   -24,   203,  -223,  -223,  -223,  -223,   233,
     -10,   -70,   -94,   -16,    80,  -223,  -223,   187,   182,   116,
      88,   119,     0,  -223,  -223,     3,  -223,  -223
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -53
static const yytype_int16 yytable[] =
{
       4,    77,    88,   112,    83,    68,   216,    79,   150,   164,
      72,    73,   268,   213,   272,   119,   159,   264,   159,     1,
      84,   113,    89,    88,   179,    99,    24,   106,    26,     7,
       8,     9,    95,    96,   267,    81,   100,   101,    34,   102,
     103,   104,    90,    82,   194,    85,   106,   115,   196,   118,
     212,   116,    70,   139,   140,   247,   287,    23,    86,   141,
     220,    71,   213,    29,   146,   147,   148,   145,    79,   221,
     120,   177,   303,   -52,   268,    35,   210,   163,   267,   238,
     152,   153,   175,   159,   155,   159,   159,    24,    25,    26,
     142,    74,   166,   266,    24,    25,    26,    75,   220,   143,
     216,   144,   221,   133,   134,   135,   136,   221,    34,    76,
     181,   220,   124,   125,   118,   301,   178,    78,   244,    84,
     221,    84,    84,    84,    84,    84,    84,    84,    84,    84,
     191,   192,   193,   198,   252,   159,    91,    24,   219,    26,
     226,   207,   238,   137,   126,   127,   117,   118,   219,   106,
     205,    93,   278,   206,    34,   208,   230,   220,    92,   241,
      34,   254,   169,   220,   294,   118,   221,   295,   200,   229,
     234,   118,   221,   122,   123,    84,   -52,   258,    97,   -45,
     -45,   -45,    24,    25,    26,   175,   248,   249,   250,   130,
     131,   132,   253,   251,    79,    94,   226,   259,   -52,   105,
     238,   -44,   -44,   -44,   121,   241,   201,   175,    24,   118,
      26,   299,   185,   186,   187,   188,   202,   286,   271,   118,
     259,    84,   245,   280,   149,   246,   118,   118,   277,   128,
     129,   151,   219,   156,   270,   288,   255,   256,   183,   184,
     154,   284,   270,   259,    84,   157,   300,   189,   190,   172,
     171,   106,   195,   173,   282,   199,   203,    84,   204,   227,
     228,   243,   -49,   275,   269,   297,    38,   259,   293,   279,
     257,    79,   289,   281,   291,   296,   290,   292,   298,   305,
     114,   209,   235,   283,   285,   302,     5,     6,   306,     7,
       8,     9,   308,   309,   276,   239,   274,   304,    10,    11,
     168,   265,     0,   182,   307,    12,   180,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,     0,   167,     0,     0,
      32,    33,    34,     0,     0,    35,     0,    36,    37,     0,
       0,    38,     7,     8,     9,     0,     0,     0,    39,    40,
      41,    10,    11,     0,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,     0,     0,
       0,     0,     0,    32,    33,    34,     0,     0,    35,     0,
       1,    37,     0,     0,    38,     7,     8,     9,     0,     0,
       0,    39,    40,    41,    10,    11,     0,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,     0,     0,    27,    28,    29,
       7,     8,     9,     0,     0,     0,    32,    33,    34,    10,
      11,    35,     0,     0,    37,     0,     0,    38,     0,     0,
       0,     0,     0,     0,    39,    40,    41,     0,    23,    24,
       0,    26,    71,    28,    29,     7,     8,     9,     0,     0,
       0,    32,    33,    34,    10,    11,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     9,    39,
      40,    41,     0,    23,     0,    10,    11,    71,    28,    29,
       0,     0,     0,     0,     0,     0,    32,    33,    34,     0,
       0,    35,     0,     0,    23,     0,     0,   236,    71,    28,
      29,     0,     0,     0,    39,    40,    41,    32,    33,    34,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41
};

static const yytype_int16 yycheck[] =
{
       1,    15,    25,    45,    20,     2,   162,    17,    78,    92,
      10,    11,   226,   160,   236,     6,    90,   220,    92,    51,
      20,    45,    35,    46,   118,    35,    32,    35,    34,     3,
       4,     5,    32,    33,   224,    52,    37,    38,    46,    39,
      40,    41,    55,    52,   138,    57,    35,    48,   142,    53,
      56,    51,    51,    12,    13,    59,   259,    31,    35,    18,
      49,    35,   209,    37,    74,    75,    76,    68,    78,    58,
      61,   113,   294,    49,   288,    49,   159,    91,   268,   173,
      81,    82,    58,   157,    85,   159,   160,    32,    33,    34,
      49,    49,    92,    49,    32,    33,    34,    49,    49,    58,
     256,    60,    58,    14,    15,    16,    17,    58,    46,    49,
     120,    49,    10,    11,    53,    60,   117,    49,    57,   119,
      58,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   143,   204,   209,    57,    32,   162,    34,
     164,   155,   236,    54,    42,    43,    52,    53,   172,    35,
     151,    51,   246,   154,    46,   156,   170,    49,    49,   175,
      46,    56,    50,    49,    53,    53,    58,    56,    50,   170,
     171,    53,    58,     8,     9,   175,    49,   219,    46,    52,
      53,    54,    32,    33,    34,    58,   200,   201,   202,    46,
      47,    48,   206,   203,   204,    35,   220,   220,    49,    51,
     294,    52,    53,    54,     7,   221,    50,    58,    32,    53,
      34,   281,   124,   125,   126,   127,    50,   259,   232,    53,
     243,   221,    50,    50,    22,    53,    53,    53,   244,    44,
      45,    52,   256,    52,   231,   259,    52,    53,   122,   123,
      57,   257,   239,   266,   244,    55,   288,   128,   129,    53,
      52,    35,    35,    54,   255,    35,    49,   257,    52,    50,
      50,    49,    57,    59,    56,   279,    55,   290,   269,    20,
      57,   281,    50,    52,    50,    50,    53,    59,    52,    50,
      46,   157,   172,   256,   259,   290,     0,     1,    60,     3,
       4,     5,    60,   307,   243,   174,   240,   298,    12,    13,
      97,   221,    -1,   121,   305,    19,   119,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    94,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    -1,    51,    52,    -1,
      -1,    55,     3,     4,     5,    -1,    -1,    -1,    62,    63,
      64,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    -1,    -1,    49,    -1,
      51,    52,    -1,    -1,    55,     3,     4,     5,    -1,    -1,
      -1,    62,    63,    64,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    35,    36,    37,
       3,     4,     5,    -1,    -1,    -1,    44,    45,    46,    12,
      13,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    -1,    31,    32,
      -1,    34,    35,    36,    37,     3,     4,     5,    -1,    -1,
      -1,    44,    45,    46,    12,    13,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    62,
      63,    64,    -1,    31,    -1,    12,    13,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    49,    -1,    -1,    31,    -1,    -1,    55,    35,    36,
      37,    -1,    -1,    -1,    62,    63,    64,    44,    45,    46,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,    66,    69,    69,     0,     1,     3,     4,     5,
      12,    13,    19,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    44,    45,    46,    49,    51,    52,    55,    62,
      63,    64,    67,    68,    70,    72,    78,    79,   101,   102,
     103,   108,   110,   111,   112,   113,   114,   115,   117,   118,
     121,   122,   123,   124,   125,   126,   127,   128,   130,   131,
      51,    35,   127,   127,    49,    49,    49,   101,    49,   115,
     116,    52,    52,   118,   127,    57,    35,    71,    72,    35,
      55,    57,    49,    51,    35,   127,   127,    46,   109,   115,
      69,    69,   127,   127,   127,    51,    35,    73,    74,    75,
      87,    88,    90,   108,    71,    69,   127,    52,    53,     6,
      61,     7,     8,     9,    10,    11,    42,    43,    44,    45,
      46,    47,    48,    14,    15,    16,    17,    54,   120,    12,
      13,    18,    49,    58,    60,    69,   115,   115,   115,    22,
     116,    52,    69,    69,    57,    69,    52,    55,    84,    78,
      80,    81,    82,   101,    82,    96,   127,   114,   109,    50,
     104,    52,    53,    54,   132,    58,    91,    90,    69,   117,
     122,   115,   123,   124,   124,   125,   125,   125,   125,   126,
     126,   127,   127,   127,   117,    35,   117,   129,   115,    35,
      50,    50,    50,    49,    52,    69,    69,   101,    69,    80,
      82,    83,    56,    81,    85,    86,    87,    89,    90,   108,
      49,    58,    97,    98,    99,   100,   108,    50,    50,    69,
     101,   105,   107,   130,    69,    75,    55,    76,   117,   105,
     106,   118,   119,    49,    57,    50,    53,    59,   101,   101,
     101,   115,   116,   101,    56,    52,    53,    57,    90,    72,
      92,    93,    94,    95,    97,   119,    49,   100,    99,    56,
     130,   101,    76,    77,   103,    59,    93,   118,   117,    20,
      50,    52,    69,    86,   118,    88,    90,    97,   108,    50,
      53,    50,    59,    69,    53,    56,    50,   101,    52,   116,
      90,    60,    95,    76,    69,    50,    60,    69,    60,   101
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
#line 119 "ejemplo.y"
    {agregarFuncionesExternas(&tabla.listaFuncionesExternas, &tabla.listaVariablesExternas, (yyvsp[(1) - (2)].cval));;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 121 "ejemplo.y"
    {agregarError(&errores,"Error Sintactico",yylineno); listaParametros = NULL; cantidadPuntero = 0; contadorParametros = 0;;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 124 "ejemplo.y"
    {agregarVariablesExternasBis(&tabla.listaVariablesExternas, (yyvsp[(2) - (3)].cval), tipoInicializador);;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 132 "ejemplo.y"
    {
          nombre = (yyvsp[(2) - (4)].cval);
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
               agregarVariable(&tabla.listaVariables, variable[contadorVariables], tipoDato, tipoInicializador, yylineno, flagError, esArray[contadorVariables], tipDecla);
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

  case 17:

/* Line 1455 of yacc.c  */
#line 204 "ejemplo.y"
    {
                                                       if(tip == 3 && flagFuncion == 0 && strcmp(tipoDato,"")) {
                                                            tipoDatoFuncion = (char*)realloc(tipoDatoFuncion, strlen(tipoDato));
                                                            strcpy(tipoDatoFuncion, tipoDato);
                                                            flagFuncion = 1;
                                                       }
                                                       tipoDato = strdup((yyvsp[(1) - (2)].cval));
                                                  ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 219 "ejemplo.y"
    {cantidad = 1; ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 220 "ejemplo.y"
    {cantidad = 2;;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 223 "ejemplo.y"
    { tipDecla = 1; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 224 "ejemplo.y"
    {   tipDecla = 2; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 228 "ejemplo.y"
    {flagArray = 1;;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 269 "ejemplo.y"
    {
                                        if(tip!=3){
                                             tipoDato = (char*)realloc(tipoDato, strlen(tipoDato)+cantidadPuntero);
                                             while(cantidadPuntero!=0){
                                                  strcat(tipoDato, "*");
                                                  cantidadPuntero--;
                                             }
                                             variable[contadorVariables] = (yyvsp[(2) - (2)].cval);
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

  case 45:

/* Line 1455 of yacc.c  */
#line 291 "ejemplo.y"
    { 
                              if(tip!=3){
                                   variable[contadorVariables] = strdup((yyvsp[(1) - (1)].cval)); 
                                   esArray[contadorVariables] = flagArray;
                                   contadorVariables++;
                              }
                         ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 300 "ejemplo.y"
    {
                                        tipoDatoPuntero = (char*)realloc(tipoDatoPuntero, cantidadPuntero);
                                        strcpy(tipoDatoPuntero, "");
                                        while(cantidadPuntero!=0){
                                             strcat(tipoDatoPuntero, "*");
                                             cantidadPuntero--;
                                        }
                                        nombre = strdup((yyvsp[(2) - (2)].cval));
                                   ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 309 "ejemplo.y"
    {
                              tipoDatoPuntero = (char*)malloc(strlen(""));
                              strcpy(tipoDatoPuntero, ""); 
                              nombre = strdup((yyvsp[(1) - (1)].cval));
                         ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 320 "ejemplo.y"
    {tip = 1;flagArray=0;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 321 "ejemplo.y"
    {tip = 2; flagArray=1;;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 322 "ejemplo.y"
    {tip = 3;flagArray=0;;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 329 "ejemplo.y"
    {
                              tipoDatoFuncion = (char*)realloc(tipoDatoFuncion, strlen(tipoDato));
                              strcpy(tipoDatoFuncion, tipoDato);
                         ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 336 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 337 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 340 "ejemplo.y"
    {agregarParametro(&listaParametros, "-", (yyvsp[(1) - (1)].cval),yylineno, flagArray); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 341 "ejemplo.y"
    {
                                                  char* aux = (char*)malloc(strlen((yyvsp[(1) - (2)].cval))+strlen(tipoDatoPuntero));
                                                  strcpy(aux, (yyvsp[(1) - (2)].cval));
                                                  strcat(aux, tipoDatoPuntero);
                                                  agregarParametro(&listaParametros, nombre, aux,yylineno, flagArray);
                                                  cantidadPuntero = 0;
                                             ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 356 "ejemplo.y"
    {
                                   tipoDatoPuntero = (char*)realloc(tipoDatoPuntero, strlen((yyvsp[(1) - (1)].cval))+cantidadPuntero);
                                   strcpy(tipoDatoPuntero, (yyvsp[(1) - (1)].cval));
                                   while(cantidadPuntero!=0){
                                        strcat(tipoDatoPuntero, "*");
                                        cantidadPuntero--;
                                   }
                                   agregarParametro(&listaParametros, "-", tipoDatoPuntero,yylineno, flagArray); 
                                   cantidadPuntero = 0;
                              ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 394 "ejemplo.y"
    {/*printf("Se encontro una Sentencia Compuesta. \n");*/ ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 414 "ejemplo.y"
    {cantidadPuntero++;;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 418 "ejemplo.y"
    {cantidadPuntero++;;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 421 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Seleccion IF.\n");*/ ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 422 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Seleccion IF/ELSE.\n");*/ ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 423 "ejemplo.y"
    {/*printf("Se enconto una Sentencia de Seleccion SWITCH.\n");*/ ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 426 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion WHILE.\n");*/ ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 427 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion DO WHILE.\n");*/ ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 428 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion FOR.\n");*/ ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 431 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Etiqueta CASE.\n");*/ ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 432 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Etiqueta DEFAULT.\n");*/ ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 436 "ejemplo.y"
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

  case 105:

/* Line 1455 of yacc.c  */
#line 458 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto BREAK.\n"); */;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 459 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto CONTINUE.\n"); */;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 460 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto GOTO. \n"); */;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 464 "ejemplo.y"
    {    if(esArrayVariable(tabla,(yyvsp[(1) - (1)].cval))!=2) flagArray = esArrayVariable(tabla,(yyvsp[(1) - (1)].cval));
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = tipoVariable(tabla, &listaParametros, (yyvsp[(1) - (1)].cval)); 
                                   variableExpresion[contadorVariableExpresion] = strdup(tipoVariable(tabla, &listaParametros, (yyvsp[(1) - (1)].cval)));
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 470 "ejemplo.y"
    {
                                   (yyval.dval) = (yyvsp[(1) - (1)].ival); 
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "int"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("int");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 477 "ejemplo.y"
    {
                                   (yyval.dval) = (yyvsp[(1) - (1)].dval); 
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "double"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("double");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 484 "ejemplo.y"
    {
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "char"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("char");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 490 "ejemplo.y"
    {
                                   tipoParametroInvocacion = tipoInicializadorFuncion = "char*"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("char*");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 497 "ejemplo.y"
    {(yyval.dval) = ( (yyvsp[(2) - (3)].dval) ); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 509 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(3) - (3)].dval); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 513 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 528 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) || (yyvsp[(3) - (3)].dval); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 532 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) && (yyvsp[(3) - (3)].dval); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 536 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 537 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 541 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 542 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 543 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) <= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 544 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 548 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); flagOperacionBinaria = 1;;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 549 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); flagOperacionBinaria = 2; ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 553 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval);  flagOperacionBinaria = 3;;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 554 "ejemplo.y"
    {if((yyvsp[(3) - (3)].dval) == 0) {agregarError(&errores,"ERROR/: No se puede dividir por 0",yylineno);} else {(yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval);  flagOperacionBinaria = 4;};}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 555 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].ival) % (yyvsp[(3) - (3)].ival); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 559 "ejemplo.y"
    {(yyval.dval) = ++ (yyvsp[(2) - (2)].dval); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 560 "ejemplo.y"
    {(yyval.dval) = -- (yyvsp[(2) - (2)].dval); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 561 "ejemplo.y"
    {(yyval.dval) = - (yyvsp[(2) - (2)].dval); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 562 "ejemplo.y"
    {(yyval.dval) = + (yyvsp[(2) - (2)].dval); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 563 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 564 "ejemplo.y"
    {(yyval.dval) = ! (yyvsp[(2) - (2)].dval); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 565 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 566 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 567 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 568 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 572 "ejemplo.y"
    {(yyval.dval) = 0; flagArray = 1;;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 573 "ejemplo.y"
    {(yyval.dval) = 0; validarInvocacion(tabla,(yyvsp[(1) - (4)].cval),parametrosInvocacion,yylineno); parametrosInvocacion = NULL; tipoInicializadorFuncion = strdup(tipoFuncion(tabla,(yyvsp[(1) - (4)].cval))); contadorVariableExpresion = 0; tip = 3;;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 574 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 575 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 576 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) ++; ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 577 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) --; ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 581 "ejemplo.y"
    {agregarNodo(&parametrosInvocacion,tipoInicializadorFuncion, flagArray);;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 582 "ejemplo.y"
    {agregarNodo(&parametrosInvocacion,tipoInicializadorFuncion, flagArray);;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 586 "ejemplo.y"
    {/*printf("Se define la funcion %s con %d parametros y devolucion de tipo %s  \n",nombre,contadorParametros,tipoDato); contadorParametros = 0;*/ agregarFuncion(&tabla.listaFuncionesDeclaradas, &tabla.listaFuncionesDefinidas,nombreFuncion,valorTipoFuncion,&listaParametros,yylineno, 1); contadorParametros = 0; listaParametros = NULL; cantidadPuntero = 0; flagFuncion = 0;;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 587 "ejemplo.y"
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
                                   flagFuncion = 0;
                              }
                              break;     
                       }
                       tip = 0;
                  ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 640 "ejemplo.y"
    {nombreFuncion = strdup((yyvsp[(2) - (2)].cval)); valorTipoFuncion = strdup((yyvsp[(1) - (2)].cval));;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 640 "ejemplo.y"
    {flagFuncion = 0;;}
    break;



/* Line 1455 of yacc.c  */
#line 2561 "ejemplo.tab.c"
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
#line 645 "ejemplo.y"
 

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
     tabla.listaVariablesExternas = NULL;
     tabla.listaFuncionesDeclaradas = NULL;
     tabla.listaFuncionesDefinidas = NULL;
     tabla.listaFuncionesExternas = NULL;
     listaParametros = NULL;
     parametrosInvocacion = NULL;
     tipoInicializador = strdup("vacio");
     tipoDato = strdup("");

     yyparse();
     imprimirTabla(tabla);
     imprimirErrores(&errores);
     system("PAUSE");
}
