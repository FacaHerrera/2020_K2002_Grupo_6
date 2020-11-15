
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
#define YYLAST   568

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNRULES -- Number of states.  */
#define YYNSTATES  311

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
       0,     0,     3,     5,     8,    10,    13,    16,    19,    22,
      24,    27,    31,    32,    35,    40,    41,    43,    46,    49,
      50,    52,    54,    58,    60,    64,    66,    70,    72,    76,
      78,    80,    84,    89,    91,    94,    99,   102,   103,   105,
     106,   110,   112,   116,   118,   122,   125,   127,   130,   132,
     133,   135,   137,   142,   143,   149,   151,   157,   158,   160,
     162,   166,   168,   171,   174,   177,   180,   182,   184,   185,
     187,   191,   194,   196,   200,   204,   206,   208,   210,   212,
     214,   216,   220,   223,   230,   231,   234,   237,   239,   242,
     243,   245,   247,   250,   253,   254,   257,   263,   271,   277,
     283,   292,   303,   309,   314,   318,   323,   327,   331,   336,
     338,   340,   342,   344,   346,   348,   352,   354,   358,   359,
     361,   363,   367,   369,   375,   376,   378,   380,   382,   384,
     386,   388,   390,   394,   396,   400,   402,   406,   410,   412,
     416,   420,   424,   428,   430,   434,   438,   440,   444,   448,
     452,   454,   457,   460,   463,   466,   469,   472,   475,   478,
     483,   488,   490,   495,   500,   504,   508,   511,   514,   515,
     517,   521,   523,   525,   526
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      67,     0,    -1,    70,    -1,    67,    68,    -1,    52,    -1,
     131,    70,    -1,   102,    70,    -1,    38,    52,    -1,    69,
      52,    -1,    42,    -1,     1,    52,    -1,    39,    35,   115,
      -1,    -1,    52,    70,    -1,    73,    74,    53,    70,    -1,
      -1,    73,    -1,    33,    72,    -1,    79,    72,    -1,    -1,
      75,    -1,    76,    -1,    75,    54,    76,    -1,    88,    -1,
      88,    55,    77,    -1,   118,    -1,    56,    78,    57,    -1,
      77,    -1,    78,    54,    77,    -1,    32,    -1,    80,    -1,
      34,    35,    85,    -1,    34,    56,    81,    57,    -1,    82,
      -1,    81,    82,    -1,    83,    86,    53,    70,    -1,    79,
      84,    -1,    -1,    83,    -1,    -1,    56,    81,    57,    -1,
      87,    -1,    86,    54,    87,    -1,    88,    -1,    90,    58,
     119,    -1,   109,    91,    -1,    91,    -1,   109,    91,    -1,
      91,    -1,    -1,    88,    -1,    35,    -1,    91,    59,   120,
      60,    -1,    -1,    91,    92,    50,    94,    51,    -1,    95,
      -1,    95,    54,    61,    61,    61,    -1,    -1,    93,    -1,
      96,    -1,    95,    54,    96,    -1,    73,    -1,    73,    89,
      -1,    73,    98,    -1,    83,    99,    -1,   109,   100,    -1,
     100,    -1,   109,    -1,    -1,    98,    -1,    50,    98,    51,
      -1,   100,   101,    -1,   101,    -1,    59,   120,    60,    -1,
      50,    94,    51,    -1,   104,    -1,   103,    -1,   111,    -1,
     112,    -1,   114,    -1,   113,    -1,   116,    53,    70,    -1,
      53,    70,    -1,    56,    70,   105,    70,    57,    70,    -1,
      -1,   105,   106,    -1,   105,   108,    -1,   131,    -1,   106,
     131,    -1,    -1,   106,    -1,   102,    -1,   108,   102,    -1,
      47,   110,    -1,    -1,    47,   110,    -1,    19,    50,   116,
      51,   102,    -1,    19,    50,   116,    51,   102,    20,   102,
      -1,    21,    50,   116,    51,   102,    -1,    22,    50,   116,
      51,   102,    -1,    23,   102,    22,    50,   116,    51,    53,
      70,    -1,    24,    50,   117,    53,   117,    53,   117,    51,
      70,   102,    -1,    28,   119,    58,    70,   102,    -1,    29,
      58,    70,   102,    -1,    35,    58,   102,    -1,    25,   117,
      53,    70,    -1,    27,    53,    70,    -1,    26,    53,    70,
      -1,    30,    35,    53,    70,    -1,    35,    -1,     4,    -1,
       3,    -1,    37,    -1,     5,    -1,    31,    -1,    50,   116,
      51,    -1,   118,    -1,   116,    54,   118,    -1,    -1,   116,
      -1,   119,    -1,   128,   121,   118,    -1,   122,    -1,   122,
      62,   116,    58,   119,    -1,    -1,   119,    -1,    55,    -1,
      14,    -1,    15,    -1,    16,    -1,    17,    -1,   123,    -1,
     122,     6,   123,    -1,   124,    -1,   123,     7,   124,    -1,
     125,    -1,   124,     8,   125,    -1,   124,     9,   125,    -1,
     126,    -1,   125,    44,   126,    -1,   125,    43,   126,    -1,
     125,    11,   126,    -1,   125,    10,   126,    -1,   127,    -1,
     126,    45,   127,    -1,   126,    46,   127,    -1,   128,    -1,
     127,    47,   128,    -1,   127,    48,   128,    -1,   127,    49,
     128,    -1,   129,    -1,    12,   128,    -1,    13,   128,    -1,
      46,   128,    -1,    45,   128,    -1,    63,   128,    -1,    64,
     128,    -1,    65,   128,    -1,   109,   128,    -1,    36,    50,
     128,    51,    -1,    36,    50,    97,    51,    -1,   115,    -1,
     129,    59,   116,    60,    -1,   129,    50,   130,    51,    -1,
     129,    61,    35,    -1,   129,    18,    35,    -1,   129,    12,
      -1,   129,    13,    -1,    -1,   118,    -1,   130,    54,   118,
      -1,   132,    -1,    71,    -1,    -1,    73,    89,   133,   107,
     104,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   112,   112,   113,   116,   117,   118,   119,   120,   121,
     127,   130,   133,   134,   138,   205,   206,   209,   210,   221,
     222,   225,   226,   229,   230,   233,   234,   237,   238,   241,
     242,   245,   246,   249,   250,   253,   256,   259,   260,   263,
     264,   267,   268,   271,   272,   275,   297,   306,   315,   322,
     323,   326,   327,   328,   328,   331,   332,   335,   339,   342,
     343,   346,   347,   354,   357,   360,   361,   362,   374,   375,
     378,   379,   380,   383,   384,   388,   389,   390,   391,   392,
     393,   396,   397,   400,   403,   404,   405,   408,   409,   412,
     413,   416,   417,   420,   423,   424,   427,   428,   429,   432,
     433,   434,   437,   438,   439,   442,   464,   465,   466,   470,
     476,   483,   490,   496,   502,   503,   506,   507,   510,   511,
     514,   515,   518,   519,   522,   523,   526,   527,   528,   529,
     530,   533,   534,   537,   538,   541,   542,   543,   546,   547,
     548,   549,   550,   553,   554,   555,   558,   559,   560,   561,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
     574,   577,   578,   579,   580,   581,   582,   583,   586,   587,
     588,   592,   593,   646,   646
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
  "lineaControl", "opcionBarraN", "declaracion", "especDeclaracionBis",
  "especDeclaracion", "listaDeclaradoresBis", "listaDeclaradores",
  "declarador", "inicializador", "listaDeInicializadores", "especTipo",
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
     295,   296,   297,    62,    60,    43,    45,    42,    47,    37,
      40,    41,    10,    59,    44,    61,   123,   125,    58,    91,
      93,    46,    63,   126,    33,    38
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    69,    70,    70,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    77,    77,    78,    78,    79,
      79,    80,    80,    81,    81,    82,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    90,
      90,    91,    91,    92,    91,    93,    93,    94,    94,    95,
      95,    96,    96,    96,    97,    98,    98,    98,    99,    99,
     100,   100,   100,   101,   101,   102,   102,   102,   102,   102,
     102,   103,   103,   104,   105,   105,   105,   106,   106,   107,
     107,   108,   108,   109,   110,   110,   111,   111,   111,   112,
     112,   112,   113,   113,   113,   114,   114,   114,   114,   115,
     115,   115,   115,   115,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   120,   120,   121,   121,   121,   121,
     121,   122,   122,   123,   123,   124,   124,   124,   125,   125,
     125,   125,   125,   126,   126,   126,   127,   127,   127,   127,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   129,   129,   129,   129,   129,   129,   129,   130,   130,
     130,   131,   131,   133,   132
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     2,     1,
       2,     3,     0,     2,     4,     0,     1,     2,     2,     0,
       1,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     3,     4,     1,     2,     4,     2,     0,     1,     0,
       3,     1,     3,     1,     3,     2,     1,     2,     1,     0,
       1,     1,     4,     0,     5,     1,     5,     0,     1,     1,
       3,     1,     2,     2,     2,     2,     1,     1,     0,     1,
       3,     2,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     3,     2,     6,     0,     2,     2,     1,     2,     0,
       1,     1,     2,     2,     0,     2,     5,     7,     5,     5,
       8,    10,     5,     4,     3,     4,     3,     3,     4,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     0,     1,
       1,     3,     1,     5,     0,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     4,
       4,     1,     4,     4,     3,     3,     2,     2,     0,     1,
       3,     1,     1,     0,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      12,    12,     0,     2,    13,     1,     0,   111,   110,   113,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
       0,     0,     0,   114,    29,    15,     0,   109,     0,   112,
       0,     0,     9,     0,     0,    94,     0,     4,    12,    12,
       0,     0,     0,     3,     0,   172,    19,    15,    30,    12,
      76,    75,     0,    77,    78,    80,    79,   161,     0,   116,
     120,   122,   131,   133,   135,   138,   143,   146,   150,    12,
     171,    10,   109,   151,   152,     0,     0,     0,     0,   118,
     119,     0,    12,    12,     0,   146,    12,     0,    17,    16,
      39,     0,     0,     0,     7,     0,   154,   153,    94,    93,
       0,    82,    84,   155,   156,   157,     8,    51,     0,    20,
      21,    23,   173,    48,     0,    18,     6,   158,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   127,   128,   129,   130,   126,     0,
     166,   167,     0,   168,     0,     0,     5,     0,     0,     0,
       0,     0,    12,   107,   106,    12,     0,    12,     0,    31,
      37,     0,    33,    49,   104,    68,     0,     0,    11,    95,
     115,    12,    12,     0,     0,    89,   124,     0,    47,    81,
     117,   132,     0,   134,   136,   137,   142,   141,   140,   139,
     144,   145,   147,   148,   149,   121,   165,   169,     0,     0,
     164,     0,     0,     0,     0,   118,   105,     0,   103,   108,
       0,    38,    36,    32,    34,     0,    41,    43,     0,    46,
       0,    57,   124,    69,    64,    66,    72,    67,   160,   159,
       0,    91,    85,    86,    87,    14,    22,     0,    24,    25,
      90,     0,   125,     0,    57,     0,   163,     0,   162,    96,
      98,    99,     0,     0,   102,    40,    12,    49,     0,    45,
      61,    58,     0,    55,    59,     0,     0,    57,    71,    65,
      12,    88,    92,    27,     0,   174,    52,     0,   123,   170,
       0,     0,   118,    35,    42,    44,    62,    48,    63,    67,
      74,     0,    70,    73,    83,     0,    26,    54,    97,    12,
       0,    47,     0,    60,    28,   100,    12,     0,     0,    56,
     101
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    43,    44,     3,    45,    88,    46,   108,   109,
     110,   238,   274,    47,    48,   161,   162,   163,   212,   159,
     215,   216,   111,   112,   218,   219,   177,   261,   262,   263,
     264,   166,   223,   224,   225,   226,    49,    50,    51,   171,
     232,   241,   233,    52,    99,    53,    54,    55,    56,    57,
      58,    81,    59,    60,   243,   139,    61,    62,    63,    64,
      65,    66,    67,    68,   198,   234,    70,   175
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -224
static const yytype_int16 yypact[] =
{
      -9,    -9,   287,  -224,  -224,  -224,     2,  -224,  -224,  -224,
     503,   503,   -22,    10,    52,   395,    71,   503,    85,    94,
     503,   104,     1,  -224,  -224,    76,   -17,   122,   135,  -224,
     144,   165,  -224,   503,   503,   158,   503,  -224,    -9,    -9,
     503,   503,   503,  -224,   157,  -224,    11,    76,  -224,    -9,
    -224,  -224,   503,  -224,  -224,  -224,  -224,  -224,   138,  -224,
    -224,    15,   206,   216,   102,   182,    67,    89,    38,    -9,
    -224,  -224,  -224,  -224,  -224,   503,   503,   503,   196,   503,
     178,   181,    -9,    -9,   183,  -224,    -9,   194,  -224,  -224,
     192,   152,   395,   431,  -224,    26,  -224,  -224,   158,  -224,
      86,  -224,  -224,  -224,  -224,  -224,  -224,  -224,   197,   195,
    -224,   198,  -224,   149,   217,  -224,  -224,  -224,    -9,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,  -224,  -224,  -224,  -224,  -224,   503,
    -224,  -224,   219,   503,   503,   221,  -224,   101,   107,   121,
     201,   204,    -9,  -224,  -224,    -9,   395,    -9,   152,  -224,
     152,    62,  -224,    11,  -224,   -15,   208,   209,  -224,  -224,
    -224,   341,    -9,    11,   467,    76,   503,   211,   161,  -224,
    -224,   206,   -31,   216,   102,   102,   182,   182,   182,   182,
      67,    67,  -224,  -224,  -224,  -224,  -224,  -224,   128,    -7,
    -224,   395,   395,   395,   503,   503,  -224,   395,  -224,  -224,
     116,  -224,  -224,  -224,  -224,   177,  -224,   205,   207,    14,
     217,   131,   503,  -224,  -224,    20,  -224,    42,  -224,  -224,
     210,  -224,    76,   395,  -224,  -224,  -224,   467,  -224,  -224,
      76,   214,  -224,   202,    76,   503,  -224,   503,  -224,   244,
    -224,  -224,   156,   218,  -224,  -224,    -9,    11,   503,    14,
      48,  -224,   222,   220,  -224,   224,   223,    76,  -224,    20,
      -9,  -224,  -224,  -224,   169,  -224,  -224,   225,  -224,  -224,
     395,   226,   503,  -224,  -224,  -224,  -224,    14,  -224,   124,
    -224,    57,  -224,  -224,  -224,   467,  -224,  -224,  -224,    -9,
     227,    14,   228,  -224,  -224,  -224,    -9,   232,   395,  -224,
    -224
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -224,  -224,  -224,  -224,    -1,  -224,   230,   -23,  -224,  -224,
     108,  -223,  -224,   -74,  -224,   126,  -148,   -85,  -224,  -224,
    -224,    23,  -157,    22,  -224,   -43,  -224,  -224,    51,  -224,
      -6,  -224,  -205,  -224,  -215,  -210,   -14,  -224,    45,  -224,
     127,  -224,  -224,   -24,   199,  -224,  -224,  -224,  -224,   212,
     -10,   -70,   -94,   -16,    74,  -224,  -224,   184,   179,   114,
      41,   110,     0,  -224,  -224,     3,  -224,  -224
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -54
static const yytype_int16 yytable[] =
{
       4,    78,    89,   113,    84,    69,   217,    80,   165,   151,
      73,    74,   269,   214,   273,   268,   265,   160,    90,   160,
      85,   120,   114,   119,    89,   180,   100,   245,    75,     7,
       8,     9,    35,    96,    97,   221,    87,   101,   102,    91,
     103,   104,   105,     1,   222,   195,   107,   119,   116,   197,
     140,   141,   117,   248,    71,   288,   142,    23,    35,   268,
      76,    72,   214,    29,   -53,   147,   148,   149,   146,    80,
     267,   178,   304,   176,   269,   211,    36,   121,   164,   222,
     239,   153,   154,   107,   160,   156,   160,   160,   143,    24,
      25,    26,   221,   167,    24,    35,    26,   144,   221,   145,
     217,   222,    77,   134,   135,   136,   137,   222,    24,    25,
      26,   182,   125,   126,   131,   132,   133,   179,   302,   213,
      85,    79,    85,    85,    85,    85,    85,    85,    85,    85,
      85,   192,   193,   194,   199,   253,   160,   170,    82,   220,
     119,   227,   208,   239,   138,   127,   128,    83,    24,   220,
      26,   206,   201,   279,   207,   119,   209,   231,   202,   107,
     242,   119,    86,    24,    25,    26,   186,   187,   188,   189,
     230,   235,   203,   255,   221,   119,    85,   259,    35,   246,
      92,   221,   247,   222,    24,    93,    26,   249,   250,   251,
     222,   118,   119,   254,   252,    80,    94,   227,   260,   -53,
      95,   239,   -46,   -46,   -46,    98,   242,   281,   176,   106,
     119,   -53,   300,   122,   -45,   -45,   -45,   287,   150,   272,
     176,   260,    85,   295,   123,   124,   296,   129,   130,   278,
     256,   257,   119,   220,   152,   271,   289,   184,   185,   190,
     191,   155,   285,   271,   260,    85,   301,   157,   158,   173,
     172,   204,   107,   174,   196,   283,   200,   205,    85,   228,
     229,   244,   276,   -50,   280,   258,   298,   270,   260,   294,
      39,   282,    80,   290,   291,   292,   297,   115,   306,   299,
     284,   236,   286,   293,   210,   303,   275,     5,     6,   307,
       7,     8,     9,   309,   310,   277,   266,   169,   305,    10,
      11,   183,   240,     0,   181,   308,    12,   168,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,     0,     0,    32,
       0,     0,    33,    34,    35,     0,     0,    36,     0,    37,
      38,     0,     0,    39,     7,     8,     9,     0,     0,     0,
      40,    41,    42,    10,    11,     0,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,     0,
       0,    36,     0,     1,    38,     0,     0,    39,     7,     8,
       9,     0,     0,     0,    40,    41,    42,    10,    11,     0,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,     0,     0,
      27,    28,    29,     0,     7,     8,     9,     0,     0,     0,
      33,    34,    35,    10,    11,    36,     0,     0,    38,     0,
       0,    39,     0,     0,     0,     0,     0,     0,    40,    41,
      42,     0,    23,    24,     0,    26,    72,    28,    29,     0,
       7,     8,     9,     0,     0,     0,    33,    34,    35,    10,
      11,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,    41,    42,     0,    23,     0,
       0,     0,    72,    28,    29,     0,     7,     8,     9,     0,
       0,     0,    33,    34,    35,    10,    11,    36,     0,     0,
       0,     0,     0,   237,     0,     0,     0,     0,     0,     0,
      40,    41,    42,     0,    23,     0,     0,     0,    72,    28,
      29,     0,     0,     0,     0,     0,     0,     0,    33,    34,
      35,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    40,    41,    42
};

static const yytype_int16 yycheck[] =
{
       1,    15,    25,    46,    20,     2,   163,    17,    93,    79,
      10,    11,   227,   161,   237,   225,   221,    91,    35,    93,
      20,     6,    46,    54,    47,   119,    36,    58,    50,     3,
       4,     5,    47,    33,    34,    50,    35,    38,    39,    56,
      40,    41,    42,    52,    59,   139,    35,    54,    49,   143,
      12,    13,    52,    60,    52,   260,    18,    31,    47,   269,
      50,    35,   210,    37,    50,    75,    76,    77,    69,    79,
      50,   114,   295,    59,   289,   160,    50,    62,    92,    59,
     174,    82,    83,    35,   158,    86,   160,   161,    50,    32,
      33,    34,    50,    93,    32,    47,    34,    59,    50,    61,
     257,    59,    50,    14,    15,    16,    17,    59,    32,    33,
      34,   121,    10,    11,    47,    48,    49,   118,    61,    57,
     120,    50,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   144,   205,   210,    51,    53,   163,
      54,   165,   156,   237,    55,    43,    44,    53,    32,   173,
      34,   152,    51,   247,   155,    54,   157,   171,    51,    35,
     176,    54,    58,    32,    33,    34,   125,   126,   127,   128,
     171,   172,    51,    57,    50,    54,   176,   220,    47,    51,
      58,    50,    54,    59,    32,    50,    34,   201,   202,   203,
      59,    53,    54,   207,   204,   205,    52,   221,   221,    50,
      35,   295,    53,    54,    55,    47,   222,    51,    59,    52,
      54,    50,   282,     7,    53,    54,    55,   260,    22,   233,
      59,   244,   222,    54,     8,     9,    57,    45,    46,   245,
      53,    54,    54,   257,    53,   232,   260,   123,   124,   129,
     130,    58,   258,   240,   267,   245,   289,    53,    56,    54,
      53,    50,    35,    55,    35,   256,    35,    53,   258,    51,
      51,    50,    60,    58,    20,    58,   280,    57,   291,   270,
      56,    53,   282,    51,    54,    51,    51,    47,    51,    53,
     257,   173,   260,    60,   158,   291,   241,     0,     1,    61,
       3,     4,     5,    61,   308,   244,   222,    98,   299,    12,
      13,   122,   175,    -1,   120,   306,    19,    95,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,    47,    -1,    -1,    50,    -1,    52,
      53,    -1,    -1,    56,     3,     4,     5,    -1,    -1,    -1,
      63,    64,    65,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,
      -1,    50,    -1,    52,    53,    -1,    -1,    56,     3,     4,
       5,    -1,    -1,    -1,    63,    64,    65,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      35,    36,    37,    -1,     3,     4,     5,    -1,    -1,    -1,
      45,    46,    47,    12,    13,    50,    -1,    -1,    53,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    -1,    31,    32,    -1,    34,    35,    36,    37,    -1,
       3,     4,     5,    -1,    -1,    -1,    45,    46,    47,    12,
      13,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    -1,    31,    -1,
      -1,    -1,    35,    36,    37,    -1,     3,     4,     5,    -1,
      -1,    -1,    45,    46,    47,    12,    13,    50,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    -1,    31,    -1,    -1,    -1,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,    67,    70,    70,     0,     1,     3,     4,     5,
      12,    13,    19,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    42,    45,    46,    47,    50,    52,    53,    56,
      63,    64,    65,    68,    69,    71,    73,    79,    80,   102,
     103,   104,   109,   111,   112,   113,   114,   115,   116,   118,
     119,   122,   123,   124,   125,   126,   127,   128,   129,   131,
     132,    52,    35,   128,   128,    50,    50,    50,   102,    50,
     116,   117,    53,    53,   119,   128,    58,    35,    72,    73,
      35,    56,    58,    50,    52,    35,   128,   128,    47,   110,
     116,    70,    70,   128,   128,   128,    52,    35,    74,    75,
      76,    88,    89,    91,   109,    72,    70,   128,    53,    54,
       6,    62,     7,     8,     9,    10,    11,    43,    44,    45,
      46,    47,    48,    49,    14,    15,    16,    17,    55,   121,
      12,    13,    18,    50,    59,    61,    70,   116,   116,   116,
      22,   117,    53,    70,    70,    58,    70,    53,    56,    85,
      79,    81,    82,    83,   102,    83,    97,   128,   115,   110,
      51,   105,    53,    54,    55,   133,    59,    92,    91,    70,
     118,   123,   116,   124,   125,   125,   126,   126,   126,   126,
     127,   127,   128,   128,   128,   118,    35,   118,   130,   116,
      35,    51,    51,    51,    50,    53,    70,    70,   102,    70,
      81,    83,    84,    57,    82,    86,    87,    88,    90,    91,
     109,    50,    59,    98,    99,   100,   101,   109,    51,    51,
      70,   102,   106,   108,   131,    70,    76,    56,    77,   118,
     106,   107,   119,   120,    50,    58,    51,    54,    60,   102,
     102,   102,   116,   117,   102,    57,    53,    54,    58,    91,
      73,    93,    94,    95,    96,    98,   120,    50,   101,   100,
      57,   131,   102,    77,    78,   104,    60,    94,   119,   118,
      20,    51,    53,    70,    87,   119,    89,    91,    98,   109,
      51,    54,    51,    60,    70,    54,    57,    51,   102,    53,
     117,    91,    61,    96,    77,    70,    51,    61,    70,    61,
     102
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
    {
                         char *error = malloc(strlen("Error Lexico: ") + strlen((yyvsp[(1) - (1)].cval)) + 1);
                         strcpy(error, "Error Lexico: ");
                         strcat(error, (yyvsp[(1) - (1)].cval));
                         agregarError(&errores, error, yylineno);
                    ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 127 "ejemplo.y"
    {agregarError(&errores,"Error Sintactico",yylineno); tabla.listaParametros = NULL; cantidadPuntero = 0; contadorParametros = 0;;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 130 "ejemplo.y"
    {agregarVariablesExternasBis(&tabla.listaVariablesExternas, (yyvsp[(2) - (3)].cval), tipoInicializador);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 138 "ejemplo.y"
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

  case 18:

/* Line 1455 of yacc.c  */
#line 210 "ejemplo.y"
    {
                                                       if(tip == 3 && flagFuncion == 0 && strcmp(tipoDato,"")) {
                                                            tipoDatoFuncion = (char*)realloc(tipoDatoFuncion, strlen(tipoDato));
                                                            strcpy(tipoDatoFuncion, tipoDato);
                                                            flagFuncion = 1;
                                                       }
                                                       tipoDato = strdup((yyvsp[(1) - (2)].cval));
                                                  ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 225 "ejemplo.y"
    {cantidad = 1; ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 226 "ejemplo.y"
    {cantidad = 2;;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 229 "ejemplo.y"
    { tipDecla = 1; ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 230 "ejemplo.y"
    {   tipDecla = 2; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 234 "ejemplo.y"
    {flagArray = 1;;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 275 "ejemplo.y"
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

  case 46:

/* Line 1455 of yacc.c  */
#line 297 "ejemplo.y"
    { 
                              if(tip!=3){
                                   variable[contadorVariables] = strdup((yyvsp[(1) - (1)].cval)); 
                                   esArray[contadorVariables] = flagArray;
                                   contadorVariables++;
                              }
                         ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 306 "ejemplo.y"
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

  case 48:

/* Line 1455 of yacc.c  */
#line 315 "ejemplo.y"
    {
                              tipoDatoPuntero = (char*)malloc(strlen(""));
                              strcpy(tipoDatoPuntero, ""); 
                              nombre = strdup((yyvsp[(1) - (1)].cval));
                         ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 326 "ejemplo.y"
    {tip = 1;flagArray=0;;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 327 "ejemplo.y"
    {tip = 2; flagArray=1;;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 328 "ejemplo.y"
    {tip = 3;flagArray=0;;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 335 "ejemplo.y"
    {
                              tipoDatoFuncion = (char*)realloc(tipoDatoFuncion, strlen(tipoDato));
                              strcpy(tipoDatoFuncion, tipoDato);
                         ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 342 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 343 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 346 "ejemplo.y"
    {agregarParametro(&tabla.listaParametros, "-", (yyvsp[(1) - (1)].cval),yylineno, flagArray); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 347 "ejemplo.y"
    {
                                                  char* aux = (char*)malloc(strlen((yyvsp[(1) - (2)].cval))+strlen(tipoDatoPuntero));
                                                  strcpy(aux, (yyvsp[(1) - (2)].cval));
                                                  strcat(aux, tipoDatoPuntero);
                                                  agregarParametro(&tabla.listaParametros, nombre, aux,yylineno, flagArray);
                                                  cantidadPuntero = 0;
                                             ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 362 "ejemplo.y"
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

  case 83:

/* Line 1455 of yacc.c  */
#line 400 "ejemplo.y"
    {/*printf("Se encontro una Sentencia Compuesta. \n");*/ ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 420 "ejemplo.y"
    {cantidadPuntero++;;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 424 "ejemplo.y"
    {cantidadPuntero++;;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 427 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Seleccion IF.\n");*/ ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 428 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Seleccion IF/ELSE.\n");*/ ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 429 "ejemplo.y"
    {/*printf("Se enconto una Sentencia de Seleccion SWITCH.\n");*/ ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 432 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion WHILE.\n");*/ ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 433 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion DO WHILE.\n");*/ ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 434 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion FOR.\n");*/ ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 437 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Etiqueta CASE.\n");*/ ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 438 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Etiqueta DEFAULT.\n");*/ ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 442 "ejemplo.y"
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

  case 106:

/* Line 1455 of yacc.c  */
#line 464 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto BREAK.\n"); */;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 465 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto CONTINUE.\n"); */;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 466 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto GOTO. \n"); */;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 470 "ejemplo.y"
    {    if(esArrayVariable(tabla,(yyvsp[(1) - (1)].cval))!=2) flagArray = esArrayVariable(tabla,(yyvsp[(1) - (1)].cval));
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = tipoVariable(tabla, &tabla.listaParametros, (yyvsp[(1) - (1)].cval)); 
                                   variableExpresion[contadorVariableExpresion] = strdup(tipoVariable(tabla, &tabla.listaParametros, (yyvsp[(1) - (1)].cval)));
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 476 "ejemplo.y"
    {
                                   (yyval.dval) = (yyvsp[(1) - (1)].ival); 
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "int"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("int");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 483 "ejemplo.y"
    {
                                   (yyval.dval) = (yyvsp[(1) - (1)].dval); 
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "double"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("double");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 490 "ejemplo.y"
    {
                                   tipoParametroInvocacion = tipoInicializador = tipoInicializadorFuncion = "char"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("char");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 496 "ejemplo.y"
    {
                                   tipoParametroInvocacion = tipoInicializadorFuncion = "char*"; 
                                   variableExpresion[contadorVariableExpresion] = strdup("char*");
                                   contadorVariableExpresion++;
                                   tip = 0;
                              ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 503 "ejemplo.y"
    {(yyval.dval) = ( (yyvsp[(2) - (3)].dval) ); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 515 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(3) - (3)].dval); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 519 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 534 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) || (yyvsp[(3) - (3)].dval); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 538 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) && (yyvsp[(3) - (3)].dval); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 542 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 543 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 547 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 548 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 549 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) <= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 550 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 554 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); flagOperacionBinaria = 1;;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 555 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); flagOperacionBinaria = 2; ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 559 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval);  flagOperacionBinaria = 3;;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 560 "ejemplo.y"
    {if((yyvsp[(3) - (3)].dval) == 0) {agregarError(&errores,"ERROR/: No se puede dividir por 0",yylineno);} else {(yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval);  flagOperacionBinaria = 4;};}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 561 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].ival) % (yyvsp[(3) - (3)].ival); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 565 "ejemplo.y"
    {(yyval.dval) = ++ (yyvsp[(2) - (2)].dval); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 566 "ejemplo.y"
    {(yyval.dval) = -- (yyvsp[(2) - (2)].dval); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 567 "ejemplo.y"
    {(yyval.dval) = - (yyvsp[(2) - (2)].dval); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 568 "ejemplo.y"
    {(yyval.dval) = + (yyvsp[(2) - (2)].dval); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 569 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 570 "ejemplo.y"
    {(yyval.dval) = ! (yyvsp[(2) - (2)].dval); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 571 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 572 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 573 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 574 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 578 "ejemplo.y"
    {(yyval.dval) = 0; flagArray = 1;;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 579 "ejemplo.y"
    {(yyval.dval) = 0; validarInvocacion(tabla,(yyvsp[(1) - (4)].cval),parametrosInvocacion,yylineno); parametrosInvocacion = NULL; tipoInicializadorFuncion = strdup(tipoFuncion(tabla,(yyvsp[(1) - (4)].cval))); contadorVariableExpresion = 0; tip = 3;;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 580 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 581 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 582 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) ++; ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 583 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) --; ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 587 "ejemplo.y"
    {agregarNodo(&parametrosInvocacion,tipoInicializadorFuncion, flagArray);;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 588 "ejemplo.y"
    {agregarNodo(&parametrosInvocacion,tipoInicializadorFuncion, flagArray);;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 592 "ejemplo.y"
    {/*printf("Se define la funcion %s con %d parametros y devolucion de tipo %s  \n",nombre,contadorParametros,tipoDato); contadorParametros = 0;*/ agregarFuncion(&tabla.listaFuncionesDeclaradas, &tabla.listaFuncionesDefinidas,nombreFuncion,valorTipoFuncion,&tabla.listaParametros,yylineno, 1); contadorParametros = 0; tabla.listaParametros = NULL; cantidadPuntero = 0; flagFuncion = 0;;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 593 "ejemplo.y"
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

  case 173:

/* Line 1455 of yacc.c  */
#line 646 "ejemplo.y"
    {nombreFuncion = strdup((yyvsp[(2) - (2)].cval)); valorTipoFuncion = strdup((yyvsp[(1) - (2)].cval));;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 646 "ejemplo.y"
    {flagFuncion = 0; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2581 "ejemplo.tab.c"
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
#line 651 "ejemplo.y"
 

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
