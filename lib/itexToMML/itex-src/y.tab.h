
/* A Bison parser, made by GNU Bison 2.4.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

extern YYSTYPE itex2MML_yylval;


