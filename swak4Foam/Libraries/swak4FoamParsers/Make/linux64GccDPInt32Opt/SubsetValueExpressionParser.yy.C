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
#define yylex   parserSubsetlex

// First part of user prologue.
#line 39 "../SubsetValueExpressionParser.yy"

#include <volFields.H>

#include <functional>
#include <cmath>

    namespace Foam {
        class SubsetValueExpressionDriver;
    }

    const Foam::scalar HugeVal=1e40;

    using Foam::SubsetValueExpressionDriver;

    void yyerror(char *);

#include "swak.H"


#line 62 "SubsetValueExpressionParser.tab.cc"


#include "SubsetValueExpressionParser.tab.hh"

// Second part of user prologue.
#line 95 "../SubsetValueExpressionParser.yy"

#include "SubsetValueExpressionDriverYY.H"
#include "swakChecks.H"
#include "CommonPluginFunction.H"

namespace Foam {
    template<class T>
    autoPtr<Field<T> > SubsetValueExpressionDriver::evaluatePluginFunction(
        const word &name,
        const parserSubset::location &loc,
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


#line 116 "SubsetValueExpressionParser.tab.cc"



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
#if PARSERSUBSETDEBUG

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

#else // !PARSERSUBSETDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !PARSERSUBSETDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace parserSubset {
#line 211 "SubsetValueExpressionParser.tab.cc"


  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  SubsetValueExpressionParser::yytnamerr_ (const char *yystr)
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
  SubsetValueExpressionParser::SubsetValueExpressionParser (void * scanner_yyarg, SubsetValueExpressionDriver& driver_yyarg, int start_token_yyarg, int numberOfFunctionChars_yyarg)
    :
#if PARSERSUBSETDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      scanner (scanner_yyarg),
      driver (driver_yyarg),
      start_token (start_token_yyarg),
      numberOfFunctionChars (numberOfFunctionChars_yyarg)
  {}

  SubsetValueExpressionParser::~SubsetValueExpressionParser ()
  {}

  SubsetValueExpressionParser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/

  // basic_symbol.
#if 201103L <= YY_CPLUSPLUS
  template <typename Base>
  SubsetValueExpressionParser::basic_symbol<Base>::basic_symbol (basic_symbol&& that)
    : Base (std::move (that))
    , value (std::move (that.value))
    , location (std::move (that.location))
  {}
#endif

  template <typename Base>
  SubsetValueExpressionParser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value (that.value)
    , location (that.location)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  SubsetValueExpressionParser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_MOVE_REF (location_type) l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  SubsetValueExpressionParser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (semantic_type) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  bool
  SubsetValueExpressionParser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  void
  SubsetValueExpressionParser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    value = YY_MOVE (s.value);
    location = YY_MOVE (s.location);
  }

  // by_type.
  SubsetValueExpressionParser::by_type::by_type ()
    : type (empty_symbol)
  {}

#if 201103L <= YY_CPLUSPLUS
  SubsetValueExpressionParser::by_type::by_type (by_type&& that)
    : type (that.type)
  {
    that.clear ();
  }
#endif

  SubsetValueExpressionParser::by_type::by_type (const by_type& that)
    : type (that.type)
  {}

  SubsetValueExpressionParser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  void
  SubsetValueExpressionParser::by_type::clear ()
  {
    type = empty_symbol;
  }

  void
  SubsetValueExpressionParser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  int
  SubsetValueExpressionParser::by_type::type_get () const YY_NOEXCEPT
  {
    return type;
  }


  // by_state.
  SubsetValueExpressionParser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  SubsetValueExpressionParser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  SubsetValueExpressionParser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  SubsetValueExpressionParser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  SubsetValueExpressionParser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  SubsetValueExpressionParser::symbol_number_type
  SubsetValueExpressionParser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  SubsetValueExpressionParser::stack_symbol_type::stack_symbol_type ()
  {}

  SubsetValueExpressionParser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.value), YY_MOVE (that.location))
  {
#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  SubsetValueExpressionParser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.value), YY_MOVE (that.location))
  {
    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  SubsetValueExpressionParser::stack_symbol_type&
  SubsetValueExpressionParser::stack_symbol_type::operator= (stack_symbol_type& that)
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
  SubsetValueExpressionParser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    switch (yysym.type_get ())
    {
      case 3: // "timeline"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 448 "SubsetValueExpressionParser.tab.cc"
        break;

      case 4: // "lookup"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 454 "SubsetValueExpressionParser.tab.cc"
        break;

      case 5: // "lookup2D"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 460 "SubsetValueExpressionParser.tab.cc"
        break;

      case 6: // "scalarID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 466 "SubsetValueExpressionParser.tab.cc"
        break;

      case 7: // "vectorID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 472 "SubsetValueExpressionParser.tab.cc"
        break;

      case 8: // "logicalID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 478 "SubsetValueExpressionParser.tab.cc"
        break;

      case 9: // "tensorID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 484 "SubsetValueExpressionParser.tab.cc"
        break;

      case 10: // "symmTensorID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 490 "SubsetValueExpressionParser.tab.cc"
        break;

      case 11: // "sphericalTensorID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 496 "SubsetValueExpressionParser.tab.cc"
        break;

      case 12: // "pointScalarID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 502 "SubsetValueExpressionParser.tab.cc"
        break;

      case 13: // "pointVectorID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 508 "SubsetValueExpressionParser.tab.cc"
        break;

      case 14: // "pointLogicalID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 514 "SubsetValueExpressionParser.tab.cc"
        break;

      case 15: // "pointTensorID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 520 "SubsetValueExpressionParser.tab.cc"
        break;

      case 16: // "pointSymmTensorID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 526 "SubsetValueExpressionParser.tab.cc"
        break;

      case 17: // "pointSphericalTensorID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 532 "SubsetValueExpressionParser.tab.cc"
        break;

      case 18: // "F_scalarID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 538 "SubsetValueExpressionParser.tab.cc"
        break;

      case 19: // "F_pointScalarID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 544 "SubsetValueExpressionParser.tab.cc"
        break;

      case 20: // "F_vectorID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 550 "SubsetValueExpressionParser.tab.cc"
        break;

      case 21: // "F_pointVectorID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 556 "SubsetValueExpressionParser.tab.cc"
        break;

      case 22: // "F_tensorID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 562 "SubsetValueExpressionParser.tab.cc"
        break;

      case 23: // "F_pointTensorID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 568 "SubsetValueExpressionParser.tab.cc"
        break;

      case 24: // "F_symmTensorID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 574 "SubsetValueExpressionParser.tab.cc"
        break;

      case 25: // "F_pointSymmTensorID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 580 "SubsetValueExpressionParser.tab.cc"
        break;

      case 26: // "F_sphericalTensorID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 586 "SubsetValueExpressionParser.tab.cc"
        break;

      case 27: // "F_pointSphericalTensorID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 592 "SubsetValueExpressionParser.tab.cc"
        break;

      case 28: // "F_logicalID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 598 "SubsetValueExpressionParser.tab.cc"
        break;

      case 29: // "F_pointLogicalID"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 604 "SubsetValueExpressionParser.tab.cc"
        break;

      case 30: // "value"
#line 358 "../SubsetValueExpressionParser.yy"
        {}
#line 610 "SubsetValueExpressionParser.tab.cc"
        break;

      case 31: // "integer"
#line 358 "../SubsetValueExpressionParser.yy"
        {}
#line 616 "SubsetValueExpressionParser.tab.cc"
        break;

      case 32: // "vector"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.vec); }
#line 622 "SubsetValueExpressionParser.tab.cc"
        break;

      case 33: // "sexpression"
#line 358 "../SubsetValueExpressionParser.yy"
        {}
#line 628 "SubsetValueExpressionParser.tab.cc"
        break;

      case 34: // "expression"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.sfield); }
#line 634 "SubsetValueExpressionParser.tab.cc"
        break;

      case 35: // "pexpression"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.sfield); }
#line 640 "SubsetValueExpressionParser.tab.cc"
        break;

      case 36: // "lexpression"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.lfield); }
#line 646 "SubsetValueExpressionParser.tab.cc"
        break;

      case 37: // "plexpression"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.lfield); }
#line 652 "SubsetValueExpressionParser.tab.cc"
        break;

      case 38: // "vexpression"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 658 "SubsetValueExpressionParser.tab.cc"
        break;

      case 39: // "pvexpression"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 664 "SubsetValueExpressionParser.tab.cc"
        break;

      case 40: // "texpression"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 670 "SubsetValueExpressionParser.tab.cc"
        break;

      case 41: // "ptexpression"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 676 "SubsetValueExpressionParser.tab.cc"
        break;

      case 42: // "yexpression"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 682 "SubsetValueExpressionParser.tab.cc"
        break;

      case 43: // "pyexpression"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 688 "SubsetValueExpressionParser.tab.cc"
        break;

      case 44: // "hexpression"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 694 "SubsetValueExpressionParser.tab.cc"
        break;

      case 45: // "phexpression"
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 700 "SubsetValueExpressionParser.tab.cc"
        break;

      case 200: // vexp
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 706 "SubsetValueExpressionParser.tab.cc"
        break;

      case 201: // evaluateVectorFunction
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 712 "SubsetValueExpressionParser.tab.cc"
        break;

      case 202: // scalar
#line 358 "../SubsetValueExpressionParser.yy"
        {}
#line 718 "SubsetValueExpressionParser.tab.cc"
        break;

      case 203: // sreduced
#line 358 "../SubsetValueExpressionParser.yy"
        {}
#line 724 "SubsetValueExpressionParser.tab.cc"
        break;

      case 204: // vreduced
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.vec); }
#line 730 "SubsetValueExpressionParser.tab.cc"
        break;

      case 205: // exp
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.sfield); }
#line 736 "SubsetValueExpressionParser.tab.cc"
        break;

      case 206: // evaluateScalarFunction
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.sfield); }
#line 742 "SubsetValueExpressionParser.tab.cc"
        break;

      case 207: // texp
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 748 "SubsetValueExpressionParser.tab.cc"
        break;

      case 208: // evaluateTensorFunction
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 754 "SubsetValueExpressionParser.tab.cc"
        break;

      case 209: // yexp
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 760 "SubsetValueExpressionParser.tab.cc"
        break;

      case 210: // evaluateSymmTensorFunction
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 766 "SubsetValueExpressionParser.tab.cc"
        break;

      case 211: // hexp
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 772 "SubsetValueExpressionParser.tab.cc"
        break;

      case 212: // evaluateSphericalTensorFunction
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 778 "SubsetValueExpressionParser.tab.cc"
        break;

      case 213: // lexp
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.lfield); }
#line 784 "SubsetValueExpressionParser.tab.cc"
        break;

      case 214: // evaluateLogicalFunction
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.lfield); }
#line 790 "SubsetValueExpressionParser.tab.cc"
        break;

      case 215: // vector
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 796 "SubsetValueExpressionParser.tab.cc"
        break;

      case 216: // tensor
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 802 "SubsetValueExpressionParser.tab.cc"
        break;

      case 217: // symmTensor
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 808 "SubsetValueExpressionParser.tab.cc"
        break;

      case 218: // sphericalTensor
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 814 "SubsetValueExpressionParser.tab.cc"
        break;

      case 219: // pvexp
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 820 "SubsetValueExpressionParser.tab.cc"
        break;

      case 220: // evaluatePointVectorFunction
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 826 "SubsetValueExpressionParser.tab.cc"
        break;

      case 221: // pexp
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.sfield); }
#line 832 "SubsetValueExpressionParser.tab.cc"
        break;

      case 222: // evaluatePointScalarFunction
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.sfield); }
#line 838 "SubsetValueExpressionParser.tab.cc"
        break;

      case 223: // ptexp
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 844 "SubsetValueExpressionParser.tab.cc"
        break;

      case 224: // evaluatePointTensorFunction
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 850 "SubsetValueExpressionParser.tab.cc"
        break;

      case 225: // pyexp
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 856 "SubsetValueExpressionParser.tab.cc"
        break;

      case 226: // evaluatePointSymmTensorFunction
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 862 "SubsetValueExpressionParser.tab.cc"
        break;

      case 227: // phexp
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 868 "SubsetValueExpressionParser.tab.cc"
        break;

      case 228: // evaluatePointSphericalTensorFunction
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 874 "SubsetValueExpressionParser.tab.cc"
        break;

      case 229: // plexp
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.lfield); }
#line 880 "SubsetValueExpressionParser.tab.cc"
        break;

      case 230: // evaluatePointLogicalFunction
#line 356 "../SubsetValueExpressionParser.yy"
        { delete (yysym.value.lfield); }
#line 886 "SubsetValueExpressionParser.tab.cc"
        break;

      default:
        break;
    }
  }

#if PARSERSUBSETDEBUG
  template <typename Base>
  void
  SubsetValueExpressionParser::yy_print_ (std::ostream& yyo,
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
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 917 "SubsetValueExpressionParser.tab.cc"
        break;

      case 4: // "lookup"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 923 "SubsetValueExpressionParser.tab.cc"
        break;

      case 5: // "lookup2D"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 929 "SubsetValueExpressionParser.tab.cc"
        break;

      case 6: // "scalarID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 935 "SubsetValueExpressionParser.tab.cc"
        break;

      case 7: // "vectorID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 941 "SubsetValueExpressionParser.tab.cc"
        break;

      case 8: // "logicalID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 947 "SubsetValueExpressionParser.tab.cc"
        break;

      case 9: // "tensorID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 953 "SubsetValueExpressionParser.tab.cc"
        break;

      case 10: // "symmTensorID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 959 "SubsetValueExpressionParser.tab.cc"
        break;

      case 11: // "sphericalTensorID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 965 "SubsetValueExpressionParser.tab.cc"
        break;

      case 12: // "pointScalarID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 971 "SubsetValueExpressionParser.tab.cc"
        break;

      case 13: // "pointVectorID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 977 "SubsetValueExpressionParser.tab.cc"
        break;

      case 14: // "pointLogicalID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 983 "SubsetValueExpressionParser.tab.cc"
        break;

      case 15: // "pointTensorID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 989 "SubsetValueExpressionParser.tab.cc"
        break;

      case 16: // "pointSymmTensorID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 995 "SubsetValueExpressionParser.tab.cc"
        break;

      case 17: // "pointSphericalTensorID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1001 "SubsetValueExpressionParser.tab.cc"
        break;

      case 18: // "F_scalarID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1007 "SubsetValueExpressionParser.tab.cc"
        break;

      case 19: // "F_pointScalarID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1013 "SubsetValueExpressionParser.tab.cc"
        break;

      case 20: // "F_vectorID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1019 "SubsetValueExpressionParser.tab.cc"
        break;

      case 21: // "F_pointVectorID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1025 "SubsetValueExpressionParser.tab.cc"
        break;

      case 22: // "F_tensorID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1031 "SubsetValueExpressionParser.tab.cc"
        break;

      case 23: // "F_pointTensorID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1037 "SubsetValueExpressionParser.tab.cc"
        break;

      case 24: // "F_symmTensorID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1043 "SubsetValueExpressionParser.tab.cc"
        break;

      case 25: // "F_pointSymmTensorID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1049 "SubsetValueExpressionParser.tab.cc"
        break;

      case 26: // "F_sphericalTensorID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1055 "SubsetValueExpressionParser.tab.cc"
        break;

      case 27: // "F_pointSphericalTensorID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1061 "SubsetValueExpressionParser.tab.cc"
        break;

      case 28: // "F_logicalID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1067 "SubsetValueExpressionParser.tab.cc"
        break;

      case 29: // "F_pointLogicalID"
#line 360 "../SubsetValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1073 "SubsetValueExpressionParser.tab.cc"
        break;

      case 30: // "value"
#line 366 "../SubsetValueExpressionParser.yy"
        { debug_stream () << (yysym.value.val); }
#line 1079 "SubsetValueExpressionParser.tab.cc"
        break;

      case 31: // "integer"
#line 366 "../SubsetValueExpressionParser.yy"
        { debug_stream () << (yysym.value.integer); }
#line 1085 "SubsetValueExpressionParser.tab.cc"
        break;

      case 32: // "vector"
#line 361 "../SubsetValueExpressionParser.yy"
        {
    Foam::OStringStream buff;
    buff << *(yysym.value.vec);
    debug_stream () << buff.str().c_str();
}
#line 1095 "SubsetValueExpressionParser.tab.cc"
        break;

      case 33: // "sexpression"
#line 366 "../SubsetValueExpressionParser.yy"
        { debug_stream () << (yysym.value.val); }
#line 1101 "SubsetValueExpressionParser.tab.cc"
        break;

      case 34: // "expression"
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.sfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1110 "SubsetValueExpressionParser.tab.cc"
        break;

      case 35: // "pexpression"
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.sfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1119 "SubsetValueExpressionParser.tab.cc"
        break;

      case 36: // "lexpression"
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.lfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1128 "SubsetValueExpressionParser.tab.cc"
        break;

      case 37: // "plexpression"
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.lfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1137 "SubsetValueExpressionParser.tab.cc"
        break;

      case 38: // "vexpression"
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1146 "SubsetValueExpressionParser.tab.cc"
        break;

      case 39: // "pvexpression"
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1155 "SubsetValueExpressionParser.tab.cc"
        break;

      case 40: // "texpression"
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1164 "SubsetValueExpressionParser.tab.cc"
        break;

      case 41: // "ptexpression"
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1173 "SubsetValueExpressionParser.tab.cc"
        break;

      case 42: // "yexpression"
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1182 "SubsetValueExpressionParser.tab.cc"
        break;

      case 43: // "pyexpression"
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1191 "SubsetValueExpressionParser.tab.cc"
        break;

      case 44: // "hexpression"
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1200 "SubsetValueExpressionParser.tab.cc"
        break;

      case 45: // "phexpression"
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1209 "SubsetValueExpressionParser.tab.cc"
        break;

      case 200: // vexp
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1218 "SubsetValueExpressionParser.tab.cc"
        break;

      case 201: // evaluateVectorFunction
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1227 "SubsetValueExpressionParser.tab.cc"
        break;

      case 202: // scalar
#line 366 "../SubsetValueExpressionParser.yy"
        { debug_stream () << (yysym.value.val); }
#line 1233 "SubsetValueExpressionParser.tab.cc"
        break;

      case 203: // sreduced
#line 366 "../SubsetValueExpressionParser.yy"
        { debug_stream () << (yysym.value.val); }
#line 1239 "SubsetValueExpressionParser.tab.cc"
        break;

      case 204: // vreduced
#line 361 "../SubsetValueExpressionParser.yy"
        {
    Foam::OStringStream buff;
    buff << *(yysym.value.vec);
    debug_stream () << buff.str().c_str();
}
#line 1249 "SubsetValueExpressionParser.tab.cc"
        break;

      case 205: // exp
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.sfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1258 "SubsetValueExpressionParser.tab.cc"
        break;

      case 206: // evaluateScalarFunction
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.sfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1267 "SubsetValueExpressionParser.tab.cc"
        break;

      case 207: // texp
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1276 "SubsetValueExpressionParser.tab.cc"
        break;

      case 208: // evaluateTensorFunction
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1285 "SubsetValueExpressionParser.tab.cc"
        break;

      case 209: // yexp
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1294 "SubsetValueExpressionParser.tab.cc"
        break;

      case 210: // evaluateSymmTensorFunction
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1303 "SubsetValueExpressionParser.tab.cc"
        break;

      case 211: // hexp
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1312 "SubsetValueExpressionParser.tab.cc"
        break;

      case 212: // evaluateSphericalTensorFunction
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1321 "SubsetValueExpressionParser.tab.cc"
        break;

      case 213: // lexp
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.lfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1330 "SubsetValueExpressionParser.tab.cc"
        break;

      case 214: // evaluateLogicalFunction
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.lfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1339 "SubsetValueExpressionParser.tab.cc"
        break;

      case 215: // vector
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1348 "SubsetValueExpressionParser.tab.cc"
        break;

      case 216: // tensor
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1357 "SubsetValueExpressionParser.tab.cc"
        break;

      case 217: // symmTensor
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1366 "SubsetValueExpressionParser.tab.cc"
        break;

      case 218: // sphericalTensor
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1375 "SubsetValueExpressionParser.tab.cc"
        break;

      case 219: // pvexp
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1384 "SubsetValueExpressionParser.tab.cc"
        break;

      case 220: // evaluatePointVectorFunction
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1393 "SubsetValueExpressionParser.tab.cc"
        break;

      case 221: // pexp
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.sfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1402 "SubsetValueExpressionParser.tab.cc"
        break;

      case 222: // evaluatePointScalarFunction
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.sfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1411 "SubsetValueExpressionParser.tab.cc"
        break;

      case 223: // ptexp
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1420 "SubsetValueExpressionParser.tab.cc"
        break;

      case 224: // evaluatePointTensorFunction
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1429 "SubsetValueExpressionParser.tab.cc"
        break;

      case 225: // pyexp
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1438 "SubsetValueExpressionParser.tab.cc"
        break;

      case 226: // evaluatePointSymmTensorFunction
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1447 "SubsetValueExpressionParser.tab.cc"
        break;

      case 227: // phexp
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1456 "SubsetValueExpressionParser.tab.cc"
        break;

      case 228: // evaluatePointSphericalTensorFunction
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1465 "SubsetValueExpressionParser.tab.cc"
        break;

      case 229: // plexp
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.lfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1474 "SubsetValueExpressionParser.tab.cc"
        break;

      case 230: // evaluatePointLogicalFunction
#line 367 "../SubsetValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.lfield);
        //        << Foam::pTraits<(*$$)::cmptType>::typeName << ">";
}
#line 1483 "SubsetValueExpressionParser.tab.cc"
        break;

      default:
        break;
    }
    yyo << ')';
  }
#endif

  void
  SubsetValueExpressionParser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  SubsetValueExpressionParser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  SubsetValueExpressionParser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if PARSERSUBSETDEBUG
  std::ostream&
  SubsetValueExpressionParser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  SubsetValueExpressionParser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  SubsetValueExpressionParser::debug_level_type
  SubsetValueExpressionParser::debug_level () const
  {
    return yydebug_;
  }

  void
  SubsetValueExpressionParser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // PARSERSUBSETDEBUG

  SubsetValueExpressionParser::state_type
  SubsetValueExpressionParser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  SubsetValueExpressionParser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  SubsetValueExpressionParser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  SubsetValueExpressionParser::operator() ()
  {
    return parse ();
  }

  int
  SubsetValueExpressionParser::parse ()
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
#line 72 "../SubsetValueExpressionParser.yy"
{
	     // Initialize the initial location.
	     //     @$.begin.filename = @$.end.filename = &driver.file;
    numberOfFunctionChars=0;
}

#line 1609 "SubsetValueExpressionParser.tab.cc"


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
#line 377 "../SubsetValueExpressionParser.yy"
    { driver.parserLastPos()=yystack_[0].location.end.column; }
#line 1734 "SubsetValueExpressionParser.tab.cc"
    break;

  case 4:
#line 382 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::scalar>((yystack_[1].value.sfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1744 "SubsetValueExpressionParser.tab.cc"
    break;

  case 5:
#line 388 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::scalar>((yystack_[1].value.sfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1754 "SubsetValueExpressionParser.tab.cc"
    break;

  case 6:
#line 394 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::scalar>((yystack_[1].value.sfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1764 "SubsetValueExpressionParser.tab.cc"
    break;

  case 7:
#line 400 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::scalar>((yystack_[1].value.sfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1774 "SubsetValueExpressionParser.tab.cc"
    break;

  case 8:
#line 406 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::vector>((yystack_[1].value.vfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1784 "SubsetValueExpressionParser.tab.cc"
    break;

  case 9:
#line 412 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::vector>((yystack_[1].value.vfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1794 "SubsetValueExpressionParser.tab.cc"
    break;

  case 10:
#line 418 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::vector>((yystack_[1].value.vfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1804 "SubsetValueExpressionParser.tab.cc"
    break;

  case 11:
#line 424 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::vector>((yystack_[1].value.vfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1814 "SubsetValueExpressionParser.tab.cc"
    break;

  case 12:
#line 430 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::tensor>((yystack_[1].value.tfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1824 "SubsetValueExpressionParser.tab.cc"
    break;

  case 13:
#line 436 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::tensor>((yystack_[1].value.tfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1834 "SubsetValueExpressionParser.tab.cc"
    break;

  case 14:
#line 442 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::tensor>((yystack_[1].value.tfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1844 "SubsetValueExpressionParser.tab.cc"
    break;

  case 15:
#line 448 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::tensor>((yystack_[1].value.tfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1854 "SubsetValueExpressionParser.tab.cc"
    break;

  case 16:
#line 454 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::symmTensor>((yystack_[1].value.yfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1864 "SubsetValueExpressionParser.tab.cc"
    break;

  case 17:
#line 460 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::symmTensor>((yystack_[1].value.yfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1874 "SubsetValueExpressionParser.tab.cc"
    break;

  case 18:
#line 466 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::symmTensor>((yystack_[1].value.yfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1884 "SubsetValueExpressionParser.tab.cc"
    break;

  case 19:
#line 472 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::symmTensor>((yystack_[1].value.yfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1894 "SubsetValueExpressionParser.tab.cc"
    break;

  case 20:
#line 478 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::sphericalTensor>((yystack_[1].value.hfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1904 "SubsetValueExpressionParser.tab.cc"
    break;

  case 21:
#line 484 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::sphericalTensor>((yystack_[1].value.hfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1914 "SubsetValueExpressionParser.tab.cc"
    break;

  case 22:
#line 490 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::sphericalTensor>((yystack_[1].value.hfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1924 "SubsetValueExpressionParser.tab.cc"
    break;

  case 23:
#line 496 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<Foam::sphericalTensor>((yystack_[1].value.hfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1934 "SubsetValueExpressionParser.tab.cc"
    break;

  case 24:
#line 502 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<bool>((yystack_[1].value.lfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1944 "SubsetValueExpressionParser.tab.cc"
    break;

  case 25:
#line 508 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<bool>((yystack_[1].value.lfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1954 "SubsetValueExpressionParser.tab.cc"
    break;

  case 26:
#line 514 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<bool>((yystack_[1].value.lfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1964 "SubsetValueExpressionParser.tab.cc"
    break;

  case 27:
#line 520 "../SubsetValueExpressionParser.yy"
    {
                      driver.setResult<bool>((yystack_[1].value.lfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1974 "SubsetValueExpressionParser.tab.cc"
    break;

  case 28:
#line 526 "../SubsetValueExpressionParser.yy"
    {
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1983 "SubsetValueExpressionParser.tab.cc"
    break;

  case 29:
#line 531 "../SubsetValueExpressionParser.yy"
    {
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1992 "SubsetValueExpressionParser.tab.cc"
    break;

  case 32:
#line 540 "../SubsetValueExpressionParser.yy"
    { driver.setResult<Foam::scalar>((yystack_[0].value.sfield));  }
#line 1998 "SubsetValueExpressionParser.tab.cc"
    break;

  case 33:
#line 541 "../SubsetValueExpressionParser.yy"
    { driver.setResult<Foam::vector>((yystack_[0].value.vfield));  }
#line 2004 "SubsetValueExpressionParser.tab.cc"
    break;

  case 34:
#line 542 "../SubsetValueExpressionParser.yy"
    { driver.setResult<bool>((yystack_[0].value.lfield)); }
#line 2010 "SubsetValueExpressionParser.tab.cc"
    break;

  case 35:
#line 543 "../SubsetValueExpressionParser.yy"
    { driver.setResult<Foam::scalar>((yystack_[0].value.sfield),true);  }
#line 2016 "SubsetValueExpressionParser.tab.cc"
    break;

  case 36:
#line 544 "../SubsetValueExpressionParser.yy"
    { driver.setResult<Foam::vector>((yystack_[0].value.vfield),true);  }
#line 2022 "SubsetValueExpressionParser.tab.cc"
    break;

  case 37:
#line 545 "../SubsetValueExpressionParser.yy"
    { driver.setResult<bool>((yystack_[0].value.lfield),true); }
#line 2028 "SubsetValueExpressionParser.tab.cc"
    break;

  case 38:
#line 546 "../SubsetValueExpressionParser.yy"
    { driver.setResult<Foam::tensor>((yystack_[0].value.tfield));  }
#line 2034 "SubsetValueExpressionParser.tab.cc"
    break;

  case 39:
#line 547 "../SubsetValueExpressionParser.yy"
    { driver.setResult<Foam::tensor>((yystack_[0].value.tfield),true);  }
#line 2040 "SubsetValueExpressionParser.tab.cc"
    break;

  case 40:
#line 548 "../SubsetValueExpressionParser.yy"
    { driver.setResult<Foam::symmTensor>((yystack_[0].value.yfield));  }
#line 2046 "SubsetValueExpressionParser.tab.cc"
    break;

  case 41:
#line 549 "../SubsetValueExpressionParser.yy"
    {
            driver.setResult<Foam::symmTensor>((yystack_[0].value.yfield),true);
          }
#line 2054 "SubsetValueExpressionParser.tab.cc"
    break;

  case 42:
#line 552 "../SubsetValueExpressionParser.yy"
    {
            driver.setResult<Foam::sphericalTensor>((yystack_[0].value.hfield));
          }
#line 2062 "SubsetValueExpressionParser.tab.cc"
    break;

  case 43:
#line 555 "../SubsetValueExpressionParser.yy"
    {
            driver.setResult<Foam::sphericalTensor>((yystack_[0].value.hfield),true);
          }
#line 2070 "SubsetValueExpressionParser.tab.cc"
    break;

  case 44:
#line 560 "../SubsetValueExpressionParser.yy"
    { driver.startVectorComponent(); }
#line 2076 "SubsetValueExpressionParser.tab.cc"
    break;

  case 45:
#line 563 "../SubsetValueExpressionParser.yy"
    { driver.startTensorComponent(); }
#line 2082 "SubsetValueExpressionParser.tab.cc"
    break;

  case 46:
#line 566 "../SubsetValueExpressionParser.yy"
    { driver.startEatCharacters(); }
#line 2088 "SubsetValueExpressionParser.tab.cc"
    break;

  case 47:
#line 569 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.vfield) = (yystack_[0].value.vfield); }
#line 2094 "SubsetValueExpressionParser.tab.cc"
    break;

  case 48:
#line 570 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.makeField<Foam::vector>(*(yystack_[0].value.vec)).ptr();
            delete (yystack_[0].value.vec);
          }
#line 2103 "SubsetValueExpressionParser.tab.cc"
    break;

  case 49:
#line 574 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) + *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 2113 "SubsetValueExpressionParser.tab.cc"
    break;

  case 50:
#line 579 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.vfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.vfield);
          }
#line 2123 "SubsetValueExpressionParser.tab.cc"
    break;

  case 51:
#line 584 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.sfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.sfield);
          }
#line 2133 "SubsetValueExpressionParser.tab.cc"
    break;

  case 52:
#line 589 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.vfield);
          }
#line 2143 "SubsetValueExpressionParser.tab.cc"
    break;

  case 53:
#line 594 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.tfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.tfield);
          }
#line 2153 "SubsetValueExpressionParser.tab.cc"
    break;

  case 54:
#line 599 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.yfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.vfield);
          }
#line 2163 "SubsetValueExpressionParser.tab.cc"
    break;

  case 55:
#line 604 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.yfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) & *(yystack_[0].value.yfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.yfield);
          }
#line 2173 "SubsetValueExpressionParser.tab.cc"
    break;

  case 56:
#line 609 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.vfield);
          }
#line 2183 "SubsetValueExpressionParser.tab.cc"
    break;

  case 57:
#line 614 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.hfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.hfield);
          }
#line 2193 "SubsetValueExpressionParser.tab.cc"
    break;

  case 58:
#line 619 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.sfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.sfield);
          }
#line 2203 "SubsetValueExpressionParser.tab.cc"
    break;

  case 59:
#line 624 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) ^ *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 2213 "SubsetValueExpressionParser.tab.cc"
    break;

  case 60:
#line 629 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) - *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 2223 "SubsetValueExpressionParser.tab.cc"
    break;

  case 61:
#line 634 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(-*(yystack_[0].value.vfield));
            delete (yystack_[0].value.vfield);
          }
#line 2232 "SubsetValueExpressionParser.tab.cc"
    break;

  case 62:
#line 638 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(*(*(yystack_[0].value.tfield)));
            delete (yystack_[0].value.tfield);
          }
#line 2241 "SubsetValueExpressionParser.tab.cc"
    break;

  case 63:
#line 642 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(*(*(yystack_[0].value.yfield)));
            delete (yystack_[0].value.yfield);
          }
#line 2250 "SubsetValueExpressionParser.tab.cc"
    break;

  case 64:
#line 646 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.vfield) = (yystack_[1].value.vfield); }
#line 2256 "SubsetValueExpressionParser.tab.cc"
    break;

  case 65:
#line 647 "../SubsetValueExpressionParser.yy"
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
#line 2272 "SubsetValueExpressionParser.tab.cc"
    break;

  case 66:
#line 658 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(Foam::eigenValues(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 2281 "SubsetValueExpressionParser.tab.cc"
    break;

  case 67:
#line 662 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[3].value.tfield)->component(Foam::tensor::XX)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::XY)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::XZ)()
            ).ptr();
            delete (yystack_[3].value.tfield);
          }
#line 2294 "SubsetValueExpressionParser.tab.cc"
    break;

  case 68:
#line 670 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[3].value.tfield)->component(Foam::tensor::YX)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::YY)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::YZ)()
            ).ptr();
            delete (yystack_[3].value.tfield);
          }
#line 2307 "SubsetValueExpressionParser.tab.cc"
    break;

  case 69:
#line 678 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[3].value.tfield)->component(Foam::tensor::ZX)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::ZY)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::ZZ)()
            ).ptr();
            delete (yystack_[3].value.tfield);
          }
#line 2320 "SubsetValueExpressionParser.tab.cc"
    break;

  case 70:
#line 686 "../SubsetValueExpressionParser.yy"
    {
            //            $$ = new Foam::vectorField( Foam::diag(*$3) ); // not implemented?
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[1].value.tfield)->component(Foam::tensor::XX)(),
                (yystack_[1].value.tfield)->component(Foam::tensor::YY)(),
                (yystack_[1].value.tfield)->component(Foam::tensor::ZZ)()
            ).ptr();
            delete (yystack_[1].value.tfield);
          }
#line 2334 "SubsetValueExpressionParser.tab.cc"
    break;

  case 71:
#line 695 "../SubsetValueExpressionParser.yy"
    {
            //            $$ = new Foam::vectorField( Foam::diag(*$3) ); // not implemented?
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[1].value.yfield)->component(Foam::symmTensor::XX)(),
                (yystack_[1].value.yfield)->component(Foam::symmTensor::YY)(),
                (yystack_[1].value.yfield)->component(Foam::symmTensor::ZZ)()
            ).ptr();
            delete (yystack_[1].value.yfield);
          }
#line 2348 "SubsetValueExpressionParser.tab.cc"
    break;

  case 72:
#line 704 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.vfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = driver.doConditional(*(yystack_[4].value.lfield),*(yystack_[2].value.vfield),*(yystack_[0].value.vfield)).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 2358 "SubsetValueExpressionParser.tab.cc"
    break;

  case 73:
#line 709 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.makePositionField().ptr();
          }
#line 2366 "SubsetValueExpressionParser.tab.cc"
    break;

  case 74:
#line 712 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.makeFaceNormalField().ptr();
          }
#line 2374 "SubsetValueExpressionParser.tab.cc"
    break;

  case 75:
#line 715 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.makeFaceAreaField().ptr();
          }
#line 2382 "SubsetValueExpressionParser.tab.cc"
    break;

  case 76:
#line 722 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.vfield) = (yystack_[1].value.vfield); }
#line 2388 "SubsetValueExpressionParser.tab.cc"
    break;

  case 77:
#line 723 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield)=driver.getVectorField(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
                    }
#line 2397 "SubsetValueExpressionParser.tab.cc"
    break;

  case 78:
#line 727 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield)=driver.getVectorField(*(yystack_[1].value.name),true).ptr();
            delete (yystack_[1].value.name);
                    }
#line 2406 "SubsetValueExpressionParser.tab.cc"
    break;

  case 79:
#line 731 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = Foam::min(*(yystack_[3].value.vfield),*(yystack_[1].value.vfield)).ptr();
            delete (yystack_[3].value.vfield); delete (yystack_[1].value.vfield);
          }
#line 2415 "SubsetValueExpressionParser.tab.cc"
    break;

  case 80:
#line 735 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = Foam::max(*(yystack_[3].value.vfield),*(yystack_[1].value.vfield)).ptr();
            delete (yystack_[3].value.vfield); delete (yystack_[1].value.vfield);
          }
#line 2424 "SubsetValueExpressionParser.tab.cc"
    break;

  case 81:
#line 742 "../SubsetValueExpressionParser.yy"
    {
      (yylhs.value.vfield)=driver.evaluatePluginFunction<Foam::vector>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 2438 "SubsetValueExpressionParser.tab.cc"
    break;

  case 82:
#line 753 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.val) = (yystack_[0].value.val); }
#line 2444 "SubsetValueExpressionParser.tab.cc"
    break;

  case 83:
#line 754 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.val) = -(yystack_[0].value.val); }
#line 2450 "SubsetValueExpressionParser.tab.cc"
    break;

  case 84:
#line 757 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.val) = Foam::gMin(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 2459 "SubsetValueExpressionParser.tab.cc"
    break;

  case 85:
#line 761 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.val) = Foam::gMax(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 2468 "SubsetValueExpressionParser.tab.cc"
    break;

  case 86:
#line 765 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.val) = Foam::gMin(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 2477 "SubsetValueExpressionParser.tab.cc"
    break;

  case 87:
#line 769 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.val) = Foam::gMax(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 2486 "SubsetValueExpressionParser.tab.cc"
    break;

  case 88:
#line 773 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.val) = Foam::gSum(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 2495 "SubsetValueExpressionParser.tab.cc"
    break;

  case 89:
#line 777 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.val) = Foam::gSum(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 2504 "SubsetValueExpressionParser.tab.cc"
    break;

  case 90:
#line 781 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.val) = Foam::gAverage(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 2513 "SubsetValueExpressionParser.tab.cc"
    break;

  case 91:
#line 785 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.val) = Foam::gAverage(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 2522 "SubsetValueExpressionParser.tab.cc"
    break;

  case 92:
#line 791 "../SubsetValueExpressionParser.yy"
    {
          Foam::vector tmp(HugeVal,HugeVal,HugeVal);
            if(((yystack_[1].value.vfield)->size())>0) {
                tmp=Foam::min(*(yystack_[1].value.vfield));
            }
            Foam::reduce(tmp,Foam::minOp<Foam::vector>());
            (yylhs.value.vec) = new Foam::vector(tmp);
            delete (yystack_[1].value.vfield);
          }
#line 2536 "SubsetValueExpressionParser.tab.cc"
    break;

  case 93:
#line 800 "../SubsetValueExpressionParser.yy"
    {
            Foam::vector tmp(-HugeVal,-HugeVal,-HugeVal);
            if(((yystack_[1].value.vfield)->size())>0) {
                tmp=Foam::max(*(yystack_[1].value.vfield));
            }
            Foam::reduce(tmp,Foam::maxOp<Foam::vector>());
            (yylhs.value.vec) = new Foam::vector(tmp);
            delete (yystack_[1].value.vfield);
          }
#line 2550 "SubsetValueExpressionParser.tab.cc"
    break;

  case 94:
#line 809 "../SubsetValueExpressionParser.yy"
    {
          Foam::vector tmp(HugeVal,HugeVal,HugeVal);
            if(((yystack_[1].value.vfield)->size())>0) {
                tmp=Foam::min(*(yystack_[1].value.vfield));
            }
            Foam::reduce(tmp,Foam::minOp<Foam::vector>());
            (yylhs.value.vec) = new Foam::vector(tmp);
            delete (yystack_[1].value.vfield);
          }
#line 2564 "SubsetValueExpressionParser.tab.cc"
    break;

  case 95:
#line 818 "../SubsetValueExpressionParser.yy"
    {
            Foam::vector tmp(-HugeVal,-HugeVal,-HugeVal);
            if(((yystack_[1].value.vfield)->size())>0) {
                tmp=Foam::max(*(yystack_[1].value.vfield));
            }
            Foam::reduce(tmp,Foam::maxOp<Foam::vector>());
            (yylhs.value.vec) = new Foam::vector(tmp);
            delete (yystack_[1].value.vfield);
          }
#line 2578 "SubsetValueExpressionParser.tab.cc"
    break;

  case 96:
#line 827 "../SubsetValueExpressionParser.yy"
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
#line 2594 "SubsetValueExpressionParser.tab.cc"
    break;

  case 97:
#line 838 "../SubsetValueExpressionParser.yy"
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
#line 2610 "SubsetValueExpressionParser.tab.cc"
    break;

  case 98:
#line 849 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vec) = new Foam::vector(Foam::gSum(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 2619 "SubsetValueExpressionParser.tab.cc"
    break;

  case 99:
#line 853 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vec) = new Foam::vector(Foam::gSum(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 2628 "SubsetValueExpressionParser.tab.cc"
    break;

  case 100:
#line 857 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vec) = new Foam::vector(Foam::gAverage(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 2637 "SubsetValueExpressionParser.tab.cc"
    break;

  case 101:
#line 861 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vec) = new Foam::vector(Foam::gAverage(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 2646 "SubsetValueExpressionParser.tab.cc"
    break;

  case 102:
#line 867 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.sfield) = driver.makeField((yystack_[0].value.val)).ptr(); }
#line 2652 "SubsetValueExpressionParser.tab.cc"
    break;

  case 103:
#line 868 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.sfield) = driver.makeField((yystack_[0].value.val)).ptr(); }
#line 2658 "SubsetValueExpressionParser.tab.cc"
    break;

  case 104:
#line 869 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) + *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 2668 "SubsetValueExpressionParser.tab.cc"
    break;

  case 105:
#line 874 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) - *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 2678 "SubsetValueExpressionParser.tab.cc"
    break;

  case 106:
#line 879 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 2688 "SubsetValueExpressionParser.tab.cc"
    break;

  case 107:
#line 884 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = driver.makeModuloField(*(yystack_[2].value.sfield),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 2698 "SubsetValueExpressionParser.tab.cc"
    break;

  case 108:
#line 889 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 2708 "SubsetValueExpressionParser.tab.cc"
    break;

  case 109:
#line 899 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[3].value.sfield),(yystack_[1].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(Foam::pow(*(yystack_[3].value.sfield), *(yystack_[1].value.sfield)));
            delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 2718 "SubsetValueExpressionParser.tab.cc"
    break;

  case 110:
#line 904 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::log(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2727 "SubsetValueExpressionParser.tab.cc"
    break;

  case 111:
#line 908 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::exp(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2736 "SubsetValueExpressionParser.tab.cc"
    break;

  case 112:
#line 912 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.vfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 2746 "SubsetValueExpressionParser.tab.cc"
    break;

  case 113:
#line 917 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.tfield) && *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 2756 "SubsetValueExpressionParser.tab.cc"
    break;

  case 114:
#line 922 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.yfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.tfield) && *(yystack_[0].value.yfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.yfield);
          }
#line 2766 "SubsetValueExpressionParser.tab.cc"
    break;

  case 115:
#line 927 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.hfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.tfield) && *(yystack_[0].value.hfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.hfield);
          }
#line 2776 "SubsetValueExpressionParser.tab.cc"
    break;

  case 116:
#line 932 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.tfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.yfield) && *(yystack_[0].value.tfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.tfield);
          }
#line 2786 "SubsetValueExpressionParser.tab.cc"
    break;

  case 117:
#line 937 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.yfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.yfield) && *(yystack_[0].value.yfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 2796 "SubsetValueExpressionParser.tab.cc"
    break;

  case 118:
#line 942 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.hfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.yfield) && *(yystack_[0].value.hfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.hfield);
          }
#line 2806 "SubsetValueExpressionParser.tab.cc"
    break;

  case 119:
#line 947 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.tfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.hfield) && *(yystack_[0].value.tfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.tfield);
          }
#line 2816 "SubsetValueExpressionParser.tab.cc"
    break;

  case 120:
#line 952 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.yfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.hfield) && *(yystack_[0].value.yfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.yfield);
          }
#line 2826 "SubsetValueExpressionParser.tab.cc"
    break;

  case 121:
#line 957 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.hfield) && *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 2836 "SubsetValueExpressionParser.tab.cc"
    break;

  case 122:
#line 962 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(-*(yystack_[0].value.sfield));
            delete (yystack_[0].value.sfield);
          }
#line 2845 "SubsetValueExpressionParser.tab.cc"
    break;

  case 123:
#line 966 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.sfield) = (yystack_[1].value.sfield); }
#line 2851 "SubsetValueExpressionParser.tab.cc"
    break;

  case 124:
#line 967 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sqr(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2860 "SubsetValueExpressionParser.tab.cc"
    break;

  case 125:
#line 971 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sqrt(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2869 "SubsetValueExpressionParser.tab.cc"
    break;

  case 126:
#line 975 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sin(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2878 "SubsetValueExpressionParser.tab.cc"
    break;

  case 127:
#line 979 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::cos(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2887 "SubsetValueExpressionParser.tab.cc"
    break;

  case 128:
#line 983 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::tan(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2896 "SubsetValueExpressionParser.tab.cc"
    break;

  case 129:
#line 987 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::log10(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2905 "SubsetValueExpressionParser.tab.cc"
    break;

  case 130:
#line 991 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::asin(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2914 "SubsetValueExpressionParser.tab.cc"
    break;

  case 131:
#line 995 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::acos(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2923 "SubsetValueExpressionParser.tab.cc"
    break;

  case 132:
#line 999 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::atan(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2932 "SubsetValueExpressionParser.tab.cc"
    break;

  case 133:
#line 1003 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::atan2(*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)));
            delete (yystack_[3].value.sfield);
            delete (yystack_[1].value.sfield);
          }
#line 2942 "SubsetValueExpressionParser.tab.cc"
    break;

  case 134:
#line 1008 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sinh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2951 "SubsetValueExpressionParser.tab.cc"
    break;

  case 135:
#line 1012 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::cosh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2960 "SubsetValueExpressionParser.tab.cc"
    break;

  case 136:
#line 1016 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::tanh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2969 "SubsetValueExpressionParser.tab.cc"
    break;

  case 137:
#line 1020 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::asinh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2978 "SubsetValueExpressionParser.tab.cc"
    break;

  case 138:
#line 1024 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::acosh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2987 "SubsetValueExpressionParser.tab.cc"
    break;

  case 139:
#line 1028 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::atanh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2996 "SubsetValueExpressionParser.tab.cc"
    break;

  case 140:
#line 1032 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::erf(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3005 "SubsetValueExpressionParser.tab.cc"
    break;

  case 141:
#line 1036 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::erfc(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3014 "SubsetValueExpressionParser.tab.cc"
    break;

  case 142:
#line 1040 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::lgamma(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3023 "SubsetValueExpressionParser.tab.cc"
    break;

  case 143:
#line 1044 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::j0(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3032 "SubsetValueExpressionParser.tab.cc"
    break;

  case 144:
#line 1048 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::j1(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3041 "SubsetValueExpressionParser.tab.cc"
    break;

  case 145:
#line 1052 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::y0(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3050 "SubsetValueExpressionParser.tab.cc"
    break;

  case 146:
#line 1056 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::y1(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3059 "SubsetValueExpressionParser.tab.cc"
    break;

  case 147:
#line 1060 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sign(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3068 "SubsetValueExpressionParser.tab.cc"
    break;

  case 148:
#line 1064 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::pos(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3077 "SubsetValueExpressionParser.tab.cc"
    break;

  case 149:
#line 1068 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::neg(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3086 "SubsetValueExpressionParser.tab.cc"
    break;

  case 150:
#line 1072 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3095 "SubsetValueExpressionParser.tab.cc"
    break;

  case 151:
#line 1076 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 3104 "SubsetValueExpressionParser.tab.cc"
    break;

  case 152:
#line 1080 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.tfield)));
            delete (yystack_[1].value.tfield);
          }
#line 3113 "SubsetValueExpressionParser.tab.cc"
    break;

  case 153:
#line 1084 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 3122 "SubsetValueExpressionParser.tab.cc"
    break;

  case 154:
#line 1088 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.hfield)));
            delete (yystack_[1].value.hfield);
          }
#line 3131 "SubsetValueExpressionParser.tab.cc"
    break;

  case 155:
#line 1092 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3140 "SubsetValueExpressionParser.tab.cc"
    break;

  case 156:
#line 1096 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 3149 "SubsetValueExpressionParser.tab.cc"
    break;

  case 157:
#line 1100 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.tfield)));
            delete (yystack_[1].value.tfield);
          }
#line 3158 "SubsetValueExpressionParser.tab.cc"
    break;

  case 158:
#line 1104 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 3167 "SubsetValueExpressionParser.tab.cc"
    break;

  case 159:
#line 1108 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.hfield)));
            delete (yystack_[1].value.hfield);
          }
#line 3176 "SubsetValueExpressionParser.tab.cc"
    break;

  case 160:
#line 1112 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::tr(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 3185 "SubsetValueExpressionParser.tab.cc"
    break;

  case 161:
#line 1116 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::tr(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 3194 "SubsetValueExpressionParser.tab.cc"
    break;

  case 162:
#line 1120 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::tr(*(yystack_[1].value.hfield)) );
            delete (yystack_[1].value.hfield);
          }
#line 3203 "SubsetValueExpressionParser.tab.cc"
    break;

  case 163:
#line 1124 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::det(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 3212 "SubsetValueExpressionParser.tab.cc"
    break;

  case 164:
#line 1128 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::det(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 3221 "SubsetValueExpressionParser.tab.cc"
    break;

  case 165:
#line 1132 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::det(*(yystack_[1].value.hfield)) );
            delete (yystack_[1].value.hfield);
          }
#line 3230 "SubsetValueExpressionParser.tab.cc"
    break;

  case 166:
#line 1136 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.vfield)->component(0));
            delete (yystack_[3].value.vfield);
          }
#line 3239 "SubsetValueExpressionParser.tab.cc"
    break;

  case 167:
#line 1140 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.vfield)->component(1));
            delete (yystack_[3].value.vfield);
          }
#line 3248 "SubsetValueExpressionParser.tab.cc"
    break;

  case 168:
#line 1144 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.vfield)->component(2));
            delete (yystack_[3].value.vfield);
          }
#line 3257 "SubsetValueExpressionParser.tab.cc"
    break;

  case 169:
#line 1148 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(0));
            delete (yystack_[3].value.tfield);
          }
#line 3266 "SubsetValueExpressionParser.tab.cc"
    break;

  case 170:
#line 1152 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(1));
            delete (yystack_[3].value.tfield);
          }
#line 3275 "SubsetValueExpressionParser.tab.cc"
    break;

  case 171:
#line 1156 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(2));
            delete (yystack_[3].value.tfield);
          }
#line 3284 "SubsetValueExpressionParser.tab.cc"
    break;

  case 172:
#line 1160 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(3));
            delete (yystack_[3].value.tfield);
          }
#line 3293 "SubsetValueExpressionParser.tab.cc"
    break;

  case 173:
#line 1164 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(4));
            delete (yystack_[3].value.tfield);
          }
#line 3302 "SubsetValueExpressionParser.tab.cc"
    break;

  case 174:
#line 1168 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(5));
            delete (yystack_[3].value.tfield);
          }
#line 3311 "SubsetValueExpressionParser.tab.cc"
    break;

  case 175:
#line 1172 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(6));
            delete (yystack_[3].value.tfield);
          }
#line 3320 "SubsetValueExpressionParser.tab.cc"
    break;

  case 176:
#line 1176 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(7));
            delete (yystack_[3].value.tfield);
          }
#line 3329 "SubsetValueExpressionParser.tab.cc"
    break;

  case 177:
#line 1180 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(8));
            delete (yystack_[3].value.tfield);
          }
#line 3338 "SubsetValueExpressionParser.tab.cc"
    break;

  case 178:
#line 1184 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(0));
            delete (yystack_[3].value.yfield);
          }
#line 3347 "SubsetValueExpressionParser.tab.cc"
    break;

  case 179:
#line 1188 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(1));
            delete (yystack_[3].value.yfield);
          }
#line 3356 "SubsetValueExpressionParser.tab.cc"
    break;

  case 180:
#line 1192 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(2));
            delete (yystack_[3].value.yfield);
          }
#line 3365 "SubsetValueExpressionParser.tab.cc"
    break;

  case 181:
#line 1196 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(3));
            delete (yystack_[3].value.yfield);
          }
#line 3374 "SubsetValueExpressionParser.tab.cc"
    break;

  case 182:
#line 1200 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(4));
            delete (yystack_[3].value.yfield);
          }
#line 3383 "SubsetValueExpressionParser.tab.cc"
    break;

  case 183:
#line 1204 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(5));
            delete (yystack_[3].value.yfield);
          }
#line 3392 "SubsetValueExpressionParser.tab.cc"
    break;

  case 184:
#line 1208 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.hfield)->component(0));
            delete (yystack_[3].value.hfield);
          }
#line 3401 "SubsetValueExpressionParser.tab.cc"
    break;

  case 185:
#line 1212 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.sfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = driver.doConditional(*(yystack_[4].value.lfield),*(yystack_[2].value.sfield),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 3411 "SubsetValueExpressionParser.tab.cc"
    break;

  case 186:
#line 1217 "../SubsetValueExpressionParser.yy"
    {
	  (yylhs.value.sfield) = driver.makeField(
#ifdef FOAM_NO_SEPARATE_CONSTANT_NAMESPACE
              Foam::mathematicalConstant::pi
#else
              Foam::constant::mathematical::pi
#endif
          ).ptr();
          }
#line 3425 "SubsetValueExpressionParser.tab.cc"
    break;

  case 187:
#line 1226 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeIdField().ptr();
          }
#line 3433 "SubsetValueExpressionParser.tab.cc"
    break;

  case 188:
#line 1229 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeField(
                Foam::scalar(Foam::Pstream::myProcNo())
            ).ptr();
          }
#line 3443 "SubsetValueExpressionParser.tab.cc"
    break;

  case 189:
#line 1234 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.weights(driver.size()).ptr();
          }
#line 3451 "SubsetValueExpressionParser.tab.cc"
    break;

  case 190:
#line 1237 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.sfield) = driver.makeFaceFlipField().ptr(); }
#line 3457 "SubsetValueExpressionParser.tab.cc"
    break;

  case 191:
#line 1238 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.sfield) = driver.makeRandomField().ptr(); }
#line 3463 "SubsetValueExpressionParser.tab.cc"
    break;

  case 192:
#line 1239 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeRandomField(-(yystack_[1].value.integer)).ptr();
          }
#line 3471 "SubsetValueExpressionParser.tab.cc"
    break;

  case 193:
#line 1242 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeGaussRandomField().ptr();
          }
#line 3479 "SubsetValueExpressionParser.tab.cc"
    break;

  case 194:
#line 1245 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeGaussRandomField(-(yystack_[1].value.integer)).ptr();
          }
#line 3487 "SubsetValueExpressionParser.tab.cc"
    break;

  case 195:
#line 1248 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeRandomField(1).ptr();
          }
#line 3495 "SubsetValueExpressionParser.tab.cc"
    break;

  case 196:
#line 1251 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeRandomField((yystack_[1].value.integer)+1).ptr();
          }
#line 3503 "SubsetValueExpressionParser.tab.cc"
    break;

  case 197:
#line 1254 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeGaussRandomField(1).ptr();
          }
#line 3511 "SubsetValueExpressionParser.tab.cc"
    break;

  case 198:
#line 1257 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeGaussRandomField((yystack_[1].value.integer)+1).ptr();
          }
#line 3519 "SubsetValueExpressionParser.tab.cc"
    break;

  case 199:
#line 1260 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeField(driver.runTime().deltaT().value()).ptr();
          }
#line 3527 "SubsetValueExpressionParser.tab.cc"
    break;

  case 200:
#line 1263 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeField(driver.runTime().time().value()).ptr();
          }
#line 3535 "SubsetValueExpressionParser.tab.cc"
    break;

  case 201:
#line 1270 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeFaceAreaMagField().ptr();
          }
#line 3543 "SubsetValueExpressionParser.tab.cc"
    break;

  case 202:
#line 1273 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeCellVolumeField().ptr();
          }
#line 3551 "SubsetValueExpressionParser.tab.cc"
    break;

  case 203:
#line 1276 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.sfield) = (yystack_[1].value.sfield); }
#line 3557 "SubsetValueExpressionParser.tab.cc"
    break;

  case 204:
#line 1277 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getScalarField(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
				}
#line 3566 "SubsetValueExpressionParser.tab.cc"
    break;

  case 205:
#line 1281 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getScalarField(*(yystack_[1].value.name),true).ptr();
            delete (yystack_[1].value.name);
                    }
#line 3575 "SubsetValueExpressionParser.tab.cc"
    break;

  case 206:
#line 1285 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getLine(*(yystack_[0].value.name),driver.runTime().time().value()).ptr();
            delete (yystack_[0].value.name);
				}
#line 3584 "SubsetValueExpressionParser.tab.cc"
    break;

  case 207:
#line 1289 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getLookup(*(yystack_[3].value.name),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[3].value.name); delete (yystack_[1].value.sfield);
                                    }
#line 3593 "SubsetValueExpressionParser.tab.cc"
    break;

  case 208:
#line 1293 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getLookup2D(*(yystack_[5].value.name),*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[5].value.name); delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 3602 "SubsetValueExpressionParser.tab.cc"
    break;

  case 209:
#line 1297 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = Foam::min(*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 3611 "SubsetValueExpressionParser.tab.cc"
    break;

  case 210:
#line 1301 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = Foam::max(*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 3620 "SubsetValueExpressionParser.tab.cc"
    break;

  case 211:
#line 1308 "../SubsetValueExpressionParser.yy"
    {
      (yylhs.value.sfield)=driver.evaluatePluginFunction<Foam::scalar>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 3634 "SubsetValueExpressionParser.tab.cc"
    break;

  case 212:
#line 1319 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.tfield) = (yystack_[0].value.tfield); }
#line 3640 "SubsetValueExpressionParser.tab.cc"
    break;

  case 213:
#line 1320 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) + *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 3650 "SubsetValueExpressionParser.tab.cc"
    break;

  case 214:
#line 1325 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.yfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) + *(yystack_[0].value.yfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.yfield);
          }
#line 3660 "SubsetValueExpressionParser.tab.cc"
    break;

  case 215:
#line 1330 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.hfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) + *(yystack_[0].value.hfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.hfield);
          }
#line 3670 "SubsetValueExpressionParser.tab.cc"
    break;

  case 216:
#line 1335 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.yfield) + *(yystack_[0].value.tfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.tfield);
          }
#line 3680 "SubsetValueExpressionParser.tab.cc"
    break;

  case 217:
#line 1340 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.hfield) + *(yystack_[0].value.tfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.tfield);
          }
#line 3690 "SubsetValueExpressionParser.tab.cc"
    break;

  case 218:
#line 1345 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.tfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.tfield);
          }
#line 3700 "SubsetValueExpressionParser.tab.cc"
    break;

  case 219:
#line 1350 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.sfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.sfield);
          }
#line 3710 "SubsetValueExpressionParser.tab.cc"
    break;

  case 220:
#line 1355 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.vfield) * *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 3720 "SubsetValueExpressionParser.tab.cc"
    break;

  case 221:
#line 1360 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 3730 "SubsetValueExpressionParser.tab.cc"
    break;

  case 222:
#line 1365 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.yfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.tfield);
          }
#line 3740 "SubsetValueExpressionParser.tab.cc"
    break;

  case 223:
#line 1370 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.yfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.yfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.yfield);
          }
#line 3750 "SubsetValueExpressionParser.tab.cc"
    break;

  case 224:
#line 1375 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.tfield);
          }
#line 3760 "SubsetValueExpressionParser.tab.cc"
    break;

  case 225:
#line 1380 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.hfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.hfield);
          }
#line 3770 "SubsetValueExpressionParser.tab.cc"
    break;

  case 226:
#line 1385 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.sfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.sfield);
          }
#line 3780 "SubsetValueExpressionParser.tab.cc"
    break;

  case 227:
#line 1390 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) - *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 3790 "SubsetValueExpressionParser.tab.cc"
    break;

  case 228:
#line 1395 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.yfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) - *(yystack_[0].value.yfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.yfield);
          }
#line 3800 "SubsetValueExpressionParser.tab.cc"
    break;

  case 229:
#line 1400 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.hfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) - *(yystack_[0].value.hfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.hfield);
          }
#line 3810 "SubsetValueExpressionParser.tab.cc"
    break;

  case 230:
#line 1405 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.yfield) - *(yystack_[0].value.tfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.tfield);
          }
#line 3820 "SubsetValueExpressionParser.tab.cc"
    break;

  case 231:
#line 1410 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.hfield) - *(yystack_[0].value.tfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.tfield);
          }
#line 3830 "SubsetValueExpressionParser.tab.cc"
    break;

  case 232:
#line 1415 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField(-*(yystack_[0].value.tfield));
            delete (yystack_[0].value.tfield);
          }
#line 3839 "SubsetValueExpressionParser.tab.cc"
    break;

  case 233:
#line 1419 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.tfield) = (yystack_[1].value.tfield); }
#line 3845 "SubsetValueExpressionParser.tab.cc"
    break;

  case 234:
#line 1420 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::skew(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 3854 "SubsetValueExpressionParser.tab.cc"
    break;

  case 235:
#line 1424 "../SubsetValueExpressionParser.yy"
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
#line 3870 "SubsetValueExpressionParser.tab.cc"
    break;

  case 236:
#line 1435 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField(Foam::eigenVectors(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 3879 "SubsetValueExpressionParser.tab.cc"
    break;

  case 237:
#line 1439 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::inv(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 3888 "SubsetValueExpressionParser.tab.cc"
    break;

  case 238:
#line 1443 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::cof(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 3897 "SubsetValueExpressionParser.tab.cc"
    break;

  case 239:
#line 1447 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::dev(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 3906 "SubsetValueExpressionParser.tab.cc"
    break;

  case 240:
#line 1451 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::dev2(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 3915 "SubsetValueExpressionParser.tab.cc"
    break;

  case 241:
#line 1455 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( (yystack_[5].value.tfield)->T() );
            delete (yystack_[5].value.tfield);
          }
#line 3924 "SubsetValueExpressionParser.tab.cc"
    break;

  case 242:
#line 1459 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.tfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = driver.doConditional(*(yystack_[4].value.lfield),*(yystack_[2].value.tfield),*(yystack_[0].value.tfield)).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 3934 "SubsetValueExpressionParser.tab.cc"
    break;

  case 243:
#line 1468 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.tfield) = (yystack_[1].value.tfield); }
#line 3940 "SubsetValueExpressionParser.tab.cc"
    break;

  case 244:
#line 1469 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield)=driver.getTensorField(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
                    }
#line 3949 "SubsetValueExpressionParser.tab.cc"
    break;

  case 245:
#line 1473 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield)=driver.getTensorField(*(yystack_[1].value.name),true).ptr();
            delete (yystack_[1].value.name);
                    }
#line 3958 "SubsetValueExpressionParser.tab.cc"
    break;

  case 246:
#line 1477 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = Foam::min(*(yystack_[3].value.tfield),*(yystack_[1].value.tfield)).ptr();
            delete (yystack_[3].value.tfield); delete (yystack_[1].value.tfield);
          }
#line 3967 "SubsetValueExpressionParser.tab.cc"
    break;

  case 247:
#line 1481 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = Foam::max(*(yystack_[3].value.tfield),*(yystack_[1].value.tfield)).ptr();
            delete (yystack_[3].value.tfield); delete (yystack_[1].value.tfield);
          }
#line 3976 "SubsetValueExpressionParser.tab.cc"
    break;

  case 248:
#line 1488 "../SubsetValueExpressionParser.yy"
    {
      (yylhs.value.tfield)=driver.evaluatePluginFunction<Foam::tensor>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 3990 "SubsetValueExpressionParser.tab.cc"
    break;

  case 249:
#line 1500 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.yfield) = (yystack_[0].value.yfield); }
#line 3996 "SubsetValueExpressionParser.tab.cc"
    break;

  case 250:
#line 1501 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) + *(yystack_[0].value.yfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 4006 "SubsetValueExpressionParser.tab.cc"
    break;

  case 251:
#line 1506 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.hfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) + *(yystack_[0].value.hfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.hfield);
          }
#line 4016 "SubsetValueExpressionParser.tab.cc"
    break;

  case 252:
#line 1511 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.hfield) + *(yystack_[0].value.yfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.yfield);
          }
#line 4026 "SubsetValueExpressionParser.tab.cc"
    break;

  case 253:
#line 1516 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.yfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.yfield);
          }
#line 4036 "SubsetValueExpressionParser.tab.cc"
    break;

  case 254:
#line 1521 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.sfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.sfield);
          }
#line 4046 "SubsetValueExpressionParser.tab.cc"
    break;

  case 255:
#line 1526 "../SubsetValueExpressionParser.yy"
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
#line 4062 "SubsetValueExpressionParser.tab.cc"
    break;

  case 256:
#line 1537 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.yfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.yfield);
          }
#line 4072 "SubsetValueExpressionParser.tab.cc"
    break;

  case 257:
#line 1542 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.hfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.hfield);
          }
#line 4082 "SubsetValueExpressionParser.tab.cc"
    break;

  case 258:
#line 1547 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.sfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.sfield);
          }
#line 4092 "SubsetValueExpressionParser.tab.cc"
    break;

  case 259:
#line 1552 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) - *(yystack_[0].value.yfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 4102 "SubsetValueExpressionParser.tab.cc"
    break;

  case 260:
#line 1557 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.hfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) - *(yystack_[0].value.hfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.hfield);
          }
#line 4112 "SubsetValueExpressionParser.tab.cc"
    break;

  case 261:
#line 1562 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.hfield) - *(yystack_[0].value.yfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.yfield);
          }
#line 4122 "SubsetValueExpressionParser.tab.cc"
    break;

  case 262:
#line 1567 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField(-*(yystack_[0].value.yfield));
            delete (yystack_[0].value.yfield);
          }
#line 4131 "SubsetValueExpressionParser.tab.cc"
    break;

  case 263:
#line 1571 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.yfield) = (yystack_[1].value.yfield); }
#line 4137 "SubsetValueExpressionParser.tab.cc"
    break;

  case 264:
#line 1572 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::symm(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 4146 "SubsetValueExpressionParser.tab.cc"
    break;

  case 265:
#line 1576 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::symm(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 4155 "SubsetValueExpressionParser.tab.cc"
    break;

  case 266:
#line 1580 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::twoSymm(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 4164 "SubsetValueExpressionParser.tab.cc"
    break;

  case 267:
#line 1584 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::twoSymm(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 4173 "SubsetValueExpressionParser.tab.cc"
    break;

  case 268:
#line 1588 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::inv(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 4182 "SubsetValueExpressionParser.tab.cc"
    break;

  case 269:
#line 1592 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::cof(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 4191 "SubsetValueExpressionParser.tab.cc"
    break;

  case 270:
#line 1596 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::dev(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 4200 "SubsetValueExpressionParser.tab.cc"
    break;

  case 271:
#line 1600 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::dev2(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 4209 "SubsetValueExpressionParser.tab.cc"
    break;

  case 272:
#line 1604 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::sqr(*(yystack_[1].value.vfield)) );
            delete (yystack_[1].value.vfield);
          }
#line 4218 "SubsetValueExpressionParser.tab.cc"
    break;

  case 273:
#line 1608 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = (yystack_[5].value.yfield);
          }
#line 4226 "SubsetValueExpressionParser.tab.cc"
    break;

  case 274:
#line 1611 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.yfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = driver.doConditional(*(yystack_[4].value.lfield),*(yystack_[2].value.yfield),*(yystack_[0].value.yfield)).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 4236 "SubsetValueExpressionParser.tab.cc"
    break;

  case 275:
#line 1620 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.yfield) = (yystack_[1].value.yfield); }
#line 4242 "SubsetValueExpressionParser.tab.cc"
    break;

  case 276:
#line 1621 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield)=driver.getSymmTensorField(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
                    }
#line 4251 "SubsetValueExpressionParser.tab.cc"
    break;

  case 277:
#line 1625 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield)=driver.getSymmTensorField(*(yystack_[1].value.name),true).ptr();
            delete (yystack_[1].value.name);
                    }
#line 4260 "SubsetValueExpressionParser.tab.cc"
    break;

  case 278:
#line 1629 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = Foam::min(*(yystack_[3].value.yfield),*(yystack_[1].value.yfield)).ptr();
            delete (yystack_[3].value.yfield); delete (yystack_[1].value.yfield);
          }
#line 4269 "SubsetValueExpressionParser.tab.cc"
    break;

  case 279:
#line 1633 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = Foam::max(*(yystack_[3].value.yfield),*(yystack_[1].value.yfield)).ptr();
            delete (yystack_[3].value.yfield); delete (yystack_[1].value.yfield);
          }
#line 4278 "SubsetValueExpressionParser.tab.cc"
    break;

  case 280:
#line 1640 "../SubsetValueExpressionParser.yy"
    {
      (yylhs.value.yfield)=driver.evaluatePluginFunction<Foam::symmTensor>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 4292 "SubsetValueExpressionParser.tab.cc"
    break;

  case 281:
#line 1652 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.hfield) = (yystack_[0].value.hfield); }
#line 4298 "SubsetValueExpressionParser.tab.cc"
    break;

  case 282:
#line 1653 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = driver.makeField(Foam::sphericalTensor(1)).ptr();
          }
#line 4306 "SubsetValueExpressionParser.tab.cc"
    break;

  case 283:
#line 1656 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) + *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 4316 "SubsetValueExpressionParser.tab.cc"
    break;

  case 284:
#line 1661 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.hfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.hfield);
          }
#line 4326 "SubsetValueExpressionParser.tab.cc"
    break;

  case 285:
#line 1666 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.sfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.sfield);
          }
#line 4336 "SubsetValueExpressionParser.tab.cc"
    break;

  case 286:
#line 1671 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 4346 "SubsetValueExpressionParser.tab.cc"
    break;

  case 287:
#line 1676 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.sfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.sfield);
          }
#line 4356 "SubsetValueExpressionParser.tab.cc"
    break;

  case 288:
#line 1681 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) - *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 4366 "SubsetValueExpressionParser.tab.cc"
    break;

  case 289:
#line 1686 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField(-*(yystack_[0].value.hfield));
            delete (yystack_[0].value.hfield);
          }
#line 4375 "SubsetValueExpressionParser.tab.cc"
    break;

  case 290:
#line 1690 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.hfield) = (yystack_[1].value.hfield); }
#line 4381 "SubsetValueExpressionParser.tab.cc"
    break;

  case 291:
#line 1691 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::sph(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 4390 "SubsetValueExpressionParser.tab.cc"
    break;

  case 292:
#line 1695 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::sph(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 4399 "SubsetValueExpressionParser.tab.cc"
    break;

  case 293:
#line 1699 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::sph(*(yystack_[1].value.hfield)) );
            delete (yystack_[1].value.hfield);
          }
#line 4408 "SubsetValueExpressionParser.tab.cc"
    break;

  case 294:
#line 1703 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::inv(*(yystack_[1].value.hfield)) );
            delete (yystack_[1].value.hfield);
          }
#line 4417 "SubsetValueExpressionParser.tab.cc"
    break;

  case 295:
#line 1707 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = (yystack_[5].value.hfield);
          }
#line 4425 "SubsetValueExpressionParser.tab.cc"
    break;

  case 296:
#line 1710 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.hfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = driver.doConditional(*(yystack_[4].value.lfield),*(yystack_[2].value.hfield),*(yystack_[0].value.hfield)).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 4435 "SubsetValueExpressionParser.tab.cc"
    break;

  case 297:
#line 1719 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.hfield) = (yystack_[1].value.hfield); }
#line 4441 "SubsetValueExpressionParser.tab.cc"
    break;

  case 298:
#line 1720 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield)=driver.getSphericalTensorField(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
                    }
#line 4450 "SubsetValueExpressionParser.tab.cc"
    break;

  case 299:
#line 1724 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield)=driver.getSphericalTensorField(*(yystack_[1].value.name),true).ptr();
            delete (yystack_[1].value.name);
                    }
#line 4459 "SubsetValueExpressionParser.tab.cc"
    break;

  case 300:
#line 1728 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = Foam::min(*(yystack_[3].value.hfield),*(yystack_[1].value.hfield)).ptr();
            delete (yystack_[3].value.hfield); delete (yystack_[1].value.hfield);
          }
#line 4468 "SubsetValueExpressionParser.tab.cc"
    break;

  case 301:
#line 1732 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = Foam::max(*(yystack_[3].value.hfield),*(yystack_[1].value.hfield)).ptr();
            delete (yystack_[3].value.hfield); delete (yystack_[1].value.hfield);
          }
#line 4477 "SubsetValueExpressionParser.tab.cc"
    break;

  case 302:
#line 1739 "../SubsetValueExpressionParser.yy"
    {
      (yylhs.value.hfield)=driver.evaluatePluginFunction<Foam::sphericalTensor>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 4491 "SubsetValueExpressionParser.tab.cc"
    break;

  case 303:
#line 1751 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.lfield) = driver.makeField(true).ptr(); }
#line 4497 "SubsetValueExpressionParser.tab.cc"
    break;

  case 304:
#line 1752 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.lfield) = driver.makeField(false).ptr(); }
#line 4503 "SubsetValueExpressionParser.tab.cc"
    break;

  case 305:
#line 1753 "../SubsetValueExpressionParser.yy"
    {
           (yylhs.value.lfield) = driver.makeField(
                driver.runTime().outputTime()
           ).ptr();
       }
#line 4513 "SubsetValueExpressionParser.tab.cc"
    break;

  case 306:
#line 1758 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(*(yystack_[2].value.sfield),std::less<Foam::scalar>(),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 4523 "SubsetValueExpressionParser.tab.cc"
    break;

  case 307:
#line 1763 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(*(yystack_[2].value.sfield),std::greater<Foam::scalar>(),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 4533 "SubsetValueExpressionParser.tab.cc"
    break;

  case 308:
#line 1768 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(*(yystack_[2].value.sfield),std::less_equal<Foam::scalar>(),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 4543 "SubsetValueExpressionParser.tab.cc"
    break;

  case 309:
#line 1773 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::greater_equal<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 4557 "SubsetValueExpressionParser.tab.cc"
    break;

  case 310:
#line 1782 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(*(yystack_[2].value.sfield),std::equal_to<Foam::scalar>(),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 4567 "SubsetValueExpressionParser.tab.cc"
    break;

  case 311:
#line 1787 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::not_equal_to<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 4581 "SubsetValueExpressionParser.tab.cc"
    break;

  case 312:
#line 1796 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.lfield) = (yystack_[1].value.lfield); }
#line 4587 "SubsetValueExpressionParser.tab.cc"
    break;

  case 313:
#line 1797 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.lfield),(yystack_[0].value.lfield));
            (yylhs.value.lfield) = driver.doLogicalOp(
                *(yystack_[2].value.lfield),
                std::logical_and<Foam::scalar>(),
                *(yystack_[0].value.lfield)
            ).ptr();
            delete (yystack_[2].value.lfield); delete (yystack_[0].value.lfield);
          }
#line 4601 "SubsetValueExpressionParser.tab.cc"
    break;

  case 314:
#line 1806 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.lfield),(yystack_[0].value.lfield));
            (yylhs.value.lfield) = driver.doLogicalOp(
                *(yystack_[2].value.lfield),
                std::logical_or<Foam::scalar>(),
                *(yystack_[0].value.lfield)
            ).ptr();
            delete (yystack_[2].value.lfield); delete (yystack_[0].value.lfield);
          }
#line 4615 "SubsetValueExpressionParser.tab.cc"
    break;

  case 315:
#line 1815 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.lfield) = driver.doLogicalNot(*(yystack_[0].value.lfield)).ptr();
            delete (yystack_[0].value.lfield);
          }
#line 4624 "SubsetValueExpressionParser.tab.cc"
    break;

  case 316:
#line 1819 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.lfield) = (yystack_[1].value.lfield); }
#line 4630 "SubsetValueExpressionParser.tab.cc"
    break;

  case 317:
#line 1820 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.lfield)=driver.getVariable<bool>(*(yystack_[0].value.name),driver.size()).ptr();
            delete (yystack_[0].value.name);
      }
#line 4639 "SubsetValueExpressionParser.tab.cc"
    break;

  case 318:
#line 1827 "../SubsetValueExpressionParser.yy"
    {
      (yylhs.value.lfield)=driver.evaluatePluginFunction<bool>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 4653 "SubsetValueExpressionParser.tab.cc"
    break;

  case 319:
#line 1839 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(*(yystack_[5].value.sfield),*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[5].value.sfield); delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 4662 "SubsetValueExpressionParser.tab.cc"
    break;

  case 320:
#line 1845 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = driver.composeTensorField(
                *(yystack_[17].value.sfield),*(yystack_[15].value.sfield),*(yystack_[13].value.sfield),
                *(yystack_[11].value.sfield),*(yystack_[9].value.sfield),*(yystack_[7].value.sfield),
                *(yystack_[5].value.sfield),*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)
            ).ptr();
            delete (yystack_[17].value.sfield); delete (yystack_[15].value.sfield); delete (yystack_[13].value.sfield); delete (yystack_[11].value.sfield); delete (yystack_[9].value.sfield);
            delete (yystack_[7].value.sfield); delete (yystack_[5].value.sfield); delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 4676 "SubsetValueExpressionParser.tab.cc"
    break;

  case 321:
#line 1855 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = driver.composeSymmTensorField(
                *(yystack_[11].value.sfield),*(yystack_[9].value.sfield),*(yystack_[7].value.sfield),
                *(yystack_[5].value.sfield),*(yystack_[3].value.sfield),
                *(yystack_[1].value.sfield)
            ).ptr();
            delete (yystack_[11].value.sfield); delete (yystack_[9].value.sfield); delete (yystack_[7].value.sfield); delete (yystack_[5].value.sfield); delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 4689 "SubsetValueExpressionParser.tab.cc"
    break;

  case 322:
#line 1864 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = driver.composeSphericalTensorField(*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[1].value.sfield);
          }
#line 4698 "SubsetValueExpressionParser.tab.cc"
    break;

  case 323:
#line 1869 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) + *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 4708 "SubsetValueExpressionParser.tab.cc"
    break;

  case 324:
#line 1874 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.vfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.vfield);
          }
#line 4718 "SubsetValueExpressionParser.tab.cc"
    break;

  case 325:
#line 1879 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.sfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.sfield);
          }
#line 4728 "SubsetValueExpressionParser.tab.cc"
    break;

  case 326:
#line 1884 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.vfield);
          }
#line 4738 "SubsetValueExpressionParser.tab.cc"
    break;

  case 327:
#line 1889 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.tfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.tfield);
          }
#line 4748 "SubsetValueExpressionParser.tab.cc"
    break;

  case 328:
#line 1894 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.yfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.vfield);
          }
#line 4758 "SubsetValueExpressionParser.tab.cc"
    break;

  case 329:
#line 1899 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.yfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) & *(yystack_[0].value.yfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.yfield);
          }
#line 4768 "SubsetValueExpressionParser.tab.cc"
    break;

  case 330:
#line 1904 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.vfield);
          }
#line 4778 "SubsetValueExpressionParser.tab.cc"
    break;

  case 331:
#line 1909 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.hfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.hfield);
          }
#line 4788 "SubsetValueExpressionParser.tab.cc"
    break;

  case 332:
#line 1914 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.sfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.sfield);
          }
#line 4798 "SubsetValueExpressionParser.tab.cc"
    break;

  case 333:
#line 1919 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) ^ *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 4808 "SubsetValueExpressionParser.tab.cc"
    break;

  case 334:
#line 1924 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) - *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 4818 "SubsetValueExpressionParser.tab.cc"
    break;

  case 335:
#line 1929 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(-*(yystack_[0].value.vfield));
            delete (yystack_[0].value.vfield);
          }
#line 4827 "SubsetValueExpressionParser.tab.cc"
    break;

  case 336:
#line 1933 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(*(*(yystack_[0].value.tfield)));
            delete (yystack_[0].value.tfield);
          }
#line 4836 "SubsetValueExpressionParser.tab.cc"
    break;

  case 337:
#line 1937 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(*(*(yystack_[0].value.yfield)));
            delete (yystack_[0].value.yfield);
          }
#line 4845 "SubsetValueExpressionParser.tab.cc"
    break;

  case 338:
#line 1941 "../SubsetValueExpressionParser.yy"
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
#line 4861 "SubsetValueExpressionParser.tab.cc"
    break;

  case 339:
#line 1952 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(Foam::eigenValues(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 4870 "SubsetValueExpressionParser.tab.cc"
    break;

  case 340:
#line 1956 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[3].value.tfield)->component(Foam::tensor::XX)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::XY)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::XZ)()
            ).ptr();
            delete (yystack_[3].value.tfield);
          }
#line 4883 "SubsetValueExpressionParser.tab.cc"
    break;

  case 341:
#line 1964 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[3].value.tfield)->component(Foam::tensor::YX)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::YY)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::YZ)()
            ).ptr();
            delete (yystack_[3].value.tfield);
          }
#line 4896 "SubsetValueExpressionParser.tab.cc"
    break;

  case 342:
#line 1972 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[3].value.tfield)->component(Foam::tensor::ZX)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::ZY)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::ZZ)()
            ).ptr();
            delete (yystack_[3].value.tfield);
          }
#line 4909 "SubsetValueExpressionParser.tab.cc"
    break;

  case 343:
#line 1980 "../SubsetValueExpressionParser.yy"
    {
            //            $$ = new Foam::vectorField( Foam::diag(*$3) ); // not implemented?
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[1].value.tfield)->component(Foam::tensor::XX)(),
                (yystack_[1].value.tfield)->component(Foam::tensor::YY)(),
                (yystack_[1].value.tfield)->component(Foam::tensor::ZZ)()
            ).ptr();
            delete (yystack_[1].value.tfield);
          }
#line 4923 "SubsetValueExpressionParser.tab.cc"
    break;

  case 344:
#line 1989 "../SubsetValueExpressionParser.yy"
    {
            //            $$ = new Foam::vectorField( Foam::diag(*$3) ); // not implemented?
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[1].value.yfield)->component(Foam::symmTensor::XX)(),
                (yystack_[1].value.yfield)->component(Foam::symmTensor::YY)(),
                (yystack_[1].value.yfield)->component(Foam::symmTensor::ZZ)()
            ).ptr();
            delete (yystack_[1].value.yfield);
          }
#line 4937 "SubsetValueExpressionParser.tab.cc"
    break;

  case 345:
#line 1998 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.vfield) = (yystack_[1].value.vfield); }
#line 4943 "SubsetValueExpressionParser.tab.cc"
    break;

  case 346:
#line 1999 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.vfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = driver.doConditional(*(yystack_[4].value.lfield),*(yystack_[2].value.vfield),*(yystack_[0].value.vfield)).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 4953 "SubsetValueExpressionParser.tab.cc"
    break;

  case 347:
#line 2009 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.vfield) = (yystack_[1].value.vfield); }
#line 4959 "SubsetValueExpressionParser.tab.cc"
    break;

  case 348:
#line 2010 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield)=driver.getVectorField(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
                    }
#line 4968 "SubsetValueExpressionParser.tab.cc"
    break;

  case 349:
#line 2014 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = Foam::min(*(yystack_[3].value.vfield),*(yystack_[1].value.vfield)).ptr();
            delete (yystack_[3].value.vfield); delete (yystack_[1].value.vfield);
          }
#line 4977 "SubsetValueExpressionParser.tab.cc"
    break;

  case 350:
#line 2018 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = Foam::max(*(yystack_[3].value.vfield),*(yystack_[1].value.vfield)).ptr();
            delete (yystack_[3].value.vfield); delete (yystack_[1].value.vfield);
          }
#line 4986 "SubsetValueExpressionParser.tab.cc"
    break;

  case 351:
#line 2025 "../SubsetValueExpressionParser.yy"
    {
      (yylhs.value.vfield)=driver.evaluatePluginFunction<Foam::vector>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 5000 "SubsetValueExpressionParser.tab.cc"
    break;

  case 352:
#line 2037 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) + *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 5010 "SubsetValueExpressionParser.tab.cc"
    break;

  case 353:
#line 2042 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) - *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 5020 "SubsetValueExpressionParser.tab.cc"
    break;

  case 354:
#line 2047 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 5030 "SubsetValueExpressionParser.tab.cc"
    break;

  case 355:
#line 2052 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = driver.makeModuloField(*(yystack_[2].value.sfield),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 5040 "SubsetValueExpressionParser.tab.cc"
    break;

  case 356:
#line 2057 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 5050 "SubsetValueExpressionParser.tab.cc"
    break;

  case 357:
#line 2062 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::pow(*(yystack_[3].value.sfield), (yystack_[1].value.val)));
            delete (yystack_[3].value.sfield);
          }
#line 5059 "SubsetValueExpressionParser.tab.cc"
    break;

  case 358:
#line 2066 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[3].value.sfield),(yystack_[1].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(Foam::pow(*(yystack_[3].value.sfield), *(yystack_[1].value.sfield)));
            delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 5069 "SubsetValueExpressionParser.tab.cc"
    break;

  case 359:
#line 2071 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::log(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5078 "SubsetValueExpressionParser.tab.cc"
    break;

  case 360:
#line 2075 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::exp(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5087 "SubsetValueExpressionParser.tab.cc"
    break;

  case 361:
#line 2079 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.vfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 5097 "SubsetValueExpressionParser.tab.cc"
    break;

  case 362:
#line 2084 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.tfield) && *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 5107 "SubsetValueExpressionParser.tab.cc"
    break;

  case 363:
#line 2089 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.yfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.tfield) && *(yystack_[0].value.yfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.yfield);
          }
#line 5117 "SubsetValueExpressionParser.tab.cc"
    break;

  case 364:
#line 2094 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.hfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.tfield) && *(yystack_[0].value.hfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.hfield);
          }
#line 5127 "SubsetValueExpressionParser.tab.cc"
    break;

  case 365:
#line 2099 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.tfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.yfield) && *(yystack_[0].value.tfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.tfield);
          }
#line 5137 "SubsetValueExpressionParser.tab.cc"
    break;

  case 366:
#line 2104 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.yfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.yfield) && *(yystack_[0].value.yfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 5147 "SubsetValueExpressionParser.tab.cc"
    break;

  case 367:
#line 2109 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.hfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.yfield) && *(yystack_[0].value.hfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.hfield);
          }
#line 5157 "SubsetValueExpressionParser.tab.cc"
    break;

  case 368:
#line 2114 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.tfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.hfield) && *(yystack_[0].value.tfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.tfield);
          }
#line 5167 "SubsetValueExpressionParser.tab.cc"
    break;

  case 369:
#line 2119 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.yfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.hfield) && *(yystack_[0].value.yfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.yfield);
          }
#line 5177 "SubsetValueExpressionParser.tab.cc"
    break;

  case 370:
#line 2124 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.hfield) && *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 5187 "SubsetValueExpressionParser.tab.cc"
    break;

  case 371:
#line 2129 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(-*(yystack_[0].value.sfield));
            delete (yystack_[0].value.sfield);
          }
#line 5196 "SubsetValueExpressionParser.tab.cc"
    break;

  case 372:
#line 2133 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.sfield) = (yystack_[1].value.sfield); }
#line 5202 "SubsetValueExpressionParser.tab.cc"
    break;

  case 373:
#line 2134 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sqr(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5211 "SubsetValueExpressionParser.tab.cc"
    break;

  case 374:
#line 2138 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sqrt(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5220 "SubsetValueExpressionParser.tab.cc"
    break;

  case 375:
#line 2142 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sin(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5229 "SubsetValueExpressionParser.tab.cc"
    break;

  case 376:
#line 2146 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::cos(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5238 "SubsetValueExpressionParser.tab.cc"
    break;

  case 377:
#line 2150 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::tan(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5247 "SubsetValueExpressionParser.tab.cc"
    break;

  case 378:
#line 2154 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::log10(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5256 "SubsetValueExpressionParser.tab.cc"
    break;

  case 379:
#line 2158 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::asin(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5265 "SubsetValueExpressionParser.tab.cc"
    break;

  case 380:
#line 2162 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::acos(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5274 "SubsetValueExpressionParser.tab.cc"
    break;

  case 381:
#line 2166 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::atan(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5283 "SubsetValueExpressionParser.tab.cc"
    break;

  case 382:
#line 2170 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::atan2(*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)));
            delete (yystack_[3].value.sfield);
            delete (yystack_[1].value.sfield);
          }
#line 5293 "SubsetValueExpressionParser.tab.cc"
    break;

  case 383:
#line 2175 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sinh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5302 "SubsetValueExpressionParser.tab.cc"
    break;

  case 384:
#line 2179 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::cosh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5311 "SubsetValueExpressionParser.tab.cc"
    break;

  case 385:
#line 2183 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::tanh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5320 "SubsetValueExpressionParser.tab.cc"
    break;

  case 386:
#line 2187 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::asinh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5329 "SubsetValueExpressionParser.tab.cc"
    break;

  case 387:
#line 2191 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::acosh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5338 "SubsetValueExpressionParser.tab.cc"
    break;

  case 388:
#line 2195 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::atanh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5347 "SubsetValueExpressionParser.tab.cc"
    break;

  case 389:
#line 2199 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::erf(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5356 "SubsetValueExpressionParser.tab.cc"
    break;

  case 390:
#line 2203 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::erfc(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5365 "SubsetValueExpressionParser.tab.cc"
    break;

  case 391:
#line 2207 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::lgamma(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5374 "SubsetValueExpressionParser.tab.cc"
    break;

  case 392:
#line 2211 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::j0(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5383 "SubsetValueExpressionParser.tab.cc"
    break;

  case 393:
#line 2215 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::j1(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5392 "SubsetValueExpressionParser.tab.cc"
    break;

  case 394:
#line 2219 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::y0(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5401 "SubsetValueExpressionParser.tab.cc"
    break;

  case 395:
#line 2223 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::y1(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5410 "SubsetValueExpressionParser.tab.cc"
    break;

  case 396:
#line 2227 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sign(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5419 "SubsetValueExpressionParser.tab.cc"
    break;

  case 397:
#line 2231 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::pos(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5428 "SubsetValueExpressionParser.tab.cc"
    break;

  case 398:
#line 2235 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::neg(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5437 "SubsetValueExpressionParser.tab.cc"
    break;

  case 399:
#line 2239 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5446 "SubsetValueExpressionParser.tab.cc"
    break;

  case 400:
#line 2243 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 5455 "SubsetValueExpressionParser.tab.cc"
    break;

  case 401:
#line 2247 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.tfield)));
            delete (yystack_[1].value.tfield);
          }
#line 5464 "SubsetValueExpressionParser.tab.cc"
    break;

  case 402:
#line 2251 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 5473 "SubsetValueExpressionParser.tab.cc"
    break;

  case 403:
#line 2255 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.hfield)));
            delete (yystack_[1].value.hfield);
          }
#line 5482 "SubsetValueExpressionParser.tab.cc"
    break;

  case 404:
#line 2259 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5491 "SubsetValueExpressionParser.tab.cc"
    break;

  case 405:
#line 2263 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 5500 "SubsetValueExpressionParser.tab.cc"
    break;

  case 406:
#line 2267 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.tfield)));
            delete (yystack_[1].value.tfield);
          }
#line 5509 "SubsetValueExpressionParser.tab.cc"
    break;

  case 407:
#line 2271 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 5518 "SubsetValueExpressionParser.tab.cc"
    break;

  case 408:
#line 2275 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.hfield)));
            delete (yystack_[1].value.hfield);
          }
#line 5527 "SubsetValueExpressionParser.tab.cc"
    break;

  case 409:
#line 2279 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.vfield)->component(0));
            delete (yystack_[3].value.vfield);
          }
#line 5536 "SubsetValueExpressionParser.tab.cc"
    break;

  case 410:
#line 2283 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.vfield)->component(1));
            delete (yystack_[3].value.vfield);
          }
#line 5545 "SubsetValueExpressionParser.tab.cc"
    break;

  case 411:
#line 2287 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.vfield)->component(2));
            delete (yystack_[3].value.vfield);
          }
#line 5554 "SubsetValueExpressionParser.tab.cc"
    break;

  case 412:
#line 2291 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(0));
            delete (yystack_[3].value.tfield);
          }
#line 5563 "SubsetValueExpressionParser.tab.cc"
    break;

  case 413:
#line 2295 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(1));
            delete (yystack_[3].value.tfield);
          }
#line 5572 "SubsetValueExpressionParser.tab.cc"
    break;

  case 414:
#line 2299 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(2));
            delete (yystack_[3].value.tfield);
          }
#line 5581 "SubsetValueExpressionParser.tab.cc"
    break;

  case 415:
#line 2303 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(3));
            delete (yystack_[3].value.tfield);
          }
#line 5590 "SubsetValueExpressionParser.tab.cc"
    break;

  case 416:
#line 2307 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(4));
            delete (yystack_[3].value.tfield);
          }
#line 5599 "SubsetValueExpressionParser.tab.cc"
    break;

  case 417:
#line 2311 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(5));
            delete (yystack_[3].value.tfield);
          }
#line 5608 "SubsetValueExpressionParser.tab.cc"
    break;

  case 418:
#line 2315 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(6));
            delete (yystack_[3].value.tfield);
          }
#line 5617 "SubsetValueExpressionParser.tab.cc"
    break;

  case 419:
#line 2319 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(7));
            delete (yystack_[3].value.tfield);
          }
#line 5626 "SubsetValueExpressionParser.tab.cc"
    break;

  case 420:
#line 2323 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(8));
            delete (yystack_[3].value.tfield);
          }
#line 5635 "SubsetValueExpressionParser.tab.cc"
    break;

  case 421:
#line 2327 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(0));
            delete (yystack_[3].value.yfield);
          }
#line 5644 "SubsetValueExpressionParser.tab.cc"
    break;

  case 422:
#line 2331 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(1));
            delete (yystack_[3].value.yfield);
          }
#line 5653 "SubsetValueExpressionParser.tab.cc"
    break;

  case 423:
#line 2335 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(2));
            delete (yystack_[3].value.yfield);
          }
#line 5662 "SubsetValueExpressionParser.tab.cc"
    break;

  case 424:
#line 2339 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(3));
            delete (yystack_[3].value.yfield);
          }
#line 5671 "SubsetValueExpressionParser.tab.cc"
    break;

  case 425:
#line 2343 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(4));
            delete (yystack_[3].value.yfield);
          }
#line 5680 "SubsetValueExpressionParser.tab.cc"
    break;

  case 426:
#line 2347 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(5));
            delete (yystack_[3].value.yfield);
          }
#line 5689 "SubsetValueExpressionParser.tab.cc"
    break;

  case 427:
#line 2351 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.hfield)->component(0));
            delete (yystack_[3].value.hfield);
          }
#line 5698 "SubsetValueExpressionParser.tab.cc"
    break;

  case 428:
#line 2355 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.sfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = driver.doConditional(*(yystack_[4].value.lfield),*(yystack_[2].value.sfield),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 5708 "SubsetValueExpressionParser.tab.cc"
    break;

  case 429:
#line 2364 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.sfield) = (yystack_[1].value.sfield); }
#line 5714 "SubsetValueExpressionParser.tab.cc"
    break;

  case 430:
#line 2365 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getScalarField(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
				}
#line 5723 "SubsetValueExpressionParser.tab.cc"
    break;

  case 431:
#line 2369 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = Foam::min(*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 5732 "SubsetValueExpressionParser.tab.cc"
    break;

  case 432:
#line 2373 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = Foam::max(*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 5741 "SubsetValueExpressionParser.tab.cc"
    break;

  case 433:
#line 2380 "../SubsetValueExpressionParser.yy"
    {
      (yylhs.value.sfield)=driver.evaluatePluginFunction<Foam::scalar>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 5755 "SubsetValueExpressionParser.tab.cc"
    break;

  case 434:
#line 2392 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) + *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 5765 "SubsetValueExpressionParser.tab.cc"
    break;

  case 435:
#line 2397 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.tfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.tfield);
          }
#line 5775 "SubsetValueExpressionParser.tab.cc"
    break;

  case 436:
#line 2402 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.sfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.sfield);
          }
#line 5785 "SubsetValueExpressionParser.tab.cc"
    break;

  case 437:
#line 2407 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.vfield) * *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 5795 "SubsetValueExpressionParser.tab.cc"
    break;

  case 438:
#line 2412 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 5805 "SubsetValueExpressionParser.tab.cc"
    break;

  case 439:
#line 2417 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.yfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.tfield);
          }
#line 5815 "SubsetValueExpressionParser.tab.cc"
    break;

  case 440:
#line 2422 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.yfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.yfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.yfield);
          }
#line 5825 "SubsetValueExpressionParser.tab.cc"
    break;

  case 441:
#line 2427 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.tfield);
          }
#line 5835 "SubsetValueExpressionParser.tab.cc"
    break;

  case 442:
#line 2432 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.hfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.hfield);
          }
#line 5845 "SubsetValueExpressionParser.tab.cc"
    break;

  case 443:
#line 2437 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.sfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.sfield);
          }
#line 5855 "SubsetValueExpressionParser.tab.cc"
    break;

  case 444:
#line 2442 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) - *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 5865 "SubsetValueExpressionParser.tab.cc"
    break;

  case 445:
#line 2447 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField(-*(yystack_[0].value.tfield));
            delete (yystack_[0].value.tfield);
          }
#line 5874 "SubsetValueExpressionParser.tab.cc"
    break;

  case 446:
#line 2451 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.tfield) = (yystack_[1].value.tfield); }
#line 5880 "SubsetValueExpressionParser.tab.cc"
    break;

  case 447:
#line 2452 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::skew(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 5889 "SubsetValueExpressionParser.tab.cc"
    break;

  case 448:
#line 2456 "../SubsetValueExpressionParser.yy"
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
#line 5905 "SubsetValueExpressionParser.tab.cc"
    break;

  case 449:
#line 2467 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField(Foam::eigenVectors(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 5914 "SubsetValueExpressionParser.tab.cc"
    break;

  case 450:
#line 2471 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::inv(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 5923 "SubsetValueExpressionParser.tab.cc"
    break;

  case 451:
#line 2475 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::cof(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 5932 "SubsetValueExpressionParser.tab.cc"
    break;

  case 452:
#line 2479 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::dev(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 5941 "SubsetValueExpressionParser.tab.cc"
    break;

  case 453:
#line 2483 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::dev2(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 5950 "SubsetValueExpressionParser.tab.cc"
    break;

  case 454:
#line 2487 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( (yystack_[5].value.tfield)->T() );
            delete (yystack_[5].value.tfield);
          }
#line 5959 "SubsetValueExpressionParser.tab.cc"
    break;

  case 455:
#line 2491 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.tfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = driver.doConditional(*(yystack_[4].value.lfield),*(yystack_[2].value.tfield),*(yystack_[0].value.tfield)).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 5969 "SubsetValueExpressionParser.tab.cc"
    break;

  case 456:
#line 2500 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.tfield) = (yystack_[1].value.tfield); }
#line 5975 "SubsetValueExpressionParser.tab.cc"
    break;

  case 457:
#line 2501 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield)=driver.getTensorField(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
                    }
#line 5984 "SubsetValueExpressionParser.tab.cc"
    break;

  case 458:
#line 2505 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = Foam::min(*(yystack_[3].value.tfield),*(yystack_[1].value.tfield)).ptr();
            delete (yystack_[3].value.tfield); delete (yystack_[1].value.tfield);
          }
#line 5993 "SubsetValueExpressionParser.tab.cc"
    break;

  case 459:
#line 2509 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = Foam::max(*(yystack_[3].value.tfield),*(yystack_[1].value.tfield)).ptr();
            delete (yystack_[3].value.tfield); delete (yystack_[1].value.tfield);
          }
#line 6002 "SubsetValueExpressionParser.tab.cc"
    break;

  case 460:
#line 2516 "../SubsetValueExpressionParser.yy"
    {
      (yylhs.value.tfield)=driver.evaluatePluginFunction<Foam::tensor>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 6016 "SubsetValueExpressionParser.tab.cc"
    break;

  case 461:
#line 2528 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) + *(yystack_[0].value.yfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 6026 "SubsetValueExpressionParser.tab.cc"
    break;

  case 462:
#line 2533 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.yfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.yfield);
          }
#line 6036 "SubsetValueExpressionParser.tab.cc"
    break;

  case 463:
#line 2538 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.sfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.sfield);
          }
#line 6046 "SubsetValueExpressionParser.tab.cc"
    break;

  case 464:
#line 2543 "../SubsetValueExpressionParser.yy"
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
#line 6062 "SubsetValueExpressionParser.tab.cc"
    break;

  case 465:
#line 2554 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.yfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.yfield);
          }
#line 6072 "SubsetValueExpressionParser.tab.cc"
    break;

  case 466:
#line 2559 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.hfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.hfield);
          }
#line 6082 "SubsetValueExpressionParser.tab.cc"
    break;

  case 467:
#line 2564 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.sfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.sfield);
          }
#line 6092 "SubsetValueExpressionParser.tab.cc"
    break;

  case 468:
#line 2569 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) - *(yystack_[0].value.yfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 6102 "SubsetValueExpressionParser.tab.cc"
    break;

  case 469:
#line 2574 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField(-*(yystack_[0].value.yfield));
            delete (yystack_[0].value.yfield);
          }
#line 6111 "SubsetValueExpressionParser.tab.cc"
    break;

  case 470:
#line 2578 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.yfield) = (yystack_[1].value.yfield); }
#line 6117 "SubsetValueExpressionParser.tab.cc"
    break;

  case 471:
#line 2579 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::symm(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 6126 "SubsetValueExpressionParser.tab.cc"
    break;

  case 472:
#line 2583 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::symm(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 6135 "SubsetValueExpressionParser.tab.cc"
    break;

  case 473:
#line 2587 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::twoSymm(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 6144 "SubsetValueExpressionParser.tab.cc"
    break;

  case 474:
#line 2591 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::twoSymm(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 6153 "SubsetValueExpressionParser.tab.cc"
    break;

  case 475:
#line 2595 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::inv(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 6162 "SubsetValueExpressionParser.tab.cc"
    break;

  case 476:
#line 2599 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::cof(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 6171 "SubsetValueExpressionParser.tab.cc"
    break;

  case 477:
#line 2603 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::dev(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 6180 "SubsetValueExpressionParser.tab.cc"
    break;

  case 478:
#line 2607 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::dev2(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 6189 "SubsetValueExpressionParser.tab.cc"
    break;

  case 479:
#line 2611 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::sqr(*(yystack_[1].value.vfield)) );
            delete (yystack_[1].value.vfield);
          }
#line 6198 "SubsetValueExpressionParser.tab.cc"
    break;

  case 480:
#line 2615 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = (yystack_[5].value.yfield);
          }
#line 6206 "SubsetValueExpressionParser.tab.cc"
    break;

  case 481:
#line 2618 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.yfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = driver.doConditional(*(yystack_[4].value.lfield),*(yystack_[2].value.yfield),*(yystack_[0].value.yfield)).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 6216 "SubsetValueExpressionParser.tab.cc"
    break;

  case 482:
#line 2627 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.yfield) = (yystack_[1].value.yfield); }
#line 6222 "SubsetValueExpressionParser.tab.cc"
    break;

  case 483:
#line 2628 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield)=driver.getSymmTensorField(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
                    }
#line 6231 "SubsetValueExpressionParser.tab.cc"
    break;

  case 484:
#line 2632 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = Foam::min(*(yystack_[3].value.yfield),*(yystack_[1].value.yfield)).ptr();
            delete (yystack_[3].value.yfield); delete (yystack_[1].value.yfield);
          }
#line 6240 "SubsetValueExpressionParser.tab.cc"
    break;

  case 485:
#line 2636 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = Foam::max(*(yystack_[3].value.yfield),*(yystack_[1].value.yfield)).ptr();
            delete (yystack_[3].value.yfield); delete (yystack_[1].value.yfield);
          }
#line 6249 "SubsetValueExpressionParser.tab.cc"
    break;

  case 486:
#line 2643 "../SubsetValueExpressionParser.yy"
    {
      (yylhs.value.yfield)=driver.evaluatePluginFunction<Foam::symmTensor>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 6263 "SubsetValueExpressionParser.tab.cc"
    break;

  case 487:
#line 2654 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) + *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 6273 "SubsetValueExpressionParser.tab.cc"
    break;

  case 488:
#line 2659 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.hfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.hfield);
          }
#line 6283 "SubsetValueExpressionParser.tab.cc"
    break;

  case 489:
#line 2664 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.sfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.sfield);
          }
#line 6293 "SubsetValueExpressionParser.tab.cc"
    break;

  case 490:
#line 2669 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 6303 "SubsetValueExpressionParser.tab.cc"
    break;

  case 491:
#line 2674 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.sfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.sfield);
          }
#line 6313 "SubsetValueExpressionParser.tab.cc"
    break;

  case 492:
#line 2679 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) - *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 6323 "SubsetValueExpressionParser.tab.cc"
    break;

  case 493:
#line 2684 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField(-*(yystack_[0].value.hfield));
            delete (yystack_[0].value.hfield);
          }
#line 6332 "SubsetValueExpressionParser.tab.cc"
    break;

  case 494:
#line 2688 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.hfield) = (yystack_[1].value.hfield); }
#line 6338 "SubsetValueExpressionParser.tab.cc"
    break;

  case 495:
#line 2689 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::sph(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 6347 "SubsetValueExpressionParser.tab.cc"
    break;

  case 496:
#line 2693 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::sph(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 6356 "SubsetValueExpressionParser.tab.cc"
    break;

  case 497:
#line 2697 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::sph(*(yystack_[1].value.hfield)) );
            delete (yystack_[1].value.hfield);
          }
#line 6365 "SubsetValueExpressionParser.tab.cc"
    break;

  case 498:
#line 2701 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = (yystack_[5].value.hfield);
          }
#line 6373 "SubsetValueExpressionParser.tab.cc"
    break;

  case 499:
#line 2704 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.hfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = driver.doConditional(*(yystack_[4].value.lfield),*(yystack_[2].value.hfield),*(yystack_[0].value.hfield)).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 6383 "SubsetValueExpressionParser.tab.cc"
    break;

  case 500:
#line 2713 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.hfield) = (yystack_[1].value.hfield); }
#line 6389 "SubsetValueExpressionParser.tab.cc"
    break;

  case 501:
#line 2714 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield)=driver.getSphericalTensorField(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
                    }
#line 6398 "SubsetValueExpressionParser.tab.cc"
    break;

  case 502:
#line 2718 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = Foam::min(*(yystack_[3].value.hfield),*(yystack_[1].value.hfield)).ptr();
            delete (yystack_[3].value.hfield); delete (yystack_[1].value.hfield);
          }
#line 6407 "SubsetValueExpressionParser.tab.cc"
    break;

  case 503:
#line 2722 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = Foam::max(*(yystack_[3].value.hfield),*(yystack_[1].value.hfield)).ptr();
            delete (yystack_[3].value.hfield); delete (yystack_[1].value.hfield);
          }
#line 6416 "SubsetValueExpressionParser.tab.cc"
    break;

  case 504:
#line 2729 "../SubsetValueExpressionParser.yy"
    {
      (yylhs.value.hfield)=driver.evaluatePluginFunction<Foam::sphericalTensor>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 6430 "SubsetValueExpressionParser.tab.cc"
    break;

  case 505:
#line 2740 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(*(yystack_[2].value.sfield),std::less<Foam::scalar>(),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 6440 "SubsetValueExpressionParser.tab.cc"
    break;

  case 506:
#line 2745 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(*(yystack_[2].value.sfield),std::greater<Foam::scalar>(),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 6450 "SubsetValueExpressionParser.tab.cc"
    break;

  case 507:
#line 2750 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::less_equal<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 6464 "SubsetValueExpressionParser.tab.cc"
    break;

  case 508:
#line 2759 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::greater_equal<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 6478 "SubsetValueExpressionParser.tab.cc"
    break;

  case 509:
#line 2768 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(*(yystack_[2].value.sfield),std::equal_to<Foam::scalar>(),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 6488 "SubsetValueExpressionParser.tab.cc"
    break;

  case 510:
#line 2773 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::not_equal_to<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 6502 "SubsetValueExpressionParser.tab.cc"
    break;

  case 511:
#line 2782 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.lfield) = (yystack_[1].value.lfield); }
#line 6508 "SubsetValueExpressionParser.tab.cc"
    break;

  case 512:
#line 2783 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.lfield),(yystack_[0].value.lfield));
            (yylhs.value.lfield) = driver.doLogicalOp(
                *(yystack_[2].value.lfield),
                std::logical_and<Foam::scalar>(),
                *(yystack_[0].value.lfield)
            ).ptr();
            delete (yystack_[2].value.lfield); delete (yystack_[0].value.lfield);
          }
#line 6522 "SubsetValueExpressionParser.tab.cc"
    break;

  case 513:
#line 2792 "../SubsetValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.lfield),(yystack_[0].value.lfield));
            (yylhs.value.lfield) = driver.doLogicalOp(
                *(yystack_[2].value.lfield),
                std::logical_or<Foam::scalar>(),
                *(yystack_[0].value.lfield)
            ).ptr();
            delete (yystack_[2].value.lfield); delete (yystack_[0].value.lfield);
          }
#line 6536 "SubsetValueExpressionParser.tab.cc"
    break;

  case 514:
#line 2801 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.lfield) = driver.doLogicalNot(*(yystack_[0].value.lfield)).ptr();
            delete (yystack_[0].value.lfield);
          }
#line 6545 "SubsetValueExpressionParser.tab.cc"
    break;

  case 515:
#line 2805 "../SubsetValueExpressionParser.yy"
    { (yylhs.value.lfield) = (yystack_[1].value.lfield); }
#line 6551 "SubsetValueExpressionParser.tab.cc"
    break;

  case 516:
#line 2806 "../SubsetValueExpressionParser.yy"
    {
            (yylhs.value.lfield)=driver.getVariable<bool>(*(yystack_[0].value.name),driver.pointSize()).ptr();
            delete (yystack_[0].value.name);
      }
#line 6560 "SubsetValueExpressionParser.tab.cc"
    break;

  case 517:
#line 2813 "../SubsetValueExpressionParser.yy"
    {
      (yylhs.value.lfield)=driver.evaluatePluginFunction<bool>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 6574 "SubsetValueExpressionParser.tab.cc"
    break;


#line 6578 "SubsetValueExpressionParser.tab.cc"

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
  SubsetValueExpressionParser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  SubsetValueExpressionParser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
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


  const short SubsetValueExpressionParser::yypact_ninf_ = -366;

  const signed char SubsetValueExpressionParser::yytable_ninf_ = -1;

  const short
  SubsetValueExpressionParser::yypact_[] =
  {
     134,  2097,  2362,  2362,  2362,  2362,  2362,  2362,  2362,  2362,
    2362,  2362,  2362,  2362,  2902,  2902,  2902,  2902,  2902,  2902,
    2902,  2902,  2902,  2902,  2902,  2902,  -177,  -174,    20,  -366,
    -366,  -166,  -164,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -162,  -160,  -158,  -147,  -133,
    -132,  -127,  -106,   -98,   -97,   -92,   -83,  -366,   -82,   -77,
     -75,   -67,  -366,  -366,  -366,  -366,   -61,   -59,   -57,   -54,
     -53,   -51,   -44,   -41,   -37,   -24,   -17,   -13,    22,    24,
      27,    32,    36,    49,    53,    62,    66,    73,    75,    80,
      89,    93,    97,    99,   102,   107,   111,   116,   119,   122,
     141,   143,   182,   186,   187,   195,   196,   197,   199,   203,
     210,   216,   218,   221,   225,   226,   230,   233,   234,   249,
     252,   254,   268,   269,   310,   311,   356,   363,   373,   374,
     375,   377,   381,  2097,  2097,  2097,  2097,  -366,  1343,   -33,
    -366,  -366,  2008,   -33,   273,   -33,   392,   -33,   888,   -33,
       5,   -33,  -366,  -366,  -366,  -366,  1593,   -33,  5522,   -33,
    1015,   -33,  1539,   -33,  2177,   -33,    40,   -33,   385,   386,
     394,   395,   396,   399,   403,   404,   408,   422,   423,   424,
     425,   428,   430,   431,   432,   433,   438,   444,   445,   450,
     453,   455,   458,   463,   468,   469,   470,   472,   476,   480,
     481,   482,   483,   490,   498,   499,   503,   504,   505,   506,
     540,   542,  2362,  2362,  2362,  2362,  1343,  4758,   273,   392,
     888,     5,  2942,  5468,  2008,   741,  1479,   -22,  4532,    38,
    4545,    51,  -151,   -79,   543,   546,   547,   548,   549,   550,
     551,   554,   561,   563,   567,   571,   572,   573,   576,   579,
     580,   587,   588,   589,   590,   592,   595,   597,   598,   602,
     603,   605,   606,   608,   609,   610,   611,   613,   616,   617,
     618,   619,   627,   628,   629,   630,   635,   636,  2902,  2902,
    2902,  2902,  1593,  4776,  1015,  1539,  2177,    40,  2961,  5480,
    5522,  1308,  4558,    64,  4571,    77,  4584,    91,   -58,   -73,
    -366,  -366,  -366,  2362,  2362,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  2362,  2362,  2362,
    2362,   -28,   -27,   -49,   -26,   -25,   -35,   -21,    41,    78,
     105,   411,   638,   639,   541,  2097,  2097,  2097,  2097,  2097,
    2097,  2097,  2097,  2097,  2097,  2362,  2362,  2097,  2097,  2097,
    2097,  2097,  2097,  2097,  2097,  2097,  2097,  2097,  2097,  2097,
    2097,  2097,  2097,  2097,  2097,  2097,  2097,  2097,  2097,  2097,
    2097,  2097,  2097,  2362,  2097,  2097,  2097,  2362,  2097,  2097,
    2097,  2097,  2097,  2097,  2097,   642,   651,   653,   -65,  -366,
     121,   235,   452,   544,  -366,   581,   637,   656,   121,   235,
     581,   637,  1614,  2980,   104,   118,   201,   -68,  5247,  2999,
     214,   232,   379,   -64,  -366,  -366,  2362,  2362,  2362,  2362,
    2362,  2362,  -366,  -366,   -33,  -366,  2362,  2362,  2362,  2362,
    2362,  2362,  2362,  2362,  2362,  2362,  2362,  -366,  2362,  2362,
    2362,  2362,  2362,  2362,  -366,  -366,  2362,  2362,  2362,  2362,
    2362,  2362,  -366,  -366,  2362,  2362,  2362,  2362,  2362,  2362,
    -366,  -366,  2362,  2362,  2362,  -366,  2902,  2902,  2902,  2902,
    2902,  2902,  -366,  -366,  2902,  2902,  2902,  2902,  2902,  2902,
    2902,  2902,  2902,  2902,  2902,  -366,  2902,  2902,  2902,  2902,
    2902,  2902,  -366,  -366,  2902,  2902,  2902,  2902,  2902,  2902,
    -366,  -366,  2902,  2902,  2902,  2902,  2902,  2902,  -366,  -366,
    2902,  2902,  2902,  -366,  2362,  2362,  2362,  2362,  2362,  2362,
    2362,  2362,  2097,  2097,  2362,  2362,  2362,  2362,  2362,  2362,
    2362,  2362,  2362,  2362,  2362,  2362,  2362,  2362,  2362,  2362,
    2362,  2362,  2362,  2362,  2362,  2362,  2362,  2362,  2362,  2362,
    2362,  2362,  2362,  2362,  2362,  2362,  2362,  2362,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    2902,  2902,  2902,  2902,  2902,  2902,  2902,  2902,  2902,  2902,
    2902,  2902,  2902,  2902,  2902,  2902,  2902,  2902,  2902,  2902,
    2902,  2902,  2902,  2902,  2902,  2902,  2902,  2902,  2902,  2902,
    2902,  2902,  2902,  2902,  2902,  2902,  2902,  2902,  2902,  2902,
    2902,  2902,  2902,  2902,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  3018,  4794,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    4812,  4830,  4848,  3037,   655,  -366,   658,  -366,  -366,   662,
    -366,   664,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,   665,   667,   669,   672,   676,  4866,  4884,  3056,  3075,
    3094,  3113,  5260,  3132,   410,   449,   474,  5273,  3151,   487,
     565,   578,  5286,  3170,   594,   634,   652,  5299,  3189,   668,
     682,   710,  3208,  3227,  3246,  3265,  3284,  3303,  5195,  2801,
    4597,  4610,  4623,  5208,  2820,  4636,  4649,  4662,  5221,  2895,
    4675,  4688,  4701,  5234,  2923,  4714,  4727,  4740,  3322,  3341,
    5312,  3360,  5325,  3379,  5338,  3398,  5351,  3417,  5364,  3436,
    5377,  3455,  3474,  3493,  3512,  3531,  3550,  3569,  3588,  3607,
    3626,  3645,  4902,  4920,  3664,  3683,  3702,  3721,  3740,  3759,
    3778,  3797,  3816,  3835,  3854,  3873,  3892,  3911,  3930,  3949,
    3968,  3987,  4006,  4025,  4044,  4063,  4082,  4101,  4120,  4139,
    4158,  4177,  4196,  4215,  4234,  4253,   772,   785,   801,   839,
     852,   908,   923,   945,   968,  1080,  1093,  1108,  1121,  1259,
    1291,  1326,  1361,  1383,  1406,  1448,  1466,  1513,  1526,  1554,
    1629,  1667,  1680,  1693,  1706,  1733,  1772,  1785,  1799,  1812,
    1825,  1838,  1851,  1865,  1878,  1891,  1904,  1959,  1979,  2112,
    2125,  2138,  2151,  2164,  2217,  2230,  2243,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -121,  -121,   -65,  -366,  -366,   -65,   121,   235,
     452,   -65,   154,  -366,  2008,  2008,  2008,  2008,  2008,  2008,
      69,    69,  -366,   -65,  -366,   121,   235,   452,  -366,   133,
     818,  2267,   -30,   -11,   145,   -30,   -11,   145,  -366,  -366,
     -65,   121,   235,   452,   -36,   133,   818,  2267,   -30,   -11,
     145,   -30,   -11,   145,  -366,  -366,   -65,   121,   235,   452,
     -50,   133,   818,  2267,   -30,   -11,   145,   -30,   -11,   145,
    -366,  -366,   -65,   121,   235,   452,   -86,   995,   331,  2098,
    2363,  2396,   -66,  -366,   -63,   -63,   544,  -366,  -366,   544,
     581,   637,   656,   544,   194,  5522,  5522,  5522,  5522,  5522,
    5522,   149,   149,  -366,   544,  -366,   581,   637,   656,  -366,
    5538,  5546,  5554,   193,   193,  -366,  -366,   544,   581,   637,
     656,   -12,  5538,  5546,  5554,   217,   217,  -366,  -366,   544,
     581,   637,   656,    -3,  5538,  5546,  5554,   265,   265,  -366,
    -366,   544,   581,   637,   656,   -85,  1040,  5190,  2411,  2427,
    2442,   614,  -366,  5390,  4272,  5403,  4291,  5492,  4938,  5504,
    4956,  -366,  2362,  2362,  2362,  2362,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  2362,  2542,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  2362,  -366,
    2362,  -366,  2362,  2362,  2362,  2902,  -366,  2902,  -366,  2902,
    2902,  2902,  2362,  -366,  2362,  -366,  2362,  2362,  2362,  2902,
    -366,  2902,  -366,  2902,  2902,  2902,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    2362,  2902,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
     677,  -366,  -366,  -366,  -366,  -366,  -366,   680,  -366,   683,
    2362,  2362,  2362,  2362,  2362,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
     684,  -366,  -366,  -366,  -366,  -366,  -366,   685,  -366,   688,
    2902,  2902,  2902,  2902,  2902,  4310,  4974,  4992,  5010,  4329,
    -366,  2722,   690,  4348,  5416,  4367,  2455,  2536,  2576,  5429,
    4386,  2589,  2602,  2615,  5442,  4405,  2628,  2641,  2716,  5455,
    4424,  2756,  2769,  2782,  4443,  4462,   694,   695,   696,  1343,
    2008,   273,   392,   888,   697,   700,   704,  1593,  5522,  1015,
    1539,  2177,  -366,  2362,  2362,  2362,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  4481,  5028,
    5046,  -366,  2362,  2362,  5064,  5082,  2362,  2362,  5100,  5118,
    2362,  2362,  5136,  4500,  2362,  -366,  5154,  2362,  5172,  2362,
    4519,  -366
  };

  const unsigned short
  SubsetValueExpressionParser::yydefact_[] =
  {
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
     206,     0,     0,   204,    77,   317,   244,   276,   298,   430,
     348,   516,   457,   483,   501,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
       0,     0,   303,   304,   282,   186,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,    33,     0,
     103,    48,    32,     0,    38,     0,    40,     0,    42,     0,
      34,     0,    47,   212,   249,   281,    36,     0,    35,     0,
      39,     0,    41,     0,    43,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,     1,     0,     0,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,   122,
     232,   262,   289,   335,   371,   445,   469,   493,    62,    63,
     336,   337,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   315,   514,     0,     0,     0,     0,
       0,     0,    44,    30,     0,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,     0,     0,
       0,     0,     0,     0,    45,   243,     0,     0,     0,     0,
       0,     0,    45,   275,     0,     0,     0,     0,     0,     0,
      45,   297,     0,     0,     0,   316,     0,     0,     0,     0,
       0,     0,    44,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   429,     0,     0,     0,     0,
       0,     0,    45,   456,     0,     0,     0,     0,     0,     0,
      45,   482,     0,     0,     0,     0,     0,     0,    45,   500,
       0,     0,     0,   515,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     5,
       8,     9,    12,    13,    16,    17,    20,    21,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     7,    10,    11,    14,    15,
      18,    19,    22,    23,    26,    27,     0,     0,   211,   433,
      81,   351,   248,   460,   280,   486,   302,   504,   318,   517,
       0,     0,     0,     0,     0,   191,     0,   195,   187,     0,
     193,     0,   197,    73,   201,   202,    75,    74,   199,   200,
     305,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   188,   189,   190,
      64,   123,   233,   263,   290,   312,   345,   372,   446,   470,
     494,   511,    60,    49,   220,    51,    58,   112,    53,    55,
      57,    59,     0,    31,   310,   311,   308,   309,   306,   307,
     105,   104,   107,    50,   106,   218,   253,   284,   108,   113,
     114,   115,   227,   228,   229,   213,   214,   215,   219,   226,
      52,   221,   223,   225,     0,   116,   117,   118,   230,   259,
     260,   216,   250,   251,   254,   258,    54,   222,   255,   257,
       0,   119,   120,   121,   231,   261,   288,   217,   252,   283,
     285,   287,    56,   224,   256,   286,     0,     0,     0,     0,
       0,     0,   314,   313,   334,   323,   437,   325,   332,   361,
     327,   329,   331,   333,     0,   509,   510,   507,   508,   505,
     506,   353,   352,   355,   324,   354,   435,   462,   488,   356,
     362,   363,   364,   444,   434,   436,   443,   326,   438,   440,
     442,     0,   365,   366,   367,   468,   461,   463,   467,   328,
     439,   464,   466,     0,   368,   369,   370,   492,   487,   489,
     491,   330,   441,   465,   490,     0,     0,     0,     0,     0,
       0,   513,   512,     0,     0,     0,     0,     0,     0,     0,
       0,   207,     0,     0,     0,     0,   322,   192,   196,   194,
     198,   205,    78,   245,   277,   299,     0,     0,   110,   359,
     111,   360,   151,   150,   152,   153,   154,   400,   399,   401,
     402,   403,   156,   155,   157,   158,   159,   405,   404,   406,
     407,   408,   126,   375,   127,   376,   128,   377,     0,    92,
       0,    84,     0,     0,     0,     0,    94,     0,    86,     0,
       0,     0,     0,    93,     0,    85,     0,     0,     0,     0,
      95,     0,    87,     0,     0,     0,    96,    97,   100,    90,
     101,    91,    98,    88,    99,    89,   272,   124,   479,   373,
     125,   374,   129,   378,   130,   379,   131,   380,   132,   381,
       0,     0,   134,   383,   135,   384,   136,   385,   137,   386,
     138,   387,   139,   388,   140,   389,   141,   390,   142,   391,
     143,   392,   144,   393,   145,   394,   146,   395,   147,   396,
     148,   397,   149,   398,    70,    71,   343,   344,   160,   161,
     162,   239,   270,   452,   477,   265,   264,   472,   471,   234,
     447,   163,   164,   165,   238,   269,   451,   476,   237,   268,
     294,   450,   475,   291,   292,   293,   495,   496,   497,   267,
     266,   474,   473,   240,   271,   453,   478,    65,    66,   338,
     339,   235,   236,   448,   449,   166,   167,   168,    67,    68,
      69,   169,   170,   171,   172,   173,   174,   175,   176,   177,
       0,   178,   179,   180,   181,   182,   183,     0,   184,     0,
       0,     0,     0,     0,     0,   409,   410,   411,   340,   341,
     342,   412,   413,   414,   415,   416,   417,   418,   419,   420,
       0,   421,   422,   423,   424,   425,   426,     0,   427,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
     185,   242,   274,   296,     0,     0,     0,   346,   428,   455,
     481,   499,   208,     0,     0,     0,   109,    83,   357,   358,
      79,   209,   246,   278,   300,   349,   431,   458,   484,   502,
      80,   210,   247,   279,   301,   350,   432,   459,   485,   503,
     133,   382,   241,   273,   295,   454,   480,   498,     0,     0,
       0,   319,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   321,     0,     0,     0,     0,
       0,   320
  };

  const short
  SubsetValueExpressionParser::yypgoto_[] =
  {
    -366,  -366,  -366,  -134,  -366,  -346,  -365,  5398,  1116,  -366,
    -366,  -366,  -366,    -1,  -366,  1384,  -366,  1230,  -366,   976,
    -366,     9,  -366,  -366,  -366,  -366,  -366,   733,  -366,   127,
    -366,   303,  -366,   557,  -366,   903,  -366,    43,  -366
  };

  const short
  SubsetValueExpressionParser::yydefgoto_[] =
  {
      -1,    28,    29,   425,   137,   852,   884,   628,   216,   139,
    1252,   140,   141,   224,   143,   218,   145,   219,   147,   220,
     149,   221,   151,   152,   153,   154,   155,   282,   157,   290,
     159,   284,   161,   285,   163,   286,   165,   287,   167
  };

  const unsigned short
  SubsetValueExpressionParser::yytable_[] =
  {
     142,   217,   222,   644,   646,   649,   651,  1208,  1238,   437,
     150,   445,   300,   453,   301,   461,   462,   465,   463,   464,
     302,   232,   233,   473,   303,   485,   304,   493,   305,   501,
     306,   509,   307,   513,  1201,  1202,  1203,   568,  1204,  1205,
     423,   424,  1206,   308,   166,  1188,  1189,  1190,  1191,  1192,
    1193,  1194,  1195,  1196,  1197,  1198,  1199,   309,   310,   418,
     419,   420,   421,   311,  1209,  1239,   422,   298,   299,  1218,
    1219,  1220,  1221,  1222,  1223,  1224,  1225,  1226,  1227,  1228,
    1229,  1231,  1232,  1233,   312,  1234,  1235,   900,   462,  1236,
     463,   464,   313,   314,   510,   916,   511,   512,   315,   462,
    1207,   463,   464,   510,   464,   511,   512,   316,   317,   510,
     569,   511,   512,   318,  1200,   319,   625,   468,   469,   470,
     471,   835,   422,   320,   472,   841,   934,   961,   158,   321,
     624,   322,   389,   323,   403,   973,   324,   325,  1230,   326,
     648,   283,   288,   985,   407,   414,   327,  1237,   438,   328,
     441,   442,   443,   329,   653,   439,   440,   444,   441,   442,
     443,   645,   647,   650,   652,   444,   330,   563,   654,   449,
     450,   451,   462,   331,   463,   464,   452,   332,   413,   415,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   510,   446,   511,
     512,   389,   333,   403,   334,   447,   448,   335,   449,   450,
     451,   454,   336,   407,   414,   452,   337,   565,   455,   456,
     655,   457,   458,   459,   486,  1185,  1186,  1187,   460,   338,
     567,   487,   488,   339,   489,   490,   491,   494,   434,   435,
     436,   492,   340,   619,   495,   496,   341,   497,   498,   499,
     394,   502,   409,   342,   500,   343,   621,   656,   503,   504,
     344,   505,   506,   507,   438,  1215,  1216,  1217,   508,   345,
     623,   439,   440,   346,   441,   442,   443,   347,   446,   348,
     853,   444,   349,   832,   657,   447,   448,   350,   449,   450,
     451,   351,   626,   627,   160,   452,   352,   833,   444,   353,
     439,   440,   354,   441,   442,   443,   640,   641,   642,   643,
     444,   292,   293,   413,   415,   457,   458,   459,   482,   483,
     484,   355,   460,   356,   666,   668,   670,   673,   683,   692,
     694,   696,   699,   709,   718,   719,   721,   725,   729,   732,
     734,   736,   738,   740,   742,   744,   746,   748,   750,   752,
     754,   756,   758,   760,   762,   764,   766,   768,   770,   772,
     774,   454,   357,   489,   490,   491,   358,   359,   455,   456,
     492,   457,   458,   459,   486,   360,   361,   362,   460,   363,
     834,   487,   488,   364,   489,   490,   491,   497,   498,   499,
     365,   492,   494,   838,   500,   394,   366,   409,   367,   495,
     496,   368,   497,   498,   499,   369,   370,   845,   846,   500,
     371,   839,   452,   372,   373,   854,   855,   856,   857,   858,
     859,   860,   861,   862,   864,   868,   395,   400,   410,   374,
     878,   879,   375,   438,   376,   505,   506,   507,   894,   895,
     439,   440,   508,   441,   442,   443,   910,   911,   377,   378,
     444,   918,   667,   669,   671,   678,   688,   693,   695,   697,
     704,   714,   922,   923,   723,   727,   731,   733,   735,   737,
     739,   741,   743,   745,   747,   749,   751,   753,   755,   757,
     759,   761,   763,   765,   767,   769,   771,   773,   775,  1211,
     379,   380,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   666,   668,   670,   673,   683,   692,   694,
     696,   699,   709,   729,   732,   734,   736,   738,   740,   742,
     744,   746,   748,   750,   752,   754,   756,   758,   760,   762,
     764,   766,   768,   770,   772,   774,   381,   661,   662,   502,
     663,   664,   665,   382,   991,   992,   503,   504,   162,   505,
     506,   507,   446,   383,   384,   385,   508,   386,   840,   447,
     448,   387,   449,   450,   451,   514,   515,   294,   295,   452,
     438,   395,   400,   410,   516,   517,   518,   439,   440,   519,
     441,   442,   443,   520,   521,   927,   928,   444,   522,  1024,
     658,   935,   936,   937,   938,   939,   940,   941,   942,   943,
     945,   949,   523,   524,   525,   526,   955,   956,   527,   446,
     528,   529,   530,   531,   967,   968,   447,   448,   532,   449,
     450,   451,   979,   980,   533,   534,   452,   987,  1025,   460,
     535,   679,   689,   536,   454,   537,   705,   715,   538,   994,
     996,   455,   456,   539,   457,   458,   459,   486,   540,   541,
     542,   460,   543,  1026,   487,   488,   544,   489,   490,   491,
     545,   546,   547,   548,   492,   778,  1029,   785,   789,   792,
     549,   798,   803,   808,   813,   817,   821,   825,   550,   551,
     396,   401,   411,   552,   553,   554,   555,   667,   669,   671,
     678,   688,   693,   695,   697,   998,  1000,   731,   733,   735,
     737,   739,   741,   743,   745,   747,   749,   751,   753,   755,
     757,   759,   761,   763,   765,   767,   769,   771,   773,   775,
     556,   472,   557,   570,   156,   494,   571,   572,   573,   574,
     575,   576,   495,   496,   577,   497,   498,   499,   502,   289,
     291,   578,   500,   579,  1030,   503,   504,   580,   505,   506,
     507,   581,   582,   583,   438,   508,   584,  1031,   492,   585,
     586,   439,   440,   930,   441,   442,   443,   587,   588,   589,
     590,   444,   591,  1034,   512,   592,   946,   593,   594,   950,
     953,   954,   595,   596,   958,   597,   598,   962,   599,   600,
     601,   602,   970,   603,   446,   974,   604,   605,   606,   607,
     982,   447,   448,   988,   449,   450,   451,   608,   609,   610,
     611,   452,   454,  1035,   500,   612,   613,   659,   660,   455,
     456,   827,   457,   458,   459,   396,   401,   411,   486,   460,
     828,  1036,   829,   508,  1007,   487,   488,  1008,   489,   490,
     491,  1009,   494,  1010,  1011,   492,  1012,  1039,  1013,   495,
     496,  1014,   497,   498,   499,  1015,   393,  1276,   408,   500,
    1277,  1040,     0,  1278,  1284,  1285,   679,   689,  1286,  1298,
     502,   705,   715,  1322,  1323,  1324,  1325,   503,   504,  1326,
     505,   506,   507,  1327,     0,   680,   690,   508,     0,  1041,
     706,   716,     0,     0,   164,     0,   778,   785,   789,   792,
     798,   803,   808,   813,   817,   821,   825,     0,   416,   417,
       0,   418,   419,   420,   421,   296,   297,     0,   422,   779,
     561,   786,   790,     0,     0,   799,   804,   809,   814,   818,
     822,   826,   438,     0,     0,     0,     0,     0,     0,   439,
     440,     0,   441,   442,   443,   446,     0,     0,     0,   444,
       0,  1134,   447,   448,     0,   449,   450,   451,     0,     0,
       0,   486,   452,     0,  1135,     0,     0,   148,   487,   488,
       0,   489,   490,   491,     0,     0,   230,   231,   492,     0,
    1136,     0,     0,     0,     0,   447,   448,     0,   449,   450,
     451,  1245,  1246,  1247,  1248,   452,     0,     0,     0,   494,
       0,   393,     0,   408,     0,  1249,   495,   496,     0,   497,
     498,   499,   438,     0,     0,     0,   500,   931,  1137,   439,
     440,     0,   441,   442,   443,     0,   397,     0,   412,   444,
     947,  1138,     0,   951,     0,     0,     0,     0,   959,  1255,
       0,   963,   965,   966,     0,     0,   971,     0,   454,   975,
       0,     0,     0,  1265,   983,   455,   456,   989,   457,   458,
     459,   677,   687,     0,     0,   460,   703,   713,   446,     0,
     722,   726,   730,     0,     0,   447,   448,     0,   449,   450,
     451,     0,     0,   454,     0,   452,     0,  1139,     0,  1274,
     455,   456,     0,   457,   458,   459,     0,     0,     0,   392,
     460,   406,  1140,     0,     0,   438,     0,   138,     0,     0,
     223,   225,   439,   440,     0,   441,   442,   443,     0,     0,
     680,   690,   444,     0,  1141,   706,   716,     0,   446,     0,
       0,     0,     0,     0,  1253,   447,   448,     0,   449,   450,
     451,     0,     0,     0,     0,   452,     0,  1142,     0,     0,
     779,   786,   790,  1210,   799,   804,   809,   814,   818,   822,
     826,     0,   416,   417,     0,   418,   419,   420,   421,     0,
       0,   397,   422,   412,  1260,   486,     0,     0,   392,     0,
     406,     0,   487,   488,     0,   489,   490,   491,  1270,   924,
     925,   926,   492,   929,   933,     0,     0,     0,  1240,     0,
    1280,     0,     0,     0,     0,     0,   944,   466,   467,     0,
     468,   469,   470,   471,   957,     0,     0,   472,  1275,     0,
       0,   146,   969,     0,     0,     0,     0,     0,   228,   229,
     981,   681,   691,   986,     0,     0,   707,   717,     0,   388,
     486,   402,     0,     0,     0,   993,   995,   487,   488,     0,
     489,   490,   491,   494,     0,     0,     0,   492,     0,  1143,
     495,   496,     0,   497,   498,   499,     0,     0,   438,     0,
     500,     0,  1144,   810,     0,   439,   440,     0,   441,   442,
     443,   446,  1328,  1329,  1330,   444,     0,  1145,   447,   448,
       0,   449,   450,   451,     0,     0,   677,   687,   452,     0,
    1146,   997,   999,   730,   676,   686,     0,     0,     0,   702,
     712,     0,     0,     0,     0,     0,     0,     0,   388,     0,
     402,  1334,  1335,     0,     0,  1338,  1339,     0,     0,  1342,
    1343,     0,     0,  1346,     0,     0,  1348,     0,  1350,   782,
       0,     0,     0,   795,     0,   802,   807,     0,     0,     0,
       0,     0,  1261,   391,   399,   405,     0,     0,  1288,     0,
       0,     0,     0,   932,     0,     0,  1271,     0,   394,     0,
       0,     0,     0,     0,     0,   144,   948,     0,     0,   952,
     226,   227,     0,     0,   960,     0,   850,   964,     0,     0,
       0,     0,   972,     0,     0,   976,   977,   978,     0,     0,
     984,   867,     0,   990,   871,   874,   877,     0,     0,   883,
       0,     0,   887,   890,   893,     0,     0,   899,     0,   486,
     903,   906,   909,     0,     0,   915,   487,   488,   921,   489,
     490,   491,   391,   399,   405,     0,   492,     0,  1147,     0,
       0,     0,     0,     0,   672,   682,     0,     0,     0,   698,
     708,   494,     0,   720,   724,   728,     0,     0,   495,   496,
       0,   497,   498,   499,     0,     0,   681,   691,   500,     0,
    1148,   707,   717,     0,     0,   466,   467,     0,   468,   469,
     470,   471,     0,   676,   686,   472,   438,   617,   702,   712,
       0,     0,     0,   439,   440,     0,   441,   442,   443,     0,
       0,     0,   810,   444,     0,  1149,     0,   390,   398,   404,
     416,   417,     0,   418,   419,   420,   421,     0,   802,   807,
     422,   486,   842,   843,   844,     0,   847,   851,   487,   488,
       0,   489,   490,   491,     0,  1289,     0,     0,   492,     0,
    1150,   863,     0,   438,   395,     0,     0,     0,     0,   880,
     439,   440,     0,   441,   442,   443,     0,   896,   675,   685,
     444,     0,  1151,   701,   711,   912,   446,     0,   917,     0,
       0,     0,     0,   447,   448,     0,   449,   450,   451,     0,
       0,     0,     0,   452,     0,  1152,   390,   398,   404,     0,
       0,     0,   777,   781,   784,   788,     0,   794,   797,   801,
     806,   812,   816,   820,   824,     0,     0,  1262,   454,     0,
       0,     0,     0,     0,     0,   455,   456,     0,   457,   458,
     459,  1272,     0,   672,   682,   460,   438,  1153,   698,   708,
     728,     0,     0,   439,   440,     0,   441,   442,   443,   438,
     849,     0,     0,   444,     0,  1154,   439,   440,     0,   441,
     442,   443,     0,     0,     0,   866,   444,   562,   870,   873,
     876,     0,     0,   882,     0,     0,   886,   889,   892,     0,
       0,   898,     0,   446,   902,   905,   908,     0,     0,   914,
     447,   448,   920,   449,   450,   451,   486,     0,     0,     0,
     452,     0,  1155,   487,   488,     0,   489,   490,   491,   494,
       0,     0,     0,   492,     0,  1156,   495,   496,     0,   497,
     498,   499,   674,   684,   494,     0,   500,   700,   710,     0,
       0,   495,   496,     0,   497,   498,   499,     0,     0,     0,
       0,   500,     0,  1157,     0,     0,     0,   675,   685,     0,
       0,     0,   701,   711,     0,     0,   776,   780,   783,   787,
     791,   793,   796,   800,   805,   811,   815,   819,   823,     0,
     466,   467,     0,   468,   469,   470,   471,   777,   784,   788,
     472,   797,   801,   806,   812,   816,   820,   824,  1259,     0,
       0,   416,   417,     0,   418,   419,   420,   421,     0,   438,
    1290,   422,  1269,   830,   848,     0,   439,   440,   396,   441,
     442,   443,     0,     0,     0,     0,   444,     0,  1158,   865,
       0,     0,   869,   872,   875,     0,     0,   881,     0,     0,
     885,   888,   891,     0,     0,   897,     0,   446,   901,   904,
     907,     0,     0,   913,   447,   448,   919,   449,   450,   451,
     454,     0,     0,     0,   452,     0,  1159,   455,   456,     0,
     457,   458,   459,   486,     0,     0,     0,   460,     0,  1160,
     487,   488,     0,   489,   490,   491,   494,     0,     0,     0,
     492,     0,  1161,   495,   496,     0,   497,   498,   499,     0,
       0,     0,     0,   500,     0,  1162,     0,     0,     0,     0,
       0,   674,   684,   438,     0,     0,   700,   710,     0,     0,
     439,   440,     0,   441,   442,   443,     0,     0,     0,     0,
     444,     0,  1163,     0,     0,     0,     0,     0,     0,     0,
       0,   776,   783,   787,   791,   796,   800,   805,   811,   815,
     819,   823,   446,     0,     0,     0,     0,     0,     0,   447,
     448,     0,   449,   450,   451,   454,     0,     0,     0,   452,
       0,  1164,   455,   456,  1263,   457,   458,   459,     0,   486,
       0,     0,   460,  1287,  1165,     0,   487,   488,  1273,   489,
     490,   491,   494,     0,   393,     0,   492,     0,  1166,   495,
     496,     0,   497,   498,   499,   502,     0,     0,     0,   500,
       0,  1167,   503,   504,     0,   505,   506,   507,   438,     0,
       0,     0,   508,     0,  1168,   439,   440,     0,   441,   442,
     443,   446,     0,     0,     0,   444,     0,  1169,   447,   448,
    1258,   449,   450,   451,     0,   486,     0,     0,   452,     0,
    1170,     0,   487,   488,  1268,   489,   490,   491,   494,     0,
       0,     0,   492,     0,  1171,   495,   496,     0,   497,   498,
     499,   438,     0,     0,     0,   500,     0,  1172,   439,   440,
       0,   441,   442,   443,   446,     0,     0,     0,   444,     0,
    1173,   447,   448,     0,   449,   450,   451,     0,     0,     0,
       0,   452,     0,  1174,     0,     0,     0,     0,     0,     0,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     0,   486,
       0,     0,     0,     0,     0,     0,   487,   488,     0,   489,
     490,   491,     0,     0,     0,     0,   492,  1291,  1175,   494,
       0,     0,     0,     0,   397,     0,   495,   496,     0,   497,
     498,   499,     0,     0,  1254,     0,   500,     0,  1176,     0,
       0,     0,    58,    59,    60,    61,    62,    63,  1264,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
    1283,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,     0,     0,     0,     0,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,     0,     0,  1212,     0,   438,     0,
       0,     0,     0,     0,   133,   439,   440,   134,   441,   442,
     443,     0,   438,  1257,     0,   444,     0,   135,   136,   439,
     440,     0,   441,   442,   443,   446,     0,  1267,     0,   444,
       0,  1177,   447,   448,     0,   449,   450,   451,   486,     0,
       0,     0,   452,     0,  1178,   487,   488,     0,   489,   490,
     491,   494,     0,     0,     0,   492,  1279,  1179,   495,   496,
       0,   497,   498,   499,   438,     0,     0,     0,   500,     0,
    1180,   439,   440,     0,   441,   442,   443,   502,     0,     0,
       0,   444,     0,  1181,   503,   504,     0,   505,   506,   507,
       0,     0,     0,     0,   508,    30,    31,    32,    33,    34,
      35,    36,    37,    38,     0,     0,     0,     0,     0,     0,
      45,     0,    47,     0,    49,     0,    51,   446,    53,     0,
      55,     0,    57,     0,   447,   448,     0,   449,   450,   451,
     486,     0,     0,     0,   452,     0,  1182,   487,   488,     0,
     489,   490,   491,   494,     0,     0,     0,   492,     0,  1183,
     495,   496,     0,   497,   498,   499,     0,     0,     0,     0,
     500,     0,  1184,     0,     0,     0,  1256,    58,    59,    60,
      61,    62,    63,  1282,   455,   456,     0,   457,   458,   459,
    1266,     0,     0,     0,   460,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,    90,    91,    92,    93,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,     0,
       0,     0,     0,   201,   118,   202,   203,   204,   122,   205,
     206,   207,   208,   209,   210,   211,   130,   131,   132,     0,
       0,  1213,     0,   446,     0,     0,     0,     0,     0,   212,
     447,   448,   213,   449,   450,   451,     0,     0,     0,     0,
     452,     0,   214,   215,    39,    40,    41,    42,    43,    44,
       0,    46,     0,    48,  1214,    50,   454,    52,     0,    54,
       0,    56,  1250,   455,   456,     0,   457,   458,   459,  1242,
       0,   486,     0,   460,     0,     0,     0,     0,   487,   488,
       0,   489,   490,   491,     0,  1243,  1281,   494,   492,     0,
       0,     0,     0,     0,   495,   496,     0,   497,   498,   499,
    1244,     0,   502,     0,   500,     0,     0,     0,     0,   503,
     504,     0,   505,   506,   507,   438,     0,     0,     0,   508,
       0,     0,   439,   440,     0,   441,   442,   443,     0,     0,
       0,     0,   444,     0,  1302,     0,     0,     0,     0,     0,
       0,     0,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,     0,     0,     0,     0,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,     0,
       0,     0,     0,   267,     0,   268,   269,   270,     0,   271,
     272,   273,   274,   275,   276,   277,   446,     0,     0,     0,
       0,     0,     0,   447,   448,     0,   449,   450,   451,  1251,
       0,     0,   279,   452,     0,  1303,     0,     0,     0,     0,
       0,     0,   280,   281,    39,    40,    41,    42,    43,    44,
       0,    46,     0,    48,     0,    50,   454,    52,     0,    54,
       0,    56,  1297,   455,   456,     0,   457,   458,   459,   486,
       0,     0,     0,   460,     0,  1304,   487,   488,     0,   489,
     490,   491,   494,     0,     0,     0,   492,     0,  1307,   495,
     496,     0,   497,   498,   499,   502,     0,     0,     0,   500,
       0,  1308,   503,   504,     0,   505,   506,   507,   438,     0,
       0,     0,   508,     0,  1309,   439,   440,     0,   441,   442,
     443,   446,     0,     0,     0,   444,     0,  1312,   447,   448,
       0,   449,   450,   451,     0,     0,     0,     0,   452,     0,
    1313,     0,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,     0,     0,     0,     0,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,     0,
       0,     0,     0,   267,     0,   268,   269,   270,     0,   271,
     272,   273,   274,   275,   276,   277,   454,     0,     0,     0,
       0,     0,     0,   455,   456,     0,   457,   458,   459,   278,
       0,     0,   279,   460,     0,  1314,     0,     0,     0,     0,
       0,     0,   280,   281,    39,    40,    41,    42,    43,    44,
       0,    46,     0,    48,     0,    50,   486,    52,     0,    54,
       0,    56,     0,   487,   488,     0,   489,   490,   491,   494,
       0,     0,     0,   492,     0,  1317,   495,   496,     0,   497,
     498,   499,   502,     0,     0,     0,   500,     0,  1318,   503,
     504,     0,   505,   506,   507,     0,     0,     0,     0,   508,
       0,  1319,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,     0,     0,     0,     0,     0,     0,  1050,
    1051,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,     0,     0,     0,     0,     0,     0,  1057,  1058,
       0,     0,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,     0,     0,     0,     0,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,     0,
       0,     0,     0,   267,     0,   268,   269,   270,     0,   271,
     272,   273,   274,   275,   276,   277,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,     0,     0,   278,
       0,     0,   279,  1064,  1065,     0,     0,     0,     0,     0,
       0,     0,   280,   281,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,     0,     0,     0,     0,     0,
       0,  1071,  1072,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,     0,     0,     0,     0,     0,     0,
       0,   559,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,     0,     0,     0,     0,     0,     0,     0,
     615,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,     0,     0,     0,     0,     0,     0,     0,   831,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,     0,     0,     0,     0,     0,     0,     0,   837,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
       0,     0,     0,     0,     0,     0,     0,  1001,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,     0,
       0,     0,     0,     0,     0,     0,  1006,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,     0,     0,
       0,     0,     0,     0,     0,  1018,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,     0,     0,     0,
       0,     0,     0,     0,  1019,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,     0,     0,     0,     0,
       0,     0,     0,  1020,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,     0,     0,     0,     0,     0,
       0,     0,  1021,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,     0,     0,     0,     0,     0,     0,
       0,  1023,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,     0,     0,     0,     0,     0,     0,     0,
    1028,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,     0,     0,     0,     0,     0,     0,     0,  1033,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,     0,     0,     0,     0,     0,     0,     0,  1038,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
       0,     0,     0,     0,     0,     0,     0,  1042,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,     0,
       0,     0,     0,     0,     0,     0,  1043,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,     0,     0,
       0,     0,     0,     0,     0,  1044,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,     0,     0,     0,
       0,     0,     0,     0,  1045,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,     0,     0,     0,     0,
       0,     0,     0,  1046,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,     0,     0,     0,     0,     0,
       0,     0,  1047,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,     0,     0,     0,     0,     0,     0,
       0,  1076,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,     0,     0,     0,     0,     0,     0,     0,
    1077,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,     0,     0,     0,     0,     0,     0,     0,  1079,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,     0,     0,     0,     0,     0,     0,     0,  1081,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
       0,     0,     0,     0,     0,     0,     0,  1083,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,     0,
       0,     0,     0,     0,     0,     0,  1085,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,     0,     0,
       0,     0,     0,     0,     0,  1087,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,     0,     0,     0,
       0,     0,     0,     0,  1089,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,     0,     0,     0,     0,
       0,     0,     0,  1090,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,     0,     0,     0,     0,     0,
       0,     0,  1091,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,     0,     0,     0,     0,     0,     0,
       0,  1092,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,     0,     0,     0,     0,     0,     0,     0,
    1093,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,     0,     0,     0,     0,     0,     0,     0,  1094,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,     0,     0,     0,     0,     0,     0,     0,  1095,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
       0,     0,     0,     0,     0,     0,     0,  1096,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,     0,
       0,     0,     0,     0,     0,     0,  1097,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,     0,     0,
       0,     0,     0,     0,     0,  1098,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,     0,     0,     0,
       0,     0,     0,     0,  1099,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,     0,     0,     0,     0,
       0,     0,     0,  1102,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,     0,     0,     0,     0,     0,
       0,     0,  1103,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,     0,     0,     0,     0,     0,     0,
       0,  1104,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,     0,     0,     0,     0,     0,     0,     0,
    1105,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,     0,     0,     0,     0,     0,     0,     0,  1106,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,     0,     0,     0,     0,     0,     0,     0,  1107,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
       0,     0,     0,     0,     0,     0,     0,  1108,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,     0,
       0,     0,     0,     0,     0,     0,  1109,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,     0,     0,
       0,     0,     0,     0,     0,  1110,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,     0,     0,     0,
       0,     0,     0,     0,  1111,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,     0,     0,     0,     0,
       0,     0,     0,  1112,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,     0,     0,     0,     0,     0,
       0,     0,  1113,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,     0,     0,     0,     0,     0,     0,
       0,  1114,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,     0,     0,     0,     0,     0,     0,     0,
    1115,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,     0,     0,     0,     0,     0,     0,     0,  1116,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,     0,     0,     0,     0,     0,     0,     0,  1117,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
       0,     0,     0,     0,     0,     0,     0,  1118,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,     0,
       0,     0,     0,     0,     0,     0,  1119,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,     0,     0,
       0,     0,     0,     0,     0,  1120,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,     0,     0,     0,
       0,     0,     0,     0,  1121,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,     0,     0,     0,     0,
       0,     0,     0,  1122,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,     0,     0,     0,     0,     0,
       0,     0,  1123,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,     0,     0,     0,     0,     0,     0,
       0,  1124,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,     0,     0,     0,     0,     0,     0,     0,
    1125,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,     0,     0,     0,     0,     0,     0,     0,  1126,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,     0,     0,     0,     0,     0,     0,     0,  1127,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
       0,     0,     0,     0,     0,     0,     0,  1128,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,     0,
       0,     0,     0,     0,     0,     0,  1129,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,     0,     0,
       0,     0,     0,     0,     0,  1130,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,     0,     0,     0,
       0,     0,     0,     0,  1131,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,     0,     0,     0,     0,
       0,     0,     0,  1132,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,     0,     0,     0,     0,     0,
       0,     0,  1133,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,     0,     0,     0,     0,     0,     0,
       0,  1058,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,     0,     0,     0,     0,     0,     0,     0,
    1072,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,     0,     0,     0,     0,     0,     0,     0,  1292,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,     0,     0,     0,     0,     0,     0,     0,  1296,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
       0,     0,     0,     0,     0,     0,     0,  1299,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,     0,
       0,     0,     0,     0,     0,     0,  1301,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,     0,     0,
       0,     0,     0,     0,     0,  1306,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,     0,     0,     0,
       0,     0,     0,     0,  1311,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,     0,     0,     0,     0,
       0,     0,     0,  1316,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,     0,     0,     0,     0,     0,
       0,     0,  1320,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,     0,     0,     0,     0,     0,     0,
       0,  1321,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,     0,     0,     0,     0,     0,     0,     0,
    1331,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,     0,     0,     0,     0,     0,     0,     0,  1345,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,     0,   446,     0,     0,     0,     0,     0,  1351,   447,
     448,     0,   449,   450,   451,   454,     0,     0,     0,   452,
     564,     0,   455,   456,     0,   457,   458,   459,   486,     0,
       0,     0,   460,   566,     0,   487,   488,     0,   489,   490,
     491,   494,     0,     0,     0,   492,   618,     0,   495,   496,
       0,   497,   498,   499,   502,     0,     0,     0,   500,   620,
       0,   503,   504,     0,   505,   506,   507,   438,     0,     0,
       0,   508,   622,     0,   439,   440,     0,   441,   442,   443,
     446,     0,     0,     0,   444,  1052,     0,   447,   448,     0,
     449,   450,   451,   454,     0,     0,     0,   452,  1053,     0,
     455,   456,     0,   457,   458,   459,   486,     0,     0,     0,
     460,  1054,     0,   487,   488,     0,   489,   490,   491,   494,
       0,     0,     0,   492,  1059,     0,   495,   496,     0,   497,
     498,   499,   502,     0,     0,     0,   500,  1060,     0,   503,
     504,     0,   505,   506,   507,   438,     0,     0,     0,   508,
    1061,     0,   439,   440,     0,   441,   442,   443,   446,     0,
       0,     0,   444,  1066,     0,   447,   448,     0,   449,   450,
     451,   454,     0,     0,     0,   452,  1067,     0,   455,   456,
       0,   457,   458,   459,   486,     0,     0,     0,   460,  1068,
       0,   487,   488,     0,   489,   490,   491,   494,     0,     0,
       0,   492,  1073,     0,   495,   496,     0,   497,   498,   499,
     502,     0,     0,     0,   500,  1074,     0,   503,   504,     0,
     505,   506,   507,     0,     0,     0,     0,   508,  1075,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
       0,     0,     0,     0,     0,     0,   558,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,     0,     0,
       0,     0,     0,     0,   614,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,     0,     0,     0,     0,
       0,     0,  1002,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,     0,     0,     0,     0,     0,     0,
    1003,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,     0,     0,     0,     0,     0,     0,  1004,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
       0,     0,     0,     0,     0,     0,  1005,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,     0,     0,
       0,     0,     0,     0,  1016,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,     0,     0,     0,     0,
       0,     0,  1017,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,     0,     0,     0,     0,     0,     0,
    1100,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,     0,     0,     0,     0,     0,     0,  1101,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
       0,     0,     0,     0,     0,     0,  1057,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,     0,     0,
       0,     0,     0,     0,  1071,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,     0,     0,     0,     0,
       0,     0,  1293,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,     0,     0,     0,     0,     0,     0,
    1294,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,     0,     0,     0,     0,     0,     0,  1295,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
       0,     0,     0,     0,     0,     0,  1332,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,     0,     0,
       0,     0,     0,     0,  1333,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,     0,     0,     0,     0,
       0,     0,  1336,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,     0,     0,     0,     0,     0,     0,
    1337,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,     0,     0,     0,     0,     0,     0,  1340,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
       0,     0,     0,     0,     0,     0,  1341,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,     0,     0,
       0,     0,     0,     0,  1344,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,     0,     0,     0,     0,
       0,     0,  1347,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,     0,     0,     0,     0,  1241,     0,
    1349,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   416,   417,     0,   418,   419,   420,   421,     0,
       0,     0,   422,  1048,  1049,   466,   467,     0,   468,   469,
     470,   471,     0,     0,     0,   472,  1055,  1056,   416,   417,
       0,   418,   419,   420,   421,     0,     0,     0,   422,  1062,
    1063,   466,   467,     0,   468,   469,   470,   471,     0,     0,
       0,   472,  1069,  1070,   466,   467,     0,   468,   469,   470,
     471,     0,     0,     0,   472,     0,   836,   416,   417,     0,
     418,   419,   420,   421,     0,     0,     0,   422,     0,  1022,
     466,   467,     0,   468,   469,   470,   471,     0,     0,     0,
     472,     0,  1027,   416,   417,     0,   418,   419,   420,   421,
       0,     0,     0,   422,     0,  1032,   466,   467,     0,   468,
     469,   470,   471,     0,     0,     0,   472,     0,  1037,   416,
     417,     0,   418,   419,   420,   421,     0,     0,     0,   422,
       0,  1078,   466,   467,     0,   468,   469,   470,   471,     0,
       0,     0,   472,     0,  1080,   416,   417,     0,   418,   419,
     420,   421,     0,     0,     0,   422,     0,  1082,   466,   467,
       0,   468,   469,   470,   471,     0,     0,     0,   472,     0,
    1084,   416,   417,     0,   418,   419,   420,   421,     0,     0,
       0,   422,     0,  1086,   466,   467,     0,   468,   469,   470,
     471,     0,     0,     0,   472,     0,  1088,   466,   467,     0,
     468,   469,   470,   471,     0,     0,     0,   472,     0,  1056,
     466,   467,     0,   468,   469,   470,   471,     0,     0,     0,
     472,     0,  1070,   416,   417,     0,   418,   419,   420,   421,
       0,     0,     0,   422,     0,  1300,   466,   467,     0,   468,
     469,   470,   471,     0,     0,     0,   472,     0,  1305,   416,
     417,     0,   418,   419,   420,   421,     0,     0,     0,   422,
       0,  1310,   466,   467,     0,   468,   469,   470,   471,     0,
       0,     0,   472,     0,  1315,   416,   417,     0,   418,   419,
     420,   421,     0,     0,     0,   422,   560,   466,   467,     0,
     468,   469,   470,   471,     0,     0,     0,   472,   616,   466,
     467,     0,   468,   469,   470,   471,     0,     0,     0,   472,
    1055,   466,   467,     0,   468,   469,   470,   471,     0,     0,
       0,   472,  1069,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   487,   488,     0,   489,   490,
     491,     0,     0,   495,   496,   492,   497,   498,   499,     0,
       0,   503,   504,   500,   505,   506,   507,     0,     0,     0,
       0,   508
  };

  const short
  SubsetValueExpressionParser::yycheck_[] =
  {
       1,     2,     3,    31,    31,    31,    31,    93,    93,   143,
       1,   145,   189,   147,   188,   149,   167,   151,   169,   170,
       0,    12,    13,   157,   190,   159,   190,   161,   190,   163,
     190,   165,   190,   167,    84,    85,    86,   188,    88,    89,
      73,    74,    92,   190,     1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,   190,   190,   180,
     181,   182,   183,   190,   150,   150,   187,    24,    25,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    84,    85,    86,   190,    88,    89,   452,   167,    92,
     169,   170,   190,   190,   167,   460,   169,   170,   190,   167,
     150,   169,   170,   167,   170,   169,   170,   190,   190,   167,
     189,   169,   170,   190,   150,   190,   189,   180,   181,   182,
     183,   189,   187,   190,   187,   189,   472,   492,     1,   190,
     188,   190,   133,   190,   135,   500,   190,   190,   150,   190,
     189,    14,    15,   508,   135,   136,   190,   150,   170,   190,
     180,   181,   182,   190,   189,   177,   178,   187,   180,   181,
     182,   189,   189,   189,   189,   187,   190,   189,   189,   180,
     181,   182,   167,   190,   169,   170,   187,   190,   135,   136,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,   167,   170,   169,
     170,   212,   190,   214,   190,   177,   178,   190,   180,   181,
     182,   170,   190,   214,   215,   187,   190,   189,   177,   178,
     189,   180,   181,   182,   170,    81,    82,    83,   187,   190,
     189,   177,   178,   190,   180,   181,   182,   170,   179,   180,
     181,   187,   190,   189,   177,   178,   190,   180,   181,   182,
     133,   170,   135,   190,   187,   190,   189,   189,   177,   178,
     190,   180,   181,   182,   170,    81,    82,    83,   187,   190,
     189,   177,   178,   190,   180,   181,   182,   190,   170,   190,
     424,   187,   190,   189,   189,   177,   178,   190,   180,   181,
     182,   190,   303,   304,     1,   187,   190,   189,   187,   190,
     177,   178,   190,   180,   181,   182,   317,   318,   319,   320,
     187,    18,    19,   280,   281,   180,   181,   182,   179,   180,
     181,   190,   187,   190,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   170,   190,   180,   181,   182,   190,   190,   177,   178,
     187,   180,   181,   182,   170,   190,   190,   190,   187,   190,
     189,   177,   178,   190,   180,   181,   182,   180,   181,   182,
     190,   187,   170,   189,   187,   278,   190,   280,   190,   177,
     178,   190,   180,   181,   182,   190,   190,   418,   419,   187,
     190,   189,   187,   190,   190,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   133,   134,   135,   190,
     441,   442,   190,   170,   190,   180,   181,   182,   449,   450,
     177,   178,   187,   180,   181,   182,   457,   458,   190,   190,
     187,   462,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   463,   464,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   168,
     190,   190,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   190,     6,     7,   170,
       9,    10,    11,   190,   511,   512,   177,   178,     1,   180,
     181,   182,   170,   190,   190,   190,   187,   190,   189,   177,
     178,   190,   180,   181,   182,   190,   190,    20,    21,   187,
     170,   278,   279,   280,   190,   190,   190,   177,   178,   190,
     180,   181,   182,   190,   190,   468,   469,   187,   190,   189,
     189,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   190,   190,   190,   190,   489,   490,   190,   170,
     190,   190,   190,   190,   497,   498,   177,   178,   190,   180,
     181,   182,   505,   506,   190,   190,   187,   510,   189,   187,
     190,   338,   339,   190,   170,   190,   343,   344,   190,   522,
     523,   177,   178,   190,   180,   181,   182,   170,   190,   190,
     190,   187,   190,   189,   177,   178,   190,   180,   181,   182,
     190,   190,   190,   190,   187,   372,   189,   374,   375,   376,
     190,   378,   379,   380,   381,   382,   383,   384,   190,   190,
     133,   134,   135,   190,   190,   190,   190,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   587,   588,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     190,   187,   190,   190,     1,   170,   190,   190,   190,   190,
     190,   190,   177,   178,   190,   180,   181,   182,   170,    16,
      17,   190,   187,   190,   189,   177,   178,   190,   180,   181,
     182,   190,   190,   190,   170,   187,   190,   189,   187,   190,
     190,   177,   178,   470,   180,   181,   182,   190,   190,   190,
     190,   187,   190,   189,   170,   190,   483,   190,   190,   486,
     487,   488,   190,   190,   491,   190,   190,   494,   190,   190,
     190,   190,   499,   190,   170,   502,   190,   190,   190,   190,
     507,   177,   178,   510,   180,   181,   182,   190,   190,   190,
     190,   187,   170,   189,   187,   190,   190,   189,   189,   177,
     178,   189,   180,   181,   182,   278,   279,   280,   170,   187,
     189,   189,   189,   187,   189,   177,   178,   189,   180,   181,
     182,   189,   170,   189,   189,   187,   189,   189,   189,   177,
     178,   189,   180,   181,   182,   189,   133,   190,   135,   187,
     190,   189,    -1,   190,   190,   190,   573,   574,   190,   189,
     170,   578,   579,   189,   189,   189,   189,   177,   178,   189,
     180,   181,   182,   189,    -1,   338,   339,   187,    -1,   189,
     343,   344,    -1,    -1,     1,    -1,   603,   604,   605,   606,
     607,   608,   609,   610,   611,   612,   613,    -1,   177,   178,
      -1,   180,   181,   182,   183,    22,    23,    -1,   187,   372,
     189,   374,   375,    -1,    -1,   378,   379,   380,   381,   382,
     383,   384,   170,    -1,    -1,    -1,    -1,    -1,    -1,   177,
     178,    -1,   180,   181,   182,   170,    -1,    -1,    -1,   187,
      -1,   189,   177,   178,    -1,   180,   181,   182,    -1,    -1,
      -1,   170,   187,    -1,   189,    -1,    -1,     1,   177,   178,
      -1,   180,   181,   182,    -1,    -1,    10,    11,   187,    -1,
     189,    -1,    -1,    -1,    -1,   177,   178,    -1,   180,   181,
     182,  1002,  1003,  1004,  1005,   187,    -1,    -1,    -1,   170,
      -1,   278,    -1,   280,    -1,  1016,   177,   178,    -1,   180,
     181,   182,   170,    -1,    -1,    -1,   187,   470,   189,   177,
     178,    -1,   180,   181,   182,    -1,   133,    -1,   135,   187,
     483,   189,    -1,   486,    -1,    -1,    -1,    -1,   491,  1050,
      -1,   494,   495,   496,    -1,    -1,   499,    -1,   170,   502,
      -1,    -1,    -1,  1064,   507,   177,   178,   510,   180,   181,
     182,   338,   339,    -1,    -1,   187,   343,   344,   170,    -1,
     347,   348,   349,    -1,    -1,   177,   178,    -1,   180,   181,
     182,    -1,    -1,   170,    -1,   187,    -1,   189,    -1,  1100,
     177,   178,    -1,   180,   181,   182,    -1,    -1,    -1,   133,
     187,   135,   189,    -1,    -1,   170,    -1,     1,    -1,    -1,
       4,     5,   177,   178,    -1,   180,   181,   182,    -1,    -1,
     573,   574,   187,    -1,   189,   578,   579,    -1,   170,    -1,
      -1,    -1,    -1,    -1,  1017,   177,   178,    -1,   180,   181,
     182,    -1,    -1,    -1,    -1,   187,    -1,   189,    -1,    -1,
     603,   604,   605,   168,   607,   608,   609,   610,   611,   612,
     613,    -1,   177,   178,    -1,   180,   181,   182,   183,    -1,
      -1,   278,   187,   280,  1057,   170,    -1,    -1,   212,    -1,
     214,    -1,   177,   178,    -1,   180,   181,   182,  1071,   466,
     467,   468,   187,   470,   471,    -1,    -1,    -1,   168,    -1,
    1211,    -1,    -1,    -1,    -1,    -1,   483,   177,   178,    -1,
     180,   181,   182,   183,   491,    -1,    -1,   187,  1101,    -1,
      -1,     1,   499,    -1,    -1,    -1,    -1,    -1,     8,     9,
     507,   338,   339,   510,    -1,    -1,   343,   344,    -1,   133,
     170,   135,    -1,    -1,    -1,   522,   523,   177,   178,    -1,
     180,   181,   182,   170,    -1,    -1,    -1,   187,    -1,   189,
     177,   178,    -1,   180,   181,   182,    -1,    -1,   170,    -1,
     187,    -1,   189,   380,    -1,   177,   178,    -1,   180,   181,
     182,   170,  1293,  1294,  1295,   187,    -1,   189,   177,   178,
      -1,   180,   181,   182,    -1,    -1,   573,   574,   187,    -1,
     189,   578,   579,   580,   338,   339,    -1,    -1,    -1,   343,
     344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,
     214,  1332,  1333,    -1,    -1,  1336,  1337,    -1,    -1,  1340,
    1341,    -1,    -1,  1344,    -1,    -1,  1347,    -1,  1349,   373,
      -1,    -1,    -1,   377,    -1,   379,   380,    -1,    -1,    -1,
      -1,    -1,  1059,   133,   134,   135,    -1,    -1,  1241,    -1,
      -1,    -1,    -1,   470,    -1,    -1,  1073,    -1,  1251,    -1,
      -1,    -1,    -1,    -1,    -1,     1,   483,    -1,    -1,   486,
       6,     7,    -1,    -1,   491,    -1,   420,   494,    -1,    -1,
      -1,    -1,   499,    -1,    -1,   502,   503,   504,    -1,    -1,
     507,   435,    -1,   510,   438,   439,   440,    -1,    -1,   443,
      -1,    -1,   446,   447,   448,    -1,    -1,   451,    -1,   170,
     454,   455,   456,    -1,    -1,   459,   177,   178,   462,   180,
     181,   182,   212,   213,   214,    -1,   187,    -1,   189,    -1,
      -1,    -1,    -1,    -1,   338,   339,    -1,    -1,    -1,   343,
     344,   170,    -1,   347,   348,   349,    -1,    -1,   177,   178,
      -1,   180,   181,   182,    -1,    -1,   573,   574,   187,    -1,
     189,   578,   579,    -1,    -1,   177,   178,    -1,   180,   181,
     182,   183,    -1,   517,   518,   187,   170,   189,   522,   523,
      -1,    -1,    -1,   177,   178,    -1,   180,   181,   182,    -1,
      -1,    -1,   609,   187,    -1,   189,    -1,   133,   134,   135,
     177,   178,    -1,   180,   181,   182,   183,    -1,   552,   553,
     187,   170,   416,   417,   418,    -1,   420,   421,   177,   178,
      -1,   180,   181,   182,    -1,  1242,    -1,    -1,   187,    -1,
     189,   435,    -1,   170,  1251,    -1,    -1,    -1,    -1,   443,
     177,   178,    -1,   180,   181,   182,    -1,   451,   338,   339,
     187,    -1,   189,   343,   344,   459,   170,    -1,   462,    -1,
      -1,    -1,    -1,   177,   178,    -1,   180,   181,   182,    -1,
      -1,    -1,    -1,   187,    -1,   189,   212,   213,   214,    -1,
      -1,    -1,   372,   373,   374,   375,    -1,   377,   378,   379,
     380,   381,   382,   383,   384,    -1,    -1,  1060,   170,    -1,
      -1,    -1,    -1,    -1,    -1,   177,   178,    -1,   180,   181,
     182,  1074,    -1,   517,   518,   187,   170,   189,   522,   523,
     524,    -1,    -1,   177,   178,    -1,   180,   181,   182,   170,
     420,    -1,    -1,   187,    -1,   189,   177,   178,    -1,   180,
     181,   182,    -1,    -1,    -1,   435,   187,   188,   438,   439,
     440,    -1,    -1,   443,    -1,    -1,   446,   447,   448,    -1,
      -1,   451,    -1,   170,   454,   455,   456,    -1,    -1,   459,
     177,   178,   462,   180,   181,   182,   170,    -1,    -1,    -1,
     187,    -1,   189,   177,   178,    -1,   180,   181,   182,   170,
      -1,    -1,    -1,   187,    -1,   189,   177,   178,    -1,   180,
     181,   182,   338,   339,   170,    -1,   187,   343,   344,    -1,
      -1,   177,   178,    -1,   180,   181,   182,    -1,    -1,    -1,
      -1,   187,    -1,   189,    -1,    -1,    -1,   517,   518,    -1,
      -1,    -1,   522,   523,    -1,    -1,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,    -1,
     177,   178,    -1,   180,   181,   182,   183,   547,   548,   549,
     187,   551,   552,   553,   554,   555,   556,   557,  1055,    -1,
      -1,   177,   178,    -1,   180,   181,   182,   183,    -1,   170,
    1243,   187,  1069,   189,   420,    -1,   177,   178,  1251,   180,
     181,   182,    -1,    -1,    -1,    -1,   187,    -1,   189,   435,
      -1,    -1,   438,   439,   440,    -1,    -1,   443,    -1,    -1,
     446,   447,   448,    -1,    -1,   451,    -1,   170,   454,   455,
     456,    -1,    -1,   459,   177,   178,   462,   180,   181,   182,
     170,    -1,    -1,    -1,   187,    -1,   189,   177,   178,    -1,
     180,   181,   182,   170,    -1,    -1,    -1,   187,    -1,   189,
     177,   178,    -1,   180,   181,   182,   170,    -1,    -1,    -1,
     187,    -1,   189,   177,   178,    -1,   180,   181,   182,    -1,
      -1,    -1,    -1,   187,    -1,   189,    -1,    -1,    -1,    -1,
      -1,   517,   518,   170,    -1,    -1,   522,   523,    -1,    -1,
     177,   178,    -1,   180,   181,   182,    -1,    -1,    -1,    -1,
     187,    -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   170,    -1,    -1,    -1,    -1,    -1,    -1,   177,
     178,    -1,   180,   181,   182,   170,    -1,    -1,    -1,   187,
      -1,   189,   177,   178,  1061,   180,   181,   182,    -1,   170,
      -1,    -1,   187,  1240,   189,    -1,   177,   178,  1075,   180,
     181,   182,   170,    -1,  1251,    -1,   187,    -1,   189,   177,
     178,    -1,   180,   181,   182,   170,    -1,    -1,    -1,   187,
      -1,   189,   177,   178,    -1,   180,   181,   182,   170,    -1,
      -1,    -1,   187,    -1,   189,   177,   178,    -1,   180,   181,
     182,   170,    -1,    -1,    -1,   187,    -1,   189,   177,   178,
    1054,   180,   181,   182,    -1,   170,    -1,    -1,   187,    -1,
     189,    -1,   177,   178,  1068,   180,   181,   182,   170,    -1,
      -1,    -1,   187,    -1,   189,   177,   178,    -1,   180,   181,
     182,   170,    -1,    -1,    -1,   187,    -1,   189,   177,   178,
      -1,   180,   181,   182,   170,    -1,    -1,    -1,   187,    -1,
     189,   177,   178,    -1,   180,   181,   182,    -1,    -1,    -1,
      -1,   187,    -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,   170,
      -1,    -1,    -1,    -1,    -1,    -1,   177,   178,    -1,   180,
     181,   182,    -1,    -1,    -1,    -1,   187,  1244,   189,   170,
      -1,    -1,    -1,    -1,  1251,    -1,   177,   178,    -1,   180,
     181,   182,    -1,    -1,  1048,    -1,   187,    -1,   189,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,  1062,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
    1214,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,    -1,    -1,   168,    -1,   170,    -1,
      -1,    -1,    -1,    -1,   177,   177,   178,   180,   180,   181,
     182,    -1,   170,  1053,    -1,   187,    -1,   190,   191,   177,
     178,    -1,   180,   181,   182,   170,    -1,  1067,    -1,   187,
      -1,   189,   177,   178,    -1,   180,   181,   182,   170,    -1,
      -1,    -1,   187,    -1,   189,   177,   178,    -1,   180,   181,
     182,   170,    -1,    -1,    -1,   187,  1210,   189,   177,   178,
      -1,   180,   181,   182,   170,    -1,    -1,    -1,   187,    -1,
     189,   177,   178,    -1,   180,   181,   182,   170,    -1,    -1,
      -1,   187,    -1,   189,   177,   178,    -1,   180,   181,   182,
      -1,    -1,    -1,    -1,   187,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    22,    -1,    24,   170,    26,    -1,
      28,    -1,    30,    -1,   177,   178,    -1,   180,   181,   182,
     170,    -1,    -1,    -1,   187,    -1,   189,   177,   178,    -1,
     180,   181,   182,   170,    -1,    -1,    -1,   187,    -1,   189,
     177,   178,    -1,   180,   181,   182,    -1,    -1,    -1,    -1,
     187,    -1,   189,    -1,    -1,    -1,  1052,    75,    76,    77,
      78,    79,    80,  1213,   177,   178,    -1,   180,   181,   182,
    1066,    -1,    -1,    -1,   187,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,    -1,
      -1,   168,    -1,   170,    -1,    -1,    -1,    -1,    -1,   177,
     177,   178,   180,   180,   181,   182,    -1,    -1,    -1,    -1,
     187,    -1,   190,   191,    12,    13,    14,    15,    16,    17,
      -1,    19,    -1,    21,   168,    23,   170,    25,    -1,    27,
      -1,    29,    30,   177,   178,    -1,   180,   181,   182,   168,
      -1,   170,    -1,   187,    -1,    -1,    -1,    -1,   177,   178,
      -1,   180,   181,   182,    -1,   168,  1212,   170,   187,    -1,
      -1,    -1,    -1,    -1,   177,   178,    -1,   180,   181,   182,
     168,    -1,   170,    -1,   187,    -1,    -1,    -1,    -1,   177,
     178,    -1,   180,   181,   182,   170,    -1,    -1,    -1,   187,
      -1,    -1,   177,   178,    -1,   180,   181,   182,    -1,    -1,
      -1,    -1,   187,    -1,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,    -1,    -1,    -1,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,   162,   163,   170,    -1,    -1,    -1,
      -1,    -1,    -1,   177,   178,    -1,   180,   181,   182,   177,
      -1,    -1,   180,   187,    -1,   189,    -1,    -1,    -1,    -1,
      -1,    -1,   190,   191,    12,    13,    14,    15,    16,    17,
      -1,    19,    -1,    21,    -1,    23,   170,    25,    -1,    27,
      -1,    29,    30,   177,   178,    -1,   180,   181,   182,   170,
      -1,    -1,    -1,   187,    -1,   189,   177,   178,    -1,   180,
     181,   182,   170,    -1,    -1,    -1,   187,    -1,   189,   177,
     178,    -1,   180,   181,   182,   170,    -1,    -1,    -1,   187,
      -1,   189,   177,   178,    -1,   180,   181,   182,   170,    -1,
      -1,    -1,   187,    -1,   189,   177,   178,    -1,   180,   181,
     182,   170,    -1,    -1,    -1,   187,    -1,   189,   177,   178,
      -1,   180,   181,   182,    -1,    -1,    -1,    -1,   187,    -1,
     189,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,    -1,    -1,    -1,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,   162,   163,   170,    -1,    -1,    -1,
      -1,    -1,    -1,   177,   178,    -1,   180,   181,   182,   177,
      -1,    -1,   180,   187,    -1,   189,    -1,    -1,    -1,    -1,
      -1,    -1,   190,   191,    12,    13,    14,    15,    16,    17,
      -1,    19,    -1,    21,    -1,    23,   170,    25,    -1,    27,
      -1,    29,    -1,   177,   178,    -1,   180,   181,   182,   170,
      -1,    -1,    -1,   187,    -1,   189,   177,   178,    -1,   180,
     181,   182,   170,    -1,    -1,    -1,   187,    -1,   189,   177,
     178,    -1,   180,   181,   182,    -1,    -1,    -1,    -1,   187,
      -1,   189,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,   188,
     189,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,    -1,    -1,    -1,    -1,   188,   189,
      -1,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,    -1,    -1,    -1,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,   151,    -1,   153,   154,   155,    -1,   157,
     158,   159,   160,   161,   162,   163,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,    -1,    -1,   177,
      -1,    -1,   180,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,   191,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,
      -1,   188,   189,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   189,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   189,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   189,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   189,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   189,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   189,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   189,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   189,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   189,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   189,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   189,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   189,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   189,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   189,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   189,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   189,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   189,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   189,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   189,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   189,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   189,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   189,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   189,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   189,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   189,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   189,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   189,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   189,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   189,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   189,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   189,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   189,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   189,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   189,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   189,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   189,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   189,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   189,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   189,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   189,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   189,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   189,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   189,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   189,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   189,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   189,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   189,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   189,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   189,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     189,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,    -1,   170,    -1,    -1,    -1,    -1,    -1,   189,   177,
     178,    -1,   180,   181,   182,   170,    -1,    -1,    -1,   187,
     188,    -1,   177,   178,    -1,   180,   181,   182,   170,    -1,
      -1,    -1,   187,   188,    -1,   177,   178,    -1,   180,   181,
     182,   170,    -1,    -1,    -1,   187,   188,    -1,   177,   178,
      -1,   180,   181,   182,   170,    -1,    -1,    -1,   187,   188,
      -1,   177,   178,    -1,   180,   181,   182,   170,    -1,    -1,
      -1,   187,   188,    -1,   177,   178,    -1,   180,   181,   182,
     170,    -1,    -1,    -1,   187,   188,    -1,   177,   178,    -1,
     180,   181,   182,   170,    -1,    -1,    -1,   187,   188,    -1,
     177,   178,    -1,   180,   181,   182,   170,    -1,    -1,    -1,
     187,   188,    -1,   177,   178,    -1,   180,   181,   182,   170,
      -1,    -1,    -1,   187,   188,    -1,   177,   178,    -1,   180,
     181,   182,   170,    -1,    -1,    -1,   187,   188,    -1,   177,
     178,    -1,   180,   181,   182,   170,    -1,    -1,    -1,   187,
     188,    -1,   177,   178,    -1,   180,   181,   182,   170,    -1,
      -1,    -1,   187,   188,    -1,   177,   178,    -1,   180,   181,
     182,   170,    -1,    -1,    -1,   187,   188,    -1,   177,   178,
      -1,   180,   181,   182,   170,    -1,    -1,    -1,   187,   188,
      -1,   177,   178,    -1,   180,   181,   182,   170,    -1,    -1,
      -1,   187,   188,    -1,   177,   178,    -1,   180,   181,   182,
     170,    -1,    -1,    -1,   187,   188,    -1,   177,   178,    -1,
     180,   181,   182,    -1,    -1,    -1,    -1,   187,   188,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,    -1,    -1,    -1,    -1,    -1,   188,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,    -1,
      -1,    -1,    -1,    -1,   188,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,
      -1,    -1,   188,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,
     188,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,    -1,    -1,    -1,    -1,   188,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,    -1,    -1,    -1,    -1,    -1,   188,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,    -1,
      -1,    -1,    -1,    -1,   188,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,
      -1,    -1,   188,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,
     188,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,    -1,    -1,    -1,    -1,   188,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,    -1,    -1,    -1,    -1,    -1,   188,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,    -1,
      -1,    -1,    -1,    -1,   188,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,
      -1,    -1,   188,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,
     188,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,    -1,    -1,    -1,    -1,   188,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,    -1,    -1,    -1,    -1,    -1,   188,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,    -1,
      -1,    -1,    -1,    -1,   188,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,
      -1,    -1,   188,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,    -1,    -1,    -1,    -1,    -1,
     188,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,    -1,    -1,    -1,    -1,   188,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      -1,    -1,    -1,    -1,    -1,    -1,   188,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,    -1,
      -1,    -1,    -1,    -1,   188,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,    -1,    -1,    -1,    -1,
      -1,    -1,   188,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,    -1,    -1,    -1,   168,    -1,
     188,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   177,   178,    -1,   180,   181,   182,   183,    -1,
      -1,    -1,   187,   188,   189,   177,   178,    -1,   180,   181,
     182,   183,    -1,    -1,    -1,   187,   188,   189,   177,   178,
      -1,   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,
     189,   177,   178,    -1,   180,   181,   182,   183,    -1,    -1,
      -1,   187,   188,   189,   177,   178,    -1,   180,   181,   182,
     183,    -1,    -1,    -1,   187,    -1,   189,   177,   178,    -1,
     180,   181,   182,   183,    -1,    -1,    -1,   187,    -1,   189,
     177,   178,    -1,   180,   181,   182,   183,    -1,    -1,    -1,
     187,    -1,   189,   177,   178,    -1,   180,   181,   182,   183,
      -1,    -1,    -1,   187,    -1,   189,   177,   178,    -1,   180,
     181,   182,   183,    -1,    -1,    -1,   187,    -1,   189,   177,
     178,    -1,   180,   181,   182,   183,    -1,    -1,    -1,   187,
      -1,   189,   177,   178,    -1,   180,   181,   182,   183,    -1,
      -1,    -1,   187,    -1,   189,   177,   178,    -1,   180,   181,
     182,   183,    -1,    -1,    -1,   187,    -1,   189,   177,   178,
      -1,   180,   181,   182,   183,    -1,    -1,    -1,   187,    -1,
     189,   177,   178,    -1,   180,   181,   182,   183,    -1,    -1,
      -1,   187,    -1,   189,   177,   178,    -1,   180,   181,   182,
     183,    -1,    -1,    -1,   187,    -1,   189,   177,   178,    -1,
     180,   181,   182,   183,    -1,    -1,    -1,   187,    -1,   189,
     177,   178,    -1,   180,   181,   182,   183,    -1,    -1,    -1,
     187,    -1,   189,   177,   178,    -1,   180,   181,   182,   183,
      -1,    -1,    -1,   187,    -1,   189,   177,   178,    -1,   180,
     181,   182,   183,    -1,    -1,    -1,   187,    -1,   189,   177,
     178,    -1,   180,   181,   182,   183,    -1,    -1,    -1,   187,
      -1,   189,   177,   178,    -1,   180,   181,   182,   183,    -1,
      -1,    -1,   187,    -1,   189,   177,   178,    -1,   180,   181,
     182,   183,    -1,    -1,    -1,   187,   188,   177,   178,    -1,
     180,   181,   182,   183,    -1,    -1,    -1,   187,   188,   177,
     178,    -1,   180,   181,   182,   183,    -1,    -1,    -1,   187,
     188,   177,   178,    -1,   180,   181,   182,   183,    -1,    -1,
      -1,   187,   188,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   177,   178,    -1,   180,   181,
     182,    -1,    -1,   177,   178,   187,   180,   181,   182,    -1,
      -1,   177,   178,   187,   180,   181,   182,    -1,    -1,    -1,
      -1,   187
  };

  const unsigned char
  SubsetValueExpressionParser::yystos_[] =
  {
       0,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,   193,   194,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    75,    76,
      77,    78,    79,    80,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   177,   180,   190,   191,   196,   200,   201,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   151,   153,   154,   155,   157,   158,   159,   160,   161,
     162,   163,   177,   180,   190,   191,   200,   205,   207,   209,
     211,   213,   205,   200,   205,   200,   207,   207,   209,   209,
     211,   211,   213,   213,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   151,   153,   154,
     155,   157,   158,   159,   160,   161,   162,   163,   177,   180,
     190,   191,   219,   221,   223,   225,   227,   229,   221,   219,
     221,   219,   223,   223,   225,   225,   227,   227,   229,   229,
     189,   188,     0,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   200,   205,
     207,   209,   211,   219,   221,   223,   225,   227,   207,   209,
     223,   225,   200,   205,   207,   209,   211,   213,   219,   221,
     223,   225,   227,   229,   213,   229,   177,   178,   180,   181,
     182,   183,   187,    73,    74,   195,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   195,   170,   177,
     178,   180,   181,   182,   187,   195,   170,   177,   178,   180,
     181,   182,   187,   195,   170,   177,   178,   180,   181,   182,
     187,   195,   167,   169,   170,   195,   177,   178,   180,   181,
     182,   183,   187,   195,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   195,   170,   177,   178,   180,
     181,   182,   187,   195,   170,   177,   178,   180,   181,   182,
     187,   195,   170,   177,   178,   180,   181,   182,   187,   195,
     167,   169,   170,   195,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   188,   189,
     188,   189,   188,   189,   188,   189,   188,   189,   188,   189,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   188,   189,   188,   189,   188,   189,
     188,   189,   188,   189,   188,   189,   205,   205,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     205,   205,   205,   205,    31,   189,    31,   189,   189,    31,
     189,    31,   189,   189,   189,   189,   189,   189,   189,   189,
     189,     6,     7,     9,    10,    11,   205,   221,   205,   221,
     205,   221,   200,   205,   207,   209,   211,   219,   221,   223,
     225,   227,   200,   205,   207,   209,   211,   219,   221,   223,
     225,   227,   205,   221,   205,   221,   205,   221,   200,   205,
     207,   209,   211,   219,   221,   223,   225,   227,   200,   205,
     207,   209,   211,   219,   221,   223,   225,   227,   205,   205,
     200,   205,   219,   221,   200,   205,   219,   221,   200,   205,
     219,   221,   205,   221,   205,   221,   205,   221,   205,   221,
     205,   221,   205,   221,   205,   221,   205,   221,   205,   221,
     205,   221,   205,   221,   205,   221,   205,   221,   205,   221,
     205,   221,   205,   221,   205,   221,   205,   221,   205,   221,
     205,   221,   205,   221,   205,   221,   207,   209,   223,   225,
     207,   209,   211,   207,   209,   223,   225,   207,   209,   223,
     225,   207,   223,   207,   209,   211,   207,   209,   223,   225,
     207,   209,   211,   223,   225,   207,   209,   211,   223,   225,
     227,   207,   209,   223,   225,   207,   209,   223,   225,   207,
     209,   223,   225,   207,   209,   223,   225,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   200,   200,   200,   205,   205,   200,   207,   209,
     211,   200,   197,   195,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   200,   205,   207,   209,   211,   205,   207,
     209,   211,   207,   209,   211,   207,   209,   211,   205,   205,
     200,   207,   209,   211,   198,   207,   209,   211,   207,   209,
     211,   207,   209,   211,   205,   205,   200,   207,   209,   211,
     198,   207,   209,   211,   207,   209,   211,   207,   209,   211,
     205,   205,   200,   207,   209,   211,   198,   200,   205,   207,
     209,   211,   213,   213,   219,   219,   219,   221,   221,   219,
     223,   225,   227,   219,   197,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   219,   221,   223,   225,   227,   221,
     223,   225,   227,   223,   223,   221,   221,   219,   223,   225,
     227,   198,   223,   225,   227,   225,   225,   221,   221,   219,
     223,   225,   227,   198,   223,   225,   227,   227,   227,   221,
     221,   219,   223,   225,   227,   198,   219,   221,   223,   225,
     227,   229,   229,   219,   221,   219,   221,   219,   221,   219,
     221,   189,   188,   188,   188,   188,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   188,   188,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   188,   189,
     188,   189,   188,   188,   188,   188,   189,   188,   189,   188,
     188,   188,   188,   189,   188,   189,   188,   188,   188,   188,
     189,   188,   189,   188,   188,   188,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     188,   188,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,    81,    82,    83,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
     150,    84,    85,    86,    88,    89,    92,   150,    93,   150,
     168,   168,   168,   168,   168,    81,    82,    83,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
     150,    84,    85,    86,    88,    89,    92,   150,    93,   150,
     168,   168,   168,   168,   168,   205,   205,   205,   205,   205,
      30,   177,   202,   221,   200,   205,   207,   209,   211,   219,
     221,   223,   225,   227,   200,   205,   207,   209,   211,   219,
     221,   223,   225,   227,   205,   221,   190,   190,   190,   200,
     205,   207,   209,   211,   190,   190,   190,   219,   221,   223,
     225,   227,   189,   188,   188,   188,   189,    30,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   205,   205,
     205,   189,   188,   188,   205,   205,   188,   188,   205,   205,
     188,   188,   205,   205,   188,   189,   205,   188,   205,   188,
     205,   189
  };

  const unsigned char
  SubsetValueExpressionParser::yyr1_[] =
  {
       0,   192,   193,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     195,   195,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   197,   198,   199,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   201,   202,   202,   203,   203,   203,   203,   203,   203,
     203,   203,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   206,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   208,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     210,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   212,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   214,   215,
     216,   217,   218,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   220,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   222,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     224,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   226,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   228,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   230
  };

  const unsigned char
  SubsetValueExpressionParser::yyr2_[] =
  {
       0,     2,     1,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     0,     0,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     3,     4,     4,     4,     4,     4,
       4,     4,     5,     3,     3,     3,     2,     1,     4,     6,
       6,     3,     1,     2,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     1,     1,     3,     3,     3,     3,     3,     6,
       4,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     6,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     5,     1,     3,     3,     3,
       3,     3,     4,     3,     4,     3,     4,     3,     4,     3,
       3,     3,     3,     2,     1,     4,     1,     4,     6,     6,
       6,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     4,     4,     4,     4,     4,     4,
       4,     6,     5,     2,     1,     4,     6,     6,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     6,     5,     2,     1,     4,     6,     6,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     2,
       3,     4,     4,     4,     4,     6,     5,     2,     1,     4,
       6,     6,     3,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     1,     3,     8,
      20,    14,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     4,     4,
       4,     4,     4,     4,     4,     3,     5,     2,     1,     6,
       6,     3,     3,     3,     3,     3,     3,     6,     6,     4,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     6,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     5,     2,
       1,     6,     6,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     4,     4,     4,
       4,     4,     4,     4,     6,     5,     2,     1,     6,     6,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       6,     5,     2,     1,     6,     6,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     4,     4,     4,     6,     5,
       2,     1,     6,     6,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     1,     3
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const SubsetValueExpressionParser::yytname_[] =
  {
  "$end", "error", "$undefined", "\"timeline\"", "\"lookup\"",
  "\"lookup2D\"", "\"scalarID\"", "\"vectorID\"", "\"logicalID\"",
  "\"tensorID\"", "\"symmTensorID\"", "\"sphericalTensorID\"",
  "\"pointScalarID\"", "\"pointVectorID\"", "\"pointLogicalID\"",
  "\"pointTensorID\"", "\"pointSymmTensorID\"",
  "\"pointSphericalTensorID\"", "\"F_scalarID\"", "\"F_pointScalarID\"",
  "\"F_vectorID\"", "\"F_pointVectorID\"", "\"F_tensorID\"",
  "\"F_pointTensorID\"", "\"F_symmTensorID\"", "\"F_pointSymmTensorID\"",
  "\"F_sphericalTensorID\"", "\"F_pointSphericalTensorID\"",
  "\"F_logicalID\"", "\"F_pointLogicalID\"", "\"value\"", "\"integer\"",
  "\"vector\"", "\"sexpression\"", "\"expression\"", "\"pexpression\"",
  "\"lexpression\"", "\"plexpression\"", "\"vexpression\"",
  "\"pvexpression\"", "\"texpression\"", "\"ptexpression\"",
  "\"yexpression\"", "\"pyexpression\"", "\"hexpression\"",
  "\"phexpression\"", "START_DEFAULT", "START_FACE_SCALAR_COMMA",
  "START_FACE_SCALAR_CLOSE", "START_FACE_VECTOR_COMMA",
  "START_FACE_VECTOR_CLOSE", "START_FACE_TENSOR_COMMA",
  "START_FACE_TENSOR_CLOSE", "START_FACE_YTENSOR_COMMA",
  "START_FACE_YTENSOR_CLOSE", "START_FACE_HTENSOR_COMMA",
  "START_FACE_HTENSOR_CLOSE", "START_FACE_LOGICAL_COMMA",
  "START_FACE_LOGICAL_CLOSE", "START_POINT_SCALAR_COMMA",
  "START_POINT_SCALAR_CLOSE", "START_POINT_VECTOR_COMMA",
  "START_POINT_VECTOR_CLOSE", "START_POINT_TENSOR_COMMA",
  "START_POINT_TENSOR_CLOSE", "START_POINT_YTENSOR_COMMA",
  "START_POINT_YTENSOR_CLOSE", "START_POINT_HTENSOR_COMMA",
  "START_POINT_HTENSOR_CLOSE", "START_POINT_LOGICAL_COMMA",
  "START_POINT_LOGICAL_CLOSE", "START_CLOSE_ONLY", "START_COMMA_ONLY",
  "TOKEN_LAST_FUNCTION_CHAR", "TOKEN_IN_FUNCTION_CHAR", "TOKEN_VECTOR",
  "TOKEN_TENSOR", "TOKEN_SYMM_TENSOR", "TOKEN_SPHERICAL_TENSOR",
  "TOKEN_TRUE", "TOKEN_FALSE", "TOKEN_x", "TOKEN_y", "TOKEN_z", "TOKEN_xx",
  "TOKEN_xy", "TOKEN_xz", "TOKEN_yx", "TOKEN_yy", "TOKEN_yz", "TOKEN_zx",
  "TOKEN_zy", "TOKEN_zz", "TOKEN_ii", "TOKEN_unitTensor", "TOKEN_pi",
  "TOKEN_rand", "TOKEN_randFixed", "TOKEN_id", "TOKEN_randNormal",
  "TOKEN_randNormalFixed", "TOKEN_position", "TOKEN_area", "TOKEN_volume",
  "TOKEN_Sf", "TOKEN_normal", "TOKEN_deltaT", "TOKEN_time",
  "TOKEN_outputTime", "TOKEN_oldTime", "TOKEN_pow", "TOKEN_log",
  "TOKEN_exp", "TOKEN_mag", "TOKEN_magSqr", "TOKEN_sin", "TOKEN_cos",
  "TOKEN_tan", "TOKEN_min", "TOKEN_max", "TOKEN_minPosition",
  "TOKEN_maxPosition", "TOKEN_average", "TOKEN_sum", "TOKEN_sqr",
  "TOKEN_sqrt", "TOKEN_log10", "TOKEN_asin", "TOKEN_acos", "TOKEN_atan",
  "TOKEN_atan2", "TOKEN_sinh", "TOKEN_cosh", "TOKEN_tanh", "TOKEN_asinh",
  "TOKEN_acosh", "TOKEN_atanh", "TOKEN_erf", "TOKEN_erfc", "TOKEN_lgamma",
  "TOKEN_besselJ0", "TOKEN_besselJ1", "TOKEN_besselY0", "TOKEN_besselY1",
  "TOKEN_sign", "TOKEN_pos", "TOKEN_neg", "TOKEN_toPoint", "TOKEN_toFace",
  "TOKEN_points", "TOKEN_transpose", "TOKEN_diag", "TOKEN_tr", "TOKEN_dev",
  "TOKEN_symm", "TOKEN_skew", "TOKEN_det", "TOKEN_cof", "TOKEN_inv",
  "TOKEN_sph", "TOKEN_twoSymm", "TOKEN_dev2", "TOKEN_eigenValues",
  "TOKEN_eigenVectors", "TOKEN_cpu", "TOKEN_weight", "TOKEN_flip", "'?'",
  "':'", "TOKEN_OR", "TOKEN_AND", "TOKEN_EQ", "TOKEN_NEQ", "TOKEN_LEQ",
  "TOKEN_GEQ", "'<'", "'>'", "'-'", "'+'", "'%'", "'*'", "'/'", "'&'",
  "'^'", "TOKEN_NEG", "TOKEN_NOT", "TOKEN_HODGE", "'.'", "','", "')'",
  "'('", "'!'", "$accept", "switch_start", "switch_expr", "restOfFunction",
  "unit", "vectorComponentSwitch", "tensorComponentSwitch",
  "eatCharactersSwitch", "vexp", "evaluateVectorFunction", "scalar",
  "sreduced", "vreduced", "exp", "evaluateScalarFunction", "texp",
  "evaluateTensorFunction", "yexp", "evaluateSymmTensorFunction", "hexp",
  "evaluateSphericalTensorFunction", "lexp", "evaluateLogicalFunction",
  "vector", "tensor", "symmTensor", "sphericalTensor", "pvexp",
  "evaluatePointVectorFunction", "pexp", "evaluatePointScalarFunction",
  "ptexp", "evaluatePointTensorFunction", "pyexp",
  "evaluatePointSymmTensorFunction", "phexp",
  "evaluatePointSphericalTensorFunction", "plexp",
  "evaluatePointLogicalFunction", YY_NULLPTR
  };

#if PARSERSUBSETDEBUG
  const unsigned short
  SubsetValueExpressionParser::yyrline_[] =
  {
       0,   376,   376,   380,   381,   387,   393,   399,   405,   411,
     417,   423,   429,   435,   441,   447,   453,   459,   465,   471,
     477,   483,   489,   495,   501,   507,   513,   519,   525,   530,
     537,   538,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   552,   555,   560,   563,   566,   569,   570,   574,
     579,   584,   589,   594,   599,   604,   609,   614,   619,   624,
     629,   634,   638,   642,   646,   647,   658,   662,   670,   678,
     686,   695,   704,   709,   712,   715,   722,   723,   727,   731,
     735,   741,   753,   754,   757,   761,   765,   769,   773,   777,
     781,   785,   791,   800,   809,   818,   827,   838,   849,   853,
     857,   861,   867,   868,   869,   874,   879,   884,   889,   899,
     904,   908,   912,   917,   922,   927,   932,   937,   942,   947,
     952,   957,   962,   966,   967,   971,   975,   979,   983,   987,
     991,   995,   999,  1003,  1008,  1012,  1016,  1020,  1024,  1028,
    1032,  1036,  1040,  1044,  1048,  1052,  1056,  1060,  1064,  1068,
    1072,  1076,  1080,  1084,  1088,  1092,  1096,  1100,  1104,  1108,
    1112,  1116,  1120,  1124,  1128,  1132,  1136,  1140,  1144,  1148,
    1152,  1156,  1160,  1164,  1168,  1172,  1176,  1180,  1184,  1188,
    1192,  1196,  1200,  1204,  1208,  1212,  1217,  1226,  1229,  1234,
    1237,  1238,  1239,  1242,  1245,  1248,  1251,  1254,  1257,  1260,
    1263,  1270,  1273,  1276,  1277,  1281,  1285,  1289,  1293,  1297,
    1301,  1307,  1319,  1320,  1325,  1330,  1335,  1340,  1345,  1350,
    1355,  1360,  1365,  1370,  1375,  1380,  1385,  1390,  1395,  1400,
    1405,  1410,  1415,  1419,  1420,  1424,  1435,  1439,  1443,  1447,
    1451,  1455,  1459,  1468,  1469,  1473,  1477,  1481,  1487,  1500,
    1501,  1506,  1511,  1516,  1521,  1526,  1537,  1542,  1547,  1552,
    1557,  1562,  1567,  1571,  1572,  1576,  1580,  1584,  1588,  1592,
    1596,  1600,  1604,  1608,  1611,  1620,  1621,  1625,  1629,  1633,
    1639,  1652,  1653,  1656,  1661,  1666,  1671,  1676,  1681,  1686,
    1690,  1691,  1695,  1699,  1703,  1707,  1710,  1719,  1720,  1724,
    1728,  1732,  1738,  1751,  1752,  1753,  1758,  1763,  1768,  1773,
    1782,  1787,  1796,  1797,  1806,  1815,  1819,  1820,  1826,  1839,
    1845,  1855,  1864,  1869,  1874,  1879,  1884,  1889,  1894,  1899,
    1904,  1909,  1914,  1919,  1924,  1929,  1933,  1937,  1941,  1952,
    1956,  1964,  1972,  1980,  1989,  1998,  1999,  2009,  2010,  2014,
    2018,  2024,  2037,  2042,  2047,  2052,  2057,  2062,  2066,  2071,
    2075,  2079,  2084,  2089,  2094,  2099,  2104,  2109,  2114,  2119,
    2124,  2129,  2133,  2134,  2138,  2142,  2146,  2150,  2154,  2158,
    2162,  2166,  2170,  2175,  2179,  2183,  2187,  2191,  2195,  2199,
    2203,  2207,  2211,  2215,  2219,  2223,  2227,  2231,  2235,  2239,
    2243,  2247,  2251,  2255,  2259,  2263,  2267,  2271,  2275,  2279,
    2283,  2287,  2291,  2295,  2299,  2303,  2307,  2311,  2315,  2319,
    2323,  2327,  2331,  2335,  2339,  2343,  2347,  2351,  2355,  2364,
    2365,  2369,  2373,  2379,  2392,  2397,  2402,  2407,  2412,  2417,
    2422,  2427,  2432,  2437,  2442,  2447,  2451,  2452,  2456,  2467,
    2471,  2475,  2479,  2483,  2487,  2491,  2500,  2501,  2505,  2509,
    2515,  2528,  2533,  2538,  2543,  2554,  2559,  2564,  2569,  2574,
    2578,  2579,  2583,  2587,  2591,  2595,  2599,  2603,  2607,  2611,
    2615,  2618,  2627,  2628,  2632,  2636,  2642,  2654,  2659,  2664,
    2669,  2674,  2679,  2684,  2688,  2689,  2693,  2697,  2701,  2704,
    2713,  2714,  2718,  2722,  2728,  2740,  2745,  2750,  2759,  2768,
    2773,  2782,  2783,  2792,  2801,  2805,  2806,  2812
  };

  // Print the state stack on the debug stream.
  void
  SubsetValueExpressionParser::yystack_print_ ()
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
  SubsetValueExpressionParser::yy_reduce_print_ (int yyrule)
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
#endif // PARSERSUBSETDEBUG

  SubsetValueExpressionParser::token_number_type
  SubsetValueExpressionParser::yytranslate_ (int t)
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
       2,     2,     2,   191,     2,     2,     2,   179,   182,     2,
     190,   189,   180,   178,   188,   177,   187,   181,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   168,     2,
     175,     2,   176,   167,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   183,     2,     2,     2,     2,     2,
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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   169,   170,   171,   172,   173,   174,   184,   185,
     186
    };
    const unsigned user_token_number_max_ = 430;
    const token_number_type undef_token_ = 2;

    if (static_cast<int> (t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }

} // parserSubset
#line 8793 "SubsetValueExpressionParser.tab.cc"

#line 2825 "../SubsetValueExpressionParser.yy"


void parserSubset::SubsetValueExpressionParser::error (
    const parserSubset::SubsetValueExpressionParser::location_type& l,
    const std::string& m
)
{
     driver.error (l, m);
}
