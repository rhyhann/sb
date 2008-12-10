
/* A Bison parser, made by GNU Bison 2.4.  */

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
#define YYBISON_VERSION "2.4"

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

/* Substitute the variable and function names.  */
#define yyparse         itex2MML_yyparse
#define yylex           itex2MML_yylex
#define yyerror         itex2MML_yyerror
#define yylval          itex2MML_yylval
#define yychar          itex2MML_yychar
#define yydebug         itex2MML_yydebug
#define yynerrs         itex2MML_yynerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 5 "itex2MML.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "itex2MML.h"

#define YYSTYPE char *
#define YYPARSE_PARAM_TYPE char **
#define YYPARSE_PARAM ret_str

#define yytext itex2MML_yytext

 extern int yylex ();

 extern char * yytext;

 static void itex2MML_default_error (const char * msg)
   {
     if (msg)
       fprintf(stderr, "Line: %d Error: %s\n", itex2MML_lineno, msg);
   }

 void (*itex2MML_error) (const char * msg) = itex2MML_default_error;

 static void yyerror (char * s)
   {
     char * msg = itex2MML_copy3 (s, " at token ", yytext);
     if (itex2MML_error)
       (*itex2MML_error) (msg);
     itex2MML_free_string (msg);
   }

 /* Note: If length is 0, then buffer is treated like a string; otherwise only length bytes are written.
  */
 static void itex2MML_default_write (const char * buffer, unsigned long length)
   {
     if (buffer)
       {
	 if (length)
	   fwrite (buffer, 1, length, stdout);
	 else
	   fputs (buffer, stdout);
       }
   }

 static void itex2MML_default_write_mathml (const char * mathml)
   {
     if (itex2MML_write)
       (*itex2MML_write) (mathml, 0);
   }

#ifdef itex2MML_CAPTURE
    static char * itex2MML_output_string = "" ;

    const char * itex2MML_output ()
    {
        char * copy = (char *) malloc(strlen(itex2MML_output_string) +1);
        if (copy)
          {
           if (itex2MML_output_string)
             {
               strcpy(copy, itex2MML_output_string);
               if (itex2MML_output_string != "")
                   free(itex2MML_output_string);
             }
           else
             copy[0] = 0;
          }
        itex2MML_output_string = "";
        return copy;
    }

 static void itex2MML_capture (const char * buffer, unsigned long length)
    {
     if (buffer)
       {
         if (length)
           {
              unsigned long first_length = itex2MML_output_string ? strlen(itex2MML_output_string) : 0;
              char * copy  = (char *) malloc(first_length + length + 1);
              if (copy)
                {
                  if (itex2MML_output_string)
                    {
                       strcpy(copy, itex2MML_output_string);
                       if (itex2MML_output_string != "")
                          free(itex2MML_output_string);
                    }
                  else
                     copy[0] = 0;
                  strncat(copy, buffer, length);
                 }
              itex2MML_output_string = copy;
            }
         else
            {
              char * copy = itex2MML_copy2(itex2MML_output_string, buffer);
              if (itex2MML_output_string != "")
                 free(itex2MML_output_string);
              itex2MML_output_string = copy;
            }
        }
    }

    static void itex2MML_capture_mathml (const char * buffer)
    {
       char * temp = itex2MML_copy2(itex2MML_output_string, buffer);
       if (itex2MML_output_string != "")
         free(itex2MML_output_string);
       itex2MML_output_string = temp;
    }
    void (*itex2MML_write) (const char * buffer, unsigned long length) = itex2MML_capture;
    void (*itex2MML_write_mathml) (const char * mathml) = itex2MML_capture_mathml;
#else
    void (*itex2MML_write) (const char * buffer, unsigned long length) = itex2MML_default_write;
    void (*itex2MML_write_mathml) (const char * mathml) = itex2MML_default_write_mathml;
#endif 

 char * itex2MML_empty_string = "";

 /* Create a copy of a string, adding space for extra chars
  */
 char * itex2MML_copy_string_extra (const char * str, unsigned extra)
   {
     char * copy = (char *) malloc(extra + (str ? strlen (str) : 0) + 1);
     if (copy)
       {
	 if (str)
	   strcpy(copy, str);
	 else
	   copy[0] = 0;
       }
     return copy ? copy : itex2MML_empty_string;
   }

 /* Create a copy of a string, appending two strings
  */
 char * itex2MML_copy3 (const char * first, const char * second, const char * third)
   {
     int  first_length =  first ? strlen( first) : 0;
     int second_length = second ? strlen(second) : 0;
     int  third_length =  third ? strlen( third) : 0;

     char * copy = (char *) malloc(first_length + second_length + third_length + 1);

     if (copy)
       {
	 if (first)
	   strcpy(copy, first);
	 else
	   copy[0] = 0;

	 if (second) strcat(copy, second);
	 if ( third) strcat(copy,  third);
       }
     return copy ? copy : itex2MML_empty_string;
   }

 /* Create a copy of a string, appending a second string
  */
 char * itex2MML_copy2 (const char * first, const char * second)
   {
     return itex2MML_copy3(first, second, 0);
   }

 /* Create a copy of a string
  */
 char * itex2MML_copy_string (const char * str)
   {
     return itex2MML_copy3(str, 0, 0);
   }

 /* Create a copy of a string, escaping unsafe characters for XML
  */
 char * itex2MML_copy_escaped (const char * str)
   {
     unsigned long length = 0;

     const char * ptr1 = str;

     char * ptr2 = 0;
     char * copy = 0;

     if ( str == 0) return itex2MML_empty_string;
     if (*str == 0) return itex2MML_empty_string;

     while (*ptr1)
       {
	 switch (*ptr1)
	   {
	   case '<':  /* &lt;   */
	   case '>':  /* &gt;   */
	     length += 4;
	     break;
	   case '&':  /* &amp;  */
	     length += 5;
	     break;
	   case '\'': /* &apos; */
	   case '"':  /* &quot; */
	   case '-':  /* &#x2d; */
	     length += 6;
	     break;
	   default:
	     length += 1;
	     break;
	   }
	 ++ptr1;
       }

     copy = (char *) malloc (length + 1);

     if (copy)
       {
	 ptr1 = str;
	 ptr2 = copy;

	 while (*ptr1)
	   {
	     switch (*ptr1)
	       {
	       case '<':
		 strcpy (ptr2, "&lt;");
		 ptr2 += 4;
		 break;
	       case '>':
		 strcpy (ptr2, "&gt;");
		 ptr2 += 4;
		 break;
	       case '&':  /* &amp;  */
		 strcpy (ptr2, "&amp;");
		 ptr2 += 5;
		 break;
	       case '\'': /* &apos; */
		 strcpy (ptr2, "&apos;");
		 ptr2 += 6;
		 break;
	       case '"':  /* &quot; */
		 strcpy (ptr2, "&quot;");
		 ptr2 += 6;
		 break;
	       case '-':  /* &#x2d; */
		 strcpy (ptr2, "&#x2d;");
		 ptr2 += 6;
		 break;
	       default:
		 *ptr2++ = *ptr1;
		 break;
	       }
	     ++ptr1;
	   }
	 *ptr2 = 0;
       }
     return copy ? copy : itex2MML_empty_string;
   }

 void itex2MML_free_string (char * str)
   {
     if (str && str != itex2MML_empty_string)
       free(str);
   }



/* Line 189 of yacc.c  */
#line 346 "y.tab.c"

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
     TEXATOP = 258,
     TEXOVER = 259,
     CHAR = 260,
     STARTMATH = 261,
     STARTDMATH = 262,
     ENDMATH = 263,
     MI = 264,
     MIB = 265,
     MN = 266,
     MO = 267,
     SUP = 268,
     SUB = 269,
     MROWOPEN = 270,
     MROWCLOSE = 271,
     LEFT = 272,
     RIGHT = 273,
     BIG = 274,
     BBIG = 275,
     BIGG = 276,
     BBIGG = 277,
     BIGL = 278,
     BBIGL = 279,
     BIGGL = 280,
     BBIGGL = 281,
     FRAC = 282,
     TFRAC = 283,
     MATHOP = 284,
     MOP = 285,
     MOL = 286,
     MOLL = 287,
     MOF = 288,
     PERIODDELIM = 289,
     OTHERDELIM = 290,
     LEFTDELIM = 291,
     RIGHTDELIM = 292,
     MOS = 293,
     MOB = 294,
     SQRT = 295,
     ROOT = 296,
     BINOM = 297,
     UNDER = 298,
     OVER = 299,
     OVERBRACE = 300,
     UNDERBRACE = 301,
     UNDEROVER = 302,
     TENSOR = 303,
     MULTI = 304,
     ARRAY = 305,
     COLSEP = 306,
     ROWSEP = 307,
     ARRAYOPTS = 308,
     COLLAYOUT = 309,
     COLALIGN = 310,
     ROWALIGN = 311,
     ALIGN = 312,
     EQROWS = 313,
     EQCOLS = 314,
     ROWLINES = 315,
     COLLINES = 316,
     FRAME = 317,
     PADDING = 318,
     ATTRLIST = 319,
     ITALICS = 320,
     BOLD = 321,
     SLASHED = 322,
     RM = 323,
     BB = 324,
     ST = 325,
     END = 326,
     BBLOWERCHAR = 327,
     BBUPPERCHAR = 328,
     CALCHAR = 329,
     FRAKCHAR = 330,
     CAL = 331,
     FRAK = 332,
     ROWOPTS = 333,
     TEXTSIZE = 334,
     SCSIZE = 335,
     SCSCSIZE = 336,
     DISPLAY = 337,
     TEXTSTY = 338,
     TEXTBOX = 339,
     TEXTSTRING = 340,
     XMLSTRING = 341,
     CELLOPTS = 342,
     ROWSPAN = 343,
     COLSPAN = 344,
     THINSPACE = 345,
     MEDSPACE = 346,
     THICKSPACE = 347,
     QUAD = 348,
     QQUAD = 349,
     NEGSPACE = 350,
     PHANTOM = 351,
     HREF = 352,
     UNKNOWNCHAR = 353,
     EMPTYMROW = 354,
     STATLINE = 355,
     TOGGLE = 356,
     FGHIGHLIGHT = 357,
     BGHIGHLIGHT = 358,
     SPACE = 359,
     INTONE = 360,
     INTTWO = 361,
     INTTHREE = 362,
     BAR = 363,
     WIDEBAR = 364,
     VEC = 365,
     WIDEVEC = 366,
     HAT = 367,
     WIDEHAT = 368,
     CHECK = 369,
     WIDECHECK = 370,
     TILDE = 371,
     WIDETILDE = 372,
     DOT = 373,
     DDOT = 374,
     UNARYMINUS = 375,
     UNARYPLUS = 376,
     BEGINENV = 377,
     ENDENV = 378,
     MATRIX = 379,
     PMATRIX = 380,
     BMATRIX = 381,
     BBMATRIX = 382,
     VMATRIX = 383,
     VVMATRIX = 384,
     SVG = 385,
     ENDSVG = 386,
     SMALLMATRIX = 387,
     CASES = 388,
     ALIGNED = 389,
     GATHERED = 390,
     SUBSTACK = 391,
     PMOD = 392,
     RMCHAR = 393,
     COLOR = 394,
     BGCOLOR = 395
   };
#endif
/* Tokens.  */
#define TEXATOP 258
#define TEXOVER 259
#define CHAR 260
#define STARTMATH 261
#define STARTDMATH 262
#define ENDMATH 263
#define MI 264
#define MIB 265
#define MN 266
#define MO 267
#define SUP 268
#define SUB 269
#define MROWOPEN 270
#define MROWCLOSE 271
#define LEFT 272
#define RIGHT 273
#define BIG 274
#define BBIG 275
#define BIGG 276
#define BBIGG 277
#define BIGL 278
#define BBIGL 279
#define BIGGL 280
#define BBIGGL 281
#define FRAC 282
#define TFRAC 283
#define MATHOP 284
#define MOP 285
#define MOL 286
#define MOLL 287
#define MOF 288
#define PERIODDELIM 289
#define OTHERDELIM 290
#define LEFTDELIM 291
#define RIGHTDELIM 292
#define MOS 293
#define MOB 294
#define SQRT 295
#define ROOT 296
#define BINOM 297
#define UNDER 298
#define OVER 299
#define OVERBRACE 300
#define UNDERBRACE 301
#define UNDEROVER 302
#define TENSOR 303
#define MULTI 304
#define ARRAY 305
#define COLSEP 306
#define ROWSEP 307
#define ARRAYOPTS 308
#define COLLAYOUT 309
#define COLALIGN 310
#define ROWALIGN 311
#define ALIGN 312
#define EQROWS 313
#define EQCOLS 314
#define ROWLINES 315
#define COLLINES 316
#define FRAME 317
#define PADDING 318
#define ATTRLIST 319
#define ITALICS 320
#define BOLD 321
#define SLASHED 322
#define RM 323
#define BB 324
#define ST 325
#define END 326
#define BBLOWERCHAR 327
#define BBUPPERCHAR 328
#define CALCHAR 329
#define FRAKCHAR 330
#define CAL 331
#define FRAK 332
#define ROWOPTS 333
#define TEXTSIZE 334
#define SCSIZE 335
#define SCSCSIZE 336
#define DISPLAY 337
#define TEXTSTY 338
#define TEXTBOX 339
#define TEXTSTRING 340
#define XMLSTRING 341
#define CELLOPTS 342
#define ROWSPAN 343
#define COLSPAN 344
#define THINSPACE 345
#define MEDSPACE 346
#define THICKSPACE 347
#define QUAD 348
#define QQUAD 349
#define NEGSPACE 350
#define PHANTOM 351
#define HREF 352
#define UNKNOWNCHAR 353
#define EMPTYMROW 354
#define STATLINE 355
#define TOGGLE 356
#define FGHIGHLIGHT 357
#define BGHIGHLIGHT 358
#define SPACE 359
#define INTONE 360
#define INTTWO 361
#define INTTHREE 362
#define BAR 363
#define WIDEBAR 364
#define VEC 365
#define WIDEVEC 366
#define HAT 367
#define WIDEHAT 368
#define CHECK 369
#define WIDECHECK 370
#define TILDE 371
#define WIDETILDE 372
#define DOT 373
#define DDOT 374
#define UNARYMINUS 375
#define UNARYPLUS 376
#define BEGINENV 377
#define ENDENV 378
#define MATRIX 379
#define PMATRIX 380
#define BMATRIX 381
#define BBMATRIX 382
#define VMATRIX 383
#define VVMATRIX 384
#define SVG 385
#define ENDSVG 386
#define SMALLMATRIX 387
#define CASES 388
#define ALIGNED 389
#define GATHERED 390
#define SUBSTACK 391
#define PMOD 392
#define RMCHAR 393
#define COLOR 394
#define BGCOLOR 395




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 668 "y.tab.c"

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
#define YYFINAL  165
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2751

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  141
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNRULES -- Number of states.  */
#define YYNSTATES  481

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   395

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    10,    13,    16,    18,
      21,    24,    28,    32,    34,    37,    43,    47,    53,    57,
      63,    67,    73,    77,    83,    89,    93,    97,   100,   103,
     105,   107,   109,   111,   113,   115,   117,   119,   121,   123,
     125,   127,   129,   131,   133,   135,   137,   139,   141,   143,
     145,   147,   149,   151,   153,   155,   157,   159,   161,   163,
     165,   167,   169,   171,   173,   175,   177,   179,   181,   183,
     185,   187,   189,   191,   193,   195,   197,   199,   201,   203,
     205,   207,   209,   211,   213,   215,   217,   221,   225,   229,
     231,   233,   235,   237,   240,   243,   246,   249,   252,   255,
     258,   261,   264,   267,   270,   273,   276,   279,   282,   285,
     288,   291,   294,   297,   300,   303,   306,   309,   312,   315,
     317,   319,   321,   323,   325,   327,   329,   331,   333,   335,
     337,   339,   341,   343,   345,   347,   349,   351,   353,   356,
     358,   369,   373,   377,   381,   385,   389,   393,   396,   399,
     402,   405,   408,   411,   414,   417,   420,   425,   427,   430,
     435,   437,   440,   442,   444,   449,   451,   454,   456,   461,
     463,   466,   468,   470,   472,   474,   476,   478,   480,   483,
     487,   493,   497,   506,   513,   520,   522,   525,   530,   533,
     536,   540,   544,   548,   551,   557,   563,   569,   575,   579,
     582,   585,   588,   591,   594,   597,   600,   603,   606,   609,
     612,   615,   618,   621,   624,   628,   632,   636,   641,   647,
     653,   659,   665,   671,   677,   683,   689,   695,   701,   706,
     710,   715,   720,   729,   731,   734,   736,   738,   740,   742,
     744,   746,   748,   750,   752,   754,   757,   760,   763,   766,
     769,   772,   775,   778,   781,   784,   786,   790,   792,   794,
     796,   800,   806,   808,   811,   813,   815,   816,   818,   824,
     826,   829,   831,   833,   835,   837,   840
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     142,     0,    -1,   143,    -1,    -1,   144,    -1,   145,    -1,
     143,   144,    -1,   143,   145,    -1,     5,    -1,     6,     8,
      -1,     7,     8,    -1,     6,   146,     8,    -1,     7,   146,
       8,    -1,   147,    -1,   146,   147,    -1,   158,    14,   148,
      13,   148,    -1,   158,    14,   148,    -1,   158,    13,   148,
      14,   148,    -1,   158,    13,   148,    -1,   156,    14,   148,
      13,   148,    -1,   156,    14,   148,    -1,   156,    13,   148,
      14,   148,    -1,   156,    13,   148,    -1,   148,    14,   148,
      13,   148,    -1,   148,    13,   148,    14,   148,    -1,   148,
      14,   148,    -1,   148,    13,   148,    -1,    14,   148,    -1,
      13,   148,    -1,   148,    -1,   220,    -1,   153,    -1,   154,
      -1,   156,    -1,   155,    -1,   157,    -1,   159,    -1,   195,
      -1,   196,    -1,   199,    -1,   203,    -1,   213,    -1,   214,
      -1,   215,    -1,   216,    -1,   206,    -1,   207,    -1,   212,
      -1,   208,    -1,   209,    -1,   211,    -1,   210,    -1,   205,
      -1,   204,    -1,   217,    -1,   160,    -1,   168,    -1,   169,
      -1,   170,    -1,   171,    -1,   172,    -1,   173,    -1,   175,
      -1,   176,    -1,   177,    -1,   178,    -1,   181,    -1,   174,
      -1,   184,    -1,   161,    -1,   167,    -1,   187,    -1,   188,
      -1,   189,    -1,   190,    -1,   191,    -1,   192,    -1,   193,
      -1,   194,    -1,   162,    -1,   163,    -1,   164,    -1,   165,
      -1,   166,    -1,   201,    -1,   202,    -1,    15,   148,    16,
      -1,    15,   146,    16,    -1,   149,   146,   150,    -1,   218,
      -1,   219,    -1,   200,    -1,   152,    -1,    17,    36,    -1,
      17,    35,    -1,    17,    34,    -1,    18,    37,    -1,    18,
      35,    -1,    18,    34,    -1,    19,    36,    -1,    19,    37,
      -1,    19,    35,    -1,    20,    36,    -1,    20,    37,    -1,
      20,    35,    -1,    21,    36,    -1,    21,    37,    -1,    21,
      35,    -1,    22,    36,    -1,    22,    37,    -1,    22,    35,
      -1,    23,    36,    -1,    23,    35,    -1,    24,    36,    -1,
      24,    35,    -1,    25,    36,    -1,    25,    35,    -1,    26,
      36,    -1,    26,    35,    -1,    98,    -1,   120,    -1,   121,
      -1,     9,    -1,    10,    -1,    11,    -1,    39,    -1,   158,
      -1,   151,    -1,    12,    -1,    31,    -1,    32,    -1,    37,
      -1,    36,    -1,    35,    -1,    33,    -1,    34,    -1,    38,
      -1,    30,    -1,    29,    85,    -1,    99,    -1,   104,    70,
     105,    71,    70,   106,    71,    70,   107,    71,    -1,   100,
      85,   148,    -1,   101,   148,   148,    -1,   102,    64,   148,
      -1,   103,    64,   148,    -1,   139,    64,   146,    -1,   140,
      64,   146,    -1,    84,    85,    -1,    82,   148,    -1,    83,
     148,    -1,    79,   148,    -1,    80,   148,    -1,    81,   148,
      -1,    65,   148,    -1,    67,   148,    -1,    66,   148,    -1,
      68,    70,   177,    71,    -1,   138,    -1,   177,   138,    -1,
      69,    70,   179,    71,    -1,   180,    -1,   179,   180,    -1,
      72,    -1,    73,    -1,    77,    70,   182,    71,    -1,   183,
      -1,   182,   183,    -1,    75,    -1,    76,    70,   185,    71,
      -1,   186,    -1,   185,   186,    -1,    74,    -1,    90,    -1,
      91,    -1,    92,    -1,    93,    -1,    94,    -1,    95,    -1,
      96,   148,    -1,    97,    85,   148,    -1,    48,   148,    15,
     197,    16,    -1,    48,   148,   197,    -1,    49,    15,   197,
      16,   148,    15,   197,    16,    -1,    49,    15,   197,    16,
     148,    99,    -1,    49,    99,   148,    15,   197,    16,    -1,
     198,    -1,   197,   198,    -1,    14,   148,    13,   148,    -1,
      14,   148,    -1,    13,   148,    -1,    14,    13,   148,    -1,
      27,   148,   148,    -1,    28,   148,   148,    -1,   137,   148,
      -1,    15,   146,     4,   146,    16,    -1,   149,   146,     4,
     146,   150,    -1,    15,   146,     3,   146,    16,    -1,   149,
     146,     3,   146,   150,    -1,    42,   148,   148,    -1,    46,
     148,    -1,    45,   148,    -1,   108,   148,    -1,   109,   148,
      -1,   110,   148,    -1,   111,   148,    -1,   118,   148,    -1,
     119,   148,    -1,   116,   148,    -1,   117,   148,    -1,   114,
     148,    -1,   115,   148,    -1,   112,   148,    -1,   113,   148,
      -1,    40,   148,    -1,    41,   148,   148,    -1,    43,   148,
     148,    -1,    44,   148,   148,    -1,    47,   148,   148,   148,
      -1,   122,   124,   233,   123,   124,    -1,   122,   135,   233,
     123,   135,    -1,   122,   125,   233,   123,   125,    -1,   122,
     126,   233,   123,   126,    -1,   122,   128,   233,   123,   128,
      -1,   122,   127,   233,   123,   127,    -1,   122,   129,   233,
     123,   129,    -1,   122,   132,   233,   123,   132,    -1,   122,
     133,   233,   123,   133,    -1,   122,   134,   233,   123,   134,
      -1,   122,   130,    86,   131,    -1,   122,   130,   131,    -1,
     136,    15,   233,    16,    -1,    50,    15,   233,    16,    -1,
      50,    15,    53,    15,   221,    16,   233,    16,    -1,   222,
      -1,   221,   222,    -1,   223,    -1,   224,    -1,   225,    -1,
     226,    -1,   227,    -1,   228,    -1,   229,    -1,   230,    -1,
     231,    -1,   232,    -1,    54,    64,    -1,    55,    64,    -1,
      56,    64,    -1,    57,    64,    -1,    58,    64,    -1,    59,
      64,    -1,    60,    64,    -1,    61,    64,    -1,    62,    64,
      -1,    63,    64,    -1,   234,    -1,   233,    52,   234,    -1,
     235,    -1,   236,    -1,   239,    -1,   235,    51,   239,    -1,
      78,    15,   237,    16,   235,    -1,   238,    -1,   237,   238,
      -1,   224,    -1,   225,    -1,    -1,   146,    -1,    87,    15,
     240,    16,   146,    -1,   241,    -1,   240,   241,    -1,   224,
      -1,   225,    -1,   242,    -1,   243,    -1,    88,    64,    -1,
      89,    64,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   274,   274,   277,   278,   279,   280,   281,   283,   285,
     286,   287,   300,   314,   318,   324,   343,   357,   376,   390,
     409,   423,   442,   456,   466,   476,   483,   490,   494,   498,
     503,   504,   505,   506,   507,   511,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   565,   569,   573,   581,
     582,   583,   584,   586,   591,   596,   602,   606,   610,   615,
     620,   624,   628,   633,   637,   641,   646,   650,   654,   659,
     663,   667,   672,   677,   682,   687,   692,   697,   702,   708,
     712,   716,   720,   722,   728,   730,   736,   737,   738,   743,
     748,   753,   757,   762,   766,   770,   774,   779,   784,   790,
     794,   805,   813,   821,   829,   837,   844,   852,   857,   862,
     867,   872,   877,   882,   887,   892,   897,   902,   906,   912,
     917,   921,   927,   931,   936,   941,   945,   951,   956,   961,
     965,   971,   976,   980,   984,   988,   992,   996,  1000,  1005,
    1013,  1020,  1028,  1038,  1047,  1055,  1059,  1065,  1070,  1074,
    1078,  1083,  1090,  1098,  1103,  1110,  1124,  1131,  1145,  1153,
    1158,  1163,  1167,  1172,  1176,  1181,  1186,  1191,  1195,  1200,
    1204,  1209,  1213,  1218,  1223,  1231,  1239,  1247,  1256,  1260,
    1264,  1268,  1272,  1276,  1280,  1284,  1288,  1292,  1296,  1300,
    1304,  1309,  1313,  1321,  1325,  1331,  1335,  1339,  1343,  1347,
    1351,  1355,  1359,  1363,  1367,  1372,  1377,  1382,  1387,  1392,
    1397,  1402,  1407,  1412,  1417,  1424,  1428,  1434,  1438,  1443,
    1447,  1453,  1461,  1465,  1471,  1475,  1480,  1483,  1487,  1495,
    1499,  1505,  1509,  1513,  1517,  1522,  1527
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TEXATOP", "TEXOVER", "CHAR",
  "STARTMATH", "STARTDMATH", "ENDMATH", "MI", "MIB", "MN", "MO", "SUP",
  "SUB", "MROWOPEN", "MROWCLOSE", "LEFT", "RIGHT", "BIG", "BBIG", "BIGG",
  "BBIGG", "BIGL", "BBIGL", "BIGGL", "BBIGGL", "FRAC", "TFRAC", "MATHOP",
  "MOP", "MOL", "MOLL", "MOF", "PERIODDELIM", "OTHERDELIM", "LEFTDELIM",
  "RIGHTDELIM", "MOS", "MOB", "SQRT", "ROOT", "BINOM", "UNDER", "OVER",
  "OVERBRACE", "UNDERBRACE", "UNDEROVER", "TENSOR", "MULTI", "ARRAY",
  "COLSEP", "ROWSEP", "ARRAYOPTS", "COLLAYOUT", "COLALIGN", "ROWALIGN",
  "ALIGN", "EQROWS", "EQCOLS", "ROWLINES", "COLLINES", "FRAME", "PADDING",
  "ATTRLIST", "ITALICS", "BOLD", "SLASHED", "RM", "BB", "ST", "END",
  "BBLOWERCHAR", "BBUPPERCHAR", "CALCHAR", "FRAKCHAR", "CAL", "FRAK",
  "ROWOPTS", "TEXTSIZE", "SCSIZE", "SCSCSIZE", "DISPLAY", "TEXTSTY",
  "TEXTBOX", "TEXTSTRING", "XMLSTRING", "CELLOPTS", "ROWSPAN", "COLSPAN",
  "THINSPACE", "MEDSPACE", "THICKSPACE", "QUAD", "QQUAD", "NEGSPACE",
  "PHANTOM", "HREF", "UNKNOWNCHAR", "EMPTYMROW", "STATLINE", "TOGGLE",
  "FGHIGHLIGHT", "BGHIGHLIGHT", "SPACE", "INTONE", "INTTWO", "INTTHREE",
  "BAR", "WIDEBAR", "VEC", "WIDEVEC", "HAT", "WIDEHAT", "CHECK",
  "WIDECHECK", "TILDE", "WIDETILDE", "DOT", "DDOT", "UNARYMINUS",
  "UNARYPLUS", "BEGINENV", "ENDENV", "MATRIX", "PMATRIX", "BMATRIX",
  "BBMATRIX", "VMATRIX", "VVMATRIX", "SVG", "ENDSVG", "SMALLMATRIX",
  "CASES", "ALIGNED", "GATHERED", "SUBSTACK", "PMOD", "RMCHAR", "COLOR",
  "BGCOLOR", "$accept", "doc", "xmlmmlTermList", "char", "expression",
  "compoundTermList", "compoundTerm", "closedTerm", "left", "right",
  "bigdelim", "unrecognized", "unaryminus", "unaryplus", "mi", "mib", "mn",
  "mob", "mo", "emptymrow", "space", "statusline", "toggle", "fghighlight",
  "bghighlight", "color", "textstring", "displaystyle", "textstyle",
  "textsize", "scriptsize", "scriptscriptsize", "italics", "slashed",
  "bold", "roman", "rmchars", "bbold", "bbletters", "bbletter", "frak",
  "frakletters", "frakletter", "cal", "calletters", "calletter",
  "thinspace", "medspace", "thickspace", "quad", "qquad", "negspace",
  "phantom", "href", "tensor", "multi", "subsupList", "subsupTerm",
  "mfrac", "pmod", "texover", "texatop", "binom", "munderbrace",
  "moverbrace", "bar", "vec", "dot", "ddot", "tilde", "check", "hat",
  "msqrt", "mroot", "munder", "mover", "munderover", "mathenv", "substack",
  "array", "arrayopts", "anarrayopt", "collayout", "colalign", "rowalign",
  "align", "eqrows", "eqcols", "rowlines", "collines", "frame", "padding",
  "tableRowList", "tableRow", "simpleTableRow", "optsTableRow", "rowopts",
  "arowopt", "tableCell", "cellopts", "acellopt", "rowspan", "colspan", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   141,   142,   143,   143,   143,   143,   143,   144,   145,
     145,   145,   145,   146,   146,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   149,   149,   149,   150,   150,   150,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   160,
     161,   162,   163,   164,   165,   166,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   177,   178,
     179,   179,   180,   180,   181,   182,   182,   183,   184,   185,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   195,   196,   196,   196,   197,   197,   198,   198,   198,
     198,   199,   199,   200,   201,   201,   202,   202,   203,   204,
     205,   206,   206,   207,   207,   208,   209,   210,   210,   211,
     211,   212,   212,   213,   214,   215,   216,   217,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     219,   220,   220,   221,   221,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   233,   234,   234,   235,
     235,   236,   237,   237,   238,   238,   239,   239,   239,   240,
     240,   241,   241,   241,   241,   242,   243
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     2,     1,     2,
       2,     3,     3,     1,     2,     5,     3,     5,     3,     5,
       3,     5,     3,     5,     5,     3,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
      10,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     4,     1,     2,     4,
       1,     2,     1,     1,     4,     1,     2,     1,     4,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       5,     3,     8,     6,     6,     1,     2,     4,     2,     2,
       3,     3,     3,     2,     5,     5,     5,     5,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     4,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     4,     3,
       4,     4,     8,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     3,     1,     1,     1,
       3,     5,     1,     2,     1,     1,     0,     1,     5,     1,
       2,     1,     1,     1,     1,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     8,     0,     0,     0,     2,     4,     5,     9,   122,
     123,   124,   128,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   137,   129,
     130,   134,   135,   133,   132,   131,   136,   125,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   172,   173,   174,   175,   176,   177,     0,     0,
     119,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   120,
     121,     0,     0,     0,   157,     0,     0,     0,    13,    29,
       0,   127,    92,    31,    32,    34,    33,    35,   126,    36,
      55,    69,    79,    80,    81,    82,    83,    70,    56,    57,
      58,    59,    60,    61,    67,    62,    63,    64,    65,    66,
      68,    71,    72,    73,    74,    75,    76,    77,    78,    37,
      38,    39,    91,    84,    85,    40,    53,    52,    45,    46,
      48,    49,    51,    50,    47,    41,    42,    43,    44,    54,
      89,    90,    30,    10,     0,     1,     6,     7,    28,    33,
     126,    27,     0,    29,    95,    94,    93,   101,    99,   100,
     104,   102,   103,   107,   105,   106,   110,   108,   109,   112,
     111,   114,   113,   116,   115,   118,   117,     0,     0,   138,
     213,     0,     0,     0,     0,   200,   199,     0,     0,     0,
       0,   266,   153,   155,   154,     0,     0,     0,     0,   150,
     151,   152,   148,   149,   147,   178,     0,     0,     0,     0,
       0,     0,   201,   202,   203,   204,   211,   212,   209,   210,
     207,   208,   205,   206,   266,   266,   266,   266,   266,   266,
       0,   266,   266,   266,   266,   266,   193,     0,     0,    11,
      14,     0,     0,     0,     0,     0,     0,     0,   158,    12,
       0,     0,    87,    86,   191,   192,   214,   198,   215,   216,
       0,     0,     0,     0,   181,   185,     0,     0,     0,     0,
       0,   267,     0,   255,   257,   258,   259,     0,   162,   163,
       0,   160,   171,     0,   169,   167,     0,   165,   179,   141,
     142,   143,   144,     0,     0,     0,     0,     0,     0,     0,
       0,   229,     0,     0,     0,     0,     0,   145,   146,    26,
      25,     0,     0,     0,    88,    22,    20,    18,    16,     0,
       0,   217,   189,     0,   188,     0,   186,     0,     0,     0,
       0,     0,   231,   266,   266,   156,   159,   161,   168,   170,
     164,   166,     0,     0,     0,     0,     0,     0,     0,   228,
       0,     0,     0,     0,   230,     0,     0,     0,     0,    98,
      97,    96,     0,     0,     0,     0,   196,   194,   190,     0,
     180,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   233,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   264,   265,     0,   262,     0,
       0,   271,   272,     0,   269,   273,   274,   256,   260,     0,
     218,   220,   221,   223,   222,   224,   225,   226,   227,   219,
      24,    23,   197,   195,    21,    19,    17,    15,   187,     0,
     183,   184,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   266,   234,   266,   263,   275,   276,     0,   270,
       0,     0,     0,   261,   268,     0,   182,   232,     0,     0,
     140
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,   291,    98,    99,   100,   334,
     101,   102,   103,   104,   105,   169,   107,   170,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   300,   301,
     129,   306,   307,   130,   303,   304,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   284,   285,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   292,   293,   294,   295,   417,   418,   296,   423,
     424,   425,   426
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -341
static const yytype_int16 yypact[] =
{
      60,  -341,  1024,  1157,    41,    60,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  2611,  2611,  2347,   129,   131,   136,   139,
     142,    61,   124,   152,   157,  2611,  2611,   -36,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  2611,  2611,
    2611,  2611,  2611,  2611,  2611,  2611,  2611,   -13,    47,  2611,
    2611,  2611,     1,    11,    15,    17,  2611,  2611,  2611,  2611,
    2611,   -25,  -341,  -341,  -341,  -341,  -341,  -341,  2611,     9,
    -341,  -341,    25,  2611,    58,    81,   119,  2611,  2611,  2611,
    2611,  2611,  2611,  2611,  2611,  2611,  2611,  2611,  2611,  -341,
    -341,     7,   154,  2611,  -341,   134,   144,  1290,  -341,   181,
    2347,  -341,  -341,  -341,  -341,  -341,   183,  -341,   187,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,    74,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  1423,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,   753,    76,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  2611,  2611,  -341,
    -341,  2611,  2611,  2611,  2611,  -341,  -341,  2611,   167,   189,
    2611,  1555,  -341,  -341,  -341,    75,   132,   109,   140,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  2611,  2611,  2611,  2611,
    2611,   111,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  1687,  1687,  1687,  1687,  1687,  1687,
     -58,  1687,  1687,  1687,  1687,  1687,  -341,  2347,  2347,  -341,
    -341,  2611,  2611,   891,  2611,  2611,  2611,  2611,  -341,  -341,
    2347,  2347,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    2611,  2611,  2479,   189,   189,  -341,    99,   199,   202,   203,
     204,  2347,    23,  -341,   169,  -341,  -341,   -64,  -341,  -341,
     113,  -341,  -341,    87,  -341,  -341,    -3,  -341,  -341,  -341,
    -341,  -341,  -341,   150,   -43,   -32,   -19,   -18,   -17,   -16,
      91,  -341,   -15,   -14,    -9,    -5,    24,  2347,  2347,   209,
     211,  2347,  2347,    82,  -341,   212,   214,   216,   215,  1819,
    1951,  -341,  -341,  2611,   218,   107,  -341,  2611,   189,    94,
     151,    14,  -341,  1687,  2083,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,   155,   110,   108,   114,   127,   135,   106,  -341,
     104,   125,   103,   148,  -341,  2611,  2611,  2215,  2215,  -341,
    -341,  -341,  2611,  2611,  2611,  2611,  -341,  -341,  -341,  2611,
    -341,   -11,   112,   175,   177,   195,   196,   198,   200,   201,
     206,   213,   224,    -4,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,    45,  -341,   227,
     228,  -341,  -341,   -10,  -341,  -341,  -341,  -341,  -341,   160,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,   189,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  1687,  -341,  2083,  -341,  -341,  -341,  2347,  -341,
     225,   130,    32,   169,  2347,   197,  -341,  -341,   188,   230,
    -341
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -341,  -341,  -341,   297,   298,    29,   -34,   370,  -341,  -167,
    -341,  -341,  -341,  -341,  -341,    -2,  -341,    27,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,    89,  -341,  -341,     8,
    -341,  -341,     3,  -341,  -341,     4,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -201,  -281,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,   -93,  -341,  -340,  -324,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -230,   -42,  -152,  -341,  -341,  -104,   -40,  -341,
    -108,  -341,  -341
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     106,   106,   209,   346,   449,   346,   468,   355,   286,   353,
     415,   421,   462,   106,   314,   315,   316,   317,   318,   319,
     353,   322,   323,   324,   325,   326,   416,   422,   320,   108,
     108,    97,   164,   353,   353,   353,   353,   353,   353,   352,
     374,   165,   108,   353,   172,   394,   395,   353,   477,   199,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     224,   464,   211,   260,   346,     1,     2,     3,   360,   394,
     395,   215,   305,   321,   268,   353,   353,   415,   419,   420,
     363,   216,   345,   421,   353,   217,   210,   218,   450,   261,
     262,   364,   273,   416,   226,   106,   189,   190,   106,   422,
     394,   395,   419,   420,   365,   366,   367,   368,   370,   371,
     227,   346,   281,   282,   372,   347,   379,   380,   373,   381,
     281,   282,   229,   390,   108,   281,   282,   108,   451,   263,
     260,   244,   245,   246,   247,   248,   249,   250,   260,   251,
     252,   253,   254,   281,   282,   230,   476,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   358,   191,
     192,   302,   106,   174,   175,   176,   177,   178,   179,   255,
     106,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     281,   282,   283,   302,   356,   298,   299,   193,   194,   231,
     346,   108,   195,   196,   261,   262,   264,   265,   257,   108,
     266,   267,   281,   282,   298,   299,   394,   395,   258,   106,
     442,   443,   268,    94,   348,   305,   313,   349,   350,   351,
     354,   362,   369,   375,   376,   429,   382,   383,   385,   260,
     384,   389,   472,   431,   430,   435,   436,   438,   108,   452,
     432,   453,   106,   106,   106,   106,   106,   106,   471,   106,
     106,   106,   106,   106,   433,   106,   106,   260,   437,   454,
     455,   106,   456,   434,   457,   458,   470,   478,   106,   106,
     459,   108,   108,   108,   108,   108,   108,   460,   108,   108,
     108,   108,   108,   439,   108,   108,   327,   328,   461,   106,
     108,   466,   467,   260,   260,   479,   475,   108,   108,   339,
     340,   480,   166,   167,   297,   260,   260,   359,   357,   361,
     463,   427,   473,   465,   428,   469,     0,     0,   108,     0,
       0,     0,     0,     0,     0,   106,   106,     0,     0,   106,
     106,     0,     0,     0,     0,     0,     0,   106,   106,     0,
       0,     0,     0,   260,   260,     0,     0,     0,     0,     0,
       0,   106,   106,     0,   108,   108,     0,     0,   108,   108,
     377,   378,     0,     0,     0,     0,   108,   108,     0,     0,
       0,     0,     0,     0,     0,   106,   106,     0,     0,     0,
     108,   108,     0,   168,   171,   173,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   197,   198,     0,     0,     0,
       0,     0,     0,     0,   108,   108,     0,     0,   200,   201,
     202,   203,   204,   205,   206,   207,   208,     0,     0,   212,
     213,   214,     0,     0,     0,     0,   219,   220,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,   225,     0,
     260,     0,     0,   228,     0,     0,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,     0,
     106,     0,   106,   256,     0,     0,   106,     0,     0,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   108,
       0,   108,     0,     0,     0,   108,     0,   474,     0,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   274,   275,     0,
       0,   276,   277,   278,   279,     0,     0,   280,     0,     0,
     287,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   308,   309,   310,   311,
     312,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   329,   330,     0,   335,   336,   337,   338,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     341,   342,   344,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   388,     0,     0,     0,   391,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   440,   441,     0,     0,     0,
       0,     0,   444,   445,   446,   447,   270,   271,     0,   448,
       0,     0,     9,    10,    11,    12,    13,    14,    15,   272,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,    50,
      51,    52,    53,     0,     0,     0,     0,     0,     0,    54,
      55,     0,    56,    57,    58,    59,    60,    61,     0,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,     0,     0,
       0,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,   331,   332,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,     0,    16,   333,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,    50,    51,    52,
      53,     0,     0,     0,     0,     0,     0,    54,    55,     0,
      56,    57,    58,    59,    60,    61,     0,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,     0,     0,     0,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     8,     9,    10,    11,    12,    13,    14,    15,
       0,    16,     0,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
      50,    51,    52,    53,     0,     0,     0,     0,     0,     0,
      54,    55,     0,    56,    57,    58,    59,    60,    61,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,     0,
       0,     0,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,   163,     9,    10,    11,    12,
      13,    14,    15,     0,    16,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,    50,    51,    52,    53,     0,     0,     0,
       0,     0,     0,    54,    55,     0,    56,    57,    58,    59,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,     0,     0,     0,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,   259,     9,
      10,    11,    12,    13,    14,    15,     0,    16,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,    50,    51,    52,    53,
       0,     0,     0,     0,     0,     0,    54,    55,     0,    56,
      57,    58,    59,    60,    61,     0,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,     0,     0,     0,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,   269,     9,    10,    11,    12,    13,    14,    15,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,    50,
      51,    52,    53,     0,     0,     0,     0,     0,     0,    54,
      55,     0,    56,    57,    58,    59,    60,    61,     0,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,     0,     0,
       0,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     9,    10,    11,    12,    13,    14,
      15,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,     0,   288,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,    50,    51,    52,    53,     0,     0,     0,     0,     0,
       0,    54,    55,   289,    56,    57,    58,    59,    60,    61,
       0,     0,   290,     0,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       0,     0,     0,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     9,    10,    11,    12,
      13,    14,    15,     0,    16,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,    50,    51,    52,    53,     0,     0,     0,
       0,     0,     0,    54,    55,   289,    56,    57,    58,    59,
      60,    61,     0,     0,   290,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,     0,     0,     0,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     9,    10,
      11,    12,    13,    14,    15,   386,    16,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,    50,    51,    52,    53,     0,
       0,     0,     0,     0,     0,    54,    55,     0,    56,    57,
      58,    59,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,     0,     0,     0,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       9,    10,    11,    12,    13,    14,    15,   387,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,    50,    51,    52,
      53,     0,     0,     0,     0,     0,     0,    54,    55,     0,
      56,    57,    58,    59,    60,    61,     0,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,     0,     0,     0,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     9,    10,    11,    12,    13,    14,    15,     0,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,    50,
      51,    52,    53,     0,     0,     0,     0,     0,     0,    54,
      55,     0,    56,    57,    58,    59,    60,    61,     0,     0,
     290,     0,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,     0,     0,
       0,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     9,    10,    11,    12,    13,    14,
      15,     0,    16,   333,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,    50,    51,    52,    53,     0,     0,     0,     0,     0,
       0,    54,    55,     0,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       0,     0,     0,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     9,    10,    11,    12,
      13,    14,    15,     0,    16,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,    50,    51,    52,    53,     0,     0,     0,
       0,     0,     0,    54,    55,     0,    56,    57,    58,    59,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,     0,     0,     0,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     9,    10,
      11,    12,   343,     0,    15,     0,    16,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,    50,    51,    52,    53,     0,
       0,     0,     0,     0,     0,    54,    55,     0,    56,    57,
      58,    59,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,     0,     0,     0,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       9,    10,    11,    12,     0,     0,    15,     0,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,    50,    51,    52,
      53,     0,     0,     0,     0,     0,     0,    54,    55,     0,
      56,    57,    58,    59,    60,    61,     0,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,     0,     0,     0,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96
};

static const yytype_int16 yycheck[] =
{
       2,     3,    15,   284,    15,   286,    16,    71,   209,    52,
     350,   351,    16,    15,   244,   245,   246,   247,   248,   249,
      52,   251,   252,   253,   254,   255,   350,   351,    86,     2,
       3,     2,     3,    52,    52,    52,    52,    52,    52,    16,
      16,     0,    15,    52,    15,    55,    56,    52,    16,    85,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      85,    16,    15,    97,   345,     5,     6,     7,    71,    55,
      56,    70,    75,   131,   138,    52,    52,   417,    88,    89,
     123,    70,   283,   423,    52,    70,    99,    70,    99,    13,
      14,   123,    16,   417,    85,    97,    35,    36,   100,   423,
      55,    56,    88,    89,   123,   123,   123,   123,   123,   123,
      85,   392,    13,    14,   123,    16,    34,    35,   123,    37,
      13,    14,    64,    16,    97,    13,    14,   100,    16,   100,
     164,   124,   125,   126,   127,   128,   129,   130,   172,   132,
     133,   134,   135,    13,    14,    64,    16,   348,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    71,    35,
      36,    74,   164,    34,    35,    36,    35,    36,    37,    15,
     172,    35,    36,    37,    35,    36,    37,    35,    36,    37,
      13,    14,    15,    74,    71,    72,    73,    35,    36,    70,
     471,   164,    35,    36,    13,    14,    13,    14,    64,   172,
      13,    14,    13,    14,    72,    73,    55,    56,    64,   211,
     377,   378,   138,   138,    15,    75,   105,    15,    15,    15,
      51,    71,   131,    14,    13,    70,    14,    13,    13,   263,
      14,    13,   462,   125,   124,   129,   132,   134,   211,    64,
     126,    64,   244,   245,   246,   247,   248,   249,   449,   251,
     252,   253,   254,   255,   127,   257,   258,   291,   133,    64,
      64,   263,    64,   128,    64,    64,   106,    70,   270,   271,
      64,   244,   245,   246,   247,   248,   249,    64,   251,   252,
     253,   254,   255,   135,   257,   258,   257,   258,    64,   291,
     263,    64,    64,   327,   328,   107,    71,   270,   271,   270,
     271,    71,     5,     5,   215,   339,   340,   303,   300,   306,
     403,   353,   464,   417,   354,   423,    -1,    -1,   291,    -1,
      -1,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,   331,
     332,    -1,    -1,    -1,    -1,    -1,    -1,   339,   340,    -1,
      -1,    -1,    -1,   377,   378,    -1,    -1,    -1,    -1,    -1,
      -1,   353,   354,    -1,   327,   328,    -1,    -1,   331,   332,
     331,   332,    -1,    -1,    -1,    -1,   339,   340,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   377,   378,    -1,    -1,    -1,
     353,   354,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   377,   378,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    -1,    49,
      50,    51,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
     474,    -1,    -1,    73,    -1,    -1,    -1,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
     462,    -1,   464,    93,    -1,    -1,   468,    -1,    -1,    -1,
      -1,    -1,   474,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,
      -1,   464,    -1,    -1,    -1,   468,    -1,   468,    -1,    -1,
      -1,   474,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   198,    -1,
      -1,   201,   202,   203,   204,    -1,    -1,   207,    -1,    -1,
     210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,   227,   228,   229,
     230,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   261,   262,    -1,   264,   265,   266,   267,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     280,   281,   282,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   343,    -1,    -1,    -1,   347,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   375,   376,    -1,    -1,    -1,
      -1,    -1,   382,   383,   384,   385,     3,     4,    -1,   389,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    -1,    79,    80,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
     137,   138,   139,   140,     3,     4,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,   138,
     139,   140,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    -1,    79,    80,    81,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,   138,   139,   140,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    79,    80,    81,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,   137,   138,   139,   140,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    79,
      80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,
     140,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    -1,    79,    80,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
     137,   138,   139,   140,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      -1,    -1,    87,    -1,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    -1,    -1,    87,    -1,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,   137,   138,   139,   140,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    79,    80,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,   138,
     139,   140,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    -1,    79,    80,    81,    82,    83,    84,    -1,    -1,
      87,    -1,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
     137,   138,   139,   140,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    79,    80,    81,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      -1,    -1,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    79,    80,    81,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,   137,   138,   139,   140,     9,    10,
      11,    12,    13,    -1,    15,    -1,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    79,    80,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    -1,    -1,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,
       9,    10,    11,    12,    -1,    -1,    15,    -1,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,   138,
     139,   140
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,   142,   143,   144,   145,     8,     9,
      10,    11,    12,    13,    14,    15,    17,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    65,
      66,    67,    68,    69,    76,    77,    79,    80,    81,    82,
      83,    84,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   136,   137,   138,   139,   140,   146,   147,   148,
     149,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   181,
     184,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,     8,   146,     0,   144,   145,   148,   156,
     158,   148,   146,   148,    34,    35,    36,    35,    36,    37,
      35,    36,    37,    35,    36,    37,    35,    36,    37,    35,
      36,    35,    36,    35,    36,    35,    36,   148,   148,    85,
     148,   148,   148,   148,   148,   148,   148,   148,   148,    15,
      99,    15,   148,   148,   148,    70,    70,    70,    70,   148,
     148,   148,   148,   148,    85,   148,    85,    85,   148,    64,
      64,    70,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   124,   125,   126,   127,   128,   129,
     130,   132,   133,   134,   135,    15,   148,    64,    64,     8,
     147,    13,    14,   146,    13,    14,    13,    14,   138,     8,
       3,     4,    16,    16,   148,   148,   148,   148,   148,   148,
     148,    13,    14,    15,   197,   198,   197,   148,    53,    78,
      87,   146,   233,   234,   235,   236,   239,   177,    72,    73,
     179,   180,    74,   185,   186,    75,   182,   183,   148,   148,
     148,   148,   148,   105,   233,   233,   233,   233,   233,   233,
      86,   131,   233,   233,   233,   233,   233,   146,   146,   148,
     148,     3,     4,    18,   150,   148,   148,   148,   148,   146,
     146,   148,   148,    13,   148,   197,   198,    16,    15,    15,
      15,    15,    16,    52,    51,    71,    71,   180,    71,   186,
      71,   183,    71,   123,   123,   123,   123,   123,   123,   131,
     123,   123,   123,   123,    16,    14,    13,   146,   146,    34,
      35,    37,    14,    13,    14,    13,    16,    16,   148,    13,
      16,   148,   197,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   224,   225,   237,   238,    88,
      89,   224,   225,   240,   241,   242,   243,   234,   239,    70,
     124,   125,   126,   127,   128,   129,   132,   133,   134,   135,
     148,   148,   150,   150,   148,   148,   148,   148,   148,    15,
      99,    16,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    16,   222,    16,   238,    64,    64,    16,   241,
     106,   197,   233,   235,   146,    71,    16,    16,    70,   107,
      71
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
        case 2:

/* Line 1455 of yacc.c  */
#line 274 "itex2MML.y"
    {/* all processing done in body*/}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 277 "itex2MML.y"
    {/* nothing - do nothing*/}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 278 "itex2MML.y"
    {/* proc done in body*/}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 279 "itex2MML.y"
    {/* all proc. in body*/}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 280 "itex2MML.y"
    {/* all proc. in body*/}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 281 "itex2MML.y"
    {/* all proc. in body*/}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 283 "itex2MML.y"
    {printf("%s", (yyvsp[(1) - (1)]));}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 285 "itex2MML.y"
    {/* empty math group - ignore*/}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 286 "itex2MML.y"
    {/* ditto */}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 287 "itex2MML.y"
    {
  char ** r = (char **) ret_str;
  char * s = itex2MML_copy3("<math xmlns='http://www.w3.org/1998/Math/MathML' display='inline'>", (yyvsp[(2) - (3)]), "</math>");
  itex2MML_free_string((yyvsp[(2) - (3)]));
  if (r) {
    (*r) = (s == itex2MML_empty_string) ? 0 : s;
  }
  else {
    if (itex2MML_write_mathml)
      (*itex2MML_write_mathml) (s);
    itex2MML_free_string(s);
  }
}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 300 "itex2MML.y"
    {
  char ** r = (char **) ret_str;
  char * s = itex2MML_copy3("<math xmlns='http://www.w3.org/1998/Math/MathML' display='block'>", (yyvsp[(2) - (3)]), "</math>");
  itex2MML_free_string((yyvsp[(2) - (3)]));
  if (r) {
    (*r) = (s == itex2MML_empty_string) ? 0 : s;
  }
  else {
    if (itex2MML_write_mathml)
      (*itex2MML_write_mathml) (s);
    itex2MML_free_string(s);
  }
}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 314 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 318 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(1) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 324 "itex2MML.y"
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munderover>", (yyvsp[(1) - (5)]), " ");
    char * s2 = itex2MML_copy3((yyvsp[(3) - (5)]), " ", (yyvsp[(5) - (5)]));
    (yyval) = itex2MML_copy3(s1, s2, "</munderover>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  else {
    char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[(1) - (5)]), " ");
    char * s2 = itex2MML_copy3((yyvsp[(3) - (5)]), " ", (yyvsp[(5) - (5)]));
    (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  itex2MML_free_string((yyvsp[(1) - (5)]));
  itex2MML_free_string((yyvsp[(3) - (5)]));
  itex2MML_free_string((yyvsp[(5) - (5)]));
}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 343 "itex2MML.y"
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munder>", (yyvsp[(1) - (3)]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (3)]), "</munder>");
    itex2MML_free_string(s1);
  }
  else {
    char * s1 = itex2MML_copy3("<msub>", (yyvsp[(1) - (3)]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (3)]), "</msub>");
    itex2MML_free_string(s1);
  }
  itex2MML_free_string((yyvsp[(1) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 357 "itex2MML.y"
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munderover>", (yyvsp[(1) - (5)]), " ");
    char * s2 = itex2MML_copy3((yyvsp[(5) - (5)]), " ", (yyvsp[(3) - (5)]));
    (yyval) = itex2MML_copy3(s1, s2, "</munderover>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  else {
    char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[(1) - (5)]), " ");
    char * s2 = itex2MML_copy3((yyvsp[(5) - (5)]), " ", (yyvsp[(3) - (5)]));
    (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  itex2MML_free_string((yyvsp[(1) - (5)]));
  itex2MML_free_string((yyvsp[(3) - (5)]));
  itex2MML_free_string((yyvsp[(5) - (5)]));
}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 376 "itex2MML.y"
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<mover>", (yyvsp[(1) - (3)]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (3)]), "</mover>");
    itex2MML_free_string(s1);
  }
  else {
    char * s1 = itex2MML_copy3("<msup>", (yyvsp[(1) - (3)]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (3)]), "</msup>");
    itex2MML_free_string(s1);
  }
  itex2MML_free_string((yyvsp[(1) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 390 "itex2MML.y"
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munderover>", (yyvsp[(1) - (5)]), " ");
    char * s2 = itex2MML_copy3((yyvsp[(3) - (5)]), " ", (yyvsp[(5) - (5)]));
    (yyval) = itex2MML_copy3(s1, s2, "</munderover>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  else {
    char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[(1) - (5)]), " ");
    char * s2 = itex2MML_copy3((yyvsp[(3) - (5)]), " ", (yyvsp[(5) - (5)]));
    (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  itex2MML_free_string((yyvsp[(1) - (5)]));
  itex2MML_free_string((yyvsp[(3) - (5)]));
  itex2MML_free_string((yyvsp[(5) - (5)]));
}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 409 "itex2MML.y"
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munder>", (yyvsp[(1) - (3)]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (3)]), "</munder>");
    itex2MML_free_string(s1);
  }
  else {
    char * s1 = itex2MML_copy3("<msub>", (yyvsp[(1) - (3)]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (3)]), "</msub>");
    itex2MML_free_string(s1);
  }
  itex2MML_free_string((yyvsp[(1) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 423 "itex2MML.y"
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<munderover>", (yyvsp[(1) - (5)]), " ");
    char * s2 = itex2MML_copy3((yyvsp[(5) - (5)]), " ", (yyvsp[(3) - (5)]));
    (yyval) = itex2MML_copy3(s1, s2, "</munderover>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  else {
    char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[(1) - (5)]), " ");
    char * s2 = itex2MML_copy3((yyvsp[(5) - (5)]), " ", (yyvsp[(3) - (5)]));
    (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
    itex2MML_free_string(s1);
    itex2MML_free_string(s2);
  }
  itex2MML_free_string((yyvsp[(1) - (5)]));
  itex2MML_free_string((yyvsp[(3) - (5)]));
  itex2MML_free_string((yyvsp[(5) - (5)]));
}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 442 "itex2MML.y"
    {
  if (itex2MML_displaymode == 1) {
    char * s1 = itex2MML_copy3("<mover>", (yyvsp[(1) - (3)]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (3)]), "</mover>");
    itex2MML_free_string(s1);
  }
  else {
    char * s1 = itex2MML_copy3("<msup>", (yyvsp[(1) - (3)]), " ");
    (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (3)]), "</msup>");
    itex2MML_free_string(s1);
  }
  itex2MML_free_string((yyvsp[(1) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 456 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[(1) - (5)]), " ");
  char * s2 = itex2MML_copy3((yyvsp[(3) - (5)]), " ", (yyvsp[(5) - (5)]));
  (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[(1) - (5)]));
  itex2MML_free_string((yyvsp[(3) - (5)]));
  itex2MML_free_string((yyvsp[(5) - (5)]));
}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 466 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<msubsup>", (yyvsp[(1) - (5)]), " ");
  char * s2 = itex2MML_copy3((yyvsp[(5) - (5)]), " ", (yyvsp[(3) - (5)]));
  (yyval) = itex2MML_copy3(s1, s2, "</msubsup>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[(1) - (5)]));
  itex2MML_free_string((yyvsp[(3) - (5)]));
  itex2MML_free_string((yyvsp[(5) - (5)]));
}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 476 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<msub>", (yyvsp[(1) - (3)]), " ");
  (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (3)]), "</msub>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(1) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 483 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<msup>", (yyvsp[(1) - (3)]), " ");
  (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (3)]), "</msup>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(1) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 490 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<msub><mo></mo>", (yyvsp[(2) - (2)]), "</msub>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 494 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<msup><mo></mo>", (yyvsp[(2) - (2)]), "</msup>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 498 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 507 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mi>", (yyvsp[(1) - (1)]), "</mi>");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 511 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mn>", (yyvsp[(1) - (1)]), "</mn>");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 565 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(2) - (3)]));
  itex2MML_free_string((yyvsp[(2) - (3)]));
}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 569 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mrow>", (yyvsp[(2) - (3)]), "</mrow>");
  itex2MML_free_string((yyvsp[(2) - (3)]));
}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 573 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mrow>", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]));
  (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (3)]), "</mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(1) - (3)]));
  itex2MML_free_string((yyvsp[(2) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 586 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 591 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 596 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy_string("");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 602 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 606 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 610 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string("");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 615 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 620 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 624 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 628 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 633 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 637 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 641 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 646 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 650 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 654 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 659 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 663 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 667 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 672 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.2em\" minsize=\"1.2em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 677 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 682 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"1.8em\" minsize=\"1.8em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 687 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 692 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"2.4em\" minsize=\"2.4em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 697 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 702 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo maxsize=\"3em\" minsize=\"3em\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 708 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string("<merror><mtext>Unknown character</mtext></merror>");
}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 712 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string("<mo lspace=\"verythinmathspace\" rspace=\"0em\">&minus;</mo>");
}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 716 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string("<mo lspace=\"verythinmathspace\" rspace=\"0em\">+</mo>");
}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 722 "itex2MML.y"
    {
  itex2MML_rowposn=2;
  (yyval) = itex2MML_copy3("<mi>", (yyvsp[(1) - (1)]), "</mi>");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 730 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo lspace=\"thinmathspace\" rspace=\"thinmathspace\">", (yyvsp[(1) - (1)]), "</mo>");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 738 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[(1) - (1)]), "</mo>");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 743 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[(1) - (1)]), "</mo>");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 748 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mstyle scriptlevel=\"0\"><mo>", (yyvsp[(1) - (1)]), "</mo></mstyle>");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 753 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mo stretchy=\"false\">", (yyvsp[(1) - (1)]), "</mo>");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 757 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo stretchy=\"false\">", (yyvsp[(1) - (1)]), "</mo>");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 762 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mo stretchy=\"false\">", (yyvsp[(1) - (1)]), "</mo>");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 766 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mo stretchy=\"false\">", (yyvsp[(1) - (1)]), "</mo>");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 770 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mo>", (yyvsp[(1) - (1)]), "</mo>");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 774 "itex2MML.y"
    {
  itex2MML_rowposn=2;
  (yyval) = itex2MML_copy3("<mo lspace=\"mediummathspace\" rspace=\"mediummathspace\">", (yyvsp[(1) - (1)]), "</mo>");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 779 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo lspace=\"0em\" rspace=\"thinmathspace\">", (yyvsp[(1) - (1)]), "</mo>");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 784 "itex2MML.y"
    {
  itex2MML_rowposn = 2;
  (yyval) = itex2MML_copy3("<mo lspace=\"0em\" rspace=\"thinmathspace\">", (yyvsp[(2) - (2)]), "</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 790 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string("<mrow></mrow>");
}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 794 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mspace height=\"", (yyvsp[(3) - (10)]), "ex\" depth=\"");
  char * s2 = itex2MML_copy3((yyvsp[(6) - (10)]), "ex\" width=\"", (yyvsp[(9) - (10)]));
  (yyval) = itex2MML_copy3(s1, s2, "em\"></mspace>");
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[(3) - (10)]));
  itex2MML_free_string((yyvsp[(6) - (10)]));
  itex2MML_free_string((yyvsp[(9) - (10)]));
}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 805 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<maction actiontype=\"statusline\">", (yyvsp[(3) - (3)]), "<mtext>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[(2) - (3)]), "</mtext></maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 813 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<maction actiontype=\"toggle\" selection=\"2\">", (yyvsp[(2) - (3)]), " ");
  (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (3)]), "</maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 821 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<maction actiontype=\"highlight\" other='color=", (yyvsp[(2) - (3)]), "'>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (3)]), "</maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 829 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<maction actiontype=\"highlight\" other='background=", (yyvsp[(2) - (3)]), "'>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (3)]), "</maction>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 837 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mstyle mathcolor=", (yyvsp[(2) - (3)]), ">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (3)]), "</mstyle>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 844 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mstyle mathbackground=", (yyvsp[(2) - (3)]), ">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (3)]), "</mstyle>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 852 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mtext>", (yyvsp[(2) - (2)]), "</mtext>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 857 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mstyle displaystyle=\"true\">", (yyvsp[(2) - (2)]), "</mstyle>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 862 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mstyle displaystyle=\"false\">", (yyvsp[(2) - (2)]), "</mstyle>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 867 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mstyle scriptlevel=\"0\">", (yyvsp[(2) - (2)]), "</mstyle>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 872 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mstyle scriptlevel=\"1\">", (yyvsp[(2) - (2)]), "</mstyle>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 877 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mstyle scriptlevel=\"2\">", (yyvsp[(2) - (2)]), "</mstyle>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 882 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mstyle mathvariant=\"italic\">", (yyvsp[(2) - (2)]), "</mstyle>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 887 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mrow><mpadded width=\"0.125em\"><mo>&#xff0f;</mo></mpadded>", (yyvsp[(2) - (2)]), "</mrow>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 892 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mstyle mathvariant=\"bold\">", (yyvsp[(2) - (2)]), "</mstyle>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 897 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mi mathvariant=\"normal\">", (yyvsp[(3) - (4)]), "</mi>");
  itex2MML_free_string((yyvsp[(3) - (4)]));
}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 902 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 906 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(1) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 912 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mi>", (yyvsp[(3) - (4)]), "</mi>");
  itex2MML_free_string((yyvsp[(3) - (4)]));
}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 917 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 921 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(1) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 927 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("&", (yyvsp[(1) - (1)]), "opf;");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 931 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("&", (yyvsp[(1) - (1)]), "opf;");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 936 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mi>", (yyvsp[(3) - (4)]), "</mi>");
  itex2MML_free_string((yyvsp[(3) - (4)]));
}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 941 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 945 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(1) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 951 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("&", (yyvsp[(1) - (1)]), "fr;");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 956 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mi>", (yyvsp[(3) - (4)]), "</mi>");
  itex2MML_free_string((yyvsp[(3) - (4)]));
}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 961 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 965 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(1) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 971 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("&", (yyvsp[(1) - (1)]), "scr;");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 976 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"thinmathspace\"></mspace>");
}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 980 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"mediummathspace\"></mspace>");
}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 984 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"thickmathspace\"></mspace>");
}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 988 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"1em\"></mspace>");
}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 992 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"2em\"></mspace>");
}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 996 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string("<mspace width=\"-0.1667 em\"></mspace>");
}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1000 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mphantom>", (yyvsp[(2) - (2)]), "</mphantom>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1005 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mrow xmlns:xlink=\"http://www.w3.org/1999/xlink\" xlink:type=\"simple\" xlink:href=\"", (yyvsp[(2) - (3)]), "\">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (3)]), "</mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1013 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mmultiscripts>", (yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  (yyval) = itex2MML_copy2(s1, "</mmultiscripts>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (5)]));
  itex2MML_free_string((yyvsp[(4) - (5)]));
}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1020 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mmultiscripts>", (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  (yyval) = itex2MML_copy2(s1, "</mmultiscripts>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1028 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mmultiscripts>", (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  char * s2 = itex2MML_copy3("<mprescripts></mprescripts>", (yyvsp[(3) - (8)]), "</mmultiscripts>");
  (yyval) = itex2MML_copy2(s1, s2);
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[(3) - (8)]));
  itex2MML_free_string((yyvsp[(5) - (8)]));
  itex2MML_free_string((yyvsp[(7) - (8)]));
}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1038 "itex2MML.y"
    {
  char * s1 = itex2MML_copy2("<mmultiscripts>", (yyvsp[(5) - (6)]));
  char * s2 = itex2MML_copy3("<mprescripts></mprescripts>", (yyvsp[(3) - (6)]), "</mmultiscripts>");
  (yyval) = itex2MML_copy2(s1, s2);
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string((yyvsp[(3) - (6)]));
  itex2MML_free_string((yyvsp[(5) - (6)]));
}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1047 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mmultiscripts>", (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));
  (yyval) = itex2MML_copy2(s1, "</mmultiscripts>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(3) - (6)]));
  itex2MML_free_string((yyvsp[(5) - (6)])); 
}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1055 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1059 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3((yyvsp[(1) - (2)]), " ", (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(1) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1065 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3((yyvsp[(2) - (4)]), " ", (yyvsp[(4) - (4)]));
  itex2MML_free_string((yyvsp[(2) - (4)]));
  itex2MML_free_string((yyvsp[(4) - (4)]));
}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1070 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2((yyvsp[(2) - (2)]), " <none></none>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1074 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2("<none></none> ", (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1078 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2("<none></none> ", (yyvsp[(3) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1083 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mfrac>", (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  (yyval) = itex2MML_copy2(s1, "</mfrac>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1090 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mstyle displaystyle=\"false\"><mfrac>", (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  (yyval) = itex2MML_copy2(s1, "</mfrac></mstyle>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1098 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3( "<mo lspace=\"mediummathspace\">(</mo><mo rspace=\"thinmathspace\">mod</mo>", (yyvsp[(2) - (2)]), "<mo rspace=\"mediummathspace\">)</mo>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1103 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mfrac><mrow>", (yyvsp[(2) - (5)]), "</mrow><mrow>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[(4) - (5)]), "</mrow></mfrac>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (5)]));
  itex2MML_free_string((yyvsp[(4) - (5)]));
}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1110 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mrow>", (yyvsp[(1) - (5)]), "<mfrac><mrow>");
  char * s2 = itex2MML_copy3((yyvsp[(2) - (5)]), "</mrow><mrow>", (yyvsp[(4) - (5)]));
  char * s3 = itex2MML_copy3("</mrow></mfrac>", (yyvsp[(5) - (5)]), "</mrow>");
  (yyval) = itex2MML_copy3(s1, s2, s3);
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(s3);
  itex2MML_free_string((yyvsp[(1) - (5)]));
  itex2MML_free_string((yyvsp[(2) - (5)]));
  itex2MML_free_string((yyvsp[(4) - (5)]));
  itex2MML_free_string((yyvsp[(5) - (5)]));
}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1124 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mfrac linethickness=\"0\"><mrow>", (yyvsp[(2) - (5)]), "</mrow><mrow>");
  (yyval) = itex2MML_copy3(s1, (yyvsp[(4) - (5)]), "</mrow></mfrac>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (5)]));
  itex2MML_free_string((yyvsp[(4) - (5)]));
}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1131 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mrow>", (yyvsp[(1) - (5)]), "<mfrac linethickness=\"0\"><mrow>");
  char * s2 = itex2MML_copy3((yyvsp[(2) - (5)]), "</mrow><mrow>", (yyvsp[(4) - (5)]));
  char * s3 = itex2MML_copy3("</mrow></mfrac>", (yyvsp[(5) - (5)]), "</mrow>");
  (yyval) = itex2MML_copy3(s1, s2, s3);
  itex2MML_free_string(s1);
  itex2MML_free_string(s2);
  itex2MML_free_string(s3);
  itex2MML_free_string((yyvsp[(1) - (5)]));
  itex2MML_free_string((yyvsp[(2) - (5)]));
  itex2MML_free_string((yyvsp[(4) - (5)]));
  itex2MML_free_string((yyvsp[(5) - (5)]));
}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1145 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mrow><mo>(</mo><mfrac linethickness=\"0\">", (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  (yyval) = itex2MML_copy2(s1, "</mfrac><mo>)</mo></mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1153 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<munder>", (yyvsp[(2) - (2)]), "<mo>&UnderBrace;</mo></munder>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1158 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[(2) - (2)]), "<mo>&OverBrace;</mo></mover>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1163 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[(2) - (2)]), "<mo stretchy=\"false\">&OverBar;</mo></mover>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1167 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[(2) - (2)]), "<mo>&OverBar;</mo></mover>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1172 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[(2) - (2)]), "<mo stretchy=\"false\">&RightVector;</mo></mover>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1176 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[(2) - (2)]), "<mo>&RightVector;</mo></mover>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1181 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[(2) - (2)]), "<mo>&dot;</mo></mover>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1186 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[(2) - (2)]), "<mo>&Dot;</mo></mover>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1191 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[(2) - (2)]), "<mo stretchy=\"false\">&tilde;</mo></mover>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1195 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[(2) - (2)]), "<mo>&tilde;</mo></mover>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1200 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[(2) - (2)]), "<mo stretchy=\"false\">&#x2c7;</mo></mover>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1204 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[(2) - (2)]), "<mo>&#x2c7;</mo></mover>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1209 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[(2) - (2)]), "<mo stretchy=\"false\">&#x302;</mo></mover>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1213 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mover>", (yyvsp[(2) - (2)]), "<mo>&#x302;</mo></mover>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1218 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<msqrt>", (yyvsp[(2) - (2)]), "</msqrt>");
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1223 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mroot>", (yyvsp[(3) - (3)]), (yyvsp[(2) - (3)]));
  (yyval) = itex2MML_copy2(s1, "</mroot>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 1231 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<munder>", (yyvsp[(3) - (3)]), (yyvsp[(2) - (3)]));
  (yyval) = itex2MML_copy2(s1, "</munder>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 1239 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mover>", (yyvsp[(3) - (3)]), (yyvsp[(2) - (3)]));
  (yyval) = itex2MML_copy2(s1, "</mover>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1247 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<munderover>", (yyvsp[(4) - (4)]), (yyvsp[(2) - (4)]));
  (yyval) = itex2MML_copy3(s1, (yyvsp[(3) - (4)]), "</munderover>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (4)]));
  itex2MML_free_string((yyvsp[(3) - (4)]));
  itex2MML_free_string((yyvsp[(4) - (4)]));
}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 1256 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mrow><mtable rowspacing=\"0.5ex\">", (yyvsp[(3) - (5)]), "</mtable></mrow>");
  itex2MML_free_string((yyvsp[(3) - (5)]));
}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1260 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mrow><mtable rowspacing=\"1.0ex\">", (yyvsp[(3) - (5)]), "</mtable></mrow>");
  itex2MML_free_string((yyvsp[(3) - (5)]));
}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 1264 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mrow><mo>(</mo><mrow><mtable rowspacing=\"0.5ex\">", (yyvsp[(3) - (5)]), "</mtable></mrow><mo>)</mo></mrow>");
  itex2MML_free_string((yyvsp[(3) - (5)]));
}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1268 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mrow><mo>[</mo><mrow><mtable rowspacing=\"0.5ex\">", (yyvsp[(3) - (5)]), "</mtable></mrow><mo>]</mo></mrow>");
  itex2MML_free_string((yyvsp[(3) - (5)]));
}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1272 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mrow><mo>&VerticalBar;</mo><mrow><mtable rowspacing=\"0.5ex\">", (yyvsp[(3) - (5)]), "</mtable></mrow><mo>&VerticalBar;</mo></mrow>");
  itex2MML_free_string((yyvsp[(3) - (5)]));
}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 1276 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mrow><mo>{</mo><mrow><mtable rowspacing=\"0.5ex\">", (yyvsp[(3) - (5)]), "</mtable></mrow><mo>}</mo></mrow>");
  itex2MML_free_string((yyvsp[(3) - (5)]));
}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 1280 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mrow><mo>&DoubleVerticalBar;</mo><mrow><mtable rowspacing=\"0.5ex\">", (yyvsp[(3) - (5)]), "</mtable></mrow><mo>&DoubleVerticalBar;</mo></mrow>");
  itex2MML_free_string((yyvsp[(3) - (5)]));
}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1284 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mstyle scriptlevel=\"2\"><mrow><mtable rowspacing=\"0.5ex\">", (yyvsp[(3) - (5)]), "</mtable></mrow></mstyle>");
  itex2MML_free_string((yyvsp[(3) - (5)]));
}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 1288 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mrow><mo>{</mo><mrow><mtable columnalign=\"left left\">", (yyvsp[(3) - (5)]), "</mtable></mrow></mrow>");
  itex2MML_free_string((yyvsp[(3) - (5)]));
}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1292 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mrow><mtable columnalign=\"right left right left right left right left right left\" columnspacing=\"0em\">", (yyvsp[(3) - (5)]), "</mtable></mrow>");
  itex2MML_free_string((yyvsp[(3) - (5)]));
}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 1296 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<semantics><annotation-xml encoding=\"SVG1.1\">", (yyvsp[(3) - (4)]), "</annotation-xml></semantics>");
  itex2MML_free_string((yyvsp[(3) - (4)]));
}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1300 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string(" ");
}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1304 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mrow><mtable columnalign=\"center\" rowspacing=\"0.5ex\">", (yyvsp[(3) - (4)]), "</mtable></mrow>");
  itex2MML_free_string((yyvsp[(3) - (4)]));
}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1309 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mrow><mtable>", (yyvsp[(3) - (4)]), "</mtable></mrow>");
  itex2MML_free_string((yyvsp[(3) - (4)]));
}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1313 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mrow><mtable ", (yyvsp[(5) - (8)]), ">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[(7) - (8)]), "</mtable></mrow>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(5) - (8)]));
  itex2MML_free_string((yyvsp[(7) - (8)]));
}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1321 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1325 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3((yyvsp[(1) - (2)]), " ", (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(1) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1331 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1335 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1339 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1343 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1347 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1351 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1355 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1359 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1363 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1367 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1372 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2("columnalign=", (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1377 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2("columnalign=", (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 1382 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2("rowalign=", (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1387 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2("align=", (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1392 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2("equalrows=", (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1397 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2("equalcolumns=", (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1402 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2("rowlines=", (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1407 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2("columnlines=", (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1412 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2("frame=", (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1417 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("rowspacing=", (yyvsp[(2) - (2)]), " columnspacing=");
  (yyval) = itex2MML_copy2(s1, (yyvsp[(2) - (2)]));
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1424 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1428 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3((yyvsp[(1) - (3)]), " ", (yyvsp[(3) - (3)]));
  itex2MML_free_string((yyvsp[(1) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1434 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mtr>", (yyvsp[(1) - (1)]), "</mtr>");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1438 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1443 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1447 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3((yyvsp[(1) - (3)]), " ", (yyvsp[(3) - (3)]));
  itex2MML_free_string((yyvsp[(1) - (3)]));
  itex2MML_free_string((yyvsp[(3) - (3)]));
}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1453 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mtr ", (yyvsp[(3) - (5)]), ">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[(5) - (5)]), "</mtr>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(3) - (5)]));
  itex2MML_free_string((yyvsp[(5) - (5)]));
}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1461 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1465 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3((yyvsp[(1) - (2)]), " ", (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(1) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1471 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1475 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1480 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string("<mtd></mtd>");
}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1483 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3("<mtd>", (yyvsp[(1) - (1)]), "</mtd>");
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1487 "itex2MML.y"
    {
  char * s1 = itex2MML_copy3("<mtd ", (yyvsp[(3) - (5)]), ">");
  (yyval) = itex2MML_copy3(s1, (yyvsp[(5) - (5)]), "</mtd>");
  itex2MML_free_string(s1);
  itex2MML_free_string((yyvsp[(3) - (5)]));
  itex2MML_free_string((yyvsp[(5) - (5)]));
}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1495 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1499 "itex2MML.y"
    {
  (yyval) = itex2MML_copy3((yyvsp[(1) - (2)]), " ", (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(1) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1505 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1509 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1513 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1517 "itex2MML.y"
    {
  (yyval) = itex2MML_copy_string((yyvsp[(1) - (1)]));
  itex2MML_free_string((yyvsp[(1) - (1)]));
}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1522 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2("rowspan=", (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1527 "itex2MML.y"
    {
  (yyval) = itex2MML_copy2("columnspan=", (yyvsp[(2) - (2)]));
  itex2MML_free_string((yyvsp[(2) - (2)]));
}
    break;



/* Line 1455 of yacc.c  */
#line 5186 "y.tab.c"
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
#line 1532 "itex2MML.y"


char * itex2MML_parse (const char * buffer, unsigned long length)
{
  char * mathml = 0;

  int result;

  itex2MML_setup (buffer, length);
  itex2MML_restart ();

  result = itex2MML_yyparse (&mathml);

  if (result && mathml) /* shouldn't happen? */
    {
      itex2MML_free_string (mathml);
      mathml = 0;
    }
  return mathml;
}

int itex2MML_filter (const char * buffer, unsigned long length)
{
  itex2MML_setup (buffer, length);
  itex2MML_restart ();

  return itex2MML_yyparse (0);
}

#define ITEX_DELIMITER_DOLLAR 0
#define ITEX_DELIMITER_DOUBLE 1
#define ITEX_DELIMITER_SQUARE 2

static char * itex2MML_last_error = 0;

static void itex2MML_keep_error (const char * msg)
{
  if (itex2MML_last_error)
    {
      itex2MML_free_string (itex2MML_last_error);
      itex2MML_last_error = 0;
    }
  itex2MML_last_error = itex2MML_copy_escaped (msg);
}

int itex2MML_html_filter (const char * buffer, unsigned long length)
{
  itex2MML_do_html_filter (buffer, length, 0);
}

int itex2MML_strict_html_filter (const char * buffer, unsigned long length)
{
  itex2MML_do_html_filter (buffer, length, 1);
}

int itex2MML_do_html_filter (const char * buffer, unsigned long length, const int forbid_markup)
{
  int result = 0;

  int type = 0;
  int skip = 0;
  int match = 0;

  const char * ptr1 = buffer;
  const char * ptr2 = 0;

  const char * end = buffer + length;

  char * mathml = 0;

  void (*save_error_fn) (const char * msg) = itex2MML_error;

  itex2MML_error = itex2MML_keep_error;

 _until_math:
  ptr2 = ptr1;

  while (ptr2 < end)
    {
      if (*ptr2 == '$') break;
      if ((*ptr2 == '\\') && (ptr2 + 1 < end))
	{
	  if (*(ptr2+1) == '[') break;
	}
      ++ptr2;
    }
  if (itex2MML_write)
    (*itex2MML_write) (ptr1, ptr2 - ptr1);

  if (ptr2 == end) goto _finish;

 _until_html:
  ptr1 = ptr2;

  if (ptr2 + 1 < end)
    {
      if ((*ptr2 == '\\') && (*(ptr2+1) == '['))
	{
	  type = ITEX_DELIMITER_SQUARE;
	  ptr2 += 2;
	}
      else if ((*ptr2 == '$') && (*(ptr2+1) == '$'))
	{
	  type = ITEX_DELIMITER_DOUBLE;
	  ptr2 += 2;
	}
      else
	{
	  type = ITEX_DELIMITER_DOLLAR;
	  ptr2 += 2;
	}
    }
  else goto _finish;

  skip = 0;
  match = 0;

  while (ptr2 < end)
    {
      switch (*ptr2)
	{
	case '<':
	case '>':
	  if (forbid_markup == 1) skip = 1;
	  break;

	case '\\':
	  if (ptr2 + 1 < end)
	    {
	      if (*(ptr2 + 1) == '[')
		{
		  skip = 1;
		}
	      else if (*(ptr2 + 1) == ']')
		{
		  if (type == ITEX_DELIMITER_SQUARE)
		    {
		      ptr2 += 2;
		      match = 1;
		    }
		  else
		    {
		      skip = 1;
		    }
		}
	    }
	  break;

	case '$':
	  if (type == ITEX_DELIMITER_SQUARE)
	    {
	      skip = 1;
	    }
	  else if (ptr2 + 1 < end)
	    {
	      if (*(ptr2 + 1) == '$')
		{
		  if (type == ITEX_DELIMITER_DOLLAR)
		    {
		      ptr2++;
		      match = 1;
		    }
		  else
		    {
		      ptr2 += 2;
		      match = 1;
		    }
		}
	      else
		{
		  if (type == ITEX_DELIMITER_DOLLAR)
		    {
		      ptr2++;
		      match = 1;
		    }
		  else
		    {
		      skip = 1;
		    }
		}
	    }
	  else
	    {
	      if (type == ITEX_DELIMITER_DOLLAR)
		{
		  ptr2++;
		  match = 1;
		}
	      else
		{
		  skip = 1;
		}
	    }
	  break;

	default:
	  break;
	}
      if (skip || match) break;

      ++ptr2;
    }
  if (skip)
    {
      if (type == ITEX_DELIMITER_DOLLAR)
	{
	  if (itex2MML_write)
	    (*itex2MML_write) (ptr1, 1);
	  ptr1++;
	}
      else
	{
	  if (itex2MML_write)
	    (*itex2MML_write) (ptr1, 2);
	  ptr1 += 2;
	}
      goto _until_math;
    }
  if (match)
    {
      mathml = itex2MML_parse (ptr1, ptr2 - ptr1);

      if (mathml)
	{
	  if (itex2MML_write_mathml)
	    (*itex2MML_write_mathml) (mathml);
	  itex2MML_free_string (mathml);
	  mathml = 0;
	}
      else
	{
	  ++result;
	  if (itex2MML_write)
	    {
	      if (type == ITEX_DELIMITER_DOLLAR)
		(*itex2MML_write) ("<math xmlns='http://www.w3.org/1998/Math/MathML' display='inline'><merror><mtext>", 0);
	      else
		(*itex2MML_write) ("<math xmlns='http://www.w3.org/1998/Math/MathML' display='block'><merror><mtext>", 0);

	      (*itex2MML_write) (itex2MML_last_error, 0);
	      (*itex2MML_write) ("</mtext></merror></math>", 0);
	    }
	}
      ptr1 = ptr2;

      goto _until_math;
    }
  if (itex2MML_write)
    (*itex2MML_write) (ptr1, ptr2 - ptr1);

 _finish:
  if (itex2MML_last_error)
    {
      itex2MML_free_string (itex2MML_last_error);
      itex2MML_last_error = 0;
    }
  itex2MML_error = save_error_fn;

  return result;
}

