/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "thrifty.y"

/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/**
 * Thrift parser.
 *
 * This parser is used on a thrift definition file.
 *
 */

#define __STDC_LIMIT_MACROS
#define __STDC_FORMAT_MACROS
#include <stdio.h>
#ifndef _MSC_VER
#include <inttypes.h>
#else
#include <stdint.h>
#endif
#include <limits.h>
#ifdef _MSC_VER
#include "windows/config.h"
#endif
#include "main.h"
#include "globals.h"
#include "parse/t_program.h"
#include "parse/t_scope.h"

#ifdef _MSC_VER
//warning C4065: switch statement contains 'default' but no 'case' labels
#pragma warning(disable:4065)
#endif

/**
 * This global variable is used for automatic numbering of field indices etc.
 * when parsing the members of a struct. Field values are automatically
 * assigned starting from -1 and working their way down.
 */
int y_field_val = -1;
/**
 * This global variable is used for automatic numbering of enum values.
 * y_enum_val is the last value assigned; the next auto-assigned value will be
 * y_enum_val+1, and then it continues working upwards.  Explicitly specified
 * enum values reset y_enum_val to that value.
 */
int32_t y_enum_val = -1;
int g_arglist = 0;
const int struct_is_struct = 0;
const int struct_is_union = 1;


/* Line 371 of yacc.c  */
#line 136 "thrifty.tab.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "thrifty.tab.h".  */
#ifndef YY_YY_THRIFTY_TAB_H_INCLUDED
# define YY_YY_THRIFTY_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tok_identifier = 258,
     tok_literal = 259,
     tok_doctext = 260,
     tok_st_identifier = 261,
     tok_int_constant = 262,
     tok_dub_constant = 263,
     tok_include = 264,
     tok_namespace = 265,
     tok_cpp_namespace = 266,
     tok_cpp_include = 267,
     tok_cpp_type = 268,
     tok_php_namespace = 269,
     tok_py_module = 270,
     tok_perl_package = 271,
     tok_java_package = 272,
     tok_xsd_all = 273,
     tok_xsd_optional = 274,
     tok_xsd_nillable = 275,
     tok_xsd_namespace = 276,
     tok_xsd_attrs = 277,
     tok_ruby_namespace = 278,
     tok_smalltalk_category = 279,
     tok_smalltalk_prefix = 280,
     tok_cocoa_prefix = 281,
     tok_csharp_namespace = 282,
     tok_delphi_namespace = 283,
     tok_void = 284,
     tok_bool = 285,
     tok_byte = 286,
     tok_string = 287,
     tok_binary = 288,
     tok_slist = 289,
     tok_senum = 290,
     tok_i16 = 291,
     tok_i32 = 292,
     tok_i64 = 293,
     tok_float = 294,
     tok_double = 295,
     tok_map = 296,
     tok_list = 297,
     tok_set = 298,
     tok_oneway = 299,
     tok_typedef = 300,
     tok_struct = 301,
     tok_xception = 302,
     tok_throws = 303,
     tok_extends = 304,
     tok_service = 305,
     tok_enum = 306,
     tok_const = 307,
     tok_required = 308,
     tok_optional = 309,
     tok_union = 310,
     tok_reference = 311
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 73 "thrifty.y"

  char*          id;
  int64_t        iconst;
  double         dconst;
  bool           tbool;
  t_doc*         tdoc;
  t_type*        ttype;
  t_base_type*   tbase;
  t_typedef*     ttypedef;
  t_enum*        tenum;
  t_enum_value*  tenumv;
  t_const*       tconst;
  t_const_value* tconstv;
  t_struct*      tstruct;
  t_service*     tservice;
  t_function*    tfunction;
  t_field*       tfield;
  char*          dtext;
  t_field::e_req ereq;
  t_annotation*  tannot;
  t_field_id     tfieldid;


/* Line 387 of yacc.c  */
#line 259 "thrifty.tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_THRIFTY_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 287 "thrifty.tab.cpp"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNRULES -- Number of states.  */
#define YYNSTATES  224

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      66,    67,    57,     2,    58,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    65,    59,
      68,    62,    69,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,    61,     2,     2,     2,     2,
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
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,     8,    12,    13,    15,    19,
      23,    26,    29,    32,    35,    38,    41,    44,    47,    50,
      53,    56,    59,    62,    65,    69,    70,    72,    74,    76,
      78,    80,    82,    84,    86,    88,    90,    91,    97,   104,
     107,   108,   113,   117,   119,   126,   129,   130,   133,   140,
     142,   144,   146,   148,   150,   152,   156,   160,   161,   165,
     171,   172,   174,   176,   184,   186,   187,   189,   190,   192,
     193,   198,   199,   206,   216,   217,   218,   221,   222,   225,
     226,   237,   239,   240,   245,   246,   249,   250,   263,   266,
     267,   269,   270,   272,   274,   275,   278,   279,   281,   283,
     285,   287,   289,   292,   294,   296,   298,   300,   302,   304,
     306,   308,   310,   312,   315,   317,   319,   321,   329,   335,
     341,   344,   345,   349,   350,   353,   354,   358,   361
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      71,     0,    -1,    74,    77,    -1,    -1,    -1,    74,    73,
      75,    -1,    -1,    76,    -1,    10,     3,     3,    -1,    10,
      57,     3,    -1,    11,     3,    -1,    12,     4,    -1,    14,
       3,    -1,    15,     3,    -1,    16,     3,    -1,    23,     3,
      -1,    24,     6,    -1,    25,     3,    -1,    17,     3,    -1,
      26,     3,    -1,    21,     4,    -1,    27,     3,    -1,    28,
       3,    -1,     9,     4,    -1,    77,    72,    78,    -1,    -1,
      89,    -1,    79,    -1,   102,    -1,    81,    -1,    82,    -1,
      86,    -1,    96,    -1,   101,    -1,    58,    -1,    59,    -1,
      -1,    45,   117,     3,   126,    80,    -1,    51,     3,    60,
      83,    61,   126,    -1,    83,    84,    -1,    -1,    72,    85,
     126,    80,    -1,     3,    62,     7,    -1,     3,    -1,    35,
       3,    60,    87,    61,   126,    -1,    87,    88,    -1,    -1,
       4,    80,    -1,    52,   117,     3,    62,    90,    80,    -1,
       7,    -1,     8,    -1,     4,    -1,     3,    -1,    91,    -1,
      93,    -1,    63,    92,    64,    -1,    92,    90,    80,    -1,
      -1,    60,    94,    61,    -1,    94,    90,    65,    90,    80,
      -1,    -1,    46,    -1,    55,    -1,    95,     3,    97,    60,
     110,    61,   126,    -1,    18,    -1,    -1,    19,    -1,    -1,
      20,    -1,    -1,    22,    60,   110,    61,    -1,    -1,    47,
       3,    60,   110,    61,   126,    -1,    50,     3,   105,    60,
     103,   106,   104,    61,   126,    -1,    -1,    -1,    49,     3,
      -1,    -1,   106,   107,    -1,    -1,    72,   108,   116,     3,
      66,   110,    67,   109,   126,    80,    -1,    44,    -1,    -1,
      48,    66,   110,    67,    -1,    -1,   110,   111,    -1,    -1,
      72,   112,   114,   117,   113,     3,   115,    98,    99,   100,
     126,    80,    -1,     7,    65,    -1,    -1,    56,    -1,    -1,
      53,    -1,    54,    -1,    -1,    62,    90,    -1,    -1,   117,
      -1,    29,    -1,     3,    -1,   118,    -1,   120,    -1,   119,
     126,    -1,    32,    -1,    33,    -1,    34,    -1,    30,    -1,
      31,    -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,
      40,    -1,   121,   126,    -1,   122,    -1,   123,    -1,   124,
      -1,    41,   125,    68,   117,    58,   117,    69,    -1,    43,
     125,    68,   117,    69,    -1,    42,    68,   117,    69,   125,
      -1,    13,     4,    -1,    -1,    66,   127,    67,    -1,    -1,
     127,   128,    -1,    -1,     3,   129,    80,    -1,    62,     4,
      -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   255,   255,   267,   278,   287,   292,   297,   301,   309,
     318,   327,   335,   345,   355,   365,   375,   385,   395,   405,
     415,   425,   435,   446,   459,   467,   472,   480,   495,   513,
     520,   527,   534,   541,   550,   552,   555,   558,   571,   599,
     606,   613,   627,   642,   654,   666,   673,   680,   687,   706,
     715,   721,   726,   732,   737,   744,   751,   758,   765,   772,
     779,   786,   790,   796,   811,   816,   821,   826,   831,   836,
     841,   846,   851,   865,   879,   884,   889,   902,   907,   914,
     920,   935,   940,   945,   955,   960,   970,   977,  1011,  1047,
    1053,  1058,  1063,  1067,  1079,  1084,  1093,  1098,  1103,  1110,
    1129,  1134,  1140,  1153,  1158,  1163,  1168,  1173,  1178,  1183,
    1188,  1193,  1198,  1204,  1215,  1220,  1225,  1232,  1242,  1252,
    1263,  1268,  1273,  1279,  1284,  1292,  1298,  1307,  1313
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tok_identifier", "tok_literal",
  "tok_doctext", "tok_st_identifier", "tok_int_constant",
  "tok_dub_constant", "tok_include", "tok_namespace", "tok_cpp_namespace",
  "tok_cpp_include", "tok_cpp_type", "tok_php_namespace", "tok_py_module",
  "tok_perl_package", "tok_java_package", "tok_xsd_all",
  "tok_xsd_optional", "tok_xsd_nillable", "tok_xsd_namespace",
  "tok_xsd_attrs", "tok_ruby_namespace", "tok_smalltalk_category",
  "tok_smalltalk_prefix", "tok_cocoa_prefix", "tok_csharp_namespace",
  "tok_delphi_namespace", "tok_void", "tok_bool", "tok_byte", "tok_string",
  "tok_binary", "tok_slist", "tok_senum", "tok_i16", "tok_i32", "tok_i64",
  "tok_float", "tok_double", "tok_map", "tok_list", "tok_set",
  "tok_oneway", "tok_typedef", "tok_struct", "tok_xception", "tok_throws",
  "tok_extends", "tok_service", "tok_enum", "tok_const", "tok_required",
  "tok_optional", "tok_union", "tok_reference", "'*'", "','", "';'", "'{'",
  "'}'", "'='", "'['", "']'", "':'", "'('", "')'", "'<'", "'>'", "$accept",
  "Program", "CaptureDocText", "DestroyDocText", "HeaderList", "Header",
  "Include", "DefinitionList", "Definition", "TypeDefinition",
  "CommaOrSemicolonOptional", "Typedef", "Enum", "EnumDefList", "EnumDef",
  "EnumValue", "Senum", "SenumDefList", "SenumDef", "Const", "ConstValue",
  "ConstList", "ConstListContents", "ConstMap", "ConstMapContents",
  "StructHead", "Struct", "XsdAll", "XsdOptional", "XsdNillable",
  "XsdAttributes", "Xception", "Service", "FlagArgs", "UnflagArgs",
  "Extends", "FunctionList", "Function", "Oneway", "Throws", "FieldList",
  "Field", "FieldIdentifier", "FieldReference", "FieldRequiredness",
  "FieldValue", "FunctionType", "FieldType", "BaseType", "SimpleBaseType",
  "ContainerType", "SimpleContainerType", "MapType", "SetType", "ListType",
  "CppType", "TypeAnnotations", "TypeAnnotationList", "TypeAnnotation",
  "TypeAnnotationValue", YY_NULL
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
     305,   306,   307,   308,   309,   310,   311,    42,    44,    59,
     123,   125,    61,    91,    93,    58,    40,    41,    60,    62
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    73,    74,    74,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    76,    77,    77,    78,    78,    78,    79,
      79,    79,    79,    79,    80,    80,    80,    81,    82,    83,
      83,    84,    85,    85,    86,    87,    87,    88,    89,    90,
      90,    90,    90,    90,    90,    91,    92,    92,    93,    94,
      94,    95,    95,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   101,   102,   103,   104,   105,   105,   106,   106,
     107,   108,   108,   109,   109,   110,   110,   111,   112,   112,
     113,   113,   114,   114,   114,   115,   115,   116,   116,   117,
     117,   117,   118,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   120,   121,   121,   121,   122,   123,   124,
     125,   125,   126,   126,   127,   127,   128,   129,   129
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     0,     3,     0,     1,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     5,     6,     2,
       0,     4,     3,     1,     6,     2,     0,     2,     6,     1,
       1,     1,     1,     1,     1,     3,     3,     0,     3,     5,
       0,     1,     1,     7,     1,     0,     1,     0,     1,     0,
       4,     0,     6,     9,     0,     0,     2,     0,     2,     0,
      10,     1,     0,     4,     0,     2,     0,    12,     2,     0,
       1,     0,     1,     1,     0,     2,     0,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     7,     5,     5,
       2,     0,     3,     0,     2,     0,     3,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     4,     1,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     7,     0,    23,     0,     0,    10,    11,    12,
      13,    14,    18,    20,    15,    16,    17,    19,    21,    22,
       0,     0,    61,     0,     0,     0,     0,    62,    24,    27,
      29,    30,    31,    26,     0,    32,    33,    28,     8,     9,
       0,    99,   106,   107,   103,   104,   105,   108,   109,   110,
     111,   112,   121,     0,   121,     0,   100,   123,   101,   123,
     114,   115,   116,     0,    77,     0,     0,    65,    46,     0,
       0,     0,     0,   123,   125,   102,   113,    86,     0,     0,
      40,     0,    64,     0,     0,   120,     0,     0,     0,    36,
       0,     3,    76,    74,     3,     0,    86,    36,   123,    45,
       0,   121,     0,    34,    35,    37,   128,   122,   124,   123,
      89,    85,    79,   123,     0,    39,    52,    51,    49,    50,
      60,    57,    36,    53,    54,     3,    47,    44,     0,   119,
     118,     0,    36,    72,     0,    94,     3,    38,    43,   123,
       0,     0,    48,   123,     0,   127,   126,    88,    92,    93,
       0,    82,     0,    78,     0,    36,    58,     0,    55,    36,
      63,   117,    91,    81,     0,   123,    42,    41,     0,    56,
      90,     0,    98,     0,    97,    73,    36,    96,     0,    59,
       0,    67,    86,    95,    66,    69,     3,    68,    71,    84,
       0,   123,     0,   123,    86,    36,    86,    36,     3,    87,
       3,    80,    70,    83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   130,     4,     2,    21,    22,     5,    48,    49,
     125,    50,    51,   114,   135,   159,    52,   104,   119,    53,
     142,   143,   161,   144,   160,    54,    55,   103,   205,   208,
     211,    56,    57,   132,   172,    99,   156,   173,   184,   213,
     111,   131,   155,   191,   170,   201,   193,    75,    76,    77,
      78,    79,    80,    81,    82,    90,    95,   110,   128,   152
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -151
static const yytype_int16 yypact[] =
{
    -151,    23,    76,  -151,   186,    28,    13,     2,    29,    30,
      32,    33,    34,    37,    38,    40,    27,    41,    42,    44,
      45,  -151,  -151,   139,  -151,    46,    48,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
      51,   130,  -151,    52,    54,    55,   130,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,    57,  -151,  -151,  -151,  -151,  -151,
       4,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
    -151,  -151,    60,     7,    60,    67,  -151,    12,  -151,    12,
    -151,  -151,  -151,    21,    35,    25,    84,    70,  -151,    85,
      22,   130,    24,    12,  -151,  -151,  -151,  -151,    88,    36,
    -151,    39,  -151,    50,    18,  -151,   130,    26,   130,   -32,
       0,    53,  -151,  -151,    56,    17,  -151,   -32,    12,  -151,
      58,    60,    31,  -151,  -151,  -151,    62,  -151,  -151,    12,
      87,  -151,  -151,    12,    94,  -151,  -151,  -151,  -151,  -151,
    -151,  -151,   -32,  -151,  -151,    59,  -151,  -151,   130,  -151,
    -151,    95,   -32,  -151,    47,   -23,    68,  -151,    73,    12,
      11,     5,  -151,    12,    49,  -151,  -151,  -151,  -151,  -151,
     130,    69,    71,  -151,    91,   -32,  -151,    65,  -151,   -32,
    -151,  -151,    81,  -151,   116,    12,  -151,  -151,    17,  -151,
    -151,   103,  -151,   112,  -151,  -151,   -32,    78,    72,  -151,
      17,   122,  -151,  -151,  -151,   123,    75,  -151,   143,    96,
     115,    12,   110,    12,  -151,   -32,  -151,   -32,   117,  -151,
     113,  -151,  -151,  -151
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,  -151,    -5,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
    -113,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
    -150,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
    -109,  -151,  -151,  -151,  -151,  -151,  -151,   -45,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,   -68,   -77,  -151,  -151,  -151
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -76
static const yytype_int16 yytable[] =
{
      23,    86,    96,   126,   146,    25,    92,   145,   136,   137,
     177,   179,   138,   139,   136,   137,   109,    24,   138,   139,
     136,   137,   117,     3,   138,   139,   123,   124,    -2,   162,
     168,   169,    27,    35,    28,    29,    30,    31,   196,   166,
      32,   147,    33,    34,    36,    37,   107,    38,    39,    58,
     203,    59,   153,   149,    60,    83,   157,    84,    85,    26,
      87,   120,   187,   122,    88,   140,   189,   127,   141,   178,
      93,   140,   176,    89,   141,    91,   -25,   140,    94,   118,
     141,    97,   175,   199,    98,   100,   180,   101,   102,   105,
     106,   112,   108,   206,   154,   121,   113,   158,   186,   165,
     150,   115,   219,   164,   221,   218,   197,   220,   195,   134,
     116,   -25,   167,   183,   129,   198,   148,   133,   181,    61,
     163,   -25,   -25,   -25,   151,   182,   -25,   -25,   -25,   -75,
     188,   -25,   185,    61,   215,   174,   217,   190,   202,   194,
     200,   204,   209,   207,   212,   192,    62,    63,    64,    65,
      66,   171,    67,    68,    69,    70,    71,    72,    73,    74,
      62,    63,    64,    65,    66,   210,    67,    68,    69,    70,
      71,    72,    73,    74,    40,   214,   216,     0,   222,     0,
     223,     0,     0,     0,    41,    42,    43,     0,     0,    44,
      45,    46,     0,     0,    47,     6,     7,     8,     9,     0,
      10,    11,    12,    13,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-151)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       5,    46,    79,     3,   117,     3,    74,   116,     3,     4,
     160,   161,     7,     8,     3,     4,    93,     4,     7,     8,
       3,     4,     4,     0,     7,     8,    58,    59,     0,   142,
      53,    54,     3,     6,     4,     3,     3,     3,   188,   152,
       3,   118,     4,     3,     3,     3,    91,     3,     3,     3,
     200,     3,   129,   121,     3,     3,   133,     3,     3,    57,
       3,   106,   175,   108,    60,    60,   179,    67,    63,    64,
       3,    60,    61,    13,    63,    68,     0,    60,    66,    61,
      63,    60,   159,   196,    49,    60,   163,     3,    18,     4,
      68,     3,    68,   202,     7,    69,    60,     3,     7,     4,
      69,    62,   215,   148,   217,   214,     3,   216,   185,   114,
      60,    35,    65,    44,    61,     3,    58,    61,    69,     3,
      61,    45,    46,    47,    62,   170,    50,    51,    52,    61,
      65,    55,    61,     3,   211,    62,   213,    56,    66,   184,
      62,    19,    67,    20,    48,    29,    30,    31,    32,    33,
      34,   156,    36,    37,    38,    39,    40,    41,    42,    43,
      30,    31,    32,    33,    34,    22,    36,    37,    38,    39,
      40,    41,    42,    43,    35,    60,    66,    -1,    61,    -1,
      67,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,    50,
      51,    52,    -1,    -1,    55,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    21,    -1,    23,
      24,    25,    26,    27,    28
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    71,    74,     0,    73,    77,     9,    10,    11,    12,
      14,    15,    16,    17,    21,    23,    24,    25,    26,    27,
      28,    75,    76,    72,     4,     3,    57,     3,     4,     3,
       3,     3,     3,     4,     3,     6,     3,     3,     3,     3,
      35,    45,    46,    47,    50,    51,    52,    55,    78,    79,
      81,    82,    86,    89,    95,    96,   101,   102,     3,     3,
       3,     3,    30,    31,    32,    33,    34,    36,    37,    38,
      39,    40,    41,    42,    43,   117,   118,   119,   120,   121,
     122,   123,   124,     3,     3,     3,   117,     3,    60,    13,
     125,    68,   125,     3,    66,   126,   126,    60,    49,   105,
      60,     3,    18,    97,    87,     4,    68,   117,    68,   126,
     127,   110,     3,    60,    83,    62,    60,     4,    61,    88,
     117,    69,   117,    58,    59,    80,     3,    67,   128,    61,
      72,   111,   103,    61,    72,    84,     3,     4,     7,     8,
      60,    63,    90,    91,    93,   110,    80,   126,    58,   125,
      69,    62,   129,   126,     7,   112,   106,   126,     3,    85,
      94,    92,    80,    61,   117,     4,    80,    65,    53,    54,
     114,    72,   104,   107,    62,   126,    61,    90,    64,    90,
     126,    69,   117,    44,   108,    61,     7,    80,    65,    80,
      56,   113,    29,   116,   117,   126,    90,     3,     3,    80,
      62,   115,    66,    90,    19,    98,   110,    20,    99,    67,
      22,   100,    48,   109,    60,   126,    66,   126,   110,    80,
     110,    80,    61,    67
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
/* Line 1792 of yacc.c  */
#line 256 "thrifty.y"
    {
      pdebug("Program -> Headers DefinitionList");
      if((g_program_doctext_candidate != NULL) && (g_program_doctext_status != ALREADY_PROCESSED))
      {
        g_program->set_doc(g_program_doctext_candidate);
        g_program_doctext_status = ALREADY_PROCESSED;
      }
      clear_doctext();
    }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 267 "thrifty.y"
    {
      if (g_parse_mode == PROGRAM) {
        (yyval.dtext) = g_doctext;
        g_doctext = NULL;
      } else {
        (yyval.dtext) = NULL;
      }
    }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 278 "thrifty.y"
    {
      if (g_parse_mode == PROGRAM) {
        clear_doctext();
      }
    }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 288 "thrifty.y"
    {
      pdebug("HeaderList -> HeaderList Header");
    }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 292 "thrifty.y"
    {
      pdebug("HeaderList -> ");
    }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 298 "thrifty.y"
    {
      pdebug("Header -> Include");
    }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 302 "thrifty.y"
    {
      pdebug("Header -> tok_namespace tok_identifier tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace((yyvsp[(2) - (3)].id), (yyvsp[(3) - (3)].id));
      }
    }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 310 "thrifty.y"
    {
      pdebug("Header -> tok_namespace * tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("*", (yyvsp[(3) - (3)].id));
      }
    }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 319 "thrifty.y"
    {
      pwarning(1, "'cpp_namespace' is deprecated. Use 'namespace cpp' instead");
      pdebug("Header -> tok_cpp_namespace tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("cpp", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 328 "thrifty.y"
    {
      pdebug("Header -> tok_cpp_include tok_literal");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->add_cpp_include((yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 336 "thrifty.y"
    {
      pwarning(1, "'php_namespace' is deprecated. Use 'namespace php' instead");
      pdebug("Header -> tok_php_namespace tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("php", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 346 "thrifty.y"
    {
      pwarning(1, "'py_module' is deprecated. Use 'namespace py' instead");
      pdebug("Header -> tok_py_module tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("py", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 356 "thrifty.y"
    {
      pwarning(1, "'perl_package' is deprecated. Use 'namespace perl' instead");
      pdebug("Header -> tok_perl_namespace tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("perl", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 366 "thrifty.y"
    {
      pwarning(1, "'ruby_namespace' is deprecated. Use 'namespace rb' instead");
      pdebug("Header -> tok_ruby_namespace tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("rb", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 376 "thrifty.y"
    {
      pwarning(1, "'smalltalk_category' is deprecated. Use 'namespace smalltalk.category' instead");
      pdebug("Header -> tok_smalltalk_category tok_st_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("smalltalk.category", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 386 "thrifty.y"
    {
      pwarning(1, "'smalltalk_prefix' is deprecated. Use 'namespace smalltalk.prefix' instead");
      pdebug("Header -> tok_smalltalk_prefix tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("smalltalk.prefix", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 396 "thrifty.y"
    {
      pwarning(1, "'java_package' is deprecated. Use 'namespace java' instead");
      pdebug("Header -> tok_java_package tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("java", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 406 "thrifty.y"
    {
      pwarning(1, "'cocoa_prefix' is deprecated. Use 'namespace cocoa' instead");
      pdebug("Header -> tok_cocoa_prefix tok_identifier");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("cocoa", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 416 "thrifty.y"
    {
      pwarning(1, "'xsd_namespace' is deprecated. Use 'namespace xsd' instead");
      pdebug("Header -> tok_xsd_namespace tok_literal");
      declare_valid_program_doctext();  
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("cocoa", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 426 "thrifty.y"
    {
     pwarning(1, "'csharp_namespace' is deprecated. Use 'namespace csharp' instead");
     pdebug("Header -> tok_csharp_namespace tok_identifier");
     declare_valid_program_doctext();  
     if (g_parse_mode == PROGRAM) {
       g_program->set_namespace("csharp", (yyvsp[(2) - (2)].id));
     }
   }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 436 "thrifty.y"
    {
     pwarning(1, "'delphi_namespace' is deprecated. Use 'namespace delphi' instead");
     pdebug("Header -> tok_delphi_namespace tok_identifier");
     declare_valid_program_doctext();  
     if (g_parse_mode == PROGRAM) {
       g_program->set_namespace("delphi", (yyvsp[(2) - (2)].id));
     }
   }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 447 "thrifty.y"
    {
      pdebug("Include -> tok_include tok_literal");
      declare_valid_program_doctext();  
      if (g_parse_mode == INCLUDES) {
        std::string path = include_file(std::string((yyvsp[(2) - (2)].id)));
        if (!path.empty()) {
          g_program->add_include(path, std::string((yyvsp[(2) - (2)].id)));
        }
      }
    }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 460 "thrifty.y"
    {
      pdebug("DefinitionList -> DefinitionList Definition");
      if ((yyvsp[(2) - (3)].dtext) != NULL && (yyvsp[(3) - (3)].tdoc) != NULL) {
        (yyvsp[(3) - (3)].tdoc)->set_doc((yyvsp[(2) - (3)].dtext));
      }
    }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 467 "thrifty.y"
    {
      pdebug("DefinitionList -> ");
    }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 473 "thrifty.y"
    {
      pdebug("Definition -> Const");
      if (g_parse_mode == PROGRAM) {
        g_program->add_const((yyvsp[(1) - (1)].tconst));
      }
      (yyval.tdoc) = (yyvsp[(1) - (1)].tconst);
    }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 481 "thrifty.y"
    {
      pdebug("Definition -> TypeDefinition");
      if (g_parse_mode == PROGRAM) {
        g_scope->add_type((yyvsp[(1) - (1)].ttype)->get_name(), (yyvsp[(1) - (1)].ttype));
        if (g_parent_scope != NULL) {
          g_parent_scope->add_type(g_parent_prefix + (yyvsp[(1) - (1)].ttype)->get_name(), (yyvsp[(1) - (1)].ttype));
        }
        if (! g_program->is_unique_typename((yyvsp[(1) - (1)].ttype))) {
          yyerror("Type \"%s\" is already defined.", (yyvsp[(1) - (1)].ttype)->get_name().c_str());
          exit(1);
        }
      }
      (yyval.tdoc) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 496 "thrifty.y"
    {
      pdebug("Definition -> Service");
      if (g_parse_mode == PROGRAM) {
        g_scope->add_service((yyvsp[(1) - (1)].tservice)->get_name(), (yyvsp[(1) - (1)].tservice));
        if (g_parent_scope != NULL) {
          g_parent_scope->add_service(g_parent_prefix + (yyvsp[(1) - (1)].tservice)->get_name(), (yyvsp[(1) - (1)].tservice));
        }
        g_program->add_service((yyvsp[(1) - (1)].tservice));
        if (! g_program->is_unique_typename((yyvsp[(1) - (1)].tservice))) {
          yyerror("Type \"%s\" is already defined.", (yyvsp[(1) - (1)].tservice)->get_name().c_str());
          exit(1);
        }
      }
      (yyval.tdoc) = (yyvsp[(1) - (1)].tservice);
    }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 514 "thrifty.y"
    {
      pdebug("TypeDefinition -> Typedef");
      if (g_parse_mode == PROGRAM) {
        g_program->add_typedef((yyvsp[(1) - (1)].ttypedef));
      }
    }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 521 "thrifty.y"
    {
      pdebug("TypeDefinition -> Enum");
      if (g_parse_mode == PROGRAM) {
        g_program->add_enum((yyvsp[(1) - (1)].tenum));
      }
    }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 528 "thrifty.y"
    {
      pdebug("TypeDefinition -> Senum");
      if (g_parse_mode == PROGRAM) {
        g_program->add_typedef((yyvsp[(1) - (1)].ttypedef));
      }
    }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 535 "thrifty.y"
    {
      pdebug("TypeDefinition -> Struct");
      if (g_parse_mode == PROGRAM) {
        g_program->add_struct((yyvsp[(1) - (1)].tstruct));
      }
    }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 542 "thrifty.y"
    {
      pdebug("TypeDefinition -> Xception");
      if (g_parse_mode == PROGRAM) {
        g_program->add_xception((yyvsp[(1) - (1)].tstruct));
      }
    }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 551 "thrifty.y"
    {}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 553 "thrifty.y"
    {}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 555 "thrifty.y"
    {}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 559 "thrifty.y"
    {
      pdebug("TypeDef -> tok_typedef FieldType tok_identifier");
      validate_simple_identifier( (yyvsp[(3) - (5)].id));
      t_typedef *td = new t_typedef(g_program, (yyvsp[(2) - (5)].ttype), (yyvsp[(3) - (5)].id));
      (yyval.ttypedef) = td;
      if ((yyvsp[(4) - (5)].ttype) != NULL) {
        (yyval.ttypedef)->annotations_ = (yyvsp[(4) - (5)].ttype)->annotations_;
        delete (yyvsp[(4) - (5)].ttype);
      }
    }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 572 "thrifty.y"
    {
      pdebug("Enum -> tok_enum tok_identifier { EnumDefList }");
      (yyval.tenum) = (yyvsp[(4) - (6)].tenum);
      validate_simple_identifier( (yyvsp[(2) - (6)].id));
      (yyval.tenum)->set_name((yyvsp[(2) - (6)].id));
      if ((yyvsp[(6) - (6)].ttype) != NULL) {
        (yyval.tenum)->annotations_ = (yyvsp[(6) - (6)].ttype)->annotations_;
        delete (yyvsp[(6) - (6)].ttype);
      }

      // make constants for all the enum values
      if (g_parse_mode == PROGRAM) {
        const std::vector<t_enum_value*>& enum_values = (yyval.tenum)->get_constants();
        std::vector<t_enum_value*>::const_iterator c_iter;
        for (c_iter = enum_values.begin(); c_iter != enum_values.end(); ++c_iter) {
          std::string const_name = (yyval.tenum)->get_name() + "." + (*c_iter)->get_name();
          t_const_value* const_val = new t_const_value((*c_iter)->get_value());
          const_val->set_enum((yyval.tenum));
          g_scope->add_constant(const_name, new t_const(g_type_i32, (*c_iter)->get_name(), const_val));
          if (g_parent_scope != NULL) {
            g_parent_scope->add_constant(g_parent_prefix + const_name, new t_const(g_type_i32, (*c_iter)->get_name(), const_val));
          }
        }
      }
    }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 600 "thrifty.y"
    {
      pdebug("EnumDefList -> EnumDefList EnumDef");
      (yyval.tenum) = (yyvsp[(1) - (2)].tenum);
      (yyval.tenum)->append((yyvsp[(2) - (2)].tenumv));
    }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 606 "thrifty.y"
    {
      pdebug("EnumDefList -> ");
      (yyval.tenum) = new t_enum(g_program);
      y_enum_val = -1;
    }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 614 "thrifty.y"
    {
      pdebug("EnumDef -> EnumValue");
      (yyval.tenumv) = (yyvsp[(2) - (4)].tenumv);
      if ((yyvsp[(1) - (4)].dtext) != NULL) {
        (yyval.tenumv)->set_doc((yyvsp[(1) - (4)].dtext));
      }
	  if ((yyvsp[(3) - (4)].ttype) != NULL) {
        (yyval.tenumv)->annotations_ = (yyvsp[(3) - (4)].ttype)->annotations_;
        delete (yyvsp[(3) - (4)].ttype);
      }
    }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 628 "thrifty.y"
    {
      pdebug("EnumValue -> tok_identifier = tok_int_constant");
      if ((yyvsp[(3) - (3)].iconst) < INT32_MIN || (yyvsp[(3) - (3)].iconst) > INT32_MAX) {
        // Note: this used to be just a warning.  However, since thrift always
        // treats enums as i32 values, I'm changing it to a fatal error.
        // I doubt this will affect many people, but users who run into this
        // will have to update their thrift files to manually specify the
        // truncated i32 value that thrift has always been using anyway.
        failure("64-bit value supplied for enum %s will be truncated.", (yyvsp[(1) - (3)].id));
      }
      y_enum_val = static_cast<int32_t>((yyvsp[(3) - (3)].iconst));
      (yyval.tenumv) = new t_enum_value((yyvsp[(1) - (3)].id), y_enum_val);
    }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 643 "thrifty.y"
    {
      pdebug("EnumValue -> tok_identifier");
      validate_simple_identifier( (yyvsp[(1) - (1)].id));
      if (y_enum_val == INT32_MAX) {
        failure("enum value overflow at enum %s", (yyvsp[(1) - (1)].id));
      }
      ++y_enum_val;
      (yyval.tenumv) = new t_enum_value((yyvsp[(1) - (1)].id), y_enum_val);
    }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 655 "thrifty.y"
    {
      pdebug("Senum -> tok_senum tok_identifier { SenumDefList }");
      validate_simple_identifier( (yyvsp[(2) - (6)].id));
      (yyval.ttypedef) = new t_typedef(g_program, (yyvsp[(4) - (6)].tbase), (yyvsp[(2) - (6)].id));
      if ((yyvsp[(6) - (6)].ttype) != NULL) {
        (yyval.ttypedef)->annotations_ = (yyvsp[(6) - (6)].ttype)->annotations_;
        delete (yyvsp[(6) - (6)].ttype);
      }
    }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 667 "thrifty.y"
    {
      pdebug("SenumDefList -> SenumDefList SenumDef");
      (yyval.tbase) = (yyvsp[(1) - (2)].tbase);
      (yyval.tbase)->add_string_enum_val((yyvsp[(2) - (2)].id));
    }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 673 "thrifty.y"
    {
      pdebug("SenumDefList -> ");
      (yyval.tbase) = new t_base_type("string", t_base_type::TYPE_STRING);
      (yyval.tbase)->set_string_enum(true);
    }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 681 "thrifty.y"
    {
      pdebug("SenumDef -> tok_literal");
      (yyval.id) = (yyvsp[(1) - (2)].id);
    }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 688 "thrifty.y"
    {
      pdebug("Const -> tok_const FieldType tok_identifier = ConstValue");
      if (g_parse_mode == PROGRAM) {
        validate_simple_identifier( (yyvsp[(3) - (6)].id));
        g_scope->resolve_const_value((yyvsp[(5) - (6)].tconstv), (yyvsp[(2) - (6)].ttype));
        (yyval.tconst) = new t_const((yyvsp[(2) - (6)].ttype), (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].tconstv));
        validate_const_type((yyval.tconst));

        g_scope->add_constant((yyvsp[(3) - (6)].id), (yyval.tconst));
        if (g_parent_scope != NULL) {
          g_parent_scope->add_constant(g_parent_prefix + (yyvsp[(3) - (6)].id), (yyval.tconst));
        }
      } else {
        (yyval.tconst) = NULL;
      }
    }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 707 "thrifty.y"
    {
      pdebug("ConstValue => tok_int_constant");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_integer((yyvsp[(1) - (1)].iconst));
      if (!g_allow_64bit_consts && ((yyvsp[(1) - (1)].iconst) < INT32_MIN || (yyvsp[(1) - (1)].iconst) > INT32_MAX)) {
        pwarning(1, "64-bit constant \"%" PRIi64"\" may not work in all languages.\n", (yyvsp[(1) - (1)].iconst));
      }
    }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 716 "thrifty.y"
    {
      pdebug("ConstValue => tok_dub_constant");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_double((yyvsp[(1) - (1)].dconst));
    }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 722 "thrifty.y"
    {
      pdebug("ConstValue => tok_literal");
      (yyval.tconstv) = new t_const_value((yyvsp[(1) - (1)].id));
    }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 727 "thrifty.y"
    {
      pdebug("ConstValue => tok_identifier");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_identifier((yyvsp[(1) - (1)].id));
    }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 733 "thrifty.y"
    {
      pdebug("ConstValue => ConstList");
      (yyval.tconstv) = (yyvsp[(1) - (1)].tconstv);
    }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 738 "thrifty.y"
    {
      pdebug("ConstValue => ConstMap");
      (yyval.tconstv) = (yyvsp[(1) - (1)].tconstv);
    }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 745 "thrifty.y"
    {
      pdebug("ConstList => [ ConstListContents ]");
      (yyval.tconstv) = (yyvsp[(2) - (3)].tconstv);
    }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 752 "thrifty.y"
    {
      pdebug("ConstListContents => ConstListContents ConstValue CommaOrSemicolonOptional");
      (yyval.tconstv) = (yyvsp[(1) - (3)].tconstv);
      (yyval.tconstv)->add_list((yyvsp[(2) - (3)].tconstv));
    }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 758 "thrifty.y"
    {
      pdebug("ConstListContents =>");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_list();
    }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 766 "thrifty.y"
    {
      pdebug("ConstMap => { ConstMapContents }");
      (yyval.tconstv) = (yyvsp[(2) - (3)].tconstv);
    }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 773 "thrifty.y"
    {
      pdebug("ConstMapContents => ConstMapContents ConstValue CommaOrSemicolonOptional");
      (yyval.tconstv) = (yyvsp[(1) - (5)].tconstv);
      (yyval.tconstv)->add_map((yyvsp[(2) - (5)].tconstv), (yyvsp[(4) - (5)].tconstv));
    }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 779 "thrifty.y"
    {
      pdebug("ConstMapContents =>");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_map();
    }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 787 "thrifty.y"
    {
      (yyval.iconst) = struct_is_struct;
    }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 791 "thrifty.y"
    {
      (yyval.iconst) = struct_is_union;
    }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 797 "thrifty.y"
    {
      pdebug("Struct -> tok_struct tok_identifier { FieldList }");
      validate_simple_identifier( (yyvsp[(2) - (7)].id));
      (yyvsp[(5) - (7)].tstruct)->set_xsd_all((yyvsp[(3) - (7)].tbool));
      (yyvsp[(5) - (7)].tstruct)->set_union((yyvsp[(1) - (7)].iconst) == struct_is_union);
      (yyval.tstruct) = (yyvsp[(5) - (7)].tstruct);
      (yyval.tstruct)->set_name((yyvsp[(2) - (7)].id));
      if ((yyvsp[(7) - (7)].ttype) != NULL) {
        (yyval.tstruct)->annotations_ = (yyvsp[(7) - (7)].ttype)->annotations_;
        delete (yyvsp[(7) - (7)].ttype);
      }
    }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 812 "thrifty.y"
    {
      (yyval.tbool) = true;
    }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 816 "thrifty.y"
    {
      (yyval.tbool) = false;
    }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 822 "thrifty.y"
    {
      (yyval.tbool) = true;
    }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 826 "thrifty.y"
    {
      (yyval.tbool) = false;
    }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 832 "thrifty.y"
    {
      (yyval.tbool) = true;
    }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 836 "thrifty.y"
    {
      (yyval.tbool) = false;
    }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 842 "thrifty.y"
    {
      (yyval.tstruct) = (yyvsp[(3) - (4)].tstruct);
    }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 846 "thrifty.y"
    {
      (yyval.tstruct) = NULL;
    }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 852 "thrifty.y"
    {
      pdebug("Xception -> tok_xception tok_identifier { FieldList }");
      validate_simple_identifier( (yyvsp[(2) - (6)].id));
      (yyvsp[(4) - (6)].tstruct)->set_name((yyvsp[(2) - (6)].id));
      (yyvsp[(4) - (6)].tstruct)->set_xception(true);
      (yyval.tstruct) = (yyvsp[(4) - (6)].tstruct);
      if ((yyvsp[(6) - (6)].ttype) != NULL) {
        (yyval.tstruct)->annotations_ = (yyvsp[(6) - (6)].ttype)->annotations_;
        delete (yyvsp[(6) - (6)].ttype);
      }
    }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 866 "thrifty.y"
    {
      pdebug("Service -> tok_service tok_identifier { FunctionList }");
      validate_simple_identifier( (yyvsp[(2) - (9)].id));
      (yyval.tservice) = (yyvsp[(6) - (9)].tservice);
      (yyval.tservice)->set_name((yyvsp[(2) - (9)].id));
      (yyval.tservice)->set_extends((yyvsp[(3) - (9)].tservice));
      if ((yyvsp[(9) - (9)].ttype) != NULL) {
        (yyval.tservice)->annotations_ = (yyvsp[(9) - (9)].ttype)->annotations_;
        delete (yyvsp[(9) - (9)].ttype);
      }
    }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 879 "thrifty.y"
    {
       g_arglist = 1;
    }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 884 "thrifty.y"
    {
       g_arglist = 0;
    }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 890 "thrifty.y"
    {
      pdebug("Extends -> tok_extends tok_identifier");
      (yyval.tservice) = NULL;
      if (g_parse_mode == PROGRAM) {
        (yyval.tservice) = g_scope->get_service((yyvsp[(2) - (2)].id));
        if ((yyval.tservice) == NULL) {
          yyerror("Service \"%s\" has not been defined.", (yyvsp[(2) - (2)].id));
          exit(1);
        }
      }
    }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 902 "thrifty.y"
    {
      (yyval.tservice) = NULL;
    }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 908 "thrifty.y"
    {
      pdebug("FunctionList -> FunctionList Function");
      (yyval.tservice) = (yyvsp[(1) - (2)].tservice);
      (yyvsp[(1) - (2)].tservice)->add_function((yyvsp[(2) - (2)].tfunction));
    }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 914 "thrifty.y"
    {
      pdebug("FunctionList -> ");
      (yyval.tservice) = new t_service(g_program);
    }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 921 "thrifty.y"
    {
      validate_simple_identifier( (yyvsp[(4) - (10)].id));
      (yyvsp[(6) - (10)].tstruct)->set_name(std::string((yyvsp[(4) - (10)].id)) + "_args");
      (yyval.tfunction) = new t_function((yyvsp[(3) - (10)].ttype), (yyvsp[(4) - (10)].id), (yyvsp[(6) - (10)].tstruct), (yyvsp[(8) - (10)].tstruct), (yyvsp[(2) - (10)].tbool));
      if ((yyvsp[(1) - (10)].dtext) != NULL) {
        (yyval.tfunction)->set_doc((yyvsp[(1) - (10)].dtext));
      }
      if ((yyvsp[(9) - (10)].ttype) != NULL) {
        (yyval.tfunction)->annotations_ = (yyvsp[(9) - (10)].ttype)->annotations_;
        delete (yyvsp[(9) - (10)].ttype);
      }
    }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 936 "thrifty.y"
    {
      (yyval.tbool) = true;
    }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 940 "thrifty.y"
    {
      (yyval.tbool) = false;
    }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 946 "thrifty.y"
    {
      pdebug("Throws -> tok_throws ( FieldList )");
      (yyval.tstruct) = (yyvsp[(3) - (4)].tstruct);
      if (g_parse_mode == PROGRAM && !validate_throws((yyval.tstruct))) {
        yyerror("Throws clause may not contain non-exception types");
        exit(1);
      }
    }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 955 "thrifty.y"
    {
      (yyval.tstruct) = new t_struct(g_program);
    }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 961 "thrifty.y"
    {
      pdebug("FieldList -> FieldList , Field");
      (yyval.tstruct) = (yyvsp[(1) - (2)].tstruct);
      if (!((yyval.tstruct)->append((yyvsp[(2) - (2)].tfield)))) {
        yyerror("\"%d: %s\" - field identifier/name has already been used", (yyvsp[(2) - (2)].tfield)->get_key(), (yyvsp[(2) - (2)].tfield)->get_name().c_str());
        exit(1);
      }
    }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 970 "thrifty.y"
    {
      pdebug("FieldList -> ");
      y_field_val = -1;
      (yyval.tstruct) = new t_struct(g_program);
    }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 978 "thrifty.y"
    {
      pdebug("tok_int_constant : Field -> FieldType tok_identifier");
      if ((yyvsp[(2) - (12)].tfieldid).auto_assigned) {
        pwarning(1, "No field key specified for %s, resulting protocol may have conflicts or not be backwards compatible!\n", (yyvsp[(6) - (12)].id));
        if (g_strict >= 192) {
          yyerror("Implicit field keys are deprecated and not allowed with -strict");
          exit(1);
        }
      }
      validate_simple_identifier((yyvsp[(6) - (12)].id));
      (yyval.tfield) = new t_field((yyvsp[(4) - (12)].ttype), (yyvsp[(6) - (12)].id), (yyvsp[(2) - (12)].tfieldid).value);
      (yyval.tfield)->set_reference((yyvsp[(5) - (12)].tbool));
      (yyval.tfield)->set_req((yyvsp[(3) - (12)].ereq));
      if ((yyvsp[(7) - (12)].tconstv) != NULL) {
        g_scope->resolve_const_value((yyvsp[(7) - (12)].tconstv), (yyvsp[(4) - (12)].ttype));
        validate_field_value((yyval.tfield), (yyvsp[(7) - (12)].tconstv));
        (yyval.tfield)->set_value((yyvsp[(7) - (12)].tconstv));
      }
      (yyval.tfield)->set_xsd_optional((yyvsp[(8) - (12)].tbool));
      (yyval.tfield)->set_xsd_nillable((yyvsp[(9) - (12)].tbool));
      if ((yyvsp[(1) - (12)].dtext) != NULL) {
        (yyval.tfield)->set_doc((yyvsp[(1) - (12)].dtext));
      }
      if ((yyvsp[(10) - (12)].tstruct) != NULL) {
        (yyval.tfield)->set_xsd_attrs((yyvsp[(10) - (12)].tstruct));
      }
      if ((yyvsp[(11) - (12)].ttype) != NULL) {
        (yyval.tfield)->annotations_ = (yyvsp[(11) - (12)].ttype)->annotations_;
        delete (yyvsp[(11) - (12)].ttype);
      }
    }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 1012 "thrifty.y"
    {
      if ((yyvsp[(1) - (2)].iconst) <= 0) {
        if (g_allow_neg_field_keys) {
          /*
           * g_allow_neg_field_keys exists to allow users to add explicitly
           * specified key values to old .thrift files without breaking
           * protocol compatibility.
           */
          if ((yyvsp[(1) - (2)].iconst) != y_field_val) {
            /*
             * warn if the user-specified negative value isn't what
             * thrift would have auto-assigned.
             */
            pwarning(1, "Nonpositive field key (%" PRIi64") differs from what would be "
                     "auto-assigned by thrift (%d).\n", (yyvsp[(1) - (2)].iconst), y_field_val);
          }
          /*
           * Leave $1 as-is, and update y_field_val to be one less than $1.
           * The FieldList parsing will catch any duplicate key values.
           */
          y_field_val = static_cast<int32_t>((yyvsp[(1) - (2)].iconst) - 1);
          (yyval.tfieldid).value = static_cast<int32_t>((yyvsp[(1) - (2)].iconst));
          (yyval.tfieldid).auto_assigned = false;
        } else {
          pwarning(1, "Nonpositive value (%d) not allowed as a field key.\n",
                   (yyvsp[(1) - (2)].iconst));
          (yyval.tfieldid).value = y_field_val--;
          (yyval.tfieldid).auto_assigned = true;
        }
      } else {
        (yyval.tfieldid).value = static_cast<int32_t>((yyvsp[(1) - (2)].iconst));
        (yyval.tfieldid).auto_assigned = false;
      }
    }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 1047 "thrifty.y"
    {
      (yyval.tfieldid).value = y_field_val--;
      (yyval.tfieldid).auto_assigned = true;
    }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 1054 "thrifty.y"
    {
      (yyval.tbool) = true;
    }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 1058 "thrifty.y"
    {
     (yyval.tbool) = false;
   }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 1064 "thrifty.y"
    {
      (yyval.ereq) = t_field::T_REQUIRED;
    }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 1068 "thrifty.y"
    {
      if (g_arglist) {
        if (g_parse_mode == PROGRAM) {
          pwarning(1, "optional keyword is ignored in argument lists.\n");
        }
        (yyval.ereq) = t_field::T_OPT_IN_REQ_OUT;
      } else {
        (yyval.ereq) = t_field::T_OPTIONAL;
      }
    }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 1079 "thrifty.y"
    {
      (yyval.ereq) = t_field::T_OPT_IN_REQ_OUT;
    }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 1085 "thrifty.y"
    {
      if (g_parse_mode == PROGRAM) {
        (yyval.tconstv) = (yyvsp[(2) - (2)].tconstv);
      } else {
        (yyval.tconstv) = NULL;
      }
    }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 1093 "thrifty.y"
    {
      (yyval.tconstv) = NULL;
    }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 1099 "thrifty.y"
    {
      pdebug("FunctionType -> FieldType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 1104 "thrifty.y"
    {
      pdebug("FunctionType -> tok_void");
      (yyval.ttype) = g_type_void;
    }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 1111 "thrifty.y"
    {
      pdebug("FieldType -> tok_identifier");
      if (g_parse_mode == INCLUDES) {
        // Ignore identifiers in include mode
        (yyval.ttype) = NULL;
      } else {
        // Lookup the identifier in the current scope
        (yyval.ttype) = g_scope->get_type((yyvsp[(1) - (1)].id));
        if ((yyval.ttype) == NULL) {
          /*
           * Either this type isn't yet declared, or it's never
             declared.  Either way allow it and we'll figure it out
             during generation.
           */
          (yyval.ttype) = new t_typedef(g_program, (yyvsp[(1) - (1)].id), true);
        }
      }
    }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 1130 "thrifty.y"
    {
      pdebug("FieldType -> BaseType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 1135 "thrifty.y"
    {
      pdebug("FieldType -> ContainerType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 1141 "thrifty.y"
    {
      pdebug("BaseType -> SimpleBaseType TypeAnnotations");
      if ((yyvsp[(2) - (2)].ttype) != NULL) {
        (yyval.ttype) = new t_base_type(*static_cast<t_base_type*>((yyvsp[(1) - (2)].ttype)));
        (yyval.ttype)->annotations_ = (yyvsp[(2) - (2)].ttype)->annotations_;
        delete (yyvsp[(2) - (2)].ttype);
      } else {
        (yyval.ttype) = (yyvsp[(1) - (2)].ttype);
      }
    }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 1154 "thrifty.y"
    {
      pdebug("BaseType -> tok_string");
      (yyval.ttype) = g_type_string;
    }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 1159 "thrifty.y"
    {
      pdebug("BaseType -> tok_binary");
      (yyval.ttype) = g_type_binary;
    }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 1164 "thrifty.y"
    {
      pdebug("BaseType -> tok_slist");
      (yyval.ttype) = g_type_slist;
    }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 1169 "thrifty.y"
    {
      pdebug("BaseType -> tok_bool");
      (yyval.ttype) = g_type_bool;
    }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 1174 "thrifty.y"
    {
      pdebug("BaseType -> tok_byte");
      (yyval.ttype) = g_type_byte;
    }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 1179 "thrifty.y"
    {
      pdebug("BaseType -> tok_i16");
      (yyval.ttype) = g_type_i16;
    }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 1184 "thrifty.y"
    {
      pdebug("BaseType -> tok_i32");
      (yyval.ttype) = g_type_i32;
    }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 1189 "thrifty.y"
    {
      pdebug("BaseType -> tok_i64");
      (yyval.ttype) = g_type_i64;
    }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 1194 "thrifty.y"
    {
      pdebug("BaseType -> tok_float");
      (yyval.ttype) = g_type_float;
    }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 1199 "thrifty.y"
    {
      pdebug("BaseType -> tok_double");
      (yyval.ttype) = g_type_double;
    }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 1205 "thrifty.y"
    {
      pdebug("ContainerType -> SimpleContainerType TypeAnnotations");
      (yyval.ttype) = (yyvsp[(1) - (2)].ttype);
      if ((yyvsp[(2) - (2)].ttype) != NULL) {
        (yyval.ttype)->annotations_ = (yyvsp[(2) - (2)].ttype)->annotations_;
        delete (yyvsp[(2) - (2)].ttype);
      }
    }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 1216 "thrifty.y"
    {
      pdebug("SimpleContainerType -> MapType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 1221 "thrifty.y"
    {
      pdebug("SimpleContainerType -> SetType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 1226 "thrifty.y"
    {
      pdebug("SimpleContainerType -> ListType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 1233 "thrifty.y"
    {
      pdebug("MapType -> tok_map <FieldType, FieldType>");
      (yyval.ttype) = new t_map((yyvsp[(4) - (7)].ttype), (yyvsp[(6) - (7)].ttype));
      if ((yyvsp[(2) - (7)].id) != NULL) {
        ((t_container*)(yyval.ttype))->set_cpp_name(std::string((yyvsp[(2) - (7)].id)));
      }
    }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 1243 "thrifty.y"
    {
      pdebug("SetType -> tok_set<FieldType>");
      (yyval.ttype) = new t_set((yyvsp[(4) - (5)].ttype));
      if ((yyvsp[(2) - (5)].id) != NULL) {
        ((t_container*)(yyval.ttype))->set_cpp_name(std::string((yyvsp[(2) - (5)].id)));
      }
    }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 1253 "thrifty.y"
    {
      pdebug("ListType -> tok_list<FieldType>");
      check_for_list_of_bytes((yyvsp[(3) - (5)].ttype));
      (yyval.ttype) = new t_list((yyvsp[(3) - (5)].ttype));
      if ((yyvsp[(5) - (5)].id) != NULL) {
        ((t_container*)(yyval.ttype))->set_cpp_name(std::string((yyvsp[(5) - (5)].id)));
      }
    }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 1264 "thrifty.y"
    {
      (yyval.id) = (yyvsp[(2) - (2)].id);
    }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 1268 "thrifty.y"
    {
      (yyval.id) = NULL;
    }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 1274 "thrifty.y"
    {
      pdebug("TypeAnnotations -> ( TypeAnnotationList )");
      (yyval.ttype) = (yyvsp[(2) - (3)].ttype);
    }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 1279 "thrifty.y"
    {
      (yyval.ttype) = NULL;
    }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 1285 "thrifty.y"
    {
      pdebug("TypeAnnotationList -> TypeAnnotationList , TypeAnnotation");
      (yyval.ttype) = (yyvsp[(1) - (2)].ttype);
      (yyval.ttype)->annotations_[(yyvsp[(2) - (2)].tannot)->key] = (yyvsp[(2) - (2)].tannot)->val;
      delete (yyvsp[(2) - (2)].tannot);
    }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 1292 "thrifty.y"
    {
      /* Just use a dummy structure to hold the annotations. */
      (yyval.ttype) = new t_struct(g_program);
    }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 1299 "thrifty.y"
    {
      pdebug("TypeAnnotation -> TypeAnnotationValue");
      (yyval.tannot) = new t_annotation;
      (yyval.tannot)->key = (yyvsp[(1) - (3)].id);
      (yyval.tannot)->val = (yyvsp[(2) - (3)].id);
    }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 1308 "thrifty.y"
    {
      pdebug("TypeAnnotationValue -> = tok_literal");
      (yyval.id) = (yyvsp[(2) - (2)].id);
    }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 1313 "thrifty.y"
    {
      pdebug("TypeAnnotationValue ->");
      (yyval.id) = strdup("1");
    }
    break;


/* Line 1792 of yacc.c  */
#line 3147 "thrifty.tab.cpp"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 1318 "thrifty.y"

