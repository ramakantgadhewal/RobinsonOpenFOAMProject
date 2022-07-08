// A Bison parser, made by GNU Bison 3.4.

// Skeleton interface for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2019 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


/**
 ** \file FieldValueExpressionParser.tab.hh
 ** Define the parserField::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.

#ifndef YY_PARSERFIELD_FIELDVALUEEXPRESSIONPARSER_TAB_HH_INCLUDED
# define YY_PARSERFIELD_FIELDVALUEEXPRESSIONPARSER_TAB_HH_INCLUDED


# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif
# include "FieldValueExpressionParser_location.hh"


#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Debug traces.  */
#ifndef PARSERFIELDDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define PARSERFIELDDEBUG 1
#  else
#   define PARSERFIELDDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define PARSERFIELDDEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined PARSERFIELDDEBUG */

namespace parserField {
#line 164 "FieldValueExpressionParser.tab.hh"




  /// A Bison parser.
  class FieldValueExpressionParser
  {
  public:
#ifndef PARSERFIELDSTYPE
    /// Symbol semantic values.
    union semantic_type
    {
#line 105 "../FieldValueExpressionParser.yy"

    Foam::scalar val;
    Foam::label integer;
    Foam::vector *vec;
    Foam::tensor *ten;
    Foam::symmTensor *yten;
    Foam::sphericalTensor *hten;
    Foam::word *name;
    Foam::volVectorField *vfield;
    Foam::volScalarField *sfield;
    Foam::volTensorField *tfield;
    Foam::volSymmTensorField *yfield;
    Foam::volSphericalTensorField *hfield;
    Foam::surfaceScalarField *fsfield;
    Foam::surfaceVectorField *fvfield;
    Foam::surfaceTensorField *ftfield;
    Foam::surfaceSymmTensorField *fyfield;
    Foam::surfaceSphericalTensorField *fhfield;
    Foam::pointScalarField *psfield;
    Foam::pointVectorField *pvfield;
    Foam::pointTensorField *ptfield;
    Foam::pointSymmTensorField *pyfield;
    Foam::pointSphericalTensorField *phfield;

#line 202 "FieldValueExpressionParser.tab.hh"

    };
#else
    typedef PARSERFIELDSTYPE semantic_type;
#endif
    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Tokens.
    struct token
    {
      enum yytokentype
      {
        TOKEN_LINE = 258,
        TOKEN_LOOKUP = 259,
        TOKEN_LOOKUP2D = 260,
        TOKEN_SID = 261,
        TOKEN_VID = 262,
        TOKEN_TID = 263,
        TOKEN_YID = 264,
        TOKEN_HID = 265,
        TOKEN_FSID = 266,
        TOKEN_FVID = 267,
        TOKEN_FTID = 268,
        TOKEN_FYID = 269,
        TOKEN_FHID = 270,
        TOKEN_PSID = 271,
        TOKEN_PVID = 272,
        TOKEN_PTID = 273,
        TOKEN_PYID = 274,
        TOKEN_PHID = 275,
        TOKEN_FUNCTION_SID = 276,
        TOKEN_FUNCTION_FSID = 277,
        TOKEN_FUNCTION_PSID = 278,
        TOKEN_FUNCTION_VID = 279,
        TOKEN_FUNCTION_FVID = 280,
        TOKEN_FUNCTION_PVID = 281,
        TOKEN_FUNCTION_TID = 282,
        TOKEN_FUNCTION_FTID = 283,
        TOKEN_FUNCTION_PTID = 284,
        TOKEN_FUNCTION_YID = 285,
        TOKEN_FUNCTION_FYID = 286,
        TOKEN_FUNCTION_PYID = 287,
        TOKEN_FUNCTION_HID = 288,
        TOKEN_FUNCTION_FHID = 289,
        TOKEN_FUNCTION_PHID = 290,
        TOKEN_FUNCTION_LID = 291,
        TOKEN_FUNCTION_FLID = 292,
        TOKEN_FUNCTION_PLID = 293,
        TOKEN_OTHER_MESH_ID = 294,
        TOKEN_OTHER_MESH_SID = 295,
        TOKEN_OTHER_MESH_VID = 296,
        TOKEN_OTHER_MESH_TID = 297,
        TOKEN_OTHER_MESH_HID = 298,
        TOKEN_OTHER_MESH_YID = 299,
        TOKEN_SETID = 300,
        TOKEN_ZONEID = 301,
        TOKEN_FSETID = 302,
        TOKEN_FZONEID = 303,
        TOKEN_PSETID = 304,
        TOKEN_PZONEID = 305,
        TOKEN_PATCHID = 306,
        TOKEN_NUM = 307,
        TOKEN_INT = 308,
        TOKEN_VEC = 309,
        TOKEN_TEN = 310,
        TOKEN_YTEN = 311,
        TOKEN_HTEN = 312,
        START_DEFAULT = 332,
        START_VOL_SCALAR_COMMA = 333,
        START_VOL_SCALAR_CLOSE = 334,
        START_VOL_VECTOR_COMMA = 335,
        START_VOL_VECTOR_CLOSE = 336,
        START_VOL_TENSOR_COMMA = 337,
        START_VOL_TENSOR_CLOSE = 338,
        START_VOL_YTENSOR_COMMA = 339,
        START_VOL_YTENSOR_CLOSE = 340,
        START_VOL_HTENSOR_COMMA = 341,
        START_VOL_HTENSOR_CLOSE = 342,
        START_VOL_LOGICAL_COMMA = 343,
        START_VOL_LOGICAL_CLOSE = 344,
        START_SURFACE_SCALAR_COMMA = 345,
        START_SURFACE_SCALAR_CLOSE = 346,
        START_SURFACE_VECTOR_COMMA = 347,
        START_SURFACE_VECTOR_CLOSE = 348,
        START_SURFACE_TENSOR_COMMA = 349,
        START_SURFACE_TENSOR_CLOSE = 350,
        START_SURFACE_YTENSOR_COMMA = 351,
        START_SURFACE_YTENSOR_CLOSE = 352,
        START_SURFACE_HTENSOR_COMMA = 353,
        START_SURFACE_HTENSOR_CLOSE = 354,
        START_SURFACE_LOGICAL_COMMA = 355,
        START_SURFACE_LOGICAL_CLOSE = 356,
        START_POINT_SCALAR_COMMA = 357,
        START_POINT_SCALAR_CLOSE = 358,
        START_POINT_VECTOR_COMMA = 359,
        START_POINT_VECTOR_CLOSE = 360,
        START_POINT_TENSOR_COMMA = 361,
        START_POINT_TENSOR_CLOSE = 362,
        START_POINT_YTENSOR_COMMA = 363,
        START_POINT_YTENSOR_CLOSE = 364,
        START_POINT_HTENSOR_COMMA = 365,
        START_POINT_HTENSOR_CLOSE = 366,
        START_POINT_LOGICAL_COMMA = 367,
        START_POINT_LOGICAL_CLOSE = 368,
        START_CLOSE_ONLY = 369,
        START_COMMA_ONLY = 370,
        TOKEN_LAST_FUNCTION_CHAR = 371,
        TOKEN_IN_FUNCTION_CHAR = 372,
        TOKEN_VECTOR = 373,
        TOKEN_TENSOR = 374,
        TOKEN_SYMM_TENSOR = 375,
        TOKEN_SPHERICAL_TENSOR = 376,
        TOKEN_TRUE = 377,
        TOKEN_FALSE = 378,
        TOKEN_x = 379,
        TOKEN_y = 380,
        TOKEN_z = 381,
        TOKEN_xx = 382,
        TOKEN_xy = 383,
        TOKEN_xz = 384,
        TOKEN_yx = 385,
        TOKEN_yy = 386,
        TOKEN_yz = 387,
        TOKEN_zx = 388,
        TOKEN_zy = 389,
        TOKEN_zz = 390,
        TOKEN_ii = 391,
        TOKEN_unitTensor = 392,
        TOKEN_pi = 393,
        TOKEN_rand = 394,
        TOKEN_randFixed = 395,
        TOKEN_id = 396,
        TOKEN_cpu = 397,
        TOKEN_weight = 398,
        TOKEN_randNormal = 399,
        TOKEN_randNormalFixed = 400,
        TOKEN_position = 401,
        TOKEN_fposition = 402,
        TOKEN_fprojection = 403,
        TOKEN_pposition = 404,
        TOKEN_face = 405,
        TOKEN_area = 406,
        TOKEN_volume = 407,
        TOKEN_dist = 408,
        TOKEN_distToPatch = 409,
        TOKEN_distToFaces = 410,
        TOKEN_distToCells = 411,
        TOKEN_nearDist = 412,
        TOKEN_rdist = 413,
        TOKEN_set = 414,
        TOKEN_zone = 415,
        TOKEN_fset = 416,
        TOKEN_fzone = 417,
        TOKEN_pset = 418,
        TOKEN_pzone = 419,
        TOKEN_onPatch = 420,
        TOKEN_internalFace = 421,
        TOKEN_div = 422,
        TOKEN_grad = 423,
        TOKEN_curl = 424,
        TOKEN_snGrad = 425,
        TOKEN_magSqrGradGrad = 426,
        TOKEN_laplacian = 427,
        TOKEN_ddt = 428,
        TOKEN_oldTime = 429,
        TOKEN_d2dt2 = 430,
        TOKEN_meshPhi = 431,
        TOKEN_flux = 432,
        TOKEN_integrate = 433,
        TOKEN_surfSum = 434,
        TOKEN_interpolate = 435,
        TOKEN_interpolateToPoint = 436,
        TOKEN_interpolateToCell = 437,
        TOKEN_faceAverage = 438,
        TOKEN_reconstruct = 439,
        TOKEN_surf = 440,
        TOKEN_point = 441,
        TOKEN_deltaT = 442,
        TOKEN_time = 443,
        TOKEN_outputTime = 444,
        TOKEN_pow = 445,
        TOKEN_log = 446,
        TOKEN_exp = 447,
        TOKEN_mag = 448,
        TOKEN_magSqr = 449,
        TOKEN_sin = 450,
        TOKEN_cos = 451,
        TOKEN_tan = 452,
        TOKEN_min = 453,
        TOKEN_max = 454,
        TOKEN_minPosition = 455,
        TOKEN_maxPosition = 456,
        TOKEN_sum = 457,
        TOKEN_average = 458,
        TOKEN_sqr = 459,
        TOKEN_sqrt = 460,
        TOKEN_transpose = 461,
        TOKEN_diag = 462,
        TOKEN_tr = 463,
        TOKEN_dev = 464,
        TOKEN_symm = 465,
        TOKEN_skew = 466,
        TOKEN_det = 467,
        TOKEN_cof = 468,
        TOKEN_inv = 469,
        TOKEN_sph = 470,
        TOKEN_twoSymm = 471,
        TOKEN_dev2 = 472,
        TOKEN_eigenValues = 473,
        TOKEN_eigenVectors = 474,
        TOKEN_log10 = 475,
        TOKEN_asin = 476,
        TOKEN_acos = 477,
        TOKEN_atan = 478,
        TOKEN_atan2 = 479,
        TOKEN_sinh = 480,
        TOKEN_cosh = 481,
        TOKEN_tanh = 482,
        TOKEN_asinh = 483,
        TOKEN_acosh = 484,
        TOKEN_atanh = 485,
        TOKEN_erf = 486,
        TOKEN_erfc = 487,
        TOKEN_lgamma = 488,
        TOKEN_besselJ0 = 489,
        TOKEN_besselJ1 = 490,
        TOKEN_besselY0 = 491,
        TOKEN_besselY1 = 492,
        TOKEN_sign = 493,
        TOKEN_pos = 494,
        TOKEN_neg = 495,
        TOKEN_OR = 496,
        TOKEN_AND = 497,
        TOKEN_EQ = 498,
        TOKEN_NEQ = 499,
        TOKEN_LEQ = 500,
        TOKEN_GEQ = 501,
        TOKEN_NEG = 502,
        TOKEN_NOT = 503,
        TOKEN_HODGE = 504
      };
    };

    /// (External) token type, as returned by yylex.
    typedef token::yytokentype token_type;

    /// Symbol type: an internal symbol number.
    typedef int symbol_number_type;

    /// The symbol type number to denote an empty symbol.
    enum { empty_symbol = -2 };

    /// Internal symbol number for tokens (subsumed by symbol_number_type).
    typedef unsigned short token_number_type;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol type
    /// via type_get ().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol ()
        : value ()
        , location ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that);
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);
      /// Constructor for valueless symbols.
      basic_symbol (typename Base::kind_type t,
                    YY_MOVE_REF (location_type) l);

      /// Constructor for symbols with semantic value.
      basic_symbol (typename Base::kind_type t,
                    YY_RVREF (semantic_type) v,
                    YY_RVREF (location_type) l);

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }

      /// Destroy contents, and record that is empty.
      void clear ()
      {
        Base::clear ();
      }

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      semantic_type value;

      /// The location.
      location_type location;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_type
    {
      /// Default constructor.
      by_type ();

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_type (by_type&& that);
#endif

      /// Copy constructor.
      by_type (const by_type& that);

      /// The symbol type as needed by the constructor.
      typedef token_type kind_type;

      /// Constructor from (external) token numbers.
      by_type (kind_type t);

      /// Record that this symbol is empty.
      void clear ();

      /// Steal the symbol type from \a that.
      void move (by_type& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_number_type type_get () const YY_NOEXCEPT;

      /// The token.
      token_type token () const YY_NOEXCEPT;

      /// The symbol type.
      /// \a empty_symbol when empty.
      /// An int, not token_number_type, to be able to store empty_symbol.
      int type;
    };

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_type>
    {};

    /// Build a parser object.
    FieldValueExpressionParser (void * scanner_yyarg, FieldValueExpressionDriver& driver_yyarg, int start_token_yyarg, int numberOfFunctionChars_yyarg);
    virtual ~FieldValueExpressionParser ();

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if PARSERFIELDDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);



  private:
    /// This class is not copiable.
    FieldValueExpressionParser (const FieldValueExpressionParser&);
    FieldValueExpressionParser& operator= (const FieldValueExpressionParser&);

    /// State numbers.
    typedef int state_type;

    /// Generate an error message.
    /// \param yystate   the state where the error occurred.
    /// \param yyla      the lookahead token.
    virtual std::string yysyntax_error_ (state_type yystate,
                                         const symbol_type& yyla) const;

    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue);

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue);

    static const short yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token number \a t to a symbol number.
    static token_number_type yytranslate_ (int t);

    // Tables.
  // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
  // STATE-NUM.
  static const short yypact_[];

  // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
  // Performed when YYTABLE does not specify something else to do.  Zero
  // means the default is an error.
  static const unsigned short yydefact_[];

  // YYPGOTO[NTERM-NUM].
  static const short yypgoto_[];

  // YYDEFGOTO[NTERM-NUM].
  static const short yydefgoto_[];

  // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
  // positive, shift that token.  If negative, reduce the rule whose
  // number is the opposite.  If YYTABLE_NINF, syntax error.
  static const unsigned short yytable_[];

  static const short yycheck_[];

  // YYSTOS[STATE-NUM] -- The (internal number of the) accessing
  // symbol of state STATE-NUM.
  static const unsigned short yystos_[];

  // YYR1[YYN] -- Symbol number of symbol that rule YYN derives.
  static const unsigned short yyr1_[];

  // YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.
  static const unsigned char yyr2_[];


    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *n);


    /// For a symbol, its name in clear.
    static const char* const yytname_[];
#if PARSERFIELDDEBUG
  // YYRLINE[YYN] -- Source line where rule number YYN was defined.
  static const unsigned short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r);
    /// Print the state stack on the debug stream.
    virtual void yystack_print_ ();

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol type, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol type as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol type from \a that.
      void move (by_state& that);

      /// The (internal) type number (corresponding to \a state).
      /// \a empty_symbol when empty.
      symbol_number_type type_get () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      enum { empty_state = -1 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::reverse_iterator iterator;
      typedef typename S::const_reverse_iterator const_iterator;
      typedef typename S::size_type size_type;

      stack (size_type n = 200)
        : seq_ (n)
      {}

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (size_type i)
      {
        return seq_[size () - 1 - i];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (int i)
      {
        return operator[] (size_type (i));
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (size_type i) const
      {
        return seq_[size () - 1 - i];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (int i) const
      {
        return operator[] (size_type (i));
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (int n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      size_type
      size () const YY_NOEXCEPT
      {
        return seq_.size ();
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.rbegin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.rend ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, int range)
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (int i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        int range_;
      };

    private:
      stack (const stack&);
      stack& operator= (const stack&);
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1);

    /// Constants.
    enum
    {
      yyeof_ = 0,
      yylast_ = 12037,     ///< Last index in yytable_.
      yynnts_ = 57,  ///< Number of nonterminal symbols.
      yyfinal_ = 481, ///< Termination state number.
      yyterror_ = 1,
      yyerrcode_ = 256,
      yyntokens_ = 266  ///< Number of tokens.
    };


    // User arguments.
    void * scanner;
    FieldValueExpressionDriver& driver;
    int start_token;
    int numberOfFunctionChars;
  };


} // parserField
#line 943 "FieldValueExpressionParser.tab.hh"





#endif // !YY_PARSERFIELD_FIELDVALUEEXPRESSIONPARSER_TAB_HH_INCLUDED
