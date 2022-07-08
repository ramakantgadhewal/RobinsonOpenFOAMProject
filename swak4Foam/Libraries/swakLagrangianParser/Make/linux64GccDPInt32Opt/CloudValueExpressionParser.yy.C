// A Bison parser, made by GNU Bison 3.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

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

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.


// Take the name prefix into account.
#define yylex   parserCloudlex

// First part of user prologue.
#line 39 "../CloudValueExpressionParser.yy"

#include <volFields.H>

#include <functional>
#include <cmath>

    namespace Foam {
        class CloudValueExpressionDriver;
    }

    const Foam::scalar HugeVal=1e40;

    using Foam::CloudValueExpressionDriver;

    void yyerror(char *);

#include "swak.H"


#line 62 "CloudValueExpressionParser.tab.cc"


#include "CloudValueExpressionParser.tab.hh"

// Second part of user prologue.
#line 95 "../CloudValueExpressionParser.yy"

#include "CloudValueExpressionDriverYY.H"
#include "swakChecks.H"
#include "CommonPluginFunction.H"

namespace Foam {
    template<class T>
    autoPtr<Field<T> > CloudValueExpressionDriver::evaluatePluginFunction(
        const word &name,
        const parserCloud::location &loc,
        int &scanned,
        bool isPoint
    ) {
        if(debug || traceParsing()) {
            Info << "Excuting plugin-function " << name << " ( returning type "
                << pTraits<T>::typeName << ") on " << this->content()
                << " position "
                << loc.end.column-1 << endl;
        }

        autoPtr<CommonPluginFunction> theFunction(
            this->newPluginFunction(
                name
            )
        );

        //    scanned+=1;

        autoPtr<Field<T> > result(
            theFunction->evaluate<T>(
                this->content().substr(
                    loc.end.column-1
                ),
                scanned,
                isPoint
            ).ptr()
        );

        if(debug || traceParsing()) {
            Info << "Scanned: " << scanned << endl;
        }

        return result;
    }
}


#line 116 "CloudValueExpressionParser.tab.cc"



#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if PARSERCLOUDDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !PARSERCLOUDDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !PARSERCLOUDDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace parserCloud {
#line 211 "CloudValueExpressionParser.tab.cc"


  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  CloudValueExpressionParser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
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
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  CloudValueExpressionParser::CloudValueExpressionParser (void * scanner_yyarg, CloudValueExpressionDriver& driver_yyarg, int start_token_yyarg, int numberOfFunctionChars_yyarg)
    :
#if PARSERCLOUDDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      scanner (scanner_yyarg),
      driver (driver_yyarg),
      start_token (start_token_yyarg),
      numberOfFunctionChars (numberOfFunctionChars_yyarg)
  {}

  CloudValueExpressionParser::~CloudValueExpressionParser ()
  {}

  CloudValueExpressionParser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/

  // basic_symbol.
#if 201103L <= YY_CPLUSPLUS
  template <typename Base>
  CloudValueExpressionParser::basic_symbol<Base>::basic_symbol (basic_symbol&& that)
    : Base (std::move (that))
    , value (std::move (that.value))
    , location (std::move (that.location))
  {}
#endif

  template <typename Base>
  CloudValueExpressionParser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value (that.value)
    , location (that.location)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  CloudValueExpressionParser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_MOVE_REF (location_type) l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  CloudValueExpressionParser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (semantic_type) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  bool
  CloudValueExpressionParser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  void
  CloudValueExpressionParser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    value = YY_MOVE (s.value);
    location = YY_MOVE (s.location);
  }

  // by_type.
  CloudValueExpressionParser::by_type::by_type ()
    : type (empty_symbol)
  {}

#if 201103L <= YY_CPLUSPLUS
  CloudValueExpressionParser::by_type::by_type (by_type&& that)
    : type (that.type)
  {
    that.clear ();
  }
#endif

  CloudValueExpressionParser::by_type::by_type (const by_type& that)
    : type (that.type)
  {}

  CloudValueExpressionParser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  void
  CloudValueExpressionParser::by_type::clear ()
  {
    type = empty_symbol;
  }

  void
  CloudValueExpressionParser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  int
  CloudValueExpressionParser::by_type::type_get () const YY_NOEXCEPT
  {
    return type;
  }


  // by_state.
  CloudValueExpressionParser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  CloudValueExpressionParser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  CloudValueExpressionParser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  CloudValueExpressionParser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  CloudValueExpressionParser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  CloudValueExpressionParser::symbol_number_type
  CloudValueExpressionParser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  CloudValueExpressionParser::stack_symbol_type::stack_symbol_type ()
  {}

  CloudValueExpressionParser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.value), YY_MOVE (that.location))
  {
#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  CloudValueExpressionParser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.value), YY_MOVE (that.location))
  {
    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  CloudValueExpressionParser::stack_symbol_type&
  CloudValueExpressionParser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  CloudValueExpressionParser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    switch (yysym.type_get ())
    {
      case 3: // "timeline"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 448 "CloudValueExpressionParser.tab.cc"
        break;

      case 4: // "lookup"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 454 "CloudValueExpressionParser.tab.cc"
        break;

      case 5: // "lookup2D"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 460 "CloudValueExpressionParser.tab.cc"
        break;

      case 6: // "scalarID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 466 "CloudValueExpressionParser.tab.cc"
        break;

      case 7: // "vectorID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 472 "CloudValueExpressionParser.tab.cc"
        break;

      case 8: // "logicalID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 478 "CloudValueExpressionParser.tab.cc"
        break;

      case 9: // "tensorID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 484 "CloudValueExpressionParser.tab.cc"
        break;

      case 10: // "symmTensorID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 490 "CloudValueExpressionParser.tab.cc"
        break;

      case 11: // "sphericalTensorID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 496 "CloudValueExpressionParser.tab.cc"
        break;

      case 12: // "G_scalarID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 502 "CloudValueExpressionParser.tab.cc"
        break;

      case 13: // "G_vectorID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 508 "CloudValueExpressionParser.tab.cc"
        break;

      case 14: // "G_tensorID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 514 "CloudValueExpressionParser.tab.cc"
        break;

      case 15: // "G_symmTensorID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 520 "CloudValueExpressionParser.tab.cc"
        break;

      case 16: // "G_sphericalTensorID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 526 "CloudValueExpressionParser.tab.cc"
        break;

      case 17: // "F_scalarID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 532 "CloudValueExpressionParser.tab.cc"
        break;

      case 18: // "F_vectorID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 538 "CloudValueExpressionParser.tab.cc"
        break;

      case 19: // "F_tensorID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 544 "CloudValueExpressionParser.tab.cc"
        break;

      case 20: // "F_symmTensorID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 550 "CloudValueExpressionParser.tab.cc"
        break;

      case 21: // "F_sphericalTensorID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 556 "CloudValueExpressionParser.tab.cc"
        break;

      case 22: // "F_logicalID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 562 "CloudValueExpressionParser.tab.cc"
        break;

      case 23: // "cellSetID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 568 "CloudValueExpressionParser.tab.cc"
        break;

      case 24: // "cellZoneID"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 574 "CloudValueExpressionParser.tab.cc"
        break;

      case 25: // "value"
#line 321 "../CloudValueExpressionParser.yy"
        {}
#line 580 "CloudValueExpressionParser.tab.cc"
        break;

      case 26: // "integer"
#line 321 "../CloudValueExpressionParser.yy"
        {}
#line 586 "CloudValueExpressionParser.tab.cc"
        break;

      case 27: // "vector"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.vec); }
#line 592 "CloudValueExpressionParser.tab.cc"
        break;

      case 28: // "expression"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.sfield); }
#line 598 "CloudValueExpressionParser.tab.cc"
        break;

      case 29: // "lexpression"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.lfield); }
#line 604 "CloudValueExpressionParser.tab.cc"
        break;

      case 30: // "vexpression"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 610 "CloudValueExpressionParser.tab.cc"
        break;

      case 31: // "texpression"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 616 "CloudValueExpressionParser.tab.cc"
        break;

      case 32: // "yexpression"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 622 "CloudValueExpressionParser.tab.cc"
        break;

      case 33: // "hexpression"
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 628 "CloudValueExpressionParser.tab.cc"
        break;

      case 170: // vexp
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 634 "CloudValueExpressionParser.tab.cc"
        break;

      case 171: // evaluateVectorFunction
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 640 "CloudValueExpressionParser.tab.cc"
        break;

      case 172: // sreduced
#line 321 "../CloudValueExpressionParser.yy"
        {}
#line 646 "CloudValueExpressionParser.tab.cc"
        break;

      case 173: // vreduced
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.vec); }
#line 652 "CloudValueExpressionParser.tab.cc"
        break;

      case 174: // exp
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.sfield); }
#line 658 "CloudValueExpressionParser.tab.cc"
        break;

      case 175: // evaluateScalarFunction
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.sfield); }
#line 664 "CloudValueExpressionParser.tab.cc"
        break;

      case 176: // texp
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 670 "CloudValueExpressionParser.tab.cc"
        break;

      case 177: // evaluateTensorFunction
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 676 "CloudValueExpressionParser.tab.cc"
        break;

      case 178: // yexp
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 682 "CloudValueExpressionParser.tab.cc"
        break;

      case 179: // evaluateSymmTensorFunction
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 688 "CloudValueExpressionParser.tab.cc"
        break;

      case 180: // hexp
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 694 "CloudValueExpressionParser.tab.cc"
        break;

      case 181: // evaluateSphericalTensorFunction
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 700 "CloudValueExpressionParser.tab.cc"
        break;

      case 182: // lexp
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.lfield); }
#line 706 "CloudValueExpressionParser.tab.cc"
        break;

      case 183: // evaluateLogicalFunction
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.lfield); }
#line 712 "CloudValueExpressionParser.tab.cc"
        break;

      case 184: // vector
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 718 "CloudValueExpressionParser.tab.cc"
        break;

      case 185: // tensor
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 724 "CloudValueExpressionParser.tab.cc"
        break;

      case 186: // symmTensor
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 730 "CloudValueExpressionParser.tab.cc"
        break;

      case 187: // sphericalTensor
#line 319 "../CloudValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 736 "CloudValueExpressionParser.tab.cc"
        break;

      default:
        break;
    }
  }

#if PARSERCLOUDDEBUG
  template <typename Base>
  void
  CloudValueExpressionParser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
#if defined __GNUC__ && ! defined __clang__ && ! defined __ICC && __GNUC__ * 100 + __GNUC_MINOR__ <= 408
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
#endif
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    switch (yytype)
    {
      case 3: // "timeline"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 767 "CloudValueExpressionParser.tab.cc"
        break;

      case 4: // "lookup"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 773 "CloudValueExpressionParser.tab.cc"
        break;

      case 5: // "lookup2D"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 779 "CloudValueExpressionParser.tab.cc"
        break;

      case 6: // "scalarID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 785 "CloudValueExpressionParser.tab.cc"
        break;

      case 7: // "vectorID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 791 "CloudValueExpressionParser.tab.cc"
        break;

      case 8: // "logicalID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 797 "CloudValueExpressionParser.tab.cc"
        break;

      case 9: // "tensorID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 803 "CloudValueExpressionParser.tab.cc"
        break;

      case 10: // "symmTensorID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 809 "CloudValueExpressionParser.tab.cc"
        break;

      case 11: // "sphericalTensorID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 815 "CloudValueExpressionParser.tab.cc"
        break;

      case 12: // "G_scalarID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 821 "CloudValueExpressionParser.tab.cc"
        break;

      case 13: // "G_vectorID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 827 "CloudValueExpressionParser.tab.cc"
        break;

      case 14: // "G_tensorID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 833 "CloudValueExpressionParser.tab.cc"
        break;

      case 15: // "G_symmTensorID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 839 "CloudValueExpressionParser.tab.cc"
        break;

      case 16: // "G_sphericalTensorID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 845 "CloudValueExpressionParser.tab.cc"
        break;

      case 17: // "F_scalarID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 851 "CloudValueExpressionParser.tab.cc"
        break;

      case 18: // "F_vectorID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 857 "CloudValueExpressionParser.tab.cc"
        break;

      case 19: // "F_tensorID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 863 "CloudValueExpressionParser.tab.cc"
        break;

      case 20: // "F_symmTensorID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 869 "CloudValueExpressionParser.tab.cc"
        break;

      case 21: // "F_sphericalTensorID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 875 "CloudValueExpressionParser.tab.cc"
        break;

      case 22: // "F_logicalID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 881 "CloudValueExpressionParser.tab.cc"
        break;

      case 23: // "cellSetID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 887 "CloudValueExpressionParser.tab.cc"
        break;

      case 24: // "cellZoneID"
#line 323 "../CloudValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 893 "CloudValueExpressionParser.tab.cc"
        break;

      case 25: // "value"
#line 329 "../CloudValueExpressionParser.yy"
        { debug_stream () << (yysym.value.val); }
#line 899 "CloudValueExpressionParser.tab.cc"
        break;

      case 26: // "integer"
#line 329 "../CloudValueExpressionParser.yy"
        { debug_stream () << (yysym.value.integer); }
#line 905 "CloudValueExpressionParser.tab.cc"
        break;

      case 27: // "vector"
#line 324 "../CloudValueExpressionParser.yy"
        {
    Foam::OStringStream buff;
    buff << *(yysym.value.vec);
    debug_stream () << buff.str().c_str();
}
#line 915 "CloudValueExpressionParser.tab.cc"
        break;

      case 28: // "expression"
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.sfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 924 "CloudValueExpressionParser.tab.cc"
        break;

      case 29: // "lexpression"
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.lfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 933 "CloudValueExpressionParser.tab.cc"
        break;

      case 30: // "vexpression"
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 942 "CloudValueExpressionParser.tab.cc"
        break;

      case 31: // "texpression"
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 951 "CloudValueExpressionParser.tab.cc"
        break;

      case 32: // "yexpression"
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 960 "CloudValueExpressionParser.tab.cc"
        break;

      case 33: // "hexpression"
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 969 "CloudValueExpressionParser.tab.cc"
        break;

      case 170: // vexp
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 978 "CloudValueExpressionParser.tab.cc"
        break;

      case 171: // evaluateVectorFunction
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 987 "CloudValueExpressionParser.tab.cc"
        break;

      case 172: // sreduced
#line 329 "../CloudValueExpressionParser.yy"
        { debug_stream () << (yysym.value.val); }
#line 993 "CloudValueExpressionParser.tab.cc"
        break;

      case 173: // vreduced
#line 324 "../CloudValueExpressionParser.yy"
        {
    Foam::OStringStream buff;
    buff << *(yysym.value.vec);
    debug_stream () << buff.str().c_str();
}
#line 1003 "CloudValueExpressionParser.tab.cc"
        break;

      case 174: // exp
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.sfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1012 "CloudValueExpressionParser.tab.cc"
        break;

      case 175: // evaluateScalarFunction
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.sfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1021 "CloudValueExpressionParser.tab.cc"
        break;

      case 176: // texp
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1030 "CloudValueExpressionParser.tab.cc"
        break;

      case 177: // evaluateTensorFunction
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1039 "CloudValueExpressionParser.tab.cc"
        break;

      case 178: // yexp
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1048 "CloudValueExpressionParser.tab.cc"
        break;

      case 179: // evaluateSymmTensorFunction
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1057 "CloudValueExpressionParser.tab.cc"
        break;

      case 180: // hexp
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1066 "CloudValueExpressionParser.tab.cc"
        break;

      case 181: // evaluateSphericalTensorFunction
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1075 "CloudValueExpressionParser.tab.cc"
        break;

      case 182: // lexp
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.lfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1084 "CloudValueExpressionParser.tab.cc"
        break;

      case 183: // evaluateLogicalFunction
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.lfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1093 "CloudValueExpressionParser.tab.cc"
        break;

      case 184: // vector
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1102 "CloudValueExpressionParser.tab.cc"
        break;

      case 185: // tensor
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1111 "CloudValueExpressionParser.tab.cc"
        break;

      case 186: // symmTensor
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1120 "CloudValueExpressionParser.tab.cc"
        break;

      case 187: // sphericalTensor
#line 330 "../CloudValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1129 "CloudValueExpressionParser.tab.cc"
        break;

      default:
        break;
    }
    yyo << ')';
  }
#endif

  void
  CloudValueExpressionParser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  CloudValueExpressionParser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  CloudValueExpressionParser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if PARSERCLOUDDEBUG
  std::ostream&
  CloudValueExpressionParser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  CloudValueExpressionParser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  CloudValueExpressionParser::debug_level_type
  CloudValueExpressionParser::debug_level () const
  {
    return yydebug_;
  }

  void
  CloudValueExpressionParser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // PARSERCLOUDDEBUG

  CloudValueExpressionParser::state_type
  CloudValueExpressionParser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  CloudValueExpressionParser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  CloudValueExpressionParser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  CloudValueExpressionParser::operator() ()
  {
    return parse ();
  }

  int
  CloudValueExpressionParser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    // User initialization code.
#line 72 "../CloudValueExpressionParser.yy"
{
	     // Initialize the initial location.
	     //     @$.begin.filename = @$.end.filename = &driver.file;
    numberOfFunctionChars=0;
}

#line 1255 "CloudValueExpressionParser.tab.cc"


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location, scanner, driver, start_token, numberOfFunctionChars));
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;

      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2:
#line 340 "../CloudValueExpressionParser.yy"
    { driver.parserLastPos()=yystack_[0].location.end.column; }
#line 1380 "CloudValueExpressionParser.tab.cc"
    break;

  case 4:
#line 345 "../CloudValueExpressionParser.yy"
    {
                      driver.setResult<Foam::scalar>((yystack_[1].value.sfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1390 "CloudValueExpressionParser.tab.cc"
    break;

  case 5:
#line 351 "../CloudValueExpressionParser.yy"
    {
                      driver.setResult<Foam::scalar>((yystack_[1].value.sfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1400 "CloudValueExpressionParser.tab.cc"
    break;

  case 6:
#line 357 "../CloudValueExpressionParser.yy"
    {
                      driver.setResult<Foam::vector>((yystack_[1].value.vfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1410 "CloudValueExpressionParser.tab.cc"
    break;

  case 7:
#line 363 "../CloudValueExpressionParser.yy"
    {
                      driver.setResult<Foam::vector>((yystack_[1].value.vfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1420 "CloudValueExpressionParser.tab.cc"
    break;

  case 8:
#line 369 "../CloudValueExpressionParser.yy"
    {
                      driver.setResult<Foam::tensor>((yystack_[1].value.tfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1430 "CloudValueExpressionParser.tab.cc"
    break;

  case 9:
#line 375 "../CloudValueExpressionParser.yy"
    {
                      driver.setResult<Foam::tensor>((yystack_[1].value.tfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1440 "CloudValueExpressionParser.tab.cc"
    break;

  case 10:
#line 381 "../CloudValueExpressionParser.yy"
    {
                      driver.setResult<Foam::symmTensor>((yystack_[1].value.yfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1450 "CloudValueExpressionParser.tab.cc"
    break;

  case 11:
#line 387 "../CloudValueExpressionParser.yy"
    {
                      driver.setResult<Foam::symmTensor>((yystack_[1].value.yfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1460 "CloudValueExpressionParser.tab.cc"
    break;

  case 12:
#line 393 "../CloudValueExpressionParser.yy"
    {
                      driver.setResult<Foam::sphericalTensor>((yystack_[1].value.hfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1470 "CloudValueExpressionParser.tab.cc"
    break;

  case 13:
#line 399 "../CloudValueExpressionParser.yy"
    {
                      driver.setResult<Foam::sphericalTensor>((yystack_[1].value.hfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1480 "CloudValueExpressionParser.tab.cc"
    break;

  case 14:
#line 405 "../CloudValueExpressionParser.yy"
    {
                      driver.setResult<bool>((yystack_[1].value.lfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1490 "CloudValueExpressionParser.tab.cc"
    break;

  case 15:
#line 411 "../CloudValueExpressionParser.yy"
    {
                      driver.setResult<bool>((yystack_[1].value.lfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1500 "CloudValueExpressionParser.tab.cc"
    break;

  case 16:
#line 417 "../CloudValueExpressionParser.yy"
    {
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1509 "CloudValueExpressionParser.tab.cc"
    break;

  case 17:
#line 422 "../CloudValueExpressionParser.yy"
    {
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1518 "CloudValueExpressionParser.tab.cc"
    break;

  case 20:
#line 431 "../CloudValueExpressionParser.yy"
    { driver.setResult<Foam::scalar>((yystack_[0].value.sfield));  }
#line 1524 "CloudValueExpressionParser.tab.cc"
    break;

  case 21:
#line 432 "../CloudValueExpressionParser.yy"
    { driver.setResult<Foam::vector>((yystack_[0].value.vfield));  }
#line 1530 "CloudValueExpressionParser.tab.cc"
    break;

  case 22:
#line 433 "../CloudValueExpressionParser.yy"
    { driver.setResult<bool>((yystack_[0].value.lfield)); }
#line 1536 "CloudValueExpressionParser.tab.cc"
    break;

  case 23:
#line 434 "../CloudValueExpressionParser.yy"
    { driver.setResult<Foam::tensor>((yystack_[0].value.tfield));  }
#line 1542 "CloudValueExpressionParser.tab.cc"
    break;

  case 24:
#line 435 "../CloudValueExpressionParser.yy"
    { driver.setResult<Foam::symmTensor>((yystack_[0].value.yfield));  }
#line 1548 "CloudValueExpressionParser.tab.cc"
    break;

  case 25:
#line 436 "../CloudValueExpressionParser.yy"
    {
            driver.setResult<Foam::sphericalTensor>((yystack_[0].value.hfield));
          }
#line 1556 "CloudValueExpressionParser.tab.cc"
    break;

  case 26:
#line 441 "../CloudValueExpressionParser.yy"
    { driver.startVectorComponent(); }
#line 1562 "CloudValueExpressionParser.tab.cc"
    break;

  case 27:
#line 444 "../CloudValueExpressionParser.yy"
    { driver.startTensorComponent(); }
#line 1568 "CloudValueExpressionParser.tab.cc"
    break;

  case 28:
#line 447 "../CloudValueExpressionParser.yy"
    { driver.startEatCharacters(); }
#line 1574 "CloudValueExpressionParser.tab.cc"
    break;

  case 29:
#line 450 "../CloudValueExpressionParser.yy"
    { (yylhs.value.vfield) = (yystack_[0].value.vfield); }
#line 1580 "CloudValueExpressionParser.tab.cc"
    break;

  case 30:
#line 451 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.makeField<Foam::vector>(*(yystack_[0].value.vec)).ptr();
            delete (yystack_[0].value.vec);
          }
#line 1589 "CloudValueExpressionParser.tab.cc"
    break;

  case 31:
#line 455 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) + *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 1599 "CloudValueExpressionParser.tab.cc"
    break;

  case 32:
#line 460 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.vfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.vfield);
          }
#line 1609 "CloudValueExpressionParser.tab.cc"
    break;

  case 33:
#line 465 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.sfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.sfield);
          }
#line 1619 "CloudValueExpressionParser.tab.cc"
    break;

  case 34:
#line 470 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.vfield);
          }
#line 1629 "CloudValueExpressionParser.tab.cc"
    break;

  case 35:
#line 475 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.tfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.tfield);
          }
#line 1639 "CloudValueExpressionParser.tab.cc"
    break;

  case 36:
#line 480 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.yfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.vfield);
          }
#line 1649 "CloudValueExpressionParser.tab.cc"
    break;

  case 37:
#line 485 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.yfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) & *(yystack_[0].value.yfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.yfield);
          }
#line 1659 "CloudValueExpressionParser.tab.cc"
    break;

  case 38:
#line 490 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.vfield);
          }
#line 1669 "CloudValueExpressionParser.tab.cc"
    break;

  case 39:
#line 495 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.hfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.hfield);
          }
#line 1679 "CloudValueExpressionParser.tab.cc"
    break;

  case 40:
#line 500 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.sfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.sfield);
          }
#line 1689 "CloudValueExpressionParser.tab.cc"
    break;

  case 41:
#line 505 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) ^ *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 1699 "CloudValueExpressionParser.tab.cc"
    break;

  case 42:
#line 510 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) - *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 1709 "CloudValueExpressionParser.tab.cc"
    break;

  case 43:
#line 515 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(-*(yystack_[0].value.vfield));
            delete (yystack_[0].value.vfield);
          }
#line 1718 "CloudValueExpressionParser.tab.cc"
    break;

  case 44:
#line 519 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(*(*(yystack_[0].value.tfield)));
            delete (yystack_[0].value.tfield);
          }
#line 1727 "CloudValueExpressionParser.tab.cc"
    break;

  case 45:
#line 523 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(*(*(yystack_[0].value.yfield)));
            delete (yystack_[0].value.yfield);
          }
#line 1736 "CloudValueExpressionParser.tab.cc"
    break;

  case 46:
#line 527 "../CloudValueExpressionParser.yy"
    { (yylhs.value.vfield) = (yystack_[1].value.vfield); }
#line 1742 "CloudValueExpressionParser.tab.cc"
    break;

  case 47:
#line 528 "../CloudValueExpressionParser.yy"
    {
#ifndef FOAM_EIGEN_VALUES_VECTOR_IS_COMPLEX
            (yylhs.value.vfield) = new Foam::vectorField(Foam::eigenValues(*(yystack_[1].value.tfield)));
#else
            FatalErrorInFunction
                << "function 'eigenValues' gives a complex value in this Foam-version"
                    << Foam::endl
                    << exit(Foam::FatalError);
#endif
            delete (yystack_[1].value.tfield);
          }
#line 1758 "CloudValueExpressionParser.tab.cc"
    break;

  case 48:
#line 539 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(Foam::eigenValues(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 1767 "CloudValueExpressionParser.tab.cc"
    break;

  case 49:
#line 543 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[3].value.tfield)->component(Foam::tensor::XX)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::XY)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::XZ)()
            ).ptr();
            delete (yystack_[3].value.tfield);
          }
#line 1780 "CloudValueExpressionParser.tab.cc"
    break;

  case 50:
#line 551 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[3].value.tfield)->component(Foam::tensor::YX)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::YY)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::YZ)()
            ).ptr();
            delete (yystack_[3].value.tfield);
          }
#line 1793 "CloudValueExpressionParser.tab.cc"
    break;

  case 51:
#line 559 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[3].value.tfield)->component(Foam::tensor::ZX)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::ZY)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::ZZ)()
            ).ptr();
            delete (yystack_[3].value.tfield);
          }
#line 1806 "CloudValueExpressionParser.tab.cc"
    break;

  case 52:
#line 567 "../CloudValueExpressionParser.yy"
    {
            //            $$ = new Foam::vectorField( Foam::diag(*$3) ); // not implemented?
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[1].value.tfield)->component(Foam::tensor::XX)(),
                (yystack_[1].value.tfield)->component(Foam::tensor::YY)(),
                (yystack_[1].value.tfield)->component(Foam::tensor::ZZ)()
            ).ptr();
            delete (yystack_[1].value.tfield);
          }
#line 1820 "CloudValueExpressionParser.tab.cc"
    break;

  case 53:
#line 576 "../CloudValueExpressionParser.yy"
    {
            //            $$ = new Foam::vectorField( Foam::diag(*$3) ); // not implemented?
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[1].value.yfield)->component(Foam::symmTensor::XX)(),
                (yystack_[1].value.yfield)->component(Foam::symmTensor::YY)(),
                (yystack_[1].value.yfield)->component(Foam::symmTensor::ZZ)()
            ).ptr();
            delete (yystack_[1].value.yfield);
          }
#line 1834 "CloudValueExpressionParser.tab.cc"
    break;

  case 54:
#line 585 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.vfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = driver.doConditional(*(yystack_[4].value.lfield),*(yystack_[2].value.vfield),*(yystack_[0].value.vfield)).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 1844 "CloudValueExpressionParser.tab.cc"
    break;

  case 55:
#line 590 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.makePositionField().ptr();
          }
#line 1852 "CloudValueExpressionParser.tab.cc"
    break;

  case 56:
#line 593 "../CloudValueExpressionParser.yy"
    { (yylhs.value.vfield) = (yystack_[1].value.vfield); }
#line 1858 "CloudValueExpressionParser.tab.cc"
    break;

  case 57:
#line 594 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.vfield)=driver.getVectorField(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
                    }
#line 1867 "CloudValueExpressionParser.tab.cc"
    break;

  case 58:
#line 598 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = Foam::min(*(yystack_[3].value.vfield),*(yystack_[1].value.vfield)).ptr();
            delete (yystack_[3].value.vfield); delete (yystack_[1].value.vfield);
          }
#line 1876 "CloudValueExpressionParser.tab.cc"
    break;

  case 59:
#line 602 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = Foam::max(*(yystack_[3].value.vfield),*(yystack_[1].value.vfield)).ptr();
            delete (yystack_[3].value.vfield); delete (yystack_[1].value.vfield);
          }
#line 1885 "CloudValueExpressionParser.tab.cc"
    break;

  case 60:
#line 606 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.vfield)=driver.getFluidField<Foam::vector>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 1894 "CloudValueExpressionParser.tab.cc"
    break;

  case 61:
#line 613 "../CloudValueExpressionParser.yy"
    {
      (yylhs.value.vfield)=driver.evaluatePluginFunction<Foam::vector>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 1908 "CloudValueExpressionParser.tab.cc"
    break;

  case 62:
#line 624 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.val) = Foam::gMin(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 1917 "CloudValueExpressionParser.tab.cc"
    break;

  case 63:
#line 628 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.val) = Foam::gMax(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 1926 "CloudValueExpressionParser.tab.cc"
    break;

  case 64:
#line 632 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.val) = Foam::gSum(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 1935 "CloudValueExpressionParser.tab.cc"
    break;

  case 65:
#line 636 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.val) = Foam::gAverage(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 1944 "CloudValueExpressionParser.tab.cc"
    break;

  case 66:
#line 642 "../CloudValueExpressionParser.yy"
    {
          Foam::vector tmp(HugeVal,HugeVal,HugeVal);
            if(((yystack_[1].value.vfield)->size())>0) {
                tmp=Foam::min(*(yystack_[1].value.vfield));
            }
            Foam::reduce(tmp,Foam::minOp<Foam::vector>());
            (yylhs.value.vec) = new Foam::vector(tmp);
            delete (yystack_[1].value.vfield);
          }
#line 1958 "CloudValueExpressionParser.tab.cc"
    break;

  case 67:
#line 651 "../CloudValueExpressionParser.yy"
    {
            Foam::vector tmp(-HugeVal,-HugeVal,-HugeVal);
            if(((yystack_[1].value.vfield)->size())>0) {
                tmp=Foam::max(*(yystack_[1].value.vfield));
            }
            Foam::reduce(tmp,Foam::maxOp<Foam::vector>());
            (yylhs.value.vec) = new Foam::vector(tmp);
            delete (yystack_[1].value.vfield);
          }
#line 1972 "CloudValueExpressionParser.tab.cc"
    break;

  case 68:
#line 660 "../CloudValueExpressionParser.yy"
    {
            Foam::vectorField *pos=driver.makePositionField().ptr();
            (yylhs.value.vec) = new Foam::vector(
                driver.getPositionOfMinimum(
                    *(yystack_[1].value.sfield),
                    *pos
                )
            );
            delete pos;
            delete (yystack_[1].value.sfield);
        }
#line 1988 "CloudValueExpressionParser.tab.cc"
    break;

  case 69:
#line 671 "../CloudValueExpressionParser.yy"
    {
            Foam::vectorField *pos=driver.makePositionField().ptr();
            (yylhs.value.vec) = new Foam::vector(
                driver.getPositionOfMaximum(
                    *(yystack_[1].value.sfield),
                    *pos
                )
            );
            delete pos;
            delete (yystack_[1].value.sfield);
        }
#line 2004 "CloudValueExpressionParser.tab.cc"
    break;

  case 70:
#line 682 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.vec) = new Foam::vector(Foam::gSum(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 2013 "CloudValueExpressionParser.tab.cc"
    break;

  case 71:
#line 686 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.vec) = new Foam::vector(Foam::gAverage(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 2022 "CloudValueExpressionParser.tab.cc"
    break;

  case 72:
#line 692 "../CloudValueExpressionParser.yy"
    { (yylhs.value.sfield) = driver.makeField((yystack_[0].value.val)).ptr(); }
#line 2028 "CloudValueExpressionParser.tab.cc"
    break;

  case 73:
#line 693 "../CloudValueExpressionParser.yy"
    { (yylhs.value.sfield) = driver.makeField((yystack_[0].value.val)).ptr(); }
#line 2034 "CloudValueExpressionParser.tab.cc"
    break;

  case 74:
#line 694 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) + *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 2044 "CloudValueExpressionParser.tab.cc"
    break;

  case 75:
#line 699 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) - *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 2054 "CloudValueExpressionParser.tab.cc"
    break;

  case 76:
#line 704 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 2064 "CloudValueExpressionParser.tab.cc"
    break;

  case 77:
#line 709 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = driver.makeModuloField(*(yystack_[2].value.sfield),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 2074 "CloudValueExpressionParser.tab.cc"
    break;

  case 78:
#line 714 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 2084 "CloudValueExpressionParser.tab.cc"
    break;

  case 79:
#line 724 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[3].value.sfield),(yystack_[1].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(Foam::pow(*(yystack_[3].value.sfield), *(yystack_[1].value.sfield)));
            delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 2094 "CloudValueExpressionParser.tab.cc"
    break;

  case 80:
#line 729 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::log(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2103 "CloudValueExpressionParser.tab.cc"
    break;

  case 81:
#line 733 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::exp(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2112 "CloudValueExpressionParser.tab.cc"
    break;

  case 82:
#line 737 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.vfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 2122 "CloudValueExpressionParser.tab.cc"
    break;

  case 83:
#line 742 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.tfield) && *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 2132 "CloudValueExpressionParser.tab.cc"
    break;

  case 84:
#line 747 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.yfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.tfield) && *(yystack_[0].value.yfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.yfield);
          }
#line 2142 "CloudValueExpressionParser.tab.cc"
    break;

  case 85:
#line 752 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.hfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.tfield) && *(yystack_[0].value.hfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.hfield);
          }
#line 2152 "CloudValueExpressionParser.tab.cc"
    break;

  case 86:
#line 757 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.tfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.yfield) && *(yystack_[0].value.tfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.tfield);
          }
#line 2162 "CloudValueExpressionParser.tab.cc"
    break;

  case 87:
#line 762 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.yfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.yfield) && *(yystack_[0].value.yfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 2172 "CloudValueExpressionParser.tab.cc"
    break;

  case 88:
#line 767 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.hfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.yfield) && *(yystack_[0].value.hfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.hfield);
          }
#line 2182 "CloudValueExpressionParser.tab.cc"
    break;

  case 89:
#line 772 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.tfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.hfield) && *(yystack_[0].value.tfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.tfield);
          }
#line 2192 "CloudValueExpressionParser.tab.cc"
    break;

  case 90:
#line 777 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.yfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.hfield) && *(yystack_[0].value.yfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.yfield);
          }
#line 2202 "CloudValueExpressionParser.tab.cc"
    break;

  case 91:
#line 782 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.hfield) && *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 2212 "CloudValueExpressionParser.tab.cc"
    break;

  case 92:
#line 787 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(-*(yystack_[0].value.sfield));
            delete (yystack_[0].value.sfield);
          }
#line 2221 "CloudValueExpressionParser.tab.cc"
    break;

  case 93:
#line 791 "../CloudValueExpressionParser.yy"
    { (yylhs.value.sfield) = (yystack_[1].value.sfield); }
#line 2227 "CloudValueExpressionParser.tab.cc"
    break;

  case 94:
#line 792 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sqr(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2236 "CloudValueExpressionParser.tab.cc"
    break;

  case 95:
#line 796 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sqrt(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2245 "CloudValueExpressionParser.tab.cc"
    break;

  case 96:
#line 800 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sin(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2254 "CloudValueExpressionParser.tab.cc"
    break;

  case 97:
#line 804 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::cos(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2263 "CloudValueExpressionParser.tab.cc"
    break;

  case 98:
#line 808 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::tan(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2272 "CloudValueExpressionParser.tab.cc"
    break;

  case 99:
#line 812 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::log10(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2281 "CloudValueExpressionParser.tab.cc"
    break;

  case 100:
#line 816 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::asin(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2290 "CloudValueExpressionParser.tab.cc"
    break;

  case 101:
#line 820 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::acos(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2299 "CloudValueExpressionParser.tab.cc"
    break;

  case 102:
#line 824 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::atan(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2308 "CloudValueExpressionParser.tab.cc"
    break;

  case 103:
#line 828 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::atan2(*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)));
            delete (yystack_[3].value.sfield);
            delete (yystack_[1].value.sfield);
          }
#line 2318 "CloudValueExpressionParser.tab.cc"
    break;

  case 104:
#line 833 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sinh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2327 "CloudValueExpressionParser.tab.cc"
    break;

  case 105:
#line 837 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::cosh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2336 "CloudValueExpressionParser.tab.cc"
    break;

  case 106:
#line 841 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::tanh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2345 "CloudValueExpressionParser.tab.cc"
    break;

  case 107:
#line 845 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::asinh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2354 "CloudValueExpressionParser.tab.cc"
    break;

  case 108:
#line 849 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::acosh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2363 "CloudValueExpressionParser.tab.cc"
    break;

  case 109:
#line 853 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::atanh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2372 "CloudValueExpressionParser.tab.cc"
    break;

  case 110:
#line 857 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::erf(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2381 "CloudValueExpressionParser.tab.cc"
    break;

  case 111:
#line 861 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::erfc(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2390 "CloudValueExpressionParser.tab.cc"
    break;

  case 112:
#line 865 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::lgamma(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2399 "CloudValueExpressionParser.tab.cc"
    break;

  case 113:
#line 869 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::j0(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2408 "CloudValueExpressionParser.tab.cc"
    break;

  case 114:
#line 873 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::j1(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2417 "CloudValueExpressionParser.tab.cc"
    break;

  case 115:
#line 877 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::y0(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2426 "CloudValueExpressionParser.tab.cc"
    break;

  case 116:
#line 881 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::y1(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2435 "CloudValueExpressionParser.tab.cc"
    break;

  case 117:
#line 885 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sign(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2444 "CloudValueExpressionParser.tab.cc"
    break;

  case 118:
#line 889 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::pos(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2453 "CloudValueExpressionParser.tab.cc"
    break;

  case 119:
#line 893 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::neg(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2462 "CloudValueExpressionParser.tab.cc"
    break;

  case 120:
#line 897 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2471 "CloudValueExpressionParser.tab.cc"
    break;

  case 121:
#line 901 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 2480 "CloudValueExpressionParser.tab.cc"
    break;

  case 122:
#line 905 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.tfield)));
            delete (yystack_[1].value.tfield);
          }
#line 2489 "CloudValueExpressionParser.tab.cc"
    break;

  case 123:
#line 909 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 2498 "CloudValueExpressionParser.tab.cc"
    break;

  case 124:
#line 913 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.hfield)));
            delete (yystack_[1].value.hfield);
          }
#line 2507 "CloudValueExpressionParser.tab.cc"
    break;

  case 125:
#line 917 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2516 "CloudValueExpressionParser.tab.cc"
    break;

  case 126:
#line 921 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 2525 "CloudValueExpressionParser.tab.cc"
    break;

  case 127:
#line 925 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.tfield)));
            delete (yystack_[1].value.tfield);
          }
#line 2534 "CloudValueExpressionParser.tab.cc"
    break;

  case 128:
#line 929 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 2543 "CloudValueExpressionParser.tab.cc"
    break;

  case 129:
#line 933 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.hfield)));
            delete (yystack_[1].value.hfield);
          }
#line 2552 "CloudValueExpressionParser.tab.cc"
    break;

  case 130:
#line 937 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::tr(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 2561 "CloudValueExpressionParser.tab.cc"
    break;

  case 131:
#line 941 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::tr(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 2570 "CloudValueExpressionParser.tab.cc"
    break;

  case 132:
#line 945 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::tr(*(yystack_[1].value.hfield)) );
            delete (yystack_[1].value.hfield);
          }
#line 2579 "CloudValueExpressionParser.tab.cc"
    break;

  case 133:
#line 949 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::det(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 2588 "CloudValueExpressionParser.tab.cc"
    break;

  case 134:
#line 953 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::det(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 2597 "CloudValueExpressionParser.tab.cc"
    break;

  case 135:
#line 957 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::det(*(yystack_[1].value.hfield)) );
            delete (yystack_[1].value.hfield);
          }
#line 2606 "CloudValueExpressionParser.tab.cc"
    break;

  case 136:
#line 961 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.vfield)->component(0));
            delete (yystack_[3].value.vfield);
          }
#line 2615 "CloudValueExpressionParser.tab.cc"
    break;

  case 137:
#line 965 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.vfield)->component(1));
            delete (yystack_[3].value.vfield);
          }
#line 2624 "CloudValueExpressionParser.tab.cc"
    break;

  case 138:
#line 969 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.vfield)->component(2));
            delete (yystack_[3].value.vfield);
          }
#line 2633 "CloudValueExpressionParser.tab.cc"
    break;

  case 139:
#line 973 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(0));
            delete (yystack_[3].value.tfield);
          }
#line 2642 "CloudValueExpressionParser.tab.cc"
    break;

  case 140:
#line 977 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(1));
            delete (yystack_[3].value.tfield);
          }
#line 2651 "CloudValueExpressionParser.tab.cc"
    break;

  case 141:
#line 981 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(2));
            delete (yystack_[3].value.tfield);
          }
#line 2660 "CloudValueExpressionParser.tab.cc"
    break;

  case 142:
#line 985 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(3));
            delete (yystack_[3].value.tfield);
          }
#line 2669 "CloudValueExpressionParser.tab.cc"
    break;

  case 143:
#line 989 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(4));
            delete (yystack_[3].value.tfield);
          }
#line 2678 "CloudValueExpressionParser.tab.cc"
    break;

  case 144:
#line 993 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(5));
            delete (yystack_[3].value.tfield);
          }
#line 2687 "CloudValueExpressionParser.tab.cc"
    break;

  case 145:
#line 997 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(6));
            delete (yystack_[3].value.tfield);
          }
#line 2696 "CloudValueExpressionParser.tab.cc"
    break;

  case 146:
#line 1001 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(7));
            delete (yystack_[3].value.tfield);
          }
#line 2705 "CloudValueExpressionParser.tab.cc"
    break;

  case 147:
#line 1005 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(8));
            delete (yystack_[3].value.tfield);
          }
#line 2714 "CloudValueExpressionParser.tab.cc"
    break;

  case 148:
#line 1009 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(0));
            delete (yystack_[3].value.yfield);
          }
#line 2723 "CloudValueExpressionParser.tab.cc"
    break;

  case 149:
#line 1013 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(1));
            delete (yystack_[3].value.yfield);
          }
#line 2732 "CloudValueExpressionParser.tab.cc"
    break;

  case 150:
#line 1017 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(2));
            delete (yystack_[3].value.yfield);
          }
#line 2741 "CloudValueExpressionParser.tab.cc"
    break;

  case 151:
#line 1021 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(3));
            delete (yystack_[3].value.yfield);
          }
#line 2750 "CloudValueExpressionParser.tab.cc"
    break;

  case 152:
#line 1025 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(4));
            delete (yystack_[3].value.yfield);
          }
#line 2759 "CloudValueExpressionParser.tab.cc"
    break;

  case 153:
#line 1029 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(5));
            delete (yystack_[3].value.yfield);
          }
#line 2768 "CloudValueExpressionParser.tab.cc"
    break;

  case 154:
#line 1033 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.hfield)->component(0));
            delete (yystack_[3].value.hfield);
          }
#line 2777 "CloudValueExpressionParser.tab.cc"
    break;

  case 155:
#line 1037 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.sfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = driver.doConditional(*(yystack_[4].value.lfield),*(yystack_[2].value.sfield),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 2787 "CloudValueExpressionParser.tab.cc"
    break;

  case 156:
#line 1042 "../CloudValueExpressionParser.yy"
    {
	  (yylhs.value.sfield) = driver.makeField(
#ifdef FOAM_NO_SEPARATE_CONSTANT_NAMESPACE
              Foam::mathematicalConstant::pi
#else
              Foam::constant::mathematical::pi
#endif
          ).ptr();
          }
#line 2801 "CloudValueExpressionParser.tab.cc"
    break;

  case 157:
#line 1051 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeIdField().ptr();
          }
#line 2809 "CloudValueExpressionParser.tab.cc"
    break;

  case 158:
#line 1054 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeField(
                Foam::scalar(Foam::Pstream::myProcNo())
            ).ptr();
          }
#line 2819 "CloudValueExpressionParser.tab.cc"
    break;

  case 159:
#line 1059 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.weights(driver.size()).ptr();
          }
#line 2827 "CloudValueExpressionParser.tab.cc"
    break;

  case 160:
#line 1062 "../CloudValueExpressionParser.yy"
    { (yylhs.value.sfield) = driver.makeRandomField().ptr(); }
#line 2833 "CloudValueExpressionParser.tab.cc"
    break;

  case 161:
#line 1063 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeRandomField(-(yystack_[1].value.integer)).ptr();
          }
#line 2841 "CloudValueExpressionParser.tab.cc"
    break;

  case 162:
#line 1066 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeGaussRandomField().ptr();
          }
#line 2849 "CloudValueExpressionParser.tab.cc"
    break;

  case 163:
#line 1069 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeGaussRandomField(-(yystack_[1].value.integer)).ptr();
          }
#line 2857 "CloudValueExpressionParser.tab.cc"
    break;

  case 164:
#line 1072 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeRandomField(1).ptr();
          }
#line 2865 "CloudValueExpressionParser.tab.cc"
    break;

  case 165:
#line 1075 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeRandomField((yystack_[1].value.integer)+1).ptr();
          }
#line 2873 "CloudValueExpressionParser.tab.cc"
    break;

  case 166:
#line 1078 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeGaussRandomField(1).ptr();
          }
#line 2881 "CloudValueExpressionParser.tab.cc"
    break;

  case 167:
#line 1081 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeGaussRandomField((yystack_[1].value.integer)+1).ptr();
          }
#line 2889 "CloudValueExpressionParser.tab.cc"
    break;

  case 168:
#line 1084 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeField(driver.runTime().deltaT().value()).ptr();
          }
#line 2897 "CloudValueExpressionParser.tab.cc"
    break;

  case 169:
#line 1087 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeField(driver.runTime().time().value()).ptr();
          }
#line 2905 "CloudValueExpressionParser.tab.cc"
    break;

  case 170:
#line 1094 "../CloudValueExpressionParser.yy"
    { (yylhs.value.sfield) = (yystack_[1].value.sfield); }
#line 2911 "CloudValueExpressionParser.tab.cc"
    break;

  case 171:
#line 1095 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getScalarField(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
				}
#line 2920 "CloudValueExpressionParser.tab.cc"
    break;

  case 172:
#line 1099 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getLine(*(yystack_[0].value.name),driver.runTime().time().value()).ptr();
            delete (yystack_[0].value.name);
				}
#line 2929 "CloudValueExpressionParser.tab.cc"
    break;

  case 173:
#line 1103 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getLookup(*(yystack_[3].value.name),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[3].value.name); delete (yystack_[1].value.sfield);
                                    }
#line 2938 "CloudValueExpressionParser.tab.cc"
    break;

  case 174:
#line 1107 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getLookup2D(*(yystack_[5].value.name),*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[5].value.name); delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 2947 "CloudValueExpressionParser.tab.cc"
    break;

  case 175:
#line 1111 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = Foam::min(*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 2956 "CloudValueExpressionParser.tab.cc"
    break;

  case 176:
#line 1115 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = Foam::max(*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 2965 "CloudValueExpressionParser.tab.cc"
    break;

  case 177:
#line 1119 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getFluidField<Foam::scalar>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 2974 "CloudValueExpressionParser.tab.cc"
    break;

  case 178:
#line 1126 "../CloudValueExpressionParser.yy"
    {
      (yylhs.value.sfield)=driver.evaluatePluginFunction<Foam::scalar>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 2988 "CloudValueExpressionParser.tab.cc"
    break;

  case 179:
#line 1137 "../CloudValueExpressionParser.yy"
    { (yylhs.value.tfield) = (yystack_[0].value.tfield); }
#line 2994 "CloudValueExpressionParser.tab.cc"
    break;

  case 180:
#line 1138 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) + *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 3004 "CloudValueExpressionParser.tab.cc"
    break;

  case 181:
#line 1143 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.yfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) + *(yystack_[0].value.yfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.yfield);
          }
#line 3014 "CloudValueExpressionParser.tab.cc"
    break;

  case 182:
#line 1148 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.hfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) + *(yystack_[0].value.hfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.hfield);
          }
#line 3024 "CloudValueExpressionParser.tab.cc"
    break;

  case 183:
#line 1153 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.yfield) + *(yystack_[0].value.tfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.tfield);
          }
#line 3034 "CloudValueExpressionParser.tab.cc"
    break;

  case 184:
#line 1158 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.hfield) + *(yystack_[0].value.tfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.tfield);
          }
#line 3044 "CloudValueExpressionParser.tab.cc"
    break;

  case 185:
#line 1163 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.tfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.tfield);
          }
#line 3054 "CloudValueExpressionParser.tab.cc"
    break;

  case 186:
#line 1168 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.sfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.sfield);
          }
#line 3064 "CloudValueExpressionParser.tab.cc"
    break;

  case 187:
#line 1173 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.vfield) * *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 3074 "CloudValueExpressionParser.tab.cc"
    break;

  case 188:
#line 1178 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 3084 "CloudValueExpressionParser.tab.cc"
    break;

  case 189:
#line 1183 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.yfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.tfield);
          }
#line 3094 "CloudValueExpressionParser.tab.cc"
    break;

  case 190:
#line 1188 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.yfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.yfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.yfield);
          }
#line 3104 "CloudValueExpressionParser.tab.cc"
    break;

  case 191:
#line 1193 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.tfield);
          }
#line 3114 "CloudValueExpressionParser.tab.cc"
    break;

  case 192:
#line 1198 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.hfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.hfield);
          }
#line 3124 "CloudValueExpressionParser.tab.cc"
    break;

  case 193:
#line 1203 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.sfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.sfield);
          }
#line 3134 "CloudValueExpressionParser.tab.cc"
    break;

  case 194:
#line 1208 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) - *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 3144 "CloudValueExpressionParser.tab.cc"
    break;

  case 195:
#line 1213 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.yfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) - *(yystack_[0].value.yfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.yfield);
          }
#line 3154 "CloudValueExpressionParser.tab.cc"
    break;

  case 196:
#line 1218 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.hfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) - *(yystack_[0].value.hfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.hfield);
          }
#line 3164 "CloudValueExpressionParser.tab.cc"
    break;

  case 197:
#line 1223 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.yfield) - *(yystack_[0].value.tfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.tfield);
          }
#line 3174 "CloudValueExpressionParser.tab.cc"
    break;

  case 198:
#line 1228 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.hfield) - *(yystack_[0].value.tfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.tfield);
          }
#line 3184 "CloudValueExpressionParser.tab.cc"
    break;

  case 199:
#line 1233 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField(-*(yystack_[0].value.tfield));
            delete (yystack_[0].value.tfield);
          }
#line 3193 "CloudValueExpressionParser.tab.cc"
    break;

  case 200:
#line 1237 "../CloudValueExpressionParser.yy"
    { (yylhs.value.tfield) = (yystack_[1].value.tfield); }
#line 3199 "CloudValueExpressionParser.tab.cc"
    break;

  case 201:
#line 1238 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::skew(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 3208 "CloudValueExpressionParser.tab.cc"
    break;

  case 202:
#line 1242 "../CloudValueExpressionParser.yy"
    {
#ifndef FOAM_EIGEN_VALUES_VECTOR_IS_COMPLEX
            (yylhs.value.tfield) = new Foam::tensorField(Foam::eigenVectors(*(yystack_[1].value.tfield)));
#else
            FatalErrorInFunction
                << "function 'eigenVectors' gives a complex value in this Foam-version"
                    << Foam::endl
                    << exit(Foam::FatalError);
#endif
            delete (yystack_[1].value.tfield);
          }
#line 3224 "CloudValueExpressionParser.tab.cc"
    break;

  case 203:
#line 1253 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField(Foam::eigenVectors(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 3233 "CloudValueExpressionParser.tab.cc"
    break;

  case 204:
#line 1257 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::inv(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 3242 "CloudValueExpressionParser.tab.cc"
    break;

  case 205:
#line 1261 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::cof(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 3251 "CloudValueExpressionParser.tab.cc"
    break;

  case 206:
#line 1265 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::dev(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 3260 "CloudValueExpressionParser.tab.cc"
    break;

  case 207:
#line 1269 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::dev2(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 3269 "CloudValueExpressionParser.tab.cc"
    break;

  case 208:
#line 1273 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( (yystack_[5].value.tfield)->T() );
            delete (yystack_[5].value.tfield);
          }
#line 3278 "CloudValueExpressionParser.tab.cc"
    break;

  case 209:
#line 1277 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.tfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = driver.doConditional(*(yystack_[4].value.lfield),*(yystack_[2].value.tfield),*(yystack_[0].value.tfield)).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 3288 "CloudValueExpressionParser.tab.cc"
    break;

  case 210:
#line 1282 "../CloudValueExpressionParser.yy"
    { (yylhs.value.tfield) = (yystack_[1].value.tfield); }
#line 3294 "CloudValueExpressionParser.tab.cc"
    break;

  case 211:
#line 1283 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.tfield)=driver.getTensorField(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
                    }
#line 3303 "CloudValueExpressionParser.tab.cc"
    break;

  case 212:
#line 1287 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = Foam::min(*(yystack_[3].value.tfield),*(yystack_[1].value.tfield)).ptr();
            delete (yystack_[3].value.tfield); delete (yystack_[1].value.tfield);
          }
#line 3312 "CloudValueExpressionParser.tab.cc"
    break;

  case 213:
#line 1291 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = Foam::max(*(yystack_[3].value.tfield),*(yystack_[1].value.tfield)).ptr();
            delete (yystack_[3].value.tfield); delete (yystack_[1].value.tfield);
          }
#line 3321 "CloudValueExpressionParser.tab.cc"
    break;

  case 214:
#line 1295 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.tfield)=driver.getFluidField<Foam::tensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 3330 "CloudValueExpressionParser.tab.cc"
    break;

  case 215:
#line 1302 "../CloudValueExpressionParser.yy"
    {
      (yylhs.value.tfield)=driver.evaluatePluginFunction<Foam::tensor>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 3344 "CloudValueExpressionParser.tab.cc"
    break;

  case 216:
#line 1314 "../CloudValueExpressionParser.yy"
    { (yylhs.value.yfield) = (yystack_[0].value.yfield); }
#line 3350 "CloudValueExpressionParser.tab.cc"
    break;

  case 217:
#line 1315 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) + *(yystack_[0].value.yfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 3360 "CloudValueExpressionParser.tab.cc"
    break;

  case 218:
#line 1320 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.hfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) + *(yystack_[0].value.hfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.hfield);
          }
#line 3370 "CloudValueExpressionParser.tab.cc"
    break;

  case 219:
#line 1325 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.hfield) + *(yystack_[0].value.yfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.yfield);
          }
#line 3380 "CloudValueExpressionParser.tab.cc"
    break;

  case 220:
#line 1330 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.yfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.yfield);
          }
#line 3390 "CloudValueExpressionParser.tab.cc"
    break;

  case 221:
#line 1335 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.sfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.sfield);
          }
#line 3400 "CloudValueExpressionParser.tab.cc"
    break;

  case 222:
#line 1340 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.yfield));
#ifndef FOAM_SYMMTENSOR_WORKAROUND
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) & *(yystack_[0].value.yfield));
#else
            (yylhs.value.yfield) = new Foam::symmTensorField(
                symm(*(yystack_[2].value.yfield) & *(yystack_[0].value.yfield))
            );
#endif
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 3416 "CloudValueExpressionParser.tab.cc"
    break;

  case 223:
#line 1351 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.yfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.yfield);
          }
#line 3426 "CloudValueExpressionParser.tab.cc"
    break;

  case 224:
#line 1356 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.hfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.hfield);
          }
#line 3436 "CloudValueExpressionParser.tab.cc"
    break;

  case 225:
#line 1361 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.sfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.sfield);
          }
#line 3446 "CloudValueExpressionParser.tab.cc"
    break;

  case 226:
#line 1366 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) - *(yystack_[0].value.yfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 3456 "CloudValueExpressionParser.tab.cc"
    break;

  case 227:
#line 1371 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.hfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) - *(yystack_[0].value.hfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.hfield);
          }
#line 3466 "CloudValueExpressionParser.tab.cc"
    break;

  case 228:
#line 1376 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.hfield) - *(yystack_[0].value.yfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.yfield);
          }
#line 3476 "CloudValueExpressionParser.tab.cc"
    break;

  case 229:
#line 1381 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField(-*(yystack_[0].value.yfield));
            delete (yystack_[0].value.yfield);
          }
#line 3485 "CloudValueExpressionParser.tab.cc"
    break;

  case 230:
#line 1385 "../CloudValueExpressionParser.yy"
    { (yylhs.value.yfield) = (yystack_[1].value.yfield); }
#line 3491 "CloudValueExpressionParser.tab.cc"
    break;

  case 231:
#line 1386 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::symm(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 3500 "CloudValueExpressionParser.tab.cc"
    break;

  case 232:
#line 1390 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::symm(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 3509 "CloudValueExpressionParser.tab.cc"
    break;

  case 233:
#line 1394 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::twoSymm(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 3518 "CloudValueExpressionParser.tab.cc"
    break;

  case 234:
#line 1398 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::twoSymm(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 3527 "CloudValueExpressionParser.tab.cc"
    break;

  case 235:
#line 1402 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::inv(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 3536 "CloudValueExpressionParser.tab.cc"
    break;

  case 236:
#line 1406 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::cof(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 3545 "CloudValueExpressionParser.tab.cc"
    break;

  case 237:
#line 1410 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::dev(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 3554 "CloudValueExpressionParser.tab.cc"
    break;

  case 238:
#line 1414 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::dev2(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 3563 "CloudValueExpressionParser.tab.cc"
    break;

  case 239:
#line 1418 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::sqr(*(yystack_[1].value.vfield)) );
            delete (yystack_[1].value.vfield);
          }
#line 3572 "CloudValueExpressionParser.tab.cc"
    break;

  case 240:
#line 1422 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = (yystack_[5].value.yfield);
          }
#line 3580 "CloudValueExpressionParser.tab.cc"
    break;

  case 241:
#line 1425 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.yfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = driver.doConditional(*(yystack_[4].value.lfield),*(yystack_[2].value.yfield),*(yystack_[0].value.yfield)).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 3590 "CloudValueExpressionParser.tab.cc"
    break;

  case 242:
#line 1430 "../CloudValueExpressionParser.yy"
    { (yylhs.value.yfield) = (yystack_[1].value.yfield); }
#line 3596 "CloudValueExpressionParser.tab.cc"
    break;

  case 243:
#line 1431 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.yfield)=driver.getSymmTensorField(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
                    }
#line 3605 "CloudValueExpressionParser.tab.cc"
    break;

  case 244:
#line 1435 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = Foam::min(*(yystack_[3].value.yfield),*(yystack_[1].value.yfield)).ptr();
            delete (yystack_[3].value.yfield); delete (yystack_[1].value.yfield);
          }
#line 3614 "CloudValueExpressionParser.tab.cc"
    break;

  case 245:
#line 1439 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = Foam::max(*(yystack_[3].value.yfield),*(yystack_[1].value.yfield)).ptr();
            delete (yystack_[3].value.yfield); delete (yystack_[1].value.yfield);
          }
#line 3623 "CloudValueExpressionParser.tab.cc"
    break;

  case 246:
#line 1443 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.yfield)=driver.getFluidField<Foam::symmTensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 3632 "CloudValueExpressionParser.tab.cc"
    break;

  case 247:
#line 1450 "../CloudValueExpressionParser.yy"
    {
      (yylhs.value.yfield)=driver.evaluatePluginFunction<Foam::symmTensor>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 3646 "CloudValueExpressionParser.tab.cc"
    break;

  case 248:
#line 1462 "../CloudValueExpressionParser.yy"
    { (yylhs.value.hfield) = (yystack_[0].value.hfield); }
#line 3652 "CloudValueExpressionParser.tab.cc"
    break;

  case 249:
#line 1463 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = driver.makeField(Foam::sphericalTensor(1)).ptr();
          }
#line 3660 "CloudValueExpressionParser.tab.cc"
    break;

  case 250:
#line 1466 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) + *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 3670 "CloudValueExpressionParser.tab.cc"
    break;

  case 251:
#line 1471 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.hfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.hfield);
          }
#line 3680 "CloudValueExpressionParser.tab.cc"
    break;

  case 252:
#line 1476 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.sfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.sfield);
          }
#line 3690 "CloudValueExpressionParser.tab.cc"
    break;

  case 253:
#line 1481 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 3700 "CloudValueExpressionParser.tab.cc"
    break;

  case 254:
#line 1486 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.sfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.sfield);
          }
#line 3710 "CloudValueExpressionParser.tab.cc"
    break;

  case 255:
#line 1491 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) - *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 3720 "CloudValueExpressionParser.tab.cc"
    break;

  case 256:
#line 1496 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField(-*(yystack_[0].value.hfield));
            delete (yystack_[0].value.hfield);
          }
#line 3729 "CloudValueExpressionParser.tab.cc"
    break;

  case 257:
#line 1500 "../CloudValueExpressionParser.yy"
    { (yylhs.value.hfield) = (yystack_[1].value.hfield); }
#line 3735 "CloudValueExpressionParser.tab.cc"
    break;

  case 258:
#line 1501 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::sph(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 3744 "CloudValueExpressionParser.tab.cc"
    break;

  case 259:
#line 1505 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::sph(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 3753 "CloudValueExpressionParser.tab.cc"
    break;

  case 260:
#line 1509 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::sph(*(yystack_[1].value.hfield)) );
            delete (yystack_[1].value.hfield);
          }
#line 3762 "CloudValueExpressionParser.tab.cc"
    break;

  case 261:
#line 1513 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::inv(*(yystack_[1].value.hfield)) );
            delete (yystack_[1].value.hfield);
          }
#line 3771 "CloudValueExpressionParser.tab.cc"
    break;

  case 262:
#line 1517 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = (yystack_[5].value.hfield);
          }
#line 3779 "CloudValueExpressionParser.tab.cc"
    break;

  case 263:
#line 1520 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.hfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = driver.doConditional(*(yystack_[4].value.lfield),*(yystack_[2].value.hfield),*(yystack_[0].value.hfield)).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 3789 "CloudValueExpressionParser.tab.cc"
    break;

  case 264:
#line 1529 "../CloudValueExpressionParser.yy"
    { (yylhs.value.hfield) = (yystack_[1].value.hfield); }
#line 3795 "CloudValueExpressionParser.tab.cc"
    break;

  case 265:
#line 1530 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.hfield)=driver.getSphericalTensorField(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
                    }
#line 3804 "CloudValueExpressionParser.tab.cc"
    break;

  case 266:
#line 1534 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = Foam::min(*(yystack_[3].value.hfield),*(yystack_[1].value.hfield)).ptr();
            delete (yystack_[3].value.hfield); delete (yystack_[1].value.hfield);
          }
#line 3813 "CloudValueExpressionParser.tab.cc"
    break;

  case 267:
#line 1538 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = Foam::max(*(yystack_[3].value.hfield),*(yystack_[1].value.hfield)).ptr();
            delete (yystack_[3].value.hfield); delete (yystack_[1].value.hfield);
          }
#line 3822 "CloudValueExpressionParser.tab.cc"
    break;

  case 268:
#line 1542 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.hfield)=driver.getFluidField<Foam::sphericalTensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 3831 "CloudValueExpressionParser.tab.cc"
    break;

  case 269:
#line 1549 "../CloudValueExpressionParser.yy"
    {
      (yylhs.value.hfield)=driver.evaluatePluginFunction<Foam::sphericalTensor>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 3845 "CloudValueExpressionParser.tab.cc"
    break;

  case 270:
#line 1561 "../CloudValueExpressionParser.yy"
    { (yylhs.value.lfield) = driver.makeField(true).ptr(); }
#line 3851 "CloudValueExpressionParser.tab.cc"
    break;

  case 271:
#line 1562 "../CloudValueExpressionParser.yy"
    { (yylhs.value.lfield) = driver.makeField(false).ptr(); }
#line 3857 "CloudValueExpressionParser.tab.cc"
    break;

  case 272:
#line 1563 "../CloudValueExpressionParser.yy"
    {
           (yylhs.value.lfield) = driver.makeField(
                driver.runTime().outputTime()
           ).ptr();
       }
#line 3867 "CloudValueExpressionParser.tab.cc"
    break;

  case 273:
#line 1568 "../CloudValueExpressionParser.yy"
    {
        (yylhs.value.lfield) = driver.makeCellSetField(*(yystack_[1].value.name)).ptr();
        delete (yystack_[1].value.name);
      }
#line 3876 "CloudValueExpressionParser.tab.cc"
    break;

  case 274:
#line 1572 "../CloudValueExpressionParser.yy"
    {
        (yylhs.value.lfield) = driver.makeCellZoneField(*(yystack_[1].value.name)).ptr();
        delete (yystack_[1].value.name);
      }
#line 3885 "CloudValueExpressionParser.tab.cc"
    break;

  case 275:
#line 1576 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(*(yystack_[2].value.sfield),std::less<Foam::scalar>(),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 3895 "CloudValueExpressionParser.tab.cc"
    break;

  case 276:
#line 1581 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(*(yystack_[2].value.sfield),std::greater<Foam::scalar>(),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 3905 "CloudValueExpressionParser.tab.cc"
    break;

  case 277:
#line 1586 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(*(yystack_[2].value.sfield),std::less_equal<Foam::scalar>(),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 3915 "CloudValueExpressionParser.tab.cc"
    break;

  case 278:
#line 1591 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::greater_equal<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 3929 "CloudValueExpressionParser.tab.cc"
    break;

  case 279:
#line 1600 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(*(yystack_[2].value.sfield),std::equal_to<Foam::scalar>(),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 3939 "CloudValueExpressionParser.tab.cc"
    break;

  case 280:
#line 1605 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::not_equal_to<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 3953 "CloudValueExpressionParser.tab.cc"
    break;

  case 281:
#line 1614 "../CloudValueExpressionParser.yy"
    { (yylhs.value.lfield) = (yystack_[1].value.lfield); }
#line 3959 "CloudValueExpressionParser.tab.cc"
    break;

  case 282:
#line 1615 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.lfield),(yystack_[0].value.lfield));
            (yylhs.value.lfield) = driver.doLogicalOp(
                *(yystack_[2].value.lfield),
                std::logical_and<Foam::scalar>(),
                *(yystack_[0].value.lfield)
            ).ptr();
            delete (yystack_[2].value.lfield); delete (yystack_[0].value.lfield);
          }
#line 3973 "CloudValueExpressionParser.tab.cc"
    break;

  case 283:
#line 1624 "../CloudValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.lfield),(yystack_[0].value.lfield));
            (yylhs.value.lfield) = driver.doLogicalOp(
                *(yystack_[2].value.lfield),
                std::logical_or<Foam::scalar>(),
                *(yystack_[0].value.lfield)
            ).ptr();
            delete (yystack_[2].value.lfield); delete (yystack_[0].value.lfield);
          }
#line 3987 "CloudValueExpressionParser.tab.cc"
    break;

  case 284:
#line 1633 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.lfield) = driver.doLogicalNot(*(yystack_[0].value.lfield)).ptr();
            delete (yystack_[0].value.lfield);
          }
#line 3996 "CloudValueExpressionParser.tab.cc"
    break;

  case 285:
#line 1637 "../CloudValueExpressionParser.yy"
    { (yylhs.value.lfield) = (yystack_[1].value.lfield); }
#line 4002 "CloudValueExpressionParser.tab.cc"
    break;

  case 286:
#line 1638 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.lfield)=driver.getBoolField(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
      }
#line 4011 "CloudValueExpressionParser.tab.cc"
    break;

  case 287:
#line 1645 "../CloudValueExpressionParser.yy"
    {
      (yylhs.value.lfield)=driver.evaluatePluginFunction<bool>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 4025 "CloudValueExpressionParser.tab.cc"
    break;

  case 288:
#line 1657 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(*(yystack_[5].value.sfield),*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[5].value.sfield); delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 4034 "CloudValueExpressionParser.tab.cc"
    break;

  case 289:
#line 1663 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = driver.composeTensorField(
                *(yystack_[17].value.sfield),*(yystack_[15].value.sfield),*(yystack_[13].value.sfield),
                *(yystack_[11].value.sfield),*(yystack_[9].value.sfield),*(yystack_[7].value.sfield),
                *(yystack_[5].value.sfield),*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)
            ).ptr();
            delete (yystack_[17].value.sfield); delete (yystack_[15].value.sfield); delete (yystack_[13].value.sfield); delete (yystack_[11].value.sfield); delete (yystack_[9].value.sfield);
            delete (yystack_[7].value.sfield); delete (yystack_[5].value.sfield); delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 4048 "CloudValueExpressionParser.tab.cc"
    break;

  case 290:
#line 1673 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = driver.composeSymmTensorField(
                *(yystack_[11].value.sfield),*(yystack_[9].value.sfield),*(yystack_[7].value.sfield),
                *(yystack_[5].value.sfield),*(yystack_[3].value.sfield),
                *(yystack_[1].value.sfield)
            ).ptr();
            delete (yystack_[11].value.sfield); delete (yystack_[9].value.sfield); delete (yystack_[7].value.sfield); delete (yystack_[5].value.sfield); delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 4061 "CloudValueExpressionParser.tab.cc"
    break;

  case 291:
#line 1682 "../CloudValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = driver.composeSphericalTensorField(*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[1].value.sfield);
          }
#line 4070 "CloudValueExpressionParser.tab.cc"
    break;


#line 4074 "CloudValueExpressionParser.tab.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
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


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  CloudValueExpressionParser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  CloudValueExpressionParser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short CloudValueExpressionParser::yypact_ninf_ = -268;

  const signed char CloudValueExpressionParser::yytable_ninf_ = -1;

  const short
  CloudValueExpressionParser::yypact_[] =
  {
    2620,   709,   709,   709,   709,   709,   709,   709,   709,   709,
     709,   709,   709,   709,  -148,  -139,    21,  -268,  -268,  -137,
    -120,  -268,  -268,  -268,  -268,  -268,  -268,  -117,  -111,  -107,
    -104,   -88,   -80,  -268,   -76,   -74,   -71,   -54,  -268,  -268,
     -52,  -268,  -268,   -46,   -45,   -42,   -38,   -37,   -35,   -33,
     -30,   -27,   -18,    -7,     9,    10,    64,    65,    72,    73,
      80,    83,    85,    88,   100,   114,   115,   137,   139,   140,
     142,   147,   151,   153,   154,   163,   165,   166,   167,   168,
     169,   170,   173,   177,   178,   179,   180,   185,   189,   190,
     191,   193,   194,   197,   198,   199,   200,   202,   203,   207,
     208,   210,   211,   215,   216,   218,   709,   709,   709,   709,
    -268,   289,    52,  -268,  -268,   626,    52,  2470,    52,  2483,
      52,  2496,    52,  -127,    52,  -268,  -268,  -268,  -268,   289,
    2134,  2470,  2483,  2496,  -127,  1176,   317,   626,  2562,   264,
     -83,  2025,   -69,  2038,   -31,   -85,   -93,  -268,  -268,  -268,
     709,   709,  -268,  -268,  -268,  -268,  -268,  -268,   709,   709,
     709,   709,    47,   -22,   -21,   -84,   -20,   -19,   -82,     3,
     120,   145,   709,   709,   709,   709,   709,   709,   709,   709,
     709,   709,   709,   709,   709,   709,   709,   709,   709,   709,
     709,   709,   709,   709,   709,   709,   709,   709,   709,   709,
     709,   709,   709,   709,   709,   709,   709,   709,   709,   709,
     709,   709,   709,   709,   709,   709,   709,   709,   709,   709,
     709,   709,   220,   224,   106,   223,   187,  -268,   227,   229,
     230,   227,   229,  2575,  1195,   -16,     4,    69,   -89,  -268,
     709,   709,   709,   709,   709,   709,  -268,  -268,    52,  -268,
     709,   709,   709,   709,   709,   709,   709,   709,   709,   709,
     709,  -268,   709,   709,   709,   709,   709,   709,  -268,  -268,
     709,   709,   709,   709,   709,   709,  -268,  -268,   709,   709,
     709,   709,   709,   709,  -268,  -268,   709,   709,   709,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,  1214,  2152,  -268,  -268,  -268,  -268,  -268,  -268,
    2170,  2188,  2206,  1233,   233,   234,   237,   238,   241,   246,
    -268,   247,  -268,  -268,   248,  -268,   250,  -268,  -268,  -268,
    -268,  -268,  2224,  1252,  1271,  2588,  1290,    87,   144,   158,
    2601,  1309,   184,   251,   303,  1328,  1347,  1366,  2536,  1138,
    2051,  2064,  2077,  2549,  1157,  2090,  2103,  2116,  1385,  1404,
    2614,  1423,  2627,  1442,  2640,  1461,  1480,  1499,  1518,  1537,
    1556,  2242,  1575,  1594,  1613,  1632,  1651,  1670,  1689,  1708,
    1727,  1746,  1765,  1784,  1803,  1822,  1841,  1860,   356,   423,
     495,   509,   525,   585,   714,   727,   749,   762,   775,   788,
     801,   814,   827,   842,   855,   868,   881,   894,   907,   920,
     933,   946,   959,   972,   985,   998,  1011,  -268,  -268,   254,
     258,  -268,  -268,  -268,  -268,  -268,  -268,    61,    61,   187,
    -268,  -268,   187,   227,   229,   230,   187,    34,  -268,   626,
     626,   626,   626,   626,   626,    -4,    -4,  -268,   187,  -268,
     227,   229,   230,  -268,   119,   392,   481,    79,   111,   136,
      79,   111,   136,  -268,  -268,   187,   227,   229,   230,   -32,
     119,   392,   481,    79,   111,   136,    79,   111,   136,  -268,
    -268,   187,   227,   229,   230,   -23,   119,   392,   481,    79,
     111,   136,    79,   111,   136,  -268,  -268,   187,   227,   229,
     230,   -61,   -53,  2531,   600,  1026,  1041,   278,  -268,  -268,
     709,   709,   709,   709,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,   709,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
     709,  -268,   709,  -268,   709,   709,   709,   709,  -268,   709,
    -268,   709,   709,   709,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,   709,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
     259,  -268,  -268,  -268,  -268,  -268,  -268,   260,  -268,   267,
     709,   709,   709,   709,   709,  1879,  2260,  2278,  2296,  1898,
    2653,  1917,  1054,  1067,  1080,  2666,  1936,  1093,  1106,  1119,
    1955,   279,   285,   286,   289,   626,  2470,  2483,  2496,  -268,
     709,   709,   709,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  1974,  2314,
    2332,  -268,   709,   709,  2350,  2368,   709,   709,  2386,  2404,
     709,   709,  2422,  1993,   709,  -268,  2440,   709,  2458,   709,
    2012,  -268
  };

  const unsigned short
  CloudValueExpressionParser::yydefact_[] =
  {
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,   172,     0,
       0,   171,    57,   286,   211,   243,   265,     0,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,   270,   271,
       0,   249,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,    21,     0,    73,    30,    20,     0,    23,     0,    24,
       0,    25,     0,    22,     0,    29,   179,   216,   248,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,    17,     1,
       0,     0,    28,    28,    28,    28,    28,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,    92,   199,   229,
     256,    44,    45,     0,     0,     0,     0,     0,     0,   284,
       0,     0,     0,     0,     0,     0,    26,    18,     0,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,     0,     0,     0,     0,     0,     0,    27,   210,
       0,     0,     0,     0,     0,     0,    27,   242,     0,     0,
       0,     0,     0,     0,    27,   264,     0,     0,     0,   285,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,   178,    61,   215,   247,   269,   287,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     160,     0,   164,   157,     0,   162,     0,   166,    55,   168,
     169,   272,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   158,   159,     0,
       0,    46,    93,   200,   230,   257,   281,    42,    31,   187,
      33,    40,    82,    35,    37,    39,    41,     0,    19,   279,
     280,   277,   278,   275,   276,    75,    74,    77,    32,    76,
     185,   220,   251,    78,    83,    84,    85,   194,   195,   196,
     180,   181,   182,   186,   193,    34,   188,   190,   192,     0,
      86,    87,    88,   197,   226,   227,   183,   217,   218,   221,
     225,    36,   189,   222,   224,     0,    89,    90,    91,   198,
     228,   255,   184,   219,   250,   252,   254,    38,   191,   223,
     253,     0,     0,     0,     0,     0,     0,   283,   282,   173,
       0,     0,     0,     0,   291,   177,    60,   214,   246,   268,
     161,   165,   163,   167,     0,    80,    81,   121,   120,   122,
     123,   124,   126,   125,   127,   128,   129,    96,    97,    98,
       0,    66,     0,    62,     0,     0,     0,     0,    67,     0,
      63,     0,     0,     0,    68,    69,    71,    65,    70,    64,
     239,    94,    95,    99,   100,   101,   102,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,    52,    53,   130,   131,   132,   206,
     237,   232,   231,   201,   133,   134,   135,   205,   236,   204,
     235,   261,   258,   259,   260,   234,   233,   207,   238,    47,
      48,   202,   203,   273,   274,   136,   137,   138,    49,    50,
      51,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,   148,   149,   150,   151,   152,   153,     0,   154,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,   155,   209,   241,   263,   174,
       0,     0,     0,    79,    58,   175,   212,   244,   266,    59,
     176,   213,   245,   267,   103,   208,   240,   262,     0,     0,
       0,   288,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   290,     0,     0,     0,     0,
       0,   289
  };

  const short
  CloudValueExpressionParser::yypgoto_[] =
  {
    -268,  -268,  -268,  -100,  -268,  -268,  -267,    11,   351,  -268,
    -268,  -268,    -1,  -268,   341,  -268,   214,  -268,   102,  -268,
       2,  -268,  -268,  -268,  -268,  -268
  };

  const short
  CloudValueExpressionParser::yydefgoto_[] =
  {
      -1,    16,    17,   249,   110,   437,   469,   304,   129,   112,
     113,   114,   137,   116,   131,   118,   132,   120,   133,   122,
     134,   124,   125,   126,   127,   128
  };

  const unsigned short
  CloudValueExpressionParser::yytable_[] =
  {
     115,   130,   135,   123,   319,   321,   324,   326,   638,   485,
     286,   147,   287,   288,   145,   146,   261,   501,   269,   148,
     277,   149,   285,   150,   289,   618,   619,   620,   621,   622,
     623,   624,   625,   626,   627,   628,   629,   631,   632,   633,
     151,   634,   635,   152,   286,   636,   287,   288,   286,   153,
     287,   288,   286,   154,   287,   288,   155,   262,   639,   314,
     315,   316,   317,   318,   263,   264,   301,   265,   266,   267,
     426,   270,   156,   300,   268,   323,   295,   328,   271,   272,
     157,   273,   274,   275,   158,   640,   159,   630,   276,   160,
     297,   615,   616,   617,   240,   241,   637,   242,   243,   244,
     245,   247,   248,   121,   246,   227,   161,   234,   162,   278,
     238,   239,   143,   144,   163,   164,   279,   280,   165,   281,
     282,   283,   166,   167,   262,   168,   284,   169,   299,   419,
     170,   263,   264,   171,   265,   266,   267,   320,   322,   325,
     327,   268,   172,   423,   270,   258,   259,   260,   438,   302,
     303,   271,   272,   173,   273,   274,   275,   310,   311,   312,
     313,   276,   329,   424,   305,   306,   307,   308,   309,   174,
     175,   332,   333,   334,   336,   341,   345,   346,   347,   349,
     354,   358,   359,   361,   363,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   230,   278,
     237,   242,   243,   244,   245,   119,   279,   280,   246,   281,
     282,   283,   141,   142,   176,   177,   284,   262,   425,   265,
     266,   267,   178,   179,   263,   264,   268,   265,   266,   267,
     180,   430,   431,   181,   268,   182,   529,   420,   183,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   449,   453,
     184,   273,   274,   275,   463,   464,   263,   264,   276,   265,
     266,   267,   479,   480,   185,   186,   268,   339,   344,   330,
     495,   496,   352,   357,   270,   503,   281,   282,   283,   507,
     508,   271,   272,   284,   273,   274,   275,   187,   278,   188,
     189,   276,   190,   530,   331,   279,   280,   191,   281,   282,
     283,   192,   392,   193,   194,   284,   400,   531,   405,   408,
     229,   232,   236,   195,   262,   196,   197,   198,   199,   200,
     201,   263,   264,   202,   265,   266,   267,   203,   204,   205,
     206,   268,   117,   534,   246,   207,   435,   139,   140,   208,
     209,   210,   111,   211,   212,   136,   138,   213,   214,   215,
     216,   452,   217,   218,   456,   459,   462,   219,   220,   468,
     221,   222,   472,   475,   478,   223,   224,   484,   225,   417,
     488,   491,   494,   418,   268,   500,   276,   284,   506,   338,
     343,   270,   515,   516,   351,   356,   517,   518,   271,   272,
     519,   273,   274,   275,   262,   520,   521,   522,   276,   523,
     535,   263,   264,   613,   265,   266,   267,   614,   288,   661,
     662,   268,   294,   389,   391,   394,   396,   663,   399,   402,
     404,   407,   410,   412,   414,   416,   240,   241,   685,   242,
     243,   244,   245,   278,   686,   687,   246,   228,   231,   235,
     279,   280,     0,   281,   282,   283,     0,   226,   434,   233,
     284,     0,   536,     0,   240,   241,     0,   242,   243,   244,
     245,     0,     0,   451,   246,   292,   455,   458,   461,     0,
       0,   467,     0,     0,   471,   474,   477,     0,     0,   483,
       0,     0,   487,   490,   493,     0,   262,   499,     0,     0,
     505,     0,     0,   263,   264,     0,   265,   266,   267,   645,
     646,   647,   648,   268,     0,   584,   337,   342,     0,     0,
       0,   350,   355,   649,     0,     0,   335,   340,     0,     0,
       0,   348,   353,     0,     0,   360,   362,   364,     0,   271,
     272,   651,   273,   274,   275,     0,     0,     0,   656,   276,
     388,   390,   393,   395,   397,   398,   401,   403,   406,   409,
     411,   413,   415,   270,     0,     0,   660,     0,     0,     0,
     271,   272,     0,   273,   274,   275,     0,     0,     0,     0,
     276,     0,   585,     0,     0,   433,     0,     0,     0,     0,
       0,   427,   428,   429,     0,   432,   436,     0,     0,     0,
     450,     0,     0,   454,   457,   460,     0,     0,   466,     0,
     448,   470,   473,   476,     0,     0,   482,     0,   465,   486,
     489,   492,     0,     0,   498,     0,   481,   504,   279,   280,
       0,   281,   282,   283,   497,   262,     0,   502,   284,     0,
     665,     0,   263,   264,     0,   265,   266,   267,   654,   270,
       0,     0,   268,     0,   586,   659,   271,   272,     0,   273,
     274,   275,     0,     0,     0,   278,   276,     0,   587,   688,
     689,   690,   279,   280,     0,   281,   282,   283,     0,     0,
       0,     0,   284,     0,   588,     0,     0,     0,     0,     0,
       0,   694,   695,     0,     0,   698,   699,     0,     0,   702,
     703,     0,     0,   706,     0,     0,   708,     0,   710,     0,
       0,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,   262,    27,    28,    29,    30,
      31,    32,   263,   264,    33,   265,   266,   267,   642,     0,
     262,     0,   268,     0,   589,     0,   668,   263,   264,     0,
     265,   266,   267,     0,     0,     0,     0,   268,     0,   653,
      34,    35,    36,    37,    38,    39,   658,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,     0,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,     0,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,     0,     0,     0,     0,
       0,     0,     0,     0,   270,     0,   106,   667,     0,   107,
       0,   271,   272,     0,   273,   274,   275,   262,     0,   108,
     109,   276,     0,   590,   263,   264,     0,   265,   266,   267,
       0,     0,     0,     0,   268,   652,   591,     0,     0,   270,
       0,   650,   657,     0,     0,     0,   271,   272,   655,   273,
     274,   275,   262,     0,     0,     0,   276,     0,   592,   263,
     264,     0,   265,   266,   267,   262,     0,     0,     0,   268,
       0,   593,   263,   264,     0,   265,   266,   267,   270,     0,
       0,     0,   268,     0,   594,   271,   272,     0,   273,   274,
     275,   278,     0,     0,     0,   276,     0,   595,   279,   280,
       0,   281,   282,   283,   262,     0,     0,     0,   284,     0,
     596,   263,   264,     0,   265,   266,   267,   270,     0,     0,
       0,   268,     0,   597,   271,   272,     0,   273,   274,   275,
       0,     0,   262,   666,   276,     0,   598,     0,     0,   263,
     264,   664,   265,   266,   267,   270,     0,     0,     0,   268,
       0,   599,   271,   272,     0,   273,   274,   275,   278,     0,
       0,     0,   276,     0,   600,   279,   280,     0,   281,   282,
     283,   262,     0,     0,     0,   284,     0,   601,   263,   264,
       0,   265,   266,   267,   270,     0,     0,     0,   268,     0,
     602,   271,   272,     0,   273,   274,   275,   278,     0,     0,
       0,   276,     0,   603,   279,   280,     0,   281,   282,   283,
     262,     0,     0,     0,   284,     0,   604,   263,   264,     0,
     265,   266,   267,   270,     0,     0,     0,   268,     0,   605,
     271,   272,     0,   273,   274,   275,   262,     0,     0,     0,
     276,     0,   606,   263,   264,     0,   265,   266,   267,   270,
       0,     0,     0,   268,     0,   607,   271,   272,     0,   273,
     274,   275,   262,     0,     0,     0,   276,     0,   608,   263,
     264,     0,   265,   266,   267,   270,     0,     0,     0,   268,
       0,   609,   271,   272,     0,   273,   274,   275,   262,     0,
       0,     0,   276,     0,   610,   263,   264,     0,   265,   266,
     267,   270,     0,     0,     0,   268,     0,   611,   271,   272,
       0,   273,   274,   275,   643,     0,   270,     0,   276,     0,
     612,     0,     0,   271,   272,     0,   273,   274,   275,   644,
       0,   278,     0,   276,     0,     0,     0,     0,   279,   280,
       0,   281,   282,   283,   262,     0,     0,     0,   284,     0,
       0,   263,   264,     0,   265,   266,   267,   270,     0,     0,
       0,   268,     0,   676,   271,   272,     0,   273,   274,   275,
     278,     0,     0,     0,   276,     0,   677,   279,   280,     0,
     281,   282,   283,   262,     0,     0,     0,   284,     0,   678,
     263,   264,     0,   265,   266,   267,   270,     0,     0,     0,
     268,     0,   681,   271,   272,     0,   273,   274,   275,   278,
       0,     0,     0,   276,     0,   682,   279,   280,     0,   281,
     282,   283,     0,     0,     0,     0,   284,     0,   683,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
       0,     0,     0,     0,     0,     0,   542,   543,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,     0,
       0,     0,     0,     0,     0,   549,   550,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,     0,     0,
       0,     0,     0,     0,     0,   291,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,     0,     0,     0,
       0,     0,     0,     0,   422,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,     0,     0,     0,     0,
       0,     0,     0,   509,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,     0,     0,     0,     0,     0,
       0,     0,   514,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,     0,     0,     0,     0,     0,     0,
       0,   525,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,     0,     0,     0,     0,     0,     0,     0,
     526,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,     0,     0,     0,     0,     0,     0,     0,   528,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,     0,     0,     0,     0,     0,     0,     0,   533,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
       0,     0,     0,     0,     0,     0,     0,   537,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,     0,
       0,     0,     0,     0,     0,     0,   538,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,     0,     0,
       0,     0,     0,     0,     0,   539,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,     0,     0,     0,
       0,     0,     0,     0,   554,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,     0,     0,     0,     0,
       0,     0,     0,   555,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,     0,     0,     0,     0,     0,
       0,     0,   557,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,     0,     0,     0,     0,     0,     0,
       0,   559,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,     0,     0,     0,     0,     0,     0,     0,
     561,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,     0,     0,     0,     0,     0,     0,     0,   562,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,     0,     0,     0,     0,     0,     0,     0,   563,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
       0,     0,     0,     0,     0,     0,     0,   564,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,     0,
       0,     0,     0,     0,     0,     0,   565,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,     0,     0,
       0,     0,     0,     0,     0,   566,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,     0,     0,     0,
       0,     0,     0,     0,   568,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,     0,     0,     0,     0,
       0,     0,     0,   569,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,     0,     0,     0,     0,     0,
       0,     0,   570,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,     0,     0,     0,     0,     0,     0,
       0,   571,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,     0,     0,     0,     0,     0,     0,     0,
     572,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,     0,     0,     0,     0,     0,     0,     0,   573,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,     0,     0,     0,     0,     0,     0,     0,   574,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
       0,     0,     0,     0,     0,     0,     0,   575,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,     0,
       0,     0,     0,     0,     0,     0,   576,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,     0,     0,
       0,     0,     0,     0,     0,   577,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,     0,     0,     0,
       0,     0,     0,     0,   578,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,     0,     0,     0,     0,
       0,     0,     0,   579,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,     0,     0,     0,     0,     0,
       0,     0,   580,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,     0,     0,     0,     0,     0,     0,
       0,   581,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,     0,     0,     0,     0,     0,     0,     0,
     582,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,     0,     0,     0,     0,     0,     0,     0,   583,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,     0,     0,     0,     0,     0,     0,     0,   669,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
       0,     0,     0,     0,     0,     0,     0,   673,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,     0,
       0,     0,     0,     0,     0,     0,   675,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,     0,     0,
       0,     0,     0,     0,     0,   680,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,     0,     0,     0,
       0,     0,     0,     0,   684,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,     0,     0,     0,     0,
       0,     0,     0,   691,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,     0,     0,     0,     0,     0,
       0,     0,   705,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,     0,   270,     0,     0,     0,     0,
       0,   711,   271,   272,     0,   273,   274,   275,   278,     0,
       0,     0,   276,   296,     0,   279,   280,     0,   281,   282,
     283,   262,     0,     0,     0,   284,   298,     0,   263,   264,
       0,   265,   266,   267,   270,     0,     0,     0,   268,   544,
       0,   271,   272,     0,   273,   274,   275,   278,     0,     0,
       0,   276,   545,     0,   279,   280,     0,   281,   282,   283,
     262,     0,     0,     0,   284,   546,     0,   263,   264,     0,
     265,   266,   267,   270,     0,     0,     0,   268,   551,     0,
     271,   272,     0,   273,   274,   275,   278,     0,     0,     0,
     276,   552,     0,   279,   280,     0,   281,   282,   283,     0,
       0,     0,     0,   284,   553,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,     0,     0,     0,     0,
       0,     0,   290,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,     0,     0,     0,     0,     0,     0,
     510,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,     0,     0,     0,     0,     0,     0,   511,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
       0,     0,     0,     0,     0,     0,   512,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,     0,     0,
       0,     0,     0,     0,   513,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,     0,     0,     0,     0,
       0,     0,   524,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,     0,     0,     0,     0,     0,     0,
     567,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,     0,     0,     0,     0,     0,     0,   670,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
       0,     0,     0,     0,     0,     0,   671,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,     0,     0,
       0,     0,     0,     0,   672,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,     0,     0,     0,     0,
       0,     0,   692,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,     0,     0,     0,     0,     0,     0,
     693,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,     0,     0,     0,     0,     0,     0,   696,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
       0,     0,     0,     0,     0,     0,   697,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,     0,     0,
       0,     0,     0,     0,   700,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,     0,     0,     0,     0,
       0,     0,   701,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,     0,     0,     0,     0,     0,     0,
     704,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,     0,     0,     0,     0,     0,     0,   707,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     262,     0,     0,     0,     0,     0,   709,   263,   264,     0,
     265,   266,   267,   270,     0,     0,     0,   268,     0,     0,
     271,   272,     0,   273,   274,   275,   278,     0,     0,     0,
     276,     0,     0,   279,   280,     0,   281,   282,   283,     0,
       0,     0,     0,   284,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,   641,
       0,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   240,   241,     0,   242,   243,   244,   245,
       0,     0,     0,   246,   540,   541,   240,   241,     0,   242,
     243,   244,   245,     0,     0,     0,   246,   547,   548,   240,
     241,     0,   242,   243,   244,   245,     0,     0,     0,   246,
       0,   293,   240,   241,     0,   242,   243,   244,   245,     0,
       0,     0,   246,     0,   421,   240,   241,     0,   242,   243,
     244,   245,     0,     0,     0,   246,     0,   527,   240,   241,
       0,   242,   243,   244,   245,     0,     0,     0,   246,     0,
     532,   240,   241,     0,   242,   243,   244,   245,     0,     0,
       0,   246,     0,   556,   240,   241,     0,   242,   243,   244,
     245,     0,     0,     0,   246,     0,   558,   240,   241,     0,
     242,   243,   244,   245,     0,     0,     0,   246,     0,   560,
     240,   241,     0,   242,   243,   244,   245,     0,     0,     0,
     246,     0,   674,   240,   241,     0,   242,   243,   244,   245,
       0,     0,     0,   246,     0,   679
  };

  const short
  CloudValueExpressionParser::yycheck_[] =
  {
       1,     2,     3,     1,    26,    26,    26,    26,    69,   276,
     137,   159,   139,   140,    12,    13,   116,   284,   118,   158,
     120,     0,   122,   160,   124,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    60,    61,    62,
     160,    64,    65,   160,   137,    68,   139,   140,   137,   160,
     139,   140,   137,   160,   139,   140,   160,   140,   119,    12,
      13,    14,    15,    16,   147,   148,   159,   150,   151,   152,
     159,   140,   160,   158,   157,   159,   159,   159,   147,   148,
     160,   150,   151,   152,   160,   138,   160,   119,   157,   160,
     159,    57,    58,    59,   147,   148,   119,   150,   151,   152,
     153,    49,    50,     1,   157,   106,   160,   108,   160,   140,
     108,   109,    10,    11,   160,   160,   147,   148,   160,   150,
     151,   152,   160,   160,   140,   160,   157,   160,   159,    23,
     160,   147,   148,   160,   150,   151,   152,   159,   159,   159,
     159,   157,   160,   159,   140,   149,   150,   151,   248,   150,
     151,   147,   148,   160,   150,   151,   152,   158,   159,   160,
     161,   157,   159,   159,   153,   154,   155,   156,   157,   160,
     160,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   106,   140,
     108,   150,   151,   152,   153,     1,   147,   148,   157,   150,
     151,   152,     8,     9,   160,   160,   157,   140,   159,   150,
     151,   152,   160,   160,   147,   148,   157,   150,   151,   152,
     160,   242,   243,   160,   157,   160,   159,    24,   160,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     160,   150,   151,   152,   265,   266,   147,   148,   157,   150,
     151,   152,   273,   274,   160,   160,   157,   175,   176,   159,
     281,   282,   180,   181,   140,   286,   150,   151,   152,   287,
     288,   147,   148,   157,   150,   151,   152,   160,   140,   160,
     160,   157,   160,   159,   159,   147,   148,   160,   150,   151,
     152,   160,   210,   160,   160,   157,   214,   159,   216,   217,
     106,   107,   108,   160,   140,   160,   160,   160,   160,   160,
     160,   147,   148,   160,   150,   151,   152,   160,   160,   160,
     160,   157,     1,   159,   157,   160,   244,     6,     7,   160,
     160,   160,     1,   160,   160,     4,     5,   160,   160,   160,
     160,   259,   160,   160,   262,   263,   264,   160,   160,   267,
     160,   160,   270,   271,   272,   160,   160,   275,   160,   159,
     278,   279,   280,   159,   157,   283,   157,   157,   286,   175,
     176,   140,   159,   159,   180,   181,   159,   159,   147,   148,
     159,   150,   151,   152,   140,   159,   159,   159,   157,   159,
     159,   147,   148,   159,   150,   151,   152,   159,   140,   160,
     160,   157,   158,   209,   210,   211,   212,   160,   214,   215,
     216,   217,   218,   219,   220,   221,   147,   148,   159,   150,
     151,   152,   153,   140,   159,   159,   157,   106,   107,   108,
     147,   148,    -1,   150,   151,   152,    -1,   106,   244,   108,
     157,    -1,   159,    -1,   147,   148,    -1,   150,   151,   152,
     153,    -1,    -1,   259,   157,   158,   262,   263,   264,    -1,
      -1,   267,    -1,    -1,   270,   271,   272,    -1,    -1,   275,
      -1,    -1,   278,   279,   280,    -1,   140,   283,    -1,    -1,
     286,    -1,    -1,   147,   148,    -1,   150,   151,   152,   510,
     511,   512,   513,   157,    -1,   159,   175,   176,    -1,    -1,
      -1,   180,   181,   524,    -1,    -1,   175,   176,    -1,    -1,
      -1,   180,   181,    -1,    -1,   184,   185,   186,    -1,   147,
     148,   542,   150,   151,   152,    -1,    -1,    -1,   549,   157,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   140,    -1,    -1,   567,    -1,    -1,    -1,
     147,   148,    -1,   150,   151,   152,    -1,    -1,    -1,    -1,
     157,    -1,   159,    -1,    -1,   244,    -1,    -1,    -1,    -1,
      -1,   240,   241,   242,    -1,   244,   245,    -1,    -1,    -1,
     259,    -1,    -1,   262,   263,   264,    -1,    -1,   267,    -1,
     259,   270,   271,   272,    -1,    -1,   275,    -1,   267,   278,
     279,   280,    -1,    -1,   283,    -1,   275,   286,   147,   148,
      -1,   150,   151,   152,   283,   140,    -1,   286,   157,    -1,
     641,    -1,   147,   148,    -1,   150,   151,   152,   546,   140,
      -1,    -1,   157,    -1,   159,   553,   147,   148,    -1,   150,
     151,   152,    -1,    -1,    -1,   140,   157,    -1,   159,   670,
     671,   672,   147,   148,    -1,   150,   151,   152,    -1,    -1,
      -1,    -1,   157,    -1,   159,    -1,    -1,    -1,    -1,    -1,
      -1,   692,   693,    -1,    -1,   696,   697,    -1,    -1,   700,
     701,    -1,    -1,   704,    -1,    -1,   707,    -1,   709,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,   140,    17,    18,    19,    20,
      21,    22,   147,   148,    25,   150,   151,   152,   138,    -1,
     140,    -1,   157,    -1,   159,    -1,   644,   147,   148,    -1,
     150,   151,   152,    -1,    -1,    -1,    -1,   157,    -1,   545,
      51,    52,    53,    54,    55,    56,   552,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,    -1,   147,   643,    -1,   150,
      -1,   147,   148,    -1,   150,   151,   152,   140,    -1,   160,
     161,   157,    -1,   159,   147,   148,    -1,   150,   151,   152,
      -1,    -1,    -1,    -1,   157,   544,   159,    -1,    -1,   140,
      -1,   540,   551,    -1,    -1,    -1,   147,   148,   547,   150,
     151,   152,   140,    -1,    -1,    -1,   157,    -1,   159,   147,
     148,    -1,   150,   151,   152,   140,    -1,    -1,    -1,   157,
      -1,   159,   147,   148,    -1,   150,   151,   152,   140,    -1,
      -1,    -1,   157,    -1,   159,   147,   148,    -1,   150,   151,
     152,   140,    -1,    -1,    -1,   157,    -1,   159,   147,   148,
      -1,   150,   151,   152,   140,    -1,    -1,    -1,   157,    -1,
     159,   147,   148,    -1,   150,   151,   152,   140,    -1,    -1,
      -1,   157,    -1,   159,   147,   148,    -1,   150,   151,   152,
      -1,    -1,   140,   642,   157,    -1,   159,    -1,    -1,   147,
     148,   640,   150,   151,   152,   140,    -1,    -1,    -1,   157,
      -1,   159,   147,   148,    -1,   150,   151,   152,   140,    -1,
      -1,    -1,   157,    -1,   159,   147,   148,    -1,   150,   151,
     152,   140,    -1,    -1,    -1,   157,    -1,   159,   147,   148,
      -1,   150,   151,   152,   140,    -1,    -1,    -1,   157,    -1,
     159,   147,   148,    -1,   150,   151,   152,   140,    -1,    -1,
      -1,   157,    -1,   159,   147,   148,    -1,   150,   151,   152,
     140,    -1,    -1,    -1,   157,    -1,   159,   147,   148,    -1,
     150,   151,   152,   140,    -1,    -1,    -1,   157,    -1,   159,
     147,   148,    -1,   150,   151,   152,   140,    -1,    -1,    -1,
     157,    -1,   159,   147,   148,    -1,   150,   151,   152,   140,
      -1,    -1,    -1,   157,    -1,   159,   147,   148,    -1,   150,
     151,   152,   140,    -1,    -1,    -1,   157,    -1,   159,   147,
     148,    -1,   150,   151,   152,   140,    -1,    -1,    -1,   157,
      -1,   159,   147,   148,    -1,   150,   151,   152,   140,    -1,
      -1,    -1,   157,    -1,   159,   147,   148,    -1,   150,   151,
     152,   140,    -1,    -1,    -1,   157,    -1,   159,   147,   148,
      -1,   150,   151,   152,   138,    -1,   140,    -1,   157,    -1,
     159,    -1,    -1,   147,   148,    -1,   150,   151,   152,   138,
      -1,   140,    -1,   157,    -1,    -1,    -1,    -1,   147,   148,
      -1,   150,   151,   152,   140,    -1,    -1,    -1,   157,    -1,
      -1,   147,   148,    -1,   150,   151,   152,   140,    -1,    -1,
      -1,   157,    -1,   159,   147,   148,    -1,   150,   151,   152,
     140,    -1,    -1,    -1,   157,    -1,   159,   147,   148,    -1,
     150,   151,   152,   140,    -1,    -1,    -1,   157,    -1,   159,
     147,   148,    -1,   150,   151,   152,   140,    -1,    -1,    -1,
     157,    -1,   159,   147,   148,    -1,   150,   151,   152,   140,
      -1,    -1,    -1,   157,    -1,   159,   147,   148,    -1,   150,
     151,   152,    -1,    -1,    -1,    -1,   157,    -1,   159,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,   158,   159,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
      -1,    -1,    -1,    -1,    -1,   158,   159,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,   140,    -1,    -1,    -1,    -1,
      -1,   159,   147,   148,    -1,   150,   151,   152,   140,    -1,
      -1,    -1,   157,   158,    -1,   147,   148,    -1,   150,   151,
     152,   140,    -1,    -1,    -1,   157,   158,    -1,   147,   148,
      -1,   150,   151,   152,   140,    -1,    -1,    -1,   157,   158,
      -1,   147,   148,    -1,   150,   151,   152,   140,    -1,    -1,
      -1,   157,   158,    -1,   147,   148,    -1,   150,   151,   152,
     140,    -1,    -1,    -1,   157,   158,    -1,   147,   148,    -1,
     150,   151,   152,   140,    -1,    -1,    -1,   157,   158,    -1,
     147,   148,    -1,   150,   151,   152,   140,    -1,    -1,    -1,
     157,   158,    -1,   147,   148,    -1,   150,   151,   152,    -1,
      -1,    -1,    -1,   157,   158,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,
      -1,    -1,   158,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
     158,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,    -1,    -1,    -1,    -1,    -1,   158,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,   158,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,    -1,   158,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,
      -1,    -1,   158,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
     158,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,    -1,    -1,    -1,    -1,    -1,   158,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,   158,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,    -1,   158,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,
      -1,    -1,   158,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
     158,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,    -1,    -1,    -1,    -1,    -1,   158,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,   158,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,    -1,
      -1,    -1,    -1,    -1,   158,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,
      -1,    -1,   158,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
     158,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,    -1,    -1,    -1,    -1,    -1,   158,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     140,    -1,    -1,    -1,    -1,    -1,   158,   147,   148,    -1,
     150,   151,   152,   140,    -1,    -1,    -1,   157,    -1,    -1,
     147,   148,    -1,   150,   151,   152,   140,    -1,    -1,    -1,
     157,    -1,    -1,   147,   148,    -1,   150,   151,   152,    -1,
      -1,    -1,    -1,   157,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,   138,
      -1,    -1,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   147,   148,    -1,   150,   151,   152,   153,
      -1,    -1,    -1,   157,   158,   159,   147,   148,    -1,   150,
     151,   152,   153,    -1,    -1,    -1,   157,   158,   159,   147,
     148,    -1,   150,   151,   152,   153,    -1,    -1,    -1,   157,
      -1,   159,   147,   148,    -1,   150,   151,   152,   153,    -1,
      -1,    -1,   157,    -1,   159,   147,   148,    -1,   150,   151,
     152,   153,    -1,    -1,    -1,   157,    -1,   159,   147,   148,
      -1,   150,   151,   152,   153,    -1,    -1,    -1,   157,    -1,
     159,   147,   148,    -1,   150,   151,   152,   153,    -1,    -1,
      -1,   157,    -1,   159,   147,   148,    -1,   150,   151,   152,
     153,    -1,    -1,    -1,   157,    -1,   159,   147,   148,    -1,
     150,   151,   152,   153,    -1,    -1,    -1,   157,    -1,   159,
     147,   148,    -1,   150,   151,   152,   153,    -1,    -1,    -1,
     157,    -1,   159,   147,   148,    -1,   150,   151,   152,   153,
      -1,    -1,    -1,   157,    -1,   159
  };

  const unsigned char
  CloudValueExpressionParser::yystos_[] =
  {
       0,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,   163,   164,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    17,    18,    19,
      20,    21,    22,    25,    51,    52,    53,    54,    55,    56,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   147,   150,   160,   161,
     166,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   170,
     174,   176,   178,   180,   182,   174,   170,   174,   170,   176,
     176,   178,   178,   180,   180,   182,   182,   159,   158,     0,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   170,   174,   176,   178,
     180,   176,   178,   170,   174,   176,   178,   180,   182,   182,
     147,   148,   150,   151,   152,   153,   157,    49,    50,   165,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   165,   140,   147,   148,   150,   151,   152,   157,   165,
     140,   147,   148,   150,   151,   152,   157,   165,   140,   147,
     148,   150,   151,   152,   157,   165,   137,   139,   140,   165,
     158,   159,   158,   159,   158,   159,   158,   159,   158,   159,
     158,   159,   174,   174,   169,   169,   169,   169,   169,   169,
     174,   174,   174,   174,    12,    13,    14,    15,    16,    26,
     159,    26,   159,   159,    26,   159,    26,   159,   159,   159,
     159,   159,   174,   174,   174,   170,   174,   176,   178,   180,
     170,   174,   176,   178,   180,   174,   174,   174,   170,   174,
     176,   178,   180,   170,   174,   176,   178,   180,   174,   174,
     170,   174,   170,   174,   170,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   176,   178,
     176,   178,   180,   176,   178,   176,   178,   176,   176,   178,
     180,   176,   178,   176,   178,   180,   176,   178,   180,   176,
     178,   176,   178,   176,   178,   176,   178,   159,   159,    23,
      24,   159,   159,   159,   159,   159,   159,   170,   170,   170,
     174,   174,   170,   176,   178,   180,   170,   167,   165,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   170,   174,
     176,   178,   180,   174,   176,   178,   180,   176,   178,   180,
     176,   178,   180,   174,   174,   170,   176,   178,   180,   168,
     176,   178,   180,   176,   178,   180,   176,   178,   180,   174,
     174,   170,   176,   178,   180,   168,   176,   178,   180,   176,
     178,   180,   176,   178,   180,   174,   174,   170,   176,   178,
     180,   168,   170,   174,   176,   178,   180,   182,   182,   159,
     158,   158,   158,   158,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   158,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     158,   159,   158,   159,   158,   158,   158,   158,   159,   158,
     159,   158,   158,   158,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   158,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,    57,    58,    59,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     119,    60,    61,    62,    64,    65,    68,   119,    69,   119,
     138,   138,   138,   138,   138,   174,   174,   174,   174,   174,
     170,   174,   176,   178,   180,   170,   174,   176,   178,   180,
     174,   160,   160,   160,   170,   174,   176,   178,   180,   159,
     158,   158,   158,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   174,   174,
     174,   159,   158,   158,   174,   174,   158,   158,   174,   174,
     158,   158,   174,   174,   158,   159,   174,   158,   174,   158,
     174,   159
  };

  const unsigned char
  CloudValueExpressionParser::yyr1_[] =
  {
       0,   162,   163,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   165,   165,
     166,   166,   166,   166,   166,   166,   167,   168,   169,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   171,   172,   172,   172,   172,   173,   173,   173,   173,
     173,   173,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   175,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   177,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   179,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   181,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   183,   184,   185,
     186,   187
  };

  const unsigned char
  CloudValueExpressionParser::yyr2_[] =
  {
       0,     2,     1,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     0,     0,     0,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     3,     4,     4,     4,
       4,     4,     4,     4,     5,     3,     2,     1,     6,     6,
       4,     3,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     1,     1,     3,     3,     3,     3,     3,     6,
       4,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     6,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     5,     1,     3,     3,     3,
       3,     4,     3,     4,     3,     4,     3,     4,     3,     3,
       2,     1,     1,     4,     6,     6,     6,     4,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     4,     4,     4,     4,     4,     4,     4,     6,     5,
       2,     1,     6,     6,     4,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       6,     5,     2,     1,     6,     6,     4,     3,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     3,     4,     4,
       4,     4,     6,     5,     2,     1,     6,     6,     4,     3,
       1,     1,     3,     4,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     1,     3,     8,    20,
      14,     4
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const CloudValueExpressionParser::yytname_[] =
  {
  "$end", "error", "$undefined", "\"timeline\"", "\"lookup\"",
  "\"lookup2D\"", "\"scalarID\"", "\"vectorID\"", "\"logicalID\"",
  "\"tensorID\"", "\"symmTensorID\"", "\"sphericalTensorID\"",
  "\"G_scalarID\"", "\"G_vectorID\"", "\"G_tensorID\"",
  "\"G_symmTensorID\"", "\"G_sphericalTensorID\"", "\"F_scalarID\"",
  "\"F_vectorID\"", "\"F_tensorID\"", "\"F_symmTensorID\"",
  "\"F_sphericalTensorID\"", "\"F_logicalID\"", "\"cellSetID\"",
  "\"cellZoneID\"", "\"value\"", "\"integer\"", "\"vector\"",
  "\"expression\"", "\"lexpression\"", "\"vexpression\"",
  "\"texpression\"", "\"yexpression\"", "\"hexpression\"", "START_DEFAULT",
  "START_CLOUD_SCALAR_COMMA", "START_CLOUD_SCALAR_CLOSE",
  "START_CLOUD_VECTOR_COMMA", "START_CLOUD_VECTOR_CLOSE",
  "START_CLOUD_TENSOR_COMMA", "START_CLOUD_TENSOR_CLOSE",
  "START_CLOUD_YTENSOR_COMMA", "START_CLOUD_YTENSOR_CLOSE",
  "START_CLOUD_HTENSOR_COMMA", "START_CLOUD_HTENSOR_CLOSE",
  "START_CLOUD_LOGICAL_COMMA", "START_CLOUD_LOGICAL_CLOSE",
  "START_CLOSE_ONLY", "START_COMMA_ONLY", "TOKEN_LAST_FUNCTION_CHAR",
  "TOKEN_IN_FUNCTION_CHAR", "TOKEN_VECTOR", "TOKEN_TENSOR",
  "TOKEN_SYMM_TENSOR", "TOKEN_SPHERICAL_TENSOR", "TOKEN_TRUE",
  "TOKEN_FALSE", "TOKEN_x", "TOKEN_y", "TOKEN_z", "TOKEN_xx", "TOKEN_xy",
  "TOKEN_xz", "TOKEN_yx", "TOKEN_yy", "TOKEN_yz", "TOKEN_zx", "TOKEN_zy",
  "TOKEN_zz", "TOKEN_ii", "TOKEN_fluidPhase", "TOKEN_unitTensor",
  "TOKEN_pi", "TOKEN_rand", "TOKEN_randFixed", "TOKEN_id",
  "TOKEN_randNormal", "TOKEN_randNormalFixed", "TOKEN_position",
  "TOKEN_deltaT", "TOKEN_time", "TOKEN_outputTime", "TOKEN_pow",
  "TOKEN_log", "TOKEN_exp", "TOKEN_mag", "TOKEN_magSqr", "TOKEN_sin",
  "TOKEN_cos", "TOKEN_tan", "TOKEN_min", "TOKEN_max", "TOKEN_minPosition",
  "TOKEN_maxPosition", "TOKEN_average", "TOKEN_sum", "TOKEN_sqr",
  "TOKEN_sqrt", "TOKEN_log10", "TOKEN_asin", "TOKEN_acos", "TOKEN_atan",
  "TOKEN_atan2", "TOKEN_sinh", "TOKEN_cosh", "TOKEN_tanh", "TOKEN_asinh",
  "TOKEN_acosh", "TOKEN_atanh", "TOKEN_erf", "TOKEN_erfc", "TOKEN_lgamma",
  "TOKEN_besselJ0", "TOKEN_besselJ1", "TOKEN_besselY0", "TOKEN_besselY1",
  "TOKEN_sign", "TOKEN_pos", "TOKEN_neg", "TOKEN_transpose", "TOKEN_diag",
  "TOKEN_tr", "TOKEN_dev", "TOKEN_symm", "TOKEN_skew", "TOKEN_det",
  "TOKEN_cof", "TOKEN_inv", "TOKEN_sph", "TOKEN_twoSymm", "TOKEN_dev2",
  "TOKEN_eigenValues", "TOKEN_eigenVectors", "TOKEN_cpu", "TOKEN_weight",
  "TOKEN_set", "TOKEN_zone", "'?'", "':'", "TOKEN_OR", "TOKEN_AND",
  "TOKEN_EQ", "TOKEN_NEQ", "TOKEN_LEQ", "TOKEN_GEQ", "'<'", "'>'", "'-'",
  "'+'", "'%'", "'*'", "'/'", "'&'", "'^'", "TOKEN_NEG", "TOKEN_NOT",
  "TOKEN_HODGE", "'.'", "','", "')'", "'('", "'!'", "$accept",
  "switch_start", "switch_expr", "restOfFunction", "unit",
  "vectorComponentSwitch", "tensorComponentSwitch", "eatCharactersSwitch",
  "vexp", "evaluateVectorFunction", "sreduced", "vreduced", "exp",
  "evaluateScalarFunction", "texp", "evaluateTensorFunction", "yexp",
  "evaluateSymmTensorFunction", "hexp", "evaluateSphericalTensorFunction",
  "lexp", "evaluateLogicalFunction", "vector", "tensor", "symmTensor",
  "sphericalTensor", YY_NULLPTR
  };

#if PARSERCLOUDDEBUG
  const unsigned short
  CloudValueExpressionParser::yyrline_[] =
  {
       0,   339,   339,   343,   344,   350,   356,   362,   368,   374,
     380,   386,   392,   398,   404,   410,   416,   421,   428,   429,
     431,   432,   433,   434,   435,   436,   441,   444,   447,   450,
     451,   455,   460,   465,   470,   475,   480,   485,   490,   495,
     500,   505,   510,   515,   519,   523,   527,   528,   539,   543,
     551,   559,   567,   576,   585,   590,   593,   594,   598,   602,
     606,   612,   624,   628,   632,   636,   642,   651,   660,   671,
     682,   686,   692,   693,   694,   699,   704,   709,   714,   724,
     729,   733,   737,   742,   747,   752,   757,   762,   767,   772,
     777,   782,   787,   791,   792,   796,   800,   804,   808,   812,
     816,   820,   824,   828,   833,   837,   841,   845,   849,   853,
     857,   861,   865,   869,   873,   877,   881,   885,   889,   893,
     897,   901,   905,   909,   913,   917,   921,   925,   929,   933,
     937,   941,   945,   949,   953,   957,   961,   965,   969,   973,
     977,   981,   985,   989,   993,   997,  1001,  1005,  1009,  1013,
    1017,  1021,  1025,  1029,  1033,  1037,  1042,  1051,  1054,  1059,
    1062,  1063,  1066,  1069,  1072,  1075,  1078,  1081,  1084,  1087,
    1094,  1095,  1099,  1103,  1107,  1111,  1115,  1119,  1125,  1137,
    1138,  1143,  1148,  1153,  1158,  1163,  1168,  1173,  1178,  1183,
    1188,  1193,  1198,  1203,  1208,  1213,  1218,  1223,  1228,  1233,
    1237,  1238,  1242,  1253,  1257,  1261,  1265,  1269,  1273,  1277,
    1282,  1283,  1287,  1291,  1295,  1301,  1314,  1315,  1320,  1325,
    1330,  1335,  1340,  1351,  1356,  1361,  1366,  1371,  1376,  1381,
    1385,  1386,  1390,  1394,  1398,  1402,  1406,  1410,  1414,  1418,
    1422,  1425,  1430,  1431,  1435,  1439,  1443,  1449,  1462,  1463,
    1466,  1471,  1476,  1481,  1486,  1491,  1496,  1500,  1501,  1505,
    1509,  1513,  1517,  1520,  1529,  1530,  1534,  1538,  1542,  1548,
    1561,  1562,  1563,  1568,  1572,  1576,  1581,  1586,  1591,  1600,
    1605,  1614,  1615,  1624,  1633,  1637,  1638,  1644,  1657,  1663,
    1673,  1682
  };

  // Print the state stack on the debug stream.
  void
  CloudValueExpressionParser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  CloudValueExpressionParser::yy_reduce_print_ (int yyrule)
  {
    unsigned yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // PARSERCLOUDDEBUG

  CloudValueExpressionParser::token_number_type
  CloudValueExpressionParser::yytranslate_ (int t)
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const token_number_type
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   161,     2,     2,     2,   149,   152,     2,
     160,   159,   150,   148,   158,   147,   157,   151,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   138,     2,
     145,     2,   146,   137,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   153,     2,     2,     2,     2,     2,
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
     135,   136,   139,   140,   141,   142,   143,   144,   154,   155,
     156
    };
    const unsigned user_token_number_max_ = 400;
    const token_number_type undef_token_ = 2;

    if (static_cast<int> (t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }

} // parserCloud
#line 5426 "CloudValueExpressionParser.tab.cc"

#line 1687 "../CloudValueExpressionParser.yy"


void parserCloud::CloudValueExpressionParser::error (
    const parserCloud::CloudValueExpressionParser::location_type& l,
    const std::string& m
)
{
     driver.error (l, m);
}
