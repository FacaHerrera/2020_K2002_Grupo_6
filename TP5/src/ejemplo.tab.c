
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
int jerarquia = 0;
Nodo *parametrosInvocacion;
TablaDeSimbolos tabla;




/* Line 189 of yacc.c  */
#line 126 "ejemplo.tab.c"

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
     COMENTARIO_MULTIPLE = 296,
     ERROR_LEXICO = 297
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 53 "ejemplo.y"

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
#define YYLAST   577

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNRULES -- Number of states.  */
#define YYNSTATES  329

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      52,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,     2,     2,     2,    49,    65,     2,
      50,    51,    47,    45,    54,    46,    61,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    53,
      44,    55,    43,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,    63,     2,     2,     2,
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
       0,     0,     3,     6,     9,    11,    15,    19,    23,    27,
      29,    31,    33,    36,    40,    41,    43,    45,    46,    49,
      55,    56,    58,    61,    64,    65,    67,    69,    73,    75,
      79,    81,    85,    87,    91,    93,    95,    99,   104,   106,
     109,   115,   118,   119,   121,   122,   126,   128,   132,   134,
     138,   141,   143,   146,   148,   149,   151,   153,   158,   159,
     165,   167,   173,   174,   176,   178,   182,   184,   187,   190,
     193,   196,   198,   200,   201,   203,   207,   210,   212,   216,
     220,   222,   224,   226,   228,   232,   234,   239,   243,   253,
     254,   257,   260,   262,   265,   266,   268,   270,   273,   276,
     277,   280,   286,   294,   300,   306,   316,   328,   335,   341,
     345,   349,   352,   355,   359,   361,   363,   365,   367,   369,
     371,   375,   377,   381,   382,   384,   386,   390,   392,   398,
     399,   401,   403,   405,   407,   409,   411,   413,   417,   419,
     423,   425,   429,   433,   435,   439,   443,   447,   451,   453,
     457,   461,   463,   467,   471,   475,   477,   480,   483,   486,
     489,   492,   495,   498,   501,   506,   511,   513,   518,   523,
     527,   531,   534,   537,   539,   543,   545,   547,   548
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      67,     0,    -1,    70,    71,    -1,    67,    68,    -1,    52,
      -1,   132,    70,    71,    -1,   103,    70,    71,    -1,    38,
      70,    52,    -1,    69,    70,    52,    -1,    40,    -1,    41,
      -1,    42,    -1,     1,    52,    -1,    39,    35,   116,    -1,
      -1,    41,    -1,    40,    -1,    -1,    52,    71,    -1,    74,
      75,    53,    70,    71,    -1,    -1,    74,    -1,    33,    73,
      -1,    80,    73,    -1,    -1,    76,    -1,    77,    -1,    76,
      54,    77,    -1,    89,    -1,    89,    55,    78,    -1,   119,
      -1,    56,    79,    57,    -1,    78,    -1,    79,    54,    78,
      -1,    32,    -1,    81,    -1,    34,    35,    86,    -1,    34,
      56,    82,    57,    -1,    83,    -1,    82,    83,    -1,    84,
      87,    53,    70,    71,    -1,    80,    85,    -1,    -1,    84,
      -1,    -1,    56,    82,    57,    -1,    88,    -1,    87,    54,
      88,    -1,    89,    -1,    91,    58,   120,    -1,   110,    92,
      -1,    92,    -1,   110,    92,    -1,    92,    -1,    -1,    89,
      -1,    35,    -1,    92,    59,   121,    60,    -1,    -1,    92,
      93,    50,    95,    51,    -1,    96,    -1,    96,    54,    61,
      61,    61,    -1,    -1,    94,    -1,    97,    -1,    96,    54,
      97,    -1,    74,    -1,    74,    90,    -1,    74,    99,    -1,
      84,   100,    -1,   110,   101,    -1,   101,    -1,   110,    -1,
      -1,    99,    -1,    50,    99,    51,    -1,   101,   102,    -1,
     102,    -1,    59,   121,    60,    -1,    50,    95,    51,    -1,
     105,    -1,   104,    -1,   112,    -1,   113,    -1,   115,    70,
      71,    -1,   114,    -1,   118,    53,    70,    71,    -1,    53,
      70,    71,    -1,    56,    70,    71,   106,    70,    71,    57,
      70,    71,    -1,    -1,   106,   107,    -1,   106,   109,    -1,
     132,    -1,   107,   132,    -1,    -1,   107,    -1,   103,    -1,
     109,   103,    -1,    47,   111,    -1,    -1,    47,   111,    -1,
      19,    50,   117,    51,   103,    -1,    19,    50,   117,    51,
     103,    20,   103,    -1,    21,    50,   117,    51,   103,    -1,
      22,    50,   117,    51,   103,    -1,    23,   103,    22,    50,
     117,    51,    53,    70,    71,    -1,    24,    50,   118,    53,
     118,    53,   118,    51,    70,    71,   103,    -1,    28,   120,
      58,    70,    71,   103,    -1,    29,    58,    70,    71,   103,
      -1,    35,    58,   103,    -1,    25,   118,    53,    -1,    27,
      53,    -1,    26,    53,    -1,    30,    35,    53,    -1,    35,
      -1,     4,    -1,     3,    -1,    37,    -1,     5,    -1,    31,
      -1,    50,   117,    51,    -1,   119,    -1,   117,    54,   119,
      -1,    -1,   117,    -1,   120,    -1,   129,   122,   119,    -1,
     123,    -1,   123,    62,   117,    58,   120,    -1,    -1,   120,
      -1,    55,    -1,    14,    -1,    15,    -1,    16,    -1,    17,
      -1,   124,    -1,   123,     6,   124,    -1,   125,    -1,   124,
       7,   125,    -1,   126,    -1,   125,     8,   126,    -1,   125,
       9,   126,    -1,   127,    -1,   126,    44,   127,    -1,   126,
      43,   127,    -1,   126,    11,   127,    -1,   126,    10,   127,
      -1,   128,    -1,   127,    45,   128,    -1,   127,    46,   128,
      -1,   129,    -1,   128,    47,   129,    -1,   128,    48,   129,
      -1,   128,    49,   129,    -1,   130,    -1,    12,   129,    -1,
      13,   129,    -1,    46,   129,    -1,    45,   129,    -1,    63,
     129,    -1,    64,   129,    -1,    65,   129,    -1,   110,   129,
      -1,    36,    50,   129,    51,    -1,    36,    50,    98,    51,
      -1,   116,    -1,   130,    59,   117,    60,    -1,   130,    50,
     131,    51,    -1,   130,    61,    35,    -1,   130,    18,    35,
      -1,   130,    12,    -1,   130,    13,    -1,   119,    -1,   131,
      54,   119,    -1,   133,    -1,    72,    -1,    -1,    74,    90,
     134,   108,   105,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   112,   112,   113,   116,   117,   118,   119,   120,   121,
     122,   123,   129,   132,   135,   136,   137,   140,   141,   145,
     163,   164,   167,   168,   179,   180,   183,   184,   187,   188,
     191,   192,   195,   196,   199,   200,   203,   204,   207,   208,
     211,   214,   217,   218,   221,   222,   225,   226,   229,   230,
     233,   255,   264,   273,   280,   281,   284,   285,   286,   286,
     289,   290,   293,   297,   300,   301,   304,   305,   312,   315,
     318,   319,   320,   332,   333,   336,   337,   338,   341,   342,
     346,   347,   348,   349,   350,   351,   354,   415,   418,   421,
     422,   423,   426,   427,   430,   431,   434,   435,   438,   441,
     442,   445,   446,   447,   450,   451,   452,   455,   456,   457,
     460,   482,   483,   484,   488,   494,   501,   508,   514,   520,
     521,   524,   525,   528,   529,   532,   533,   536,   537,   540,
     541,   544,   545,   546,   547,   548,   551,   552,   555,   556,
     559,   560,   561,   564,   565,   566,   567,   568,   571,   572,
     573,   576,   577,   578,   579,   582,   583,   584,   585,   586,
     587,   588,   589,   590,   591,   592,   595,   596,   597,   598,
     599,   600,   601,   604,   605,   609,   610,   663,   663
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
  "INCLUDE", "DEFINE", "COMENTARIO_SIMPLE", "COMENTARIO_MULTIPLE",
  "ERROR_LEXICO", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "'('",
  "')'", "'\\n'", "';'", "','", "'='", "'{'", "'}'", "':'", "'['", "']'",
  "'.'", "'?'", "'~'", "'!'", "'&'", "$accept", "input", "line",
  "lineaControl", "opcionComentario", "opcionBarraN", "declaracion",
  "especDeclaracionBis", "especDeclaracion", "listaDeclaradoresBis",
  "listaDeclaradores", "declarador", "inicializador",
  "listaDeInicializadores", "especTipo", "especStructUnion",
  "listaDeclaracionesStruct", "declaracionStruct", "listaCalificadores",
  "listaCalificadoresBis", "opcionLista", "declaradoresStruct",
  "declaStruct", "decla1", "decla2", "declaBis", "declaradorDirecto",
  "$@1", "listaTiposParametros", "listaTiposParametrosBis",
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
     295,   296,   297,    62,    60,    43,    45,    42,    47,    37,
      40,    41,    10,    59,    44,    61,   123,   125,    58,    91,
      93,    46,    63,   126,    33,    38
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    69,    70,    70,    70,    71,    71,    72,
      73,    73,    74,    74,    75,    75,    76,    76,    77,    77,
      78,    78,    79,    79,    80,    80,    81,    81,    82,    82,
      83,    84,    85,    85,    86,    86,    87,    87,    88,    88,
      89,    89,    90,    90,    91,    91,    92,    92,    93,    92,
      94,    94,    95,    95,    96,    96,    97,    97,    97,    98,
      99,    99,    99,   100,   100,   101,   101,   101,   102,   102,
     103,   103,   103,   103,   103,   103,   104,   104,   105,   106,
     106,   106,   107,   107,   108,   108,   109,   109,   110,   111,
     111,   112,   112,   112,   113,   113,   113,   114,   114,   114,
     115,   115,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   122,   122,   122,   122,   122,   123,   123,   124,   124,
     125,   125,   125,   126,   126,   126,   126,   126,   127,   127,
     127,   128,   128,   128,   128,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   130,   130,   130,   130,
     130,   130,   130,   131,   131,   132,   132,   134,   133
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     3,     3,     3,     3,     1,
       1,     1,     2,     3,     0,     1,     1,     0,     2,     5,
       0,     1,     2,     2,     0,     1,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     3,     4,     1,     2,
       5,     2,     0,     1,     0,     3,     1,     3,     1,     3,
       2,     1,     2,     1,     0,     1,     1,     4,     0,     5,
       1,     5,     0,     1,     1,     3,     1,     2,     2,     2,
       2,     1,     1,     0,     1,     3,     2,     1,     3,     3,
       1,     1,     1,     1,     3,     1,     4,     3,     9,     0,
       2,     2,     1,     2,     0,     1,     1,     2,     2,     0,
       2,     5,     7,     5,     5,     9,    11,     6,     5,     3,
       3,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     0,     1,     1,     3,     1,     5,     0,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     4,     1,     4,     4,     3,
       3,     2,     2,     1,     3,     1,     1,     0,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      14,    16,    15,     0,    17,     1,     0,   116,   115,   118,
       0,     0,     0,     0,     0,     0,     0,   123,     0,     0,
       0,     0,     0,   119,    34,    20,     0,   114,     0,   117,
      14,     0,     9,    10,    11,     0,     0,    99,     0,     4,
      14,    14,     0,     0,     0,     3,    14,   176,    24,    20,
      35,    14,    81,    80,     0,    82,    83,    85,    14,   166,
     124,     0,   121,   125,   127,   136,   138,   140,   143,   148,
     151,   155,    14,   175,    17,     2,    12,   114,   156,   157,
       0,     0,     0,     0,   123,     0,   112,   111,     0,   151,
      14,     0,    22,    21,    44,     0,     0,     0,     0,     0,
     159,   158,    99,    98,     0,    17,    17,   160,   161,   162,
       0,    56,     0,    25,    26,    28,   177,    53,     0,    23,
      17,   163,    17,     0,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
     133,   134,   135,   131,     0,   171,   172,     0,     0,     0,
       0,    17,    18,     0,     0,     0,     0,     0,   110,    14,
      17,   113,     0,    36,    42,     0,    38,    54,   109,    73,
       0,     0,     7,    13,   100,   120,    87,    89,     8,    14,
       0,     0,    94,   129,     0,    52,     6,    84,   122,    17,
     137,     0,   139,   141,   142,   147,   146,   145,   144,   149,
     150,   152,   153,   154,   126,   170,   173,     0,     0,   169,
       5,     0,     0,     0,     0,   123,    17,     0,     0,    43,
      41,    37,    39,     0,    46,    48,     0,    51,     0,    62,
     129,    74,    69,    71,    77,    72,   165,   164,    14,    17,
      27,     0,    29,    30,    95,     0,    92,   130,     0,    62,
      86,     0,   168,     0,   167,   101,   103,   104,     0,     0,
       0,   108,    45,    14,    54,     0,    50,    66,    63,     0,
      60,    64,     0,     0,    62,    76,    70,    17,    96,    90,
      91,    19,    32,     0,    93,   178,    57,     0,   128,   174,
       0,     0,   123,   107,    17,    47,    49,    67,    53,    68,
      72,    79,     0,    75,    78,     0,    97,     0,    31,    59,
     102,    14,     0,    40,    52,     0,    65,    14,    33,    17,
      14,     0,    17,   105,    17,    61,    88,     0,   106
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    45,    46,     4,    75,    47,    92,    48,   112,
     113,   114,   242,   283,    49,    50,   165,   166,   167,   220,
     163,   223,   224,   115,   116,   226,   227,   184,   268,   269,
     270,   271,   170,   231,   232,   233,   234,    51,    52,    53,
     238,   244,   245,   280,    54,   103,    55,    56,    57,    58,
      59,    60,    61,    62,    63,   248,   144,    64,    65,    66,
      67,    68,    69,    70,    71,   207,   246,    73,   182
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -233
static const yytype_int16 yypact[] =
{
      46,  -233,  -233,   296,   -32,  -233,     0,  -233,  -233,  -233,
     512,   512,     5,    13,    41,   404,    52,   512,    56,    80,
     512,    95,   157,  -233,  -233,   196,   -11,   111,   145,  -233,
      46,   165,  -233,  -233,  -233,   512,   512,   164,   512,  -233,
      46,    46,   512,   512,   512,  -233,    46,  -233,     9,   196,
    -233,    46,  -233,  -233,   512,  -233,  -233,  -233,    46,  -233,
     162,   168,  -233,  -233,    12,   228,   110,    25,    96,   184,
      83,    35,    46,  -233,   -32,  -233,  -233,  -233,  -233,  -233,
     512,   512,   512,   217,   512,   187,  -233,  -233,   183,  -233,
      46,   189,  -233,  -233,   188,   186,   404,   440,   191,   144,
    -233,  -233,   164,  -233,   101,   -32,   -32,  -233,  -233,  -233,
     195,  -233,   197,   194,  -233,   198,  -233,   123,   214,  -233,
     -32,  -233,   -32,   512,    46,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,  -233,
    -233,  -233,  -233,  -233,   512,  -233,  -233,   219,   512,   512,
     220,   -32,  -233,   120,   129,   133,   207,   208,  -233,    46,
     -32,  -233,   186,  -233,   186,    50,  -233,     9,  -233,    -9,
     211,   212,  -233,  -233,  -233,  -233,  -233,  -233,  -233,    46,
       9,   476,   196,   512,   216,   160,  -233,  -233,  -233,   -32,
     228,     8,   110,    25,    25,    96,    96,    96,    96,   184,
     184,  -233,  -233,  -233,  -233,  -233,  -233,   134,   -27,  -233,
    -233,   404,   404,   404,   512,   512,   -32,   404,    74,  -233,
    -233,  -233,  -233,   150,  -233,   206,   209,   -31,   214,    78,
     512,  -233,  -233,     1,  -233,    54,  -233,  -233,   350,   -32,
    -233,   476,  -233,  -233,   196,   213,  -233,  -233,   210,   196,
    -233,   512,  -233,   512,  -233,   248,  -233,  -233,   139,   218,
     404,  -233,  -233,    46,     9,   512,   -31,    85,  -233,   221,
     222,  -233,   223,   224,   196,  -233,     1,   -32,  -233,   196,
     404,  -233,  -233,   -20,  -233,  -233,  -233,   232,  -233,  -233,
     404,   233,   512,  -233,   -32,  -233,  -233,  -233,   -31,  -233,
      86,  -233,    -2,  -233,  -233,   230,  -233,   476,  -233,  -233,
    -233,    46,   234,  -233,   -31,   229,  -233,    46,  -233,   -32,
      46,   231,   -32,  -233,   -32,  -233,  -233,   404,  -233
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -233,  -233,  -233,  -233,   -29,   -17,  -233,   240,   -23,  -233,
    -233,    93,  -232,  -233,   -72,  -233,   131,  -151,   -87,  -233,
    -233,  -233,    31,  -163,    36,  -233,   -42,  -233,  -233,    49,
    -233,     4,  -233,  -213,  -233,  -222,  -218,   -15,  -233,    59,
    -233,    72,  -233,  -233,   -40,   237,  -233,  -233,  -233,  -233,
     215,    42,   -14,  -102,   -13,    81,  -233,  -233,   225,   238,
      79,   -16,   102,    29,  -233,  -233,     2,  -233,  -233
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -59
static const yytype_int16 yytable[] =
{
      83,    98,    93,    85,   225,    72,   117,    88,   118,   282,
     169,   105,   106,   276,   222,   275,   272,   110,   125,   -58,
      74,   188,   120,   164,    94,   164,    93,   123,   183,   122,
      24,    25,    26,   254,   307,   130,   131,   308,    37,    78,
      79,   229,   204,   151,   111,    95,   206,   145,   146,    89,
     230,   274,    76,   147,   299,    80,    37,   152,   275,   315,
     230,   160,   123,    81,   100,   101,   251,   222,   132,   133,
     157,   107,   108,   109,   126,   318,   185,   219,   276,   243,
     104,   168,    24,   121,    26,   148,     1,     2,   176,   177,
     164,    82,   164,   164,   149,   189,   150,   139,   140,   141,
     142,   225,    84,   186,   229,   187,    24,   221,    26,    86,
      24,    25,    26,   230,   195,   196,   197,   198,   128,   129,
     111,   111,   153,   154,   155,    37,   171,   228,   229,   235,
     216,   262,    37,    87,   210,   229,   229,   230,   143,   243,
     228,   134,   135,   217,   230,   230,   164,     7,     8,     9,
     239,   289,   175,    90,    89,   123,    89,    89,    89,    89,
      89,    89,    89,    89,    89,   201,   202,   203,   191,    96,
     247,   211,   250,   -58,   123,    23,   -51,   -51,   -51,    77,
     212,    29,   183,   123,   213,   252,   266,   123,   253,   235,
     291,   208,    91,   123,    38,    97,   255,   256,   257,   260,
      99,   259,   261,   263,   264,   243,   267,   193,   194,   277,
     -58,   102,    89,   -50,   -50,   -50,   123,   247,    24,   183,
      26,   124,   281,   278,   228,   298,   267,   300,    24,    25,
      26,   136,   137,   138,   294,   127,   199,   200,   288,   156,
     158,   159,   161,   172,   162,   293,   284,   178,   180,   111,
     179,   267,   296,   181,   205,   209,   258,   214,   314,    89,
     305,   215,   236,   237,   -55,   306,   249,   265,   290,    41,
     286,   292,   301,   240,   303,   310,   302,   313,   312,   267,
      89,   284,   319,   309,   304,   320,   311,   317,   322,   119,
     321,   324,   325,   218,    89,   295,     5,     6,   287,     7,
       8,     9,   323,   297,   285,   326,   316,   327,    10,    11,
     279,   273,   328,     0,   173,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   174,
       0,    35,    36,    37,     0,     0,    38,     0,    39,    40,
     190,     0,    41,     7,     8,     9,     0,     0,     0,    42,
      43,    44,    10,    11,     0,   192,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,     0,
       1,     2,     0,     0,     0,    35,    36,    37,     0,     0,
      38,     0,     0,    40,     0,     0,    41,     7,     8,     9,
       0,     0,     0,    42,    43,    44,    10,    11,     0,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,     0,     0,    27,
      28,    29,     0,     7,     8,     9,     0,     0,     0,    35,
      36,    37,    10,    11,    38,     0,     0,    40,     0,     0,
      41,     0,     0,     0,     0,     0,     0,    42,    43,    44,
       0,    23,    24,     0,    26,    77,    28,    29,     0,     7,
       8,     9,     0,     0,     0,    35,    36,    37,    10,    11,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    42,    43,    44,     0,    23,     0,     0,
       0,    77,    28,    29,     0,     7,     8,     9,     0,     0,
       0,    35,    36,    37,    10,    11,    38,     0,     0,     0,
       0,     0,   241,     0,     0,     0,     0,     0,     0,    42,
      43,    44,     0,    23,     0,     0,     0,    77,    28,    29,
       0,     0,     0,     0,     0,     0,     0,    35,    36,    37,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    43,    44
};

static const yytype_int16 yycheck[] =
{
      15,    30,    25,    17,   167,     3,    48,    20,    48,   241,
      97,    40,    41,   235,   165,   233,   229,    46,     6,    50,
      52,   123,    51,    95,    35,    97,    49,    54,    59,    58,
      32,    33,    34,    60,    54,    10,    11,    57,    47,    10,
      11,    50,   144,    72,    35,    56,   148,    12,    13,    20,
      59,    50,    52,    18,   267,    50,    47,    74,   276,    61,
      59,    90,    54,    50,    35,    36,    58,   218,    43,    44,
      84,    42,    43,    44,    62,   307,   118,   164,   300,   181,
      38,    96,    32,    54,    34,    50,    40,    41,   105,   106,
     162,    50,   164,   165,    59,   124,    61,    14,    15,    16,
      17,   264,    50,   120,    50,   122,    32,    57,    34,    53,
      32,    33,    34,    59,   130,   131,   132,   133,     8,     9,
      35,    35,    80,    81,    82,    47,    97,   167,    50,   169,
     159,    57,    47,    53,   151,    50,    50,    59,    55,   241,
     180,    45,    46,   160,    59,    59,   218,     3,     4,     5,
     179,   253,    51,    58,   125,    54,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   126,    58,
     183,    51,   189,    50,    54,    31,    53,    54,    55,    35,
      51,    37,    59,    54,    51,    51,   228,    54,    54,   229,
      51,   149,    35,    54,    50,    50,   211,   212,   213,   216,
      35,   215,   217,    53,    54,   307,   229,   128,   129,   238,
      50,    47,   183,    53,    54,    55,    54,   230,    32,    59,
      34,    53,   239,   238,   264,   267,   249,   267,    32,    33,
      34,    47,    48,    49,   263,     7,   134,   135,   251,    22,
      53,    58,    53,    52,    56,   260,   244,    52,    54,    35,
      53,   274,   265,    55,    35,    35,   214,    50,   300,   230,
     277,    53,    51,    51,    58,   280,    50,    58,    20,    56,
      60,    53,    51,   180,    51,   290,    54,   294,   292,   302,
     251,   279,   311,    51,    60,    51,    53,    57,   317,    49,
      61,   320,    61,   162,   265,   264,     0,     1,   249,     3,
       4,     5,   319,   267,   245,   322,   302,   324,    12,    13,
     238,   230,   327,    -1,    99,    19,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,   102,
      -1,    45,    46,    47,    -1,    -1,    50,    -1,    52,    53,
     125,    -1,    56,     3,     4,     5,    -1,    -1,    -1,    63,
      64,    65,    12,    13,    -1,   127,    -1,    -1,    -1,    19,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,
      50,    -1,    -1,    53,    -1,    -1,    56,     3,     4,     5,
      -1,    -1,    -1,    63,    64,    65,    12,    13,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    35,
      36,    37,    -1,     3,     4,     5,    -1,    -1,    -1,    45,
      46,    47,    12,    13,    50,    -1,    -1,    53,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      -1,    31,    32,    -1,    34,    35,    36,    37,    -1,     3,
       4,     5,    -1,    -1,    -1,    45,    46,    47,    12,    13,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    -1,    31,    -1,    -1,
      -1,    35,    36,    37,    -1,     3,     4,     5,    -1,    -1,
      -1,    45,    46,    47,    12,    13,    50,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    -1,    31,    -1,    -1,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    41,    67,    70,     0,     1,     3,     4,     5,
      12,    13,    19,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    45,    46,    47,    50,    52,
      53,    56,    63,    64,    65,    68,    69,    72,    74,    80,
      81,   103,   104,   105,   110,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   123,   124,   125,   126,   127,   128,
     129,   130,   132,   133,    52,    71,    52,    35,   129,   129,
      50,    50,    50,   103,    50,   118,    53,    53,   120,   129,
      58,    35,    73,    74,    35,    56,    58,    50,    70,    35,
     129,   129,    47,   111,   117,    70,    70,   129,   129,   129,
      70,    35,    75,    76,    77,    89,    90,    92,   110,    73,
      70,   129,    70,    54,    53,     6,    62,     7,     8,     9,
      10,    11,    43,    44,    45,    46,    47,    48,    49,    14,
      15,    16,    17,    55,   122,    12,    13,    18,    50,    59,
      61,    70,    71,   117,   117,   117,    22,   118,    53,    58,
      70,    53,    56,    86,    80,    82,    83,    84,   103,    84,
      98,   129,    52,   116,   111,    51,    71,    71,    52,    53,
      54,    55,   134,    59,    93,    92,    71,    71,   119,    70,
     124,   117,   125,   126,   126,   127,   127,   127,   127,   128,
     128,   129,   129,   129,   119,    35,   119,   131,   117,    35,
      71,    51,    51,    51,    50,    53,    70,    71,    82,    84,
      85,    57,    83,    87,    88,    89,    91,    92,   110,    50,
      59,    99,   100,   101,   102,   110,    51,    51,   106,    70,
      77,    56,    78,   119,   107,   108,   132,   120,   121,    50,
      71,    58,    51,    54,    60,   103,   103,   103,   117,   118,
      71,   103,    57,    53,    54,    58,    92,    74,    94,    95,
      96,    97,    99,   121,    50,   102,   101,    70,   103,   107,
     109,    71,    78,    79,   132,   105,    60,    95,   120,   119,
      20,    51,    53,   103,    70,    88,   120,    90,    92,    99,
     110,    51,    54,    51,    60,    71,   103,    54,    57,    51,
     103,    53,   118,    71,    92,    61,    97,    57,    78,    70,
      51,    61,    70,    71,    70,    61,    71,    71,   103
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
    {agregarFuncionesExternas(&tabla.listaFuncionesExternas, &tabla.listaVariablesExternas, (yyvsp[(1) - (3)].cval));;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 123 "ejemplo.y"
    {
                         char *error = malloc(strlen("Error Lexico: ") + strlen((yyvsp[(1) - (1)].cval)) + 1);
                         strcpy(error, "Error Lexico: ");
                         strcat(error, (yyvsp[(1) - (1)].cval));
                         agregarError(&errores, error, yylineno);
                    ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 129 "ejemplo.y"
    {agregarError(&errores,"Error Sintactico",yylineno); tabla.listaParametros = NULL; cantidadPuntero = 0; contadorParametros = 0;;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 132 "ejemplo.y"
    {agregarVariablesExternasBis(&tabla.listaVariablesExternas, (yyvsp[(2) - (3)].cval), tipoInicializador);;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 145 "ejemplo.y"
    {
          nombre = (yyvsp[(2) - (5)].cval);
          

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

  case 23:

/* Line 1455 of yacc.c  */
#line 168 "ejemplo.y"
    {
                                                       if(tip == 3 && flagFuncion == 0 && strcmp(tipoDato,"")) {
                                                            tipoDatoFuncion = (char*)realloc(tipoDatoFuncion, strlen(tipoDato));
                                                            strcpy(tipoDatoFuncion, tipoDato);
                                                            flagFuncion = 1;
                                                       }
                                                       tipoDato = strdup((yyvsp[(1) - (2)].cval));
                                                  ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 183 "ejemplo.y"
    {cantidad = 1; ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 184 "ejemplo.y"
    {cantidad = 2;;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 187 "ejemplo.y"
    { tipDecla = 1; ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 188 "ejemplo.y"
    {   tipDecla = 2; ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 192 "ejemplo.y"
    {flagArray = 1;;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 233 "ejemplo.y"
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

  case 51:

/* Line 1455 of yacc.c  */
#line 255 "ejemplo.y"
    { 
                              if(tip!=3){
                                   variable[contadorVariables] = strdup((yyvsp[(1) - (1)].cval)); 
                                   esArray[contadorVariables] = flagArray;
                                   contadorVariables++;
                              }
                         ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 264 "ejemplo.y"
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

  case 53:

/* Line 1455 of yacc.c  */
#line 273 "ejemplo.y"
    {
                              tipoDatoPuntero = (char*)malloc(strlen(""));
                              strcpy(tipoDatoPuntero, ""); 
                              nombre = strdup((yyvsp[(1) - (1)].cval));
                         ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 284 "ejemplo.y"
    {tip = 1;flagArray=0;;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 285 "ejemplo.y"
    {tip = 2; flagArray=1;;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 286 "ejemplo.y"
    {tip = 3;flagArray=0;;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 293 "ejemplo.y"
    {
                              tipoDatoFuncion = (char*)realloc(tipoDatoFuncion, strlen(tipoDato));
                              strcpy(tipoDatoFuncion, tipoDato);
                         ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 300 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 301 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 304 "ejemplo.y"
    {agregarParametro(&tabla.listaParametros, "-", (yyvsp[(1) - (1)].cval),yylineno, flagArray); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 305 "ejemplo.y"
    {
                                                  char* aux = (char*)malloc(strlen((yyvsp[(1) - (2)].cval))+strlen(tipoDatoPuntero));
                                                  strcpy(aux, (yyvsp[(1) - (2)].cval));
                                                  strcat(aux, tipoDatoPuntero);
                                                  agregarParametro(&tabla.listaParametros, nombre, aux,yylineno, flagArray);
                                                  cantidadPuntero = 0;
                                             ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 320 "ejemplo.y"
    {
                                   tipoDatoPuntero = (char*)realloc(tipoDatoPuntero, strlen((yyvsp[(1) - (1)].cval))+cantidadPuntero);
                                   strcpy(tipoDatoPuntero, (yyvsp[(1) - (1)].cval));
                                   while(cantidadPuntero!=0){
                                        strcat(tipoDatoPuntero, "*");
                                        cantidadPuntero--;
                                   }
                                   agregarParametro(&tabla.listaParametros, "-", tipoDatoPuntero,yylineno, flagArray); 
                                   cantidadPuntero = 0;
                              ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 354 "ejemplo.y"
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
                                                  else if(!flagOperacionBinaria){
                                                       contadorVariableExpresion = 0;
                                                  }
                                             }
                                             contadorVariableExpresion = 0;
                                             contadorVariables = 0;
                                             flagArray = 0;
                                             flagError = 0;
                                             flagOperacionBinaria = 0;
                                        ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 418 "ejemplo.y"
    {/*printf("Se encontro una Sentencia Compuesta. \n");*/ ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 438 "ejemplo.y"
    {cantidadPuntero++;;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 442 "ejemplo.y"
    {cantidadPuntero++;;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 445 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Seleccion IF.\n");*/ ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 446 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Seleccion IF/ELSE.\n");*/ ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 447 "ejemplo.y"
    {/*printf("Se enconto una Sentencia de Seleccion SWITCH.\n");*/ ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 450 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion WHILE.\n");*/ ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 451 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion DO WHILE.\n");*/ ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 452 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion FOR.\n");*/ ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 455 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Etiqueta CASE.\n");*/ ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 456 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Etiqueta DEFAULT.\n");*/ ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 460 "ejemplo.y"
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

  case 111:

/* Line 1455 of yacc.c  */
#line 482 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto BREAK.\n"); */;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 483 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto CONTINUE.\n"); */;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 484 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto GOTO. \n"); */;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 488 "ejemplo.y"
    {    if(esArrayVariable(tabla,(yyvsp[(1) - (1)].cval))!=2) flagArray = esArrayVariable(tabla,(yyvsp[(1) - (1)].cval));
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = tipoVariable(tabla, &tabla.listaParametros, (yyvsp[(1) - (1)].cval)); 
                                   variableExpresion[contadorVariableExpresion] = strdup(tipoVariable(tabla, &tabla.listaParametros, (yyvsp[(1) - (1)].cval)));
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 494 "ejemplo.y"
    {
                                   (yyval.dval) = (yyvsp[(1) - (1)].ival); 
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "int"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("int");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 501 "ejemplo.y"
    {
                                   (yyval.dval) = (yyvsp[(1) - (1)].dval); 
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "double"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("double");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 508 "ejemplo.y"
    {
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "char"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("char");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 514 "ejemplo.y"
    {
                                   tipoParametroInvocacion = tipoInicializadorFuncion = "char*"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("char*");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 521 "ejemplo.y"
    {(yyval.dval) = ( (yyvsp[(2) - (3)].dval) ); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 533 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(3) - (3)].dval); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 537 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 552 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) || (yyvsp[(3) - (3)].dval); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 556 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) && (yyvsp[(3) - (3)].dval); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 560 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 561 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 565 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 566 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 567 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) <= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 568 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 572 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); flagOperacionBinaria = 1;;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 573 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); flagOperacionBinaria = 2; ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 577 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval);  flagOperacionBinaria = 3;;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 578 "ejemplo.y"
    {if((yyvsp[(3) - (3)].dval) == 0) {agregarError(&errores,"ERROR/: No se puede dividir por 0",yylineno);} else {(yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval);  flagOperacionBinaria = 4;};}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 579 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].ival) % (yyvsp[(3) - (3)].ival); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 583 "ejemplo.y"
    {(yyval.dval) = ++ (yyvsp[(2) - (2)].dval); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 584 "ejemplo.y"
    {(yyval.dval) = -- (yyvsp[(2) - (2)].dval); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 585 "ejemplo.y"
    {(yyval.dval) = - (yyvsp[(2) - (2)].dval); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 586 "ejemplo.y"
    {(yyval.dval) = + (yyvsp[(2) - (2)].dval); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 587 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 588 "ejemplo.y"
    {(yyval.dval) = ! (yyvsp[(2) - (2)].dval); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 589 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 590 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 591 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 592 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 596 "ejemplo.y"
    {(yyval.dval) = 0; flagArray = 1;;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 597 "ejemplo.y"
    {(yyval.dval) = 0; validarInvocacion(tabla,(yyvsp[(1) - (4)].cval),parametrosInvocacion,yylineno); parametrosInvocacion = NULL; tipoInicializadorFuncion = strdup(tipoFuncion(tabla,(yyvsp[(1) - (4)].cval))); contadorVariableExpresion = 0; tip = 3;;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 598 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 599 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 600 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) ++; ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 601 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) --; ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 604 "ejemplo.y"
    {agregarNodo(&parametrosInvocacion,tipoInicializadorFuncion, flagArray);;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 605 "ejemplo.y"
    {agregarNodo(&parametrosInvocacion,tipoInicializadorFuncion, flagArray);;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 609 "ejemplo.y"
    {/*printf("Se define la funcion %s con %d parametros y devolucion de tipo %s  \n",nombre,contadorParametros,tipoDato); contadorParametros = 0;*/ agregarFuncion(&tabla.listaFuncionesDeclaradas, &tabla.listaFuncionesDefinidas,nombreFuncion,valorTipoFuncion,&tabla.listaParametros,yylineno, 1); contadorParametros = 0; tabla.listaParametros = NULL; cantidadPuntero = 0; flagFuncion = 0;;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 610 "ejemplo.y"
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
                                   agregarFuncion(&tabla.listaFuncionesDeclaradas, &tabla.listaFuncionesDefinidas,nombre,tipoDatoFuncion,&tabla.listaParametros,yylineno, 0);
                                   cantidadPuntero = 0;
                                   tabla.listaParametros = NULL;
                                   flagFuncion = 0;
                              }
                              break;     
                       }
                       tip = 0;
                  ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 663 "ejemplo.y"
    {nombreFuncion = strdup((yyvsp[(2) - (2)].cval)); valorTipoFuncion = strdup((yyvsp[(1) - (2)].cval));;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 663 "ejemplo.y"
    {flagFuncion = 0; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2607 "ejemplo.tab.c"
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
#line 668 "ejemplo.y"
 

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
     tabla.listaVariablesAuxiliares = NULL;
     tabla.listaVariablesExternas = NULL;
     tabla.listaFuncionesDeclaradas = NULL;
     tabla.listaFuncionesDefinidas = NULL;
     tabla.listaFuncionesExternas = NULL;
     parametrosInvocacion = NULL;
     tipoInicializador = strdup("vacio");
     tipoDato = strdup("");

     yyparse();
     imprimirTabla(tabla);
     imprimirErrores(&errores);
     system("PAUSE");
}
