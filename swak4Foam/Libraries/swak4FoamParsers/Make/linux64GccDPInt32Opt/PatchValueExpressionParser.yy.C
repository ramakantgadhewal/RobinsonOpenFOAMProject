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
#define yylex   parserPatchlex

// First part of user prologue.
#line 39 "../PatchValueExpressionParser.yy"

#include <volFields.H>

#include <functional>
#include <cmath>

    namespace Foam {
        class PatchValueExpressionDriver;
    }

    const Foam::scalar HugeVal=1e40;

    using Foam::PatchValueExpressionDriver;

#include "PatchValuePluginFunction.H"

#include "swak.H"


#line 62 "PatchValueExpressionParser.tab.cc"


#include "PatchValueExpressionParser.tab.hh"

// Second part of user prologue.
#line 95 "../PatchValueExpressionParser.yy"

#include "PatchValueExpressionDriverYY.H"
#include "swakChecks.H"
namespace Foam {
    template<class T>
    autoPtr<Field<T> > PatchValueExpressionDriver::evaluatePluginFunction(
        const word &name,
        const parserPatch::location &loc,
        int &scanned,
        bool isPoint
    ) {
        if(debug || traceParsing()) {
            Info << "Excuting plugin-function " << name << " ( returning type "
                << pTraits<T>::typeName << ") on " << this->content()
                << " position "
                << loc.end.column-1 << endl;
        }

        autoPtr<PatchValuePluginFunction> theFunction(
            PatchValuePluginFunction::New(
                *this,
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


#line 115 "PatchValueExpressionParser.tab.cc"



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
#if PARSERPATCHDEBUG

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

#else // !PARSERPATCHDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !PARSERPATCHDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace parserPatch {
#line 210 "PatchValueExpressionParser.tab.cc"


  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  PatchValueExpressionParser::yytnamerr_ (const char *yystr)
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
  PatchValueExpressionParser::PatchValueExpressionParser (void * scanner_yyarg, PatchValueExpressionDriver& driver_yyarg, int start_token_yyarg, int numberOfFunctionChars_yyarg)
    :
#if PARSERPATCHDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      scanner (scanner_yyarg),
      driver (driver_yyarg),
      start_token (start_token_yyarg),
      numberOfFunctionChars (numberOfFunctionChars_yyarg)
  {}

  PatchValueExpressionParser::~PatchValueExpressionParser ()
  {}

  PatchValueExpressionParser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/

  // basic_symbol.
#if 201103L <= YY_CPLUSPLUS
  template <typename Base>
  PatchValueExpressionParser::basic_symbol<Base>::basic_symbol (basic_symbol&& that)
    : Base (std::move (that))
    , value (std::move (that.value))
    , location (std::move (that.location))
  {}
#endif

  template <typename Base>
  PatchValueExpressionParser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value (that.value)
    , location (that.location)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  PatchValueExpressionParser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_MOVE_REF (location_type) l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  PatchValueExpressionParser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (semantic_type) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}

  template <typename Base>
  bool
  PatchValueExpressionParser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  void
  PatchValueExpressionParser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    value = YY_MOVE (s.value);
    location = YY_MOVE (s.location);
  }

  // by_type.
  PatchValueExpressionParser::by_type::by_type ()
    : type (empty_symbol)
  {}

#if 201103L <= YY_CPLUSPLUS
  PatchValueExpressionParser::by_type::by_type (by_type&& that)
    : type (that.type)
  {
    that.clear ();
  }
#endif

  PatchValueExpressionParser::by_type::by_type (const by_type& that)
    : type (that.type)
  {}

  PatchValueExpressionParser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  void
  PatchValueExpressionParser::by_type::clear ()
  {
    type = empty_symbol;
  }

  void
  PatchValueExpressionParser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  int
  PatchValueExpressionParser::by_type::type_get () const YY_NOEXCEPT
  {
    return type;
  }


  // by_state.
  PatchValueExpressionParser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  PatchValueExpressionParser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  PatchValueExpressionParser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  PatchValueExpressionParser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  PatchValueExpressionParser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  PatchValueExpressionParser::symbol_number_type
  PatchValueExpressionParser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  PatchValueExpressionParser::stack_symbol_type::stack_symbol_type ()
  {}

  PatchValueExpressionParser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.value), YY_MOVE (that.location))
  {
#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  PatchValueExpressionParser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.value), YY_MOVE (that.location))
  {
    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  PatchValueExpressionParser::stack_symbol_type&
  PatchValueExpressionParser::stack_symbol_type::operator= (stack_symbol_type& that)
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
  PatchValueExpressionParser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    switch (yysym.type_get ())
    {
      case 3: // "timeline"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 447 "PatchValueExpressionParser.tab.cc"
        break;

      case 4: // "lookup"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 453 "PatchValueExpressionParser.tab.cc"
        break;

      case 5: // "lookup2D"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 459 "PatchValueExpressionParser.tab.cc"
        break;

      case 6: // "scalarID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 465 "PatchValueExpressionParser.tab.cc"
        break;

      case 7: // "vectorID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 471 "PatchValueExpressionParser.tab.cc"
        break;

      case 8: // "logicalID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 477 "PatchValueExpressionParser.tab.cc"
        break;

      case 9: // "tensorID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 483 "PatchValueExpressionParser.tab.cc"
        break;

      case 10: // "symmTensorID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 489 "PatchValueExpressionParser.tab.cc"
        break;

      case 11: // "sphericalTensorID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 495 "PatchValueExpressionParser.tab.cc"
        break;

      case 12: // "pointScalarID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 501 "PatchValueExpressionParser.tab.cc"
        break;

      case 13: // "pointVectorID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 507 "PatchValueExpressionParser.tab.cc"
        break;

      case 14: // "pointLogicalID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 513 "PatchValueExpressionParser.tab.cc"
        break;

      case 15: // "pointTensorID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 519 "PatchValueExpressionParser.tab.cc"
        break;

      case 16: // "pointSymmTensorID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 525 "PatchValueExpressionParser.tab.cc"
        break;

      case 17: // "pointSphericalTensorID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 531 "PatchValueExpressionParser.tab.cc"
        break;

      case 18: // "F_scalarID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 537 "PatchValueExpressionParser.tab.cc"
        break;

      case 19: // "F_pointScalarID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 543 "PatchValueExpressionParser.tab.cc"
        break;

      case 20: // "F_vectorID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 549 "PatchValueExpressionParser.tab.cc"
        break;

      case 21: // "F_pointVectorID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 555 "PatchValueExpressionParser.tab.cc"
        break;

      case 22: // "F_tensorID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 561 "PatchValueExpressionParser.tab.cc"
        break;

      case 23: // "F_pointTensorID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 567 "PatchValueExpressionParser.tab.cc"
        break;

      case 24: // "F_symmTensorID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 573 "PatchValueExpressionParser.tab.cc"
        break;

      case 25: // "F_pointSymmTensorID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 579 "PatchValueExpressionParser.tab.cc"
        break;

      case 26: // "F_sphericalTensorID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 585 "PatchValueExpressionParser.tab.cc"
        break;

      case 27: // "F_pointSphericalTensorID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 591 "PatchValueExpressionParser.tab.cc"
        break;

      case 28: // "F_logicalID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 597 "PatchValueExpressionParser.tab.cc"
        break;

      case 29: // "F_pointLogicalID"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.name); }
#line 603 "PatchValueExpressionParser.tab.cc"
        break;

      case 30: // "value"
#line 369 "../PatchValueExpressionParser.yy"
        {}
#line 609 "PatchValueExpressionParser.tab.cc"
        break;

      case 31: // "integer"
#line 369 "../PatchValueExpressionParser.yy"
        {}
#line 615 "PatchValueExpressionParser.tab.cc"
        break;

      case 32: // "vector"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.vec); }
#line 621 "PatchValueExpressionParser.tab.cc"
        break;

      case 33: // "sexpression"
#line 369 "../PatchValueExpressionParser.yy"
        {}
#line 627 "PatchValueExpressionParser.tab.cc"
        break;

      case 34: // "expression"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.sfield); }
#line 633 "PatchValueExpressionParser.tab.cc"
        break;

      case 35: // "pexpression"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.sfield); }
#line 639 "PatchValueExpressionParser.tab.cc"
        break;

      case 36: // "lexpression"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.lfield); }
#line 645 "PatchValueExpressionParser.tab.cc"
        break;

      case 37: // "plexpression"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.lfield); }
#line 651 "PatchValueExpressionParser.tab.cc"
        break;

      case 38: // "vexpression"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 657 "PatchValueExpressionParser.tab.cc"
        break;

      case 39: // "pvexpression"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 663 "PatchValueExpressionParser.tab.cc"
        break;

      case 40: // "texpression"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 669 "PatchValueExpressionParser.tab.cc"
        break;

      case 41: // "ptexpression"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 675 "PatchValueExpressionParser.tab.cc"
        break;

      case 42: // "yexpression"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 681 "PatchValueExpressionParser.tab.cc"
        break;

      case 43: // "pyexpression"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 687 "PatchValueExpressionParser.tab.cc"
        break;

      case 44: // "hexpression"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 693 "PatchValueExpressionParser.tab.cc"
        break;

      case 45: // "phexpression"
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 699 "PatchValueExpressionParser.tab.cc"
        break;

      case 209: // vexp
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 705 "PatchValueExpressionParser.tab.cc"
        break;

      case 210: // evaluateVectorFunction
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 711 "PatchValueExpressionParser.tab.cc"
        break;

      case 211: // scalar
#line 369 "../PatchValueExpressionParser.yy"
        {}
#line 717 "PatchValueExpressionParser.tab.cc"
        break;

      case 212: // sreduced
#line 369 "../PatchValueExpressionParser.yy"
        {}
#line 723 "PatchValueExpressionParser.tab.cc"
        break;

      case 213: // vreduced
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.vec); }
#line 729 "PatchValueExpressionParser.tab.cc"
        break;

      case 214: // exp
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.sfield); }
#line 735 "PatchValueExpressionParser.tab.cc"
        break;

      case 215: // evaluateScalarFunction
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.sfield); }
#line 741 "PatchValueExpressionParser.tab.cc"
        break;

      case 216: // texp
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 747 "PatchValueExpressionParser.tab.cc"
        break;

      case 217: // evaluateTensorFunction
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 753 "PatchValueExpressionParser.tab.cc"
        break;

      case 218: // yexp
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 759 "PatchValueExpressionParser.tab.cc"
        break;

      case 219: // evaluateSymmTensorFunction
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 765 "PatchValueExpressionParser.tab.cc"
        break;

      case 220: // hexp
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 771 "PatchValueExpressionParser.tab.cc"
        break;

      case 221: // evaluateSphericalTensorFunction
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 777 "PatchValueExpressionParser.tab.cc"
        break;

      case 222: // lexp
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.lfield); }
#line 783 "PatchValueExpressionParser.tab.cc"
        break;

      case 223: // evaluateLogicalFunction
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.lfield); }
#line 789 "PatchValueExpressionParser.tab.cc"
        break;

      case 224: // vector
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 795 "PatchValueExpressionParser.tab.cc"
        break;

      case 225: // tensor
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 801 "PatchValueExpressionParser.tab.cc"
        break;

      case 226: // symmTensor
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 807 "PatchValueExpressionParser.tab.cc"
        break;

      case 227: // sphericalTensor
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 813 "PatchValueExpressionParser.tab.cc"
        break;

      case 228: // pvexp
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 819 "PatchValueExpressionParser.tab.cc"
        break;

      case 229: // evaluatePointVectorFunction
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 825 "PatchValueExpressionParser.tab.cc"
        break;

      case 230: // pexp
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.sfield); }
#line 831 "PatchValueExpressionParser.tab.cc"
        break;

      case 231: // evaluatePointScalarFunction
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.sfield); }
#line 837 "PatchValueExpressionParser.tab.cc"
        break;

      case 232: // ptexp
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 843 "PatchValueExpressionParser.tab.cc"
        break;

      case 233: // evaluatePointTensorFunction
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 849 "PatchValueExpressionParser.tab.cc"
        break;

      case 234: // pyexp
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 855 "PatchValueExpressionParser.tab.cc"
        break;

      case 235: // evaluatePointSymmTensorFunction
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 861 "PatchValueExpressionParser.tab.cc"
        break;

      case 236: // phexp
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 867 "PatchValueExpressionParser.tab.cc"
        break;

      case 237: // evaluatePointSphericalTensorFunction
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 873 "PatchValueExpressionParser.tab.cc"
        break;

      case 238: // pvector
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.vfield); }
#line 879 "PatchValueExpressionParser.tab.cc"
        break;

      case 239: // ptensor
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.tfield); }
#line 885 "PatchValueExpressionParser.tab.cc"
        break;

      case 240: // psymmTensor
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.yfield); }
#line 891 "PatchValueExpressionParser.tab.cc"
        break;

      case 241: // psphericalTensor
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.hfield); }
#line 897 "PatchValueExpressionParser.tab.cc"
        break;

      case 242: // plexp
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.lfield); }
#line 903 "PatchValueExpressionParser.tab.cc"
        break;

      case 243: // evaluatePointLogicalFunction
#line 367 "../PatchValueExpressionParser.yy"
        { delete (yysym.value.lfield); }
#line 909 "PatchValueExpressionParser.tab.cc"
        break;

      default:
        break;
    }
  }

#if PARSERPATCHDEBUG
  template <typename Base>
  void
  PatchValueExpressionParser::yy_print_ (std::ostream& yyo,
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
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 940 "PatchValueExpressionParser.tab.cc"
        break;

      case 4: // "lookup"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 946 "PatchValueExpressionParser.tab.cc"
        break;

      case 5: // "lookup2D"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 952 "PatchValueExpressionParser.tab.cc"
        break;

      case 6: // "scalarID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 958 "PatchValueExpressionParser.tab.cc"
        break;

      case 7: // "vectorID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 964 "PatchValueExpressionParser.tab.cc"
        break;

      case 8: // "logicalID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 970 "PatchValueExpressionParser.tab.cc"
        break;

      case 9: // "tensorID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 976 "PatchValueExpressionParser.tab.cc"
        break;

      case 10: // "symmTensorID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 982 "PatchValueExpressionParser.tab.cc"
        break;

      case 11: // "sphericalTensorID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 988 "PatchValueExpressionParser.tab.cc"
        break;

      case 12: // "pointScalarID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 994 "PatchValueExpressionParser.tab.cc"
        break;

      case 13: // "pointVectorID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1000 "PatchValueExpressionParser.tab.cc"
        break;

      case 14: // "pointLogicalID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1006 "PatchValueExpressionParser.tab.cc"
        break;

      case 15: // "pointTensorID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1012 "PatchValueExpressionParser.tab.cc"
        break;

      case 16: // "pointSymmTensorID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1018 "PatchValueExpressionParser.tab.cc"
        break;

      case 17: // "pointSphericalTensorID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1024 "PatchValueExpressionParser.tab.cc"
        break;

      case 18: // "F_scalarID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1030 "PatchValueExpressionParser.tab.cc"
        break;

      case 19: // "F_pointScalarID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1036 "PatchValueExpressionParser.tab.cc"
        break;

      case 20: // "F_vectorID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1042 "PatchValueExpressionParser.tab.cc"
        break;

      case 21: // "F_pointVectorID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1048 "PatchValueExpressionParser.tab.cc"
        break;

      case 22: // "F_tensorID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1054 "PatchValueExpressionParser.tab.cc"
        break;

      case 23: // "F_pointTensorID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1060 "PatchValueExpressionParser.tab.cc"
        break;

      case 24: // "F_symmTensorID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1066 "PatchValueExpressionParser.tab.cc"
        break;

      case 25: // "F_pointSymmTensorID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1072 "PatchValueExpressionParser.tab.cc"
        break;

      case 26: // "F_sphericalTensorID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1078 "PatchValueExpressionParser.tab.cc"
        break;

      case 27: // "F_pointSphericalTensorID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1084 "PatchValueExpressionParser.tab.cc"
        break;

      case 28: // "F_logicalID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1090 "PatchValueExpressionParser.tab.cc"
        break;

      case 29: // "F_pointLogicalID"
#line 371 "../PatchValueExpressionParser.yy"
        { debug_stream () << *(yysym.value.name); }
#line 1096 "PatchValueExpressionParser.tab.cc"
        break;

      case 30: // "value"
#line 377 "../PatchValueExpressionParser.yy"
        { debug_stream () << (yysym.value.val); }
#line 1102 "PatchValueExpressionParser.tab.cc"
        break;

      case 31: // "integer"
#line 377 "../PatchValueExpressionParser.yy"
        { debug_stream () << (yysym.value.integer); }
#line 1108 "PatchValueExpressionParser.tab.cc"
        break;

      case 32: // "vector"
#line 372 "../PatchValueExpressionParser.yy"
        {
    Foam::OStringStream buff;
    buff << *(yysym.value.vec);
    debug_stream () << buff.str().c_str();
}
#line 1118 "PatchValueExpressionParser.tab.cc"
        break;

      case 33: // "sexpression"
#line 377 "../PatchValueExpressionParser.yy"
        { debug_stream () << (yysym.value.val); }
#line 1124 "PatchValueExpressionParser.tab.cc"
        break;

      case 34: // "expression"
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.sfield) /* ->name().c_str() */ ;
}
#line 1132 "PatchValueExpressionParser.tab.cc"
        break;

      case 35: // "pexpression"
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.sfield) /* ->name().c_str() */ ;
}
#line 1140 "PatchValueExpressionParser.tab.cc"
        break;

      case 36: // "lexpression"
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.lfield) /* ->name().c_str() */ ;
}
#line 1148 "PatchValueExpressionParser.tab.cc"
        break;

      case 37: // "plexpression"
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.lfield) /* ->name().c_str() */ ;
}
#line 1156 "PatchValueExpressionParser.tab.cc"
        break;

      case 38: // "vexpression"
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield) /* ->name().c_str() */ ;
}
#line 1164 "PatchValueExpressionParser.tab.cc"
        break;

      case 39: // "pvexpression"
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield) /* ->name().c_str() */ ;
}
#line 1172 "PatchValueExpressionParser.tab.cc"
        break;

      case 40: // "texpression"
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield) /* ->name().c_str() */ ;
}
#line 1180 "PatchValueExpressionParser.tab.cc"
        break;

      case 41: // "ptexpression"
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield) /* ->name().c_str() */ ;
}
#line 1188 "PatchValueExpressionParser.tab.cc"
        break;

      case 42: // "yexpression"
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield) /* ->name().c_str() */ ;
}
#line 1196 "PatchValueExpressionParser.tab.cc"
        break;

      case 43: // "pyexpression"
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield) /* ->name().c_str() */ ;
}
#line 1204 "PatchValueExpressionParser.tab.cc"
        break;

      case 44: // "hexpression"
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield) /* ->name().c_str() */ ;
}
#line 1212 "PatchValueExpressionParser.tab.cc"
        break;

      case 45: // "phexpression"
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield) /* ->name().c_str() */ ;
}
#line 1220 "PatchValueExpressionParser.tab.cc"
        break;

      case 209: // vexp
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield) /* ->name().c_str() */ ;
}
#line 1228 "PatchValueExpressionParser.tab.cc"
        break;

      case 210: // evaluateVectorFunction
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield) /* ->name().c_str() */ ;
}
#line 1236 "PatchValueExpressionParser.tab.cc"
        break;

      case 211: // scalar
#line 377 "../PatchValueExpressionParser.yy"
        { debug_stream () << (yysym.value.val); }
#line 1242 "PatchValueExpressionParser.tab.cc"
        break;

      case 212: // sreduced
#line 377 "../PatchValueExpressionParser.yy"
        { debug_stream () << (yysym.value.val); }
#line 1248 "PatchValueExpressionParser.tab.cc"
        break;

      case 213: // vreduced
#line 372 "../PatchValueExpressionParser.yy"
        {
    Foam::OStringStream buff;
    buff << *(yysym.value.vec);
    debug_stream () << buff.str().c_str();
}
#line 1258 "PatchValueExpressionParser.tab.cc"
        break;

      case 214: // exp
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.sfield) /* ->name().c_str() */ ;
}
#line 1266 "PatchValueExpressionParser.tab.cc"
        break;

      case 215: // evaluateScalarFunction
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.sfield) /* ->name().c_str() */ ;
}
#line 1274 "PatchValueExpressionParser.tab.cc"
        break;

      case 216: // texp
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield) /* ->name().c_str() */ ;
}
#line 1282 "PatchValueExpressionParser.tab.cc"
        break;

      case 217: // evaluateTensorFunction
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield) /* ->name().c_str() */ ;
}
#line 1290 "PatchValueExpressionParser.tab.cc"
        break;

      case 218: // yexp
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield) /* ->name().c_str() */ ;
}
#line 1298 "PatchValueExpressionParser.tab.cc"
        break;

      case 219: // evaluateSymmTensorFunction
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield) /* ->name().c_str() */ ;
}
#line 1306 "PatchValueExpressionParser.tab.cc"
        break;

      case 220: // hexp
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield) /* ->name().c_str() */ ;
}
#line 1314 "PatchValueExpressionParser.tab.cc"
        break;

      case 221: // evaluateSphericalTensorFunction
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield) /* ->name().c_str() */ ;
}
#line 1322 "PatchValueExpressionParser.tab.cc"
        break;

      case 222: // lexp
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.lfield) /* ->name().c_str() */ ;
}
#line 1330 "PatchValueExpressionParser.tab.cc"
        break;

      case 223: // evaluateLogicalFunction
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.lfield) /* ->name().c_str() */ ;
}
#line 1338 "PatchValueExpressionParser.tab.cc"
        break;

      case 224: // vector
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield) /* ->name().c_str() */ ;
}
#line 1346 "PatchValueExpressionParser.tab.cc"
        break;

      case 225: // tensor
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield) /* ->name().c_str() */ ;
}
#line 1354 "PatchValueExpressionParser.tab.cc"
        break;

      case 226: // symmTensor
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield) /* ->name().c_str() */ ;
}
#line 1362 "PatchValueExpressionParser.tab.cc"
        break;

      case 227: // sphericalTensor
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield) /* ->name().c_str() */ ;
}
#line 1370 "PatchValueExpressionParser.tab.cc"
        break;

      case 228: // pvexp
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield) /* ->name().c_str() */ ;
}
#line 1378 "PatchValueExpressionParser.tab.cc"
        break;

      case 229: // evaluatePointVectorFunction
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield) /* ->name().c_str() */ ;
}
#line 1386 "PatchValueExpressionParser.tab.cc"
        break;

      case 230: // pexp
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.sfield) /* ->name().c_str() */ ;
}
#line 1394 "PatchValueExpressionParser.tab.cc"
        break;

      case 231: // evaluatePointScalarFunction
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.sfield) /* ->name().c_str() */ ;
}
#line 1402 "PatchValueExpressionParser.tab.cc"
        break;

      case 232: // ptexp
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield) /* ->name().c_str() */ ;
}
#line 1410 "PatchValueExpressionParser.tab.cc"
        break;

      case 233: // evaluatePointTensorFunction
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield) /* ->name().c_str() */ ;
}
#line 1418 "PatchValueExpressionParser.tab.cc"
        break;

      case 234: // pyexp
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield) /* ->name().c_str() */ ;
}
#line 1426 "PatchValueExpressionParser.tab.cc"
        break;

      case 235: // evaluatePointSymmTensorFunction
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield) /* ->name().c_str() */ ;
}
#line 1434 "PatchValueExpressionParser.tab.cc"
        break;

      case 236: // phexp
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield) /* ->name().c_str() */ ;
}
#line 1442 "PatchValueExpressionParser.tab.cc"
        break;

      case 237: // evaluatePointSphericalTensorFunction
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield) /* ->name().c_str() */ ;
}
#line 1450 "PatchValueExpressionParser.tab.cc"
        break;

      case 238: // pvector
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.vfield) /* ->name().c_str() */ ;
}
#line 1458 "PatchValueExpressionParser.tab.cc"
        break;

      case 239: // ptensor
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.tfield) /* ->name().c_str() */ ;
}
#line 1466 "PatchValueExpressionParser.tab.cc"
        break;

      case 240: // psymmTensor
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.yfield) /* ->name().c_str() */ ;
}
#line 1474 "PatchValueExpressionParser.tab.cc"
        break;

      case 241: // psphericalTensor
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.hfield) /* ->name().c_str() */ ;
}
#line 1482 "PatchValueExpressionParser.tab.cc"
        break;

      case 242: // plexp
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.lfield) /* ->name().c_str() */ ;
}
#line 1490 "PatchValueExpressionParser.tab.cc"
        break;

      case 243: // evaluatePointLogicalFunction
#line 378 "../PatchValueExpressionParser.yy"
        {
    debug_stream () << "<No name field>" << (yysym.value.lfield) /* ->name().c_str() */ ;
}
#line 1498 "PatchValueExpressionParser.tab.cc"
        break;

      default:
        break;
    }
    yyo << ')';
  }
#endif

  void
  PatchValueExpressionParser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  PatchValueExpressionParser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  PatchValueExpressionParser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if PARSERPATCHDEBUG
  std::ostream&
  PatchValueExpressionParser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  PatchValueExpressionParser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  PatchValueExpressionParser::debug_level_type
  PatchValueExpressionParser::debug_level () const
  {
    return yydebug_;
  }

  void
  PatchValueExpressionParser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // PARSERPATCHDEBUG

  PatchValueExpressionParser::state_type
  PatchValueExpressionParser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  PatchValueExpressionParser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  PatchValueExpressionParser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  PatchValueExpressionParser::operator() ()
  {
    return parse ();
  }

  int
  PatchValueExpressionParser::parse ()
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
#line 72 "../PatchValueExpressionParser.yy"
{
	     // Initialize the initial location.
	     //     @$.begin.filename = @$.end.filename = &driver.file;
    numberOfFunctionChars=0;
}

#line 1624 "PatchValueExpressionParser.tab.cc"


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
#line 387 "../PatchValueExpressionParser.yy"
    { driver.parserLastPos()=yystack_[0].location.end.column; }
#line 1749 "PatchValueExpressionParser.tab.cc"
    break;

  case 4:
#line 392 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::scalar>((yystack_[1].value.sfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1759 "PatchValueExpressionParser.tab.cc"
    break;

  case 5:
#line 398 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::scalar>((yystack_[1].value.sfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1769 "PatchValueExpressionParser.tab.cc"
    break;

  case 6:
#line 404 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::scalar>((yystack_[1].value.sfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1779 "PatchValueExpressionParser.tab.cc"
    break;

  case 7:
#line 410 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::scalar>((yystack_[1].value.sfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1789 "PatchValueExpressionParser.tab.cc"
    break;

  case 8:
#line 416 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::vector>((yystack_[1].value.vfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1799 "PatchValueExpressionParser.tab.cc"
    break;

  case 9:
#line 422 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::vector>((yystack_[1].value.vfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1809 "PatchValueExpressionParser.tab.cc"
    break;

  case 10:
#line 428 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::vector>((yystack_[1].value.vfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1819 "PatchValueExpressionParser.tab.cc"
    break;

  case 11:
#line 434 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::vector>((yystack_[1].value.vfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1829 "PatchValueExpressionParser.tab.cc"
    break;

  case 12:
#line 440 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::tensor>((yystack_[1].value.tfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1839 "PatchValueExpressionParser.tab.cc"
    break;

  case 13:
#line 446 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::tensor>((yystack_[1].value.tfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1849 "PatchValueExpressionParser.tab.cc"
    break;

  case 14:
#line 452 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::tensor>((yystack_[1].value.tfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1859 "PatchValueExpressionParser.tab.cc"
    break;

  case 15:
#line 458 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::tensor>((yystack_[1].value.tfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1869 "PatchValueExpressionParser.tab.cc"
    break;

  case 16:
#line 464 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::symmTensor>((yystack_[1].value.yfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1879 "PatchValueExpressionParser.tab.cc"
    break;

  case 17:
#line 470 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::symmTensor>((yystack_[1].value.yfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1889 "PatchValueExpressionParser.tab.cc"
    break;

  case 18:
#line 476 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::symmTensor>((yystack_[1].value.yfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1899 "PatchValueExpressionParser.tab.cc"
    break;

  case 19:
#line 482 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::symmTensor>((yystack_[1].value.yfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1909 "PatchValueExpressionParser.tab.cc"
    break;

  case 20:
#line 488 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::sphericalTensor>((yystack_[1].value.hfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1919 "PatchValueExpressionParser.tab.cc"
    break;

  case 21:
#line 494 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::sphericalTensor>((yystack_[1].value.hfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1929 "PatchValueExpressionParser.tab.cc"
    break;

  case 22:
#line 500 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::sphericalTensor>((yystack_[1].value.hfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1939 "PatchValueExpressionParser.tab.cc"
    break;

  case 23:
#line 506 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<Foam::sphericalTensor>((yystack_[1].value.hfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1949 "PatchValueExpressionParser.tab.cc"
    break;

  case 24:
#line 512 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<bool>((yystack_[1].value.lfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1959 "PatchValueExpressionParser.tab.cc"
    break;

  case 25:
#line 518 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<bool>((yystack_[1].value.lfield));
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1969 "PatchValueExpressionParser.tab.cc"
    break;

  case 26:
#line 524 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<bool>((yystack_[1].value.lfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1979 "PatchValueExpressionParser.tab.cc"
    break;

  case 27:
#line 530 "../PatchValueExpressionParser.yy"
    {
                      driver.setResult<bool>((yystack_[1].value.lfield),true);
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1989 "PatchValueExpressionParser.tab.cc"
    break;

  case 28:
#line 536 "../PatchValueExpressionParser.yy"
    {
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 1998 "PatchValueExpressionParser.tab.cc"
    break;

  case 29:
#line 541 "../PatchValueExpressionParser.yy"
    {
                      driver.parserLastPos()=yystack_[0].location.end.column-1;
                      YYACCEPT;
                  }
#line 2007 "PatchValueExpressionParser.tab.cc"
    break;

  case 32:
#line 550 "../PatchValueExpressionParser.yy"
    { driver.setResult<Foam::scalar>((yystack_[0].value.sfield));  }
#line 2013 "PatchValueExpressionParser.tab.cc"
    break;

  case 33:
#line 551 "../PatchValueExpressionParser.yy"
    { driver.setResult<Foam::vector>((yystack_[0].value.vfield));  }
#line 2019 "PatchValueExpressionParser.tab.cc"
    break;

  case 34:
#line 552 "../PatchValueExpressionParser.yy"
    { driver.setResult<bool>((yystack_[0].value.lfield)); }
#line 2025 "PatchValueExpressionParser.tab.cc"
    break;

  case 35:
#line 553 "../PatchValueExpressionParser.yy"
    { driver.setResult<Foam::scalar>((yystack_[0].value.sfield),true);  }
#line 2031 "PatchValueExpressionParser.tab.cc"
    break;

  case 36:
#line 554 "../PatchValueExpressionParser.yy"
    { driver.setResult<Foam::vector>((yystack_[0].value.vfield),true);  }
#line 2037 "PatchValueExpressionParser.tab.cc"
    break;

  case 37:
#line 555 "../PatchValueExpressionParser.yy"
    { driver.setResult<bool>((yystack_[0].value.lfield),true); }
#line 2043 "PatchValueExpressionParser.tab.cc"
    break;

  case 38:
#line 556 "../PatchValueExpressionParser.yy"
    { driver.setResult<Foam::tensor>((yystack_[0].value.tfield));  }
#line 2049 "PatchValueExpressionParser.tab.cc"
    break;

  case 39:
#line 557 "../PatchValueExpressionParser.yy"
    { driver.setResult<Foam::tensor>((yystack_[0].value.tfield),true);  }
#line 2055 "PatchValueExpressionParser.tab.cc"
    break;

  case 40:
#line 558 "../PatchValueExpressionParser.yy"
    { driver.setResult<Foam::symmTensor>((yystack_[0].value.yfield));  }
#line 2061 "PatchValueExpressionParser.tab.cc"
    break;

  case 41:
#line 559 "../PatchValueExpressionParser.yy"
    {
            driver.setResult<Foam::symmTensor>((yystack_[0].value.yfield),true);
          }
#line 2069 "PatchValueExpressionParser.tab.cc"
    break;

  case 42:
#line 562 "../PatchValueExpressionParser.yy"
    {
            driver.setResult<Foam::sphericalTensor>((yystack_[0].value.hfield));
          }
#line 2077 "PatchValueExpressionParser.tab.cc"
    break;

  case 43:
#line 565 "../PatchValueExpressionParser.yy"
    {
            driver.setResult<Foam::sphericalTensor>((yystack_[0].value.hfield),true);
          }
#line 2085 "PatchValueExpressionParser.tab.cc"
    break;

  case 44:
#line 570 "../PatchValueExpressionParser.yy"
    { driver.startVectorComponent(); }
#line 2091 "PatchValueExpressionParser.tab.cc"
    break;

  case 45:
#line 573 "../PatchValueExpressionParser.yy"
    { driver.startTensorComponent(); }
#line 2097 "PatchValueExpressionParser.tab.cc"
    break;

  case 46:
#line 576 "../PatchValueExpressionParser.yy"
    { driver.startEatCharacters(); }
#line 2103 "PatchValueExpressionParser.tab.cc"
    break;

  case 47:
#line 579 "../PatchValueExpressionParser.yy"
    { driver.startMappedFieldIdentifier(); }
#line 2109 "PatchValueExpressionParser.tab.cc"
    break;

  case 48:
#line 582 "../PatchValueExpressionParser.yy"
    { (yylhs.value.vfield) = (yystack_[0].value.vfield); }
#line 2115 "PatchValueExpressionParser.tab.cc"
    break;

  case 49:
#line 583 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.makeField<Foam::vector>(*(yystack_[0].value.vec)).ptr();
            delete (yystack_[0].value.vec);
          }
#line 2124 "PatchValueExpressionParser.tab.cc"
    break;

  case 50:
#line 587 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) + *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 2134 "PatchValueExpressionParser.tab.cc"
    break;

  case 51:
#line 592 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.vfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.vfield);
          }
#line 2144 "PatchValueExpressionParser.tab.cc"
    break;

  case 52:
#line 597 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.sfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.sfield);
          }
#line 2154 "PatchValueExpressionParser.tab.cc"
    break;

  case 53:
#line 602 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.vfield);
          }
#line 2164 "PatchValueExpressionParser.tab.cc"
    break;

  case 54:
#line 607 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.tfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.tfield);
          }
#line 2174 "PatchValueExpressionParser.tab.cc"
    break;

  case 55:
#line 612 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.yfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.vfield);
          }
#line 2184 "PatchValueExpressionParser.tab.cc"
    break;

  case 56:
#line 617 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.yfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) & *(yystack_[0].value.yfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.yfield);
          }
#line 2194 "PatchValueExpressionParser.tab.cc"
    break;

  case 57:
#line 622 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.vfield);
          }
#line 2204 "PatchValueExpressionParser.tab.cc"
    break;

  case 58:
#line 627 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.hfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.hfield);
          }
#line 2214 "PatchValueExpressionParser.tab.cc"
    break;

  case 59:
#line 632 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.sfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.sfield);
          }
#line 2224 "PatchValueExpressionParser.tab.cc"
    break;

  case 60:
#line 637 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) ^ *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 2234 "PatchValueExpressionParser.tab.cc"
    break;

  case 61:
#line 642 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) - *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 2244 "PatchValueExpressionParser.tab.cc"
    break;

  case 62:
#line 647 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(-*(yystack_[0].value.vfield));
            delete (yystack_[0].value.vfield);
          }
#line 2253 "PatchValueExpressionParser.tab.cc"
    break;

  case 63:
#line 651 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(*(*(yystack_[0].value.tfield)));
            delete (yystack_[0].value.tfield);
          }
#line 2262 "PatchValueExpressionParser.tab.cc"
    break;

  case 64:
#line 655 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(*(*(yystack_[0].value.yfield)));
            delete (yystack_[0].value.yfield);
          }
#line 2271 "PatchValueExpressionParser.tab.cc"
    break;

  case 65:
#line 659 "../PatchValueExpressionParser.yy"
    { (yylhs.value.vfield) = (yystack_[1].value.vfield); }
#line 2277 "PatchValueExpressionParser.tab.cc"
    break;

  case 66:
#line 660 "../PatchValueExpressionParser.yy"
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
#line 2293 "PatchValueExpressionParser.tab.cc"
    break;

  case 67:
#line 671 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(Foam::eigenValues(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 2302 "PatchValueExpressionParser.tab.cc"
    break;

  case 68:
#line 675 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[3].value.tfield)->component(Foam::tensor::XX)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::XY)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::XZ)()
            ).ptr();
            delete (yystack_[3].value.tfield);
          }
#line 2315 "PatchValueExpressionParser.tab.cc"
    break;

  case 69:
#line 683 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[3].value.tfield)->component(Foam::tensor::YX)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::YY)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::YZ)()
            ).ptr();
            delete (yystack_[3].value.tfield);
          }
#line 2328 "PatchValueExpressionParser.tab.cc"
    break;

  case 70:
#line 691 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[3].value.tfield)->component(Foam::tensor::ZX)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::ZY)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::ZZ)()
            ).ptr();
            delete (yystack_[3].value.tfield);
          }
#line 2341 "PatchValueExpressionParser.tab.cc"
    break;

  case 71:
#line 699 "../PatchValueExpressionParser.yy"
    {
            //            $$ = new Foam::vectorField( Foam::diag(*$3) ); // not implemented?
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[1].value.tfield)->component(Foam::tensor::XX)(),
                (yystack_[1].value.tfield)->component(Foam::tensor::YY)(),
                (yystack_[1].value.tfield)->component(Foam::tensor::ZZ)()
            ).ptr();
            delete (yystack_[1].value.tfield);
          }
#line 2355 "PatchValueExpressionParser.tab.cc"
    break;

  case 72:
#line 708 "../PatchValueExpressionParser.yy"
    {
            //            $$ = new Foam::vectorField( Foam::diag(*$3) ); // not implemented?
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[1].value.yfield)->component(Foam::symmTensor::XX)(),
                (yystack_[1].value.yfield)->component(Foam::symmTensor::YY)(),
                (yystack_[1].value.yfield)->component(Foam::symmTensor::ZZ)()
            ).ptr();
            delete (yystack_[1].value.yfield);
          }
#line 2369 "PatchValueExpressionParser.tab.cc"
    break;

  case 73:
#line 717 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.vfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = driver.doConditional(
                *(yystack_[4].value.lfield),*(yystack_[2].value.vfield),*(yystack_[0].value.vfield)
            ).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 2381 "PatchValueExpressionParser.tab.cc"
    break;

  case 74:
#line 724 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.makePositionField().ptr();
          }
#line 2389 "PatchValueExpressionParser.tab.cc"
    break;

  case 75:
#line 727 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.makeFaceNormalField().ptr();
          }
#line 2397 "PatchValueExpressionParser.tab.cc"
    break;

  case 76:
#line 730 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.makeFaceAreaField().ptr();
          }
#line 2405 "PatchValueExpressionParser.tab.cc"
    break;

  case 77:
#line 733 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.makeCellNeighbourField().ptr();
          }
#line 2413 "PatchValueExpressionParser.tab.cc"
    break;

  case 78:
#line 736 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.makeDeltaField().ptr();
          }
#line 2421 "PatchValueExpressionParser.tab.cc"
    break;

  case 79:
#line 739 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.toFace(*(yystack_[1].value.vfield)).ptr();
            delete (yystack_[1].value.vfield);
          }
#line 2430 "PatchValueExpressionParser.tab.cc"
    break;

  case 80:
#line 743 "../PatchValueExpressionParser.yy"
    { (yylhs.value.vfield) = (yystack_[1].value.vfield); }
#line 2436 "PatchValueExpressionParser.tab.cc"
    break;

  case 81:
#line 744 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield)=driver.getField<Foam::vector>(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
          }
#line 2445 "PatchValueExpressionParser.tab.cc"
    break;

  case 82:
#line 748 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield)=driver.getOldTimeField<Foam::vector>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 2454 "PatchValueExpressionParser.tab.cc"
    break;

  case 83:
#line 752 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield)=driver.mapField<Foam::vector>(*(yystack_[1].value.name)).ptr(); delete (yystack_[1].value.name);
          }
#line 2462 "PatchValueExpressionParser.tab.cc"
    break;

  case 84:
#line 755 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield)=driver.mapField<Foam::vector>(*(yystack_[1].value.name),true).ptr(); delete (yystack_[1].value.name);
          }
#line 2470 "PatchValueExpressionParser.tab.cc"
    break;

  case 85:
#line 758 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield)=driver.getSurfaceNormalField<Foam::vector>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 2479 "PatchValueExpressionParser.tab.cc"
    break;

  case 86:
#line 762 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield)=driver.getPatchInternalField<Foam::vector>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 2488 "PatchValueExpressionParser.tab.cc"
    break;

  case 87:
#line 766 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield)=driver.getPatchNeighbourField<Foam::vector>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 2497 "PatchValueExpressionParser.tab.cc"
    break;

  case 88:
#line 770 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield)=driver.getPatchNeighbourPatch<Foam::vector>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 2506 "PatchValueExpressionParser.tab.cc"
    break;

  case 89:
#line 774 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = Foam::min(*(yystack_[3].value.vfield),*(yystack_[1].value.vfield)).ptr();
            delete (yystack_[3].value.vfield); delete (yystack_[1].value.vfield);
          }
#line 2515 "PatchValueExpressionParser.tab.cc"
    break;

  case 90:
#line 778 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = Foam::max(*(yystack_[3].value.vfield),*(yystack_[1].value.vfield)).ptr();
            delete (yystack_[3].value.vfield); delete (yystack_[1].value.vfield);
          }
#line 2524 "PatchValueExpressionParser.tab.cc"
    break;

  case 91:
#line 785 "../PatchValueExpressionParser.yy"
    {
      (yylhs.value.vfield)=driver.evaluatePluginFunction<Foam::vector>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
  }
#line 2537 "PatchValueExpressionParser.tab.cc"
    break;

  case 92:
#line 795 "../PatchValueExpressionParser.yy"
    { (yylhs.value.val) = (yystack_[0].value.val); }
#line 2543 "PatchValueExpressionParser.tab.cc"
    break;

  case 93:
#line 796 "../PatchValueExpressionParser.yy"
    { (yylhs.value.val) = -(yystack_[0].value.val); }
#line 2549 "PatchValueExpressionParser.tab.cc"
    break;

  case 94:
#line 799 "../PatchValueExpressionParser.yy"
    { (yylhs.value.val) = Foam::gMin(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 2557 "PatchValueExpressionParser.tab.cc"
    break;

  case 95:
#line 802 "../PatchValueExpressionParser.yy"
    { (yylhs.value.val) = Foam::gMax(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 2565 "PatchValueExpressionParser.tab.cc"
    break;

  case 96:
#line 805 "../PatchValueExpressionParser.yy"
    { (yylhs.value.val) = Foam::gMin(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 2573 "PatchValueExpressionParser.tab.cc"
    break;

  case 97:
#line 808 "../PatchValueExpressionParser.yy"
    { (yylhs.value.val) = Foam::gMax(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 2581 "PatchValueExpressionParser.tab.cc"
    break;

  case 98:
#line 811 "../PatchValueExpressionParser.yy"
    { (yylhs.value.val) = Foam::gSum(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 2589 "PatchValueExpressionParser.tab.cc"
    break;

  case 99:
#line 814 "../PatchValueExpressionParser.yy"
    { (yylhs.value.val) = Foam::gSum(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 2597 "PatchValueExpressionParser.tab.cc"
    break;

  case 100:
#line 817 "../PatchValueExpressionParser.yy"
    { (yylhs.value.val) = Foam::gAverage(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 2605 "PatchValueExpressionParser.tab.cc"
    break;

  case 101:
#line 820 "../PatchValueExpressionParser.yy"
    { (yylhs.value.val) = Foam::gAverage(*(yystack_[1].value.sfield));
            delete (yystack_[1].value.sfield);
          }
#line 2613 "PatchValueExpressionParser.tab.cc"
    break;

  case 102:
#line 825 "../PatchValueExpressionParser.yy"
    {
            Foam::vector tmp(HugeVal,HugeVal,HugeVal);
            if(((yystack_[1].value.vfield)->size())>0) {
                tmp=Foam::min(*(yystack_[1].value.vfield));
            }
            Foam::reduce(tmp,Foam::minOp<Foam::vector>());
            (yylhs.value.vec) = new Foam::vector(tmp);
            delete (yystack_[1].value.vfield);
          }
#line 2627 "PatchValueExpressionParser.tab.cc"
    break;

  case 103:
#line 834 "../PatchValueExpressionParser.yy"
    {
            Foam::vector tmp(-HugeVal,-HugeVal,-HugeVal);
            if(((yystack_[1].value.vfield)->size())>0) {
                tmp=Foam::max(*(yystack_[1].value.vfield));
            }
            Foam::reduce(tmp,Foam::maxOp<Foam::vector>());
            (yylhs.value.vec) = new Foam::vector(tmp);
            delete (yystack_[1].value.vfield);
          }
#line 2641 "PatchValueExpressionParser.tab.cc"
    break;

  case 104:
#line 843 "../PatchValueExpressionParser.yy"
    {
          Foam::vector tmp(HugeVal,HugeVal,HugeVal);
            if(((yystack_[1].value.vfield)->size())>0) {
                tmp=Foam::min(*(yystack_[1].value.vfield));
            }
            Foam::reduce(tmp,Foam::minOp<Foam::vector>());
            (yylhs.value.vec) = new Foam::vector(tmp);
            delete (yystack_[1].value.vfield);
          }
#line 2655 "PatchValueExpressionParser.tab.cc"
    break;

  case 105:
#line 852 "../PatchValueExpressionParser.yy"
    {
            Foam::vector tmp(-HugeVal,-HugeVal,-HugeVal);
            if(((yystack_[1].value.vfield)->size())>0) {
                tmp=Foam::max(*(yystack_[1].value.vfield));
            }
            Foam::reduce(tmp,Foam::maxOp<Foam::vector>());
            (yylhs.value.vec) = new Foam::vector(tmp);
            delete (yystack_[1].value.vfield);
          }
#line 2669 "PatchValueExpressionParser.tab.cc"
    break;

  case 106:
#line 861 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vec) = new Foam::vector(
                driver.getPositionOfMinimum(
                    *(yystack_[1].value.sfield),
                    driver.patch().Cf()
                )
            );
            delete (yystack_[1].value.sfield);
        }
#line 2683 "PatchValueExpressionParser.tab.cc"
    break;

  case 107:
#line 870 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vec) = new Foam::vector(
                driver.getPositionOfMaximum(
                    *(yystack_[1].value.sfield),
                    driver.patch().Cf()
                )
            );
            delete (yystack_[1].value.sfield);
        }
#line 2697 "PatchValueExpressionParser.tab.cc"
    break;

  case 108:
#line 879 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vec) = new Foam::vector(
                driver.getPositionOfMinimum(
                    *(yystack_[1].value.sfield),
                    driver.patch().patch().localPoints()
                )
            );
            delete (yystack_[1].value.sfield);
        }
#line 2711 "PatchValueExpressionParser.tab.cc"
    break;

  case 109:
#line 888 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vec) = new Foam::vector(
                driver.getPositionOfMaximum(
                    *(yystack_[1].value.sfield),
                    driver.patch().patch().localPoints()
                )
            );
            delete (yystack_[1].value.sfield);
        }
#line 2725 "PatchValueExpressionParser.tab.cc"
    break;

  case 110:
#line 897 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vec) = new Foam::vector(Foam::gSum(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 2734 "PatchValueExpressionParser.tab.cc"
    break;

  case 111:
#line 901 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vec) = new Foam::vector(Foam::gSum(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 2743 "PatchValueExpressionParser.tab.cc"
    break;

  case 112:
#line 905 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vec) = new Foam::vector(Foam::gAverage(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 2752 "PatchValueExpressionParser.tab.cc"
    break;

  case 113:
#line 909 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vec) = new Foam::vector(Foam::gAverage(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 2761 "PatchValueExpressionParser.tab.cc"
    break;

  case 114:
#line 915 "../PatchValueExpressionParser.yy"
    { (yylhs.value.sfield) = driver.makeField((yystack_[0].value.val)).ptr(); }
#line 2767 "PatchValueExpressionParser.tab.cc"
    break;

  case 115:
#line 916 "../PatchValueExpressionParser.yy"
    { (yylhs.value.sfield) = driver.makeField((yystack_[0].value.val)).ptr(); }
#line 2773 "PatchValueExpressionParser.tab.cc"
    break;

  case 116:
#line 917 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) + *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 2783 "PatchValueExpressionParser.tab.cc"
    break;

  case 117:
#line 922 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) - *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 2793 "PatchValueExpressionParser.tab.cc"
    break;

  case 118:
#line 927 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 2803 "PatchValueExpressionParser.tab.cc"
    break;

  case 119:
#line 932 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = driver.makeModuloField(*(yystack_[2].value.sfield),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 2813 "PatchValueExpressionParser.tab.cc"
    break;

  case 120:
#line 937 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 2823 "PatchValueExpressionParser.tab.cc"
    break;

  case 121:
#line 947 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[3].value.sfield),(yystack_[1].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(Foam::pow(*(yystack_[3].value.sfield), *(yystack_[1].value.sfield)));
            delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 2833 "PatchValueExpressionParser.tab.cc"
    break;

  case 122:
#line 952 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::log(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2842 "PatchValueExpressionParser.tab.cc"
    break;

  case 123:
#line 956 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::exp(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2851 "PatchValueExpressionParser.tab.cc"
    break;

  case 124:
#line 960 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.vfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 2860 "PatchValueExpressionParser.tab.cc"
    break;

  case 125:
#line 964 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.tfield) && *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 2870 "PatchValueExpressionParser.tab.cc"
    break;

  case 126:
#line 969 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.yfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.tfield) && *(yystack_[0].value.yfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.yfield);
          }
#line 2880 "PatchValueExpressionParser.tab.cc"
    break;

  case 127:
#line 974 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.hfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.tfield) && *(yystack_[0].value.hfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.hfield);
          }
#line 2890 "PatchValueExpressionParser.tab.cc"
    break;

  case 128:
#line 979 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.tfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.yfield) && *(yystack_[0].value.tfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.tfield);
          }
#line 2900 "PatchValueExpressionParser.tab.cc"
    break;

  case 129:
#line 984 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.yfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.yfield) && *(yystack_[0].value.yfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 2910 "PatchValueExpressionParser.tab.cc"
    break;

  case 130:
#line 989 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.hfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.yfield) && *(yystack_[0].value.hfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.hfield);
          }
#line 2920 "PatchValueExpressionParser.tab.cc"
    break;

  case 131:
#line 994 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.tfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.hfield) && *(yystack_[0].value.tfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.tfield);
          }
#line 2930 "PatchValueExpressionParser.tab.cc"
    break;

  case 132:
#line 999 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.yfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.hfield) && *(yystack_[0].value.yfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.yfield);
          }
#line 2940 "PatchValueExpressionParser.tab.cc"
    break;

  case 133:
#line 1004 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.hfield) && *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 2950 "PatchValueExpressionParser.tab.cc"
    break;

  case 134:
#line 1009 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(-*(yystack_[0].value.sfield));
            delete (yystack_[0].value.sfield);
          }
#line 2959 "PatchValueExpressionParser.tab.cc"
    break;

  case 135:
#line 1013 "../PatchValueExpressionParser.yy"
    { (yylhs.value.sfield) = (yystack_[1].value.sfield); }
#line 2965 "PatchValueExpressionParser.tab.cc"
    break;

  case 136:
#line 1014 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sqr(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2974 "PatchValueExpressionParser.tab.cc"
    break;

  case 137:
#line 1018 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sqrt(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2983 "PatchValueExpressionParser.tab.cc"
    break;

  case 138:
#line 1022 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sin(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 2992 "PatchValueExpressionParser.tab.cc"
    break;

  case 139:
#line 1026 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::cos(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3001 "PatchValueExpressionParser.tab.cc"
    break;

  case 140:
#line 1030 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::tan(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3010 "PatchValueExpressionParser.tab.cc"
    break;

  case 141:
#line 1034 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::log10(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3019 "PatchValueExpressionParser.tab.cc"
    break;

  case 142:
#line 1038 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::asin(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3028 "PatchValueExpressionParser.tab.cc"
    break;

  case 143:
#line 1042 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::acos(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3037 "PatchValueExpressionParser.tab.cc"
    break;

  case 144:
#line 1046 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::atan(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3046 "PatchValueExpressionParser.tab.cc"
    break;

  case 145:
#line 1050 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::atan2(*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)));
            delete (yystack_[3].value.sfield);
            delete (yystack_[1].value.sfield);
          }
#line 3056 "PatchValueExpressionParser.tab.cc"
    break;

  case 146:
#line 1055 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sinh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3065 "PatchValueExpressionParser.tab.cc"
    break;

  case 147:
#line 1059 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::cosh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3074 "PatchValueExpressionParser.tab.cc"
    break;

  case 148:
#line 1063 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::tanh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3083 "PatchValueExpressionParser.tab.cc"
    break;

  case 149:
#line 1067 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::asinh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3092 "PatchValueExpressionParser.tab.cc"
    break;

  case 150:
#line 1071 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::acosh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3101 "PatchValueExpressionParser.tab.cc"
    break;

  case 151:
#line 1075 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::atanh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3110 "PatchValueExpressionParser.tab.cc"
    break;

  case 152:
#line 1079 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::erf(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3119 "PatchValueExpressionParser.tab.cc"
    break;

  case 153:
#line 1083 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::erfc(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3128 "PatchValueExpressionParser.tab.cc"
    break;

  case 154:
#line 1087 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::lgamma(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3137 "PatchValueExpressionParser.tab.cc"
    break;

  case 155:
#line 1091 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::j0(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3146 "PatchValueExpressionParser.tab.cc"
    break;

  case 156:
#line 1095 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::j1(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3155 "PatchValueExpressionParser.tab.cc"
    break;

  case 157:
#line 1099 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::y0(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3164 "PatchValueExpressionParser.tab.cc"
    break;

  case 158:
#line 1103 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::y1(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3173 "PatchValueExpressionParser.tab.cc"
    break;

  case 159:
#line 1107 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sign(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3182 "PatchValueExpressionParser.tab.cc"
    break;

  case 160:
#line 1111 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::pos(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3191 "PatchValueExpressionParser.tab.cc"
    break;

  case 161:
#line 1115 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::neg(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3200 "PatchValueExpressionParser.tab.cc"
    break;

  case 162:
#line 1119 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3209 "PatchValueExpressionParser.tab.cc"
    break;

  case 163:
#line 1123 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 3218 "PatchValueExpressionParser.tab.cc"
    break;

  case 164:
#line 1127 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.tfield)));
            delete (yystack_[1].value.tfield);
          }
#line 3227 "PatchValueExpressionParser.tab.cc"
    break;

  case 165:
#line 1131 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 3236 "PatchValueExpressionParser.tab.cc"
    break;

  case 166:
#line 1135 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.hfield)));
            delete (yystack_[1].value.hfield);
          }
#line 3245 "PatchValueExpressionParser.tab.cc"
    break;

  case 167:
#line 1139 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 3254 "PatchValueExpressionParser.tab.cc"
    break;

  case 168:
#line 1143 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 3263 "PatchValueExpressionParser.tab.cc"
    break;

  case 169:
#line 1147 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.tfield)));
            delete (yystack_[1].value.tfield);
          }
#line 3272 "PatchValueExpressionParser.tab.cc"
    break;

  case 170:
#line 1151 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 3281 "PatchValueExpressionParser.tab.cc"
    break;

  case 171:
#line 1155 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.hfield)));
            delete (yystack_[1].value.hfield);
          }
#line 3290 "PatchValueExpressionParser.tab.cc"
    break;

  case 172:
#line 1159 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::tr(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 3299 "PatchValueExpressionParser.tab.cc"
    break;

  case 173:
#line 1163 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::tr(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 3308 "PatchValueExpressionParser.tab.cc"
    break;

  case 174:
#line 1167 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::tr(*(yystack_[1].value.hfield)) );
            delete (yystack_[1].value.hfield);
          }
#line 3317 "PatchValueExpressionParser.tab.cc"
    break;

  case 175:
#line 1171 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::det(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 3326 "PatchValueExpressionParser.tab.cc"
    break;

  case 176:
#line 1175 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::det(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 3335 "PatchValueExpressionParser.tab.cc"
    break;

  case 177:
#line 1179 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField( Foam::det(*(yystack_[1].value.hfield)) );
            delete (yystack_[1].value.hfield);
          }
#line 3344 "PatchValueExpressionParser.tab.cc"
    break;

  case 178:
#line 1183 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.vfield)->component(0));
            delete (yystack_[3].value.vfield);
          }
#line 3353 "PatchValueExpressionParser.tab.cc"
    break;

  case 179:
#line 1187 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.vfield)->component(1));
            delete (yystack_[3].value.vfield);
          }
#line 3362 "PatchValueExpressionParser.tab.cc"
    break;

  case 180:
#line 1191 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.vfield)->component(2));
            delete (yystack_[3].value.vfield);
          }
#line 3371 "PatchValueExpressionParser.tab.cc"
    break;

  case 181:
#line 1195 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(0));
            delete (yystack_[3].value.tfield);
          }
#line 3380 "PatchValueExpressionParser.tab.cc"
    break;

  case 182:
#line 1199 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(1));
            delete (yystack_[3].value.tfield);
          }
#line 3389 "PatchValueExpressionParser.tab.cc"
    break;

  case 183:
#line 1203 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(2));
            delete (yystack_[3].value.tfield);
          }
#line 3398 "PatchValueExpressionParser.tab.cc"
    break;

  case 184:
#line 1207 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(3));
            delete (yystack_[3].value.tfield);
          }
#line 3407 "PatchValueExpressionParser.tab.cc"
    break;

  case 185:
#line 1211 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(4));
            delete (yystack_[3].value.tfield);
          }
#line 3416 "PatchValueExpressionParser.tab.cc"
    break;

  case 186:
#line 1215 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(5));
            delete (yystack_[3].value.tfield);
          }
#line 3425 "PatchValueExpressionParser.tab.cc"
    break;

  case 187:
#line 1219 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(6));
            delete (yystack_[3].value.tfield);
          }
#line 3434 "PatchValueExpressionParser.tab.cc"
    break;

  case 188:
#line 1223 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(7));
            delete (yystack_[3].value.tfield);
          }
#line 3443 "PatchValueExpressionParser.tab.cc"
    break;

  case 189:
#line 1227 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(8));
            delete (yystack_[3].value.tfield);
          }
#line 3452 "PatchValueExpressionParser.tab.cc"
    break;

  case 190:
#line 1231 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(0));
            delete (yystack_[3].value.yfield);
          }
#line 3461 "PatchValueExpressionParser.tab.cc"
    break;

  case 191:
#line 1235 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(1));
            delete (yystack_[3].value.yfield);
          }
#line 3470 "PatchValueExpressionParser.tab.cc"
    break;

  case 192:
#line 1239 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(2));
            delete (yystack_[3].value.yfield);
          }
#line 3479 "PatchValueExpressionParser.tab.cc"
    break;

  case 193:
#line 1243 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(3));
            delete (yystack_[3].value.yfield);
          }
#line 3488 "PatchValueExpressionParser.tab.cc"
    break;

  case 194:
#line 1247 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(4));
            delete (yystack_[3].value.yfield);
          }
#line 3497 "PatchValueExpressionParser.tab.cc"
    break;

  case 195:
#line 1251 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(5));
            delete (yystack_[3].value.yfield);
          }
#line 3506 "PatchValueExpressionParser.tab.cc"
    break;

  case 196:
#line 1255 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.hfield)->component(0));
            delete (yystack_[3].value.hfield);
          }
#line 3515 "PatchValueExpressionParser.tab.cc"
    break;

  case 197:
#line 1259 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.sfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = driver.doConditional(
                *(yystack_[4].value.lfield),*(yystack_[2].value.sfield),*(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 3527 "PatchValueExpressionParser.tab.cc"
    break;

  case 198:
#line 1266 "../PatchValueExpressionParser.yy"
    {
	  (yylhs.value.sfield) = driver.makeField(
#ifdef FOAM_NO_SEPARATE_CONSTANT_NAMESPACE
              Foam::mathematicalConstant::pi
#else
              Foam::constant::mathematical::pi
#endif
          ).ptr();
          }
#line 3541 "PatchValueExpressionParser.tab.cc"
    break;

  case 199:
#line 1275 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeFaceIdField().ptr();
          }
#line 3549 "PatchValueExpressionParser.tab.cc"
    break;

  case 200:
#line 1278 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeNearDistField().ptr();
          }
#line 3557 "PatchValueExpressionParser.tab.cc"
    break;

  case 201:
#line 1281 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeField(
                Foam::scalar(Foam::Pstream::myProcNo())
            ).ptr();
          }
#line 3567 "PatchValueExpressionParser.tab.cc"
    break;

  case 202:
#line 1286 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.weights(driver.size()).ptr();
          }
#line 3575 "PatchValueExpressionParser.tab.cc"
    break;

  case 203:
#line 1289 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeRandomField().ptr();
          }
#line 3583 "PatchValueExpressionParser.tab.cc"
    break;

  case 204:
#line 1292 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeRandomField(-(yystack_[1].value.integer)).ptr();
          }
#line 3591 "PatchValueExpressionParser.tab.cc"
    break;

  case 205:
#line 1295 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeRandomField(1).ptr();
          }
#line 3599 "PatchValueExpressionParser.tab.cc"
    break;

  case 206:
#line 1298 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeRandomField((yystack_[1].value.integer)+1).ptr();
          }
#line 3607 "PatchValueExpressionParser.tab.cc"
    break;

  case 207:
#line 1301 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeWeightsField().ptr();
          }
#line 3615 "PatchValueExpressionParser.tab.cc"
    break;

  case 208:
#line 1304 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeGaussRandomField().ptr();
          }
#line 3623 "PatchValueExpressionParser.tab.cc"
    break;

  case 209:
#line 1307 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeGaussRandomField(-(yystack_[1].value.integer)).ptr();
          }
#line 3631 "PatchValueExpressionParser.tab.cc"
    break;

  case 210:
#line 1310 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeGaussRandomField(1).ptr();
          }
#line 3639 "PatchValueExpressionParser.tab.cc"
    break;

  case 211:
#line 1313 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeGaussRandomField((yystack_[1].value.integer)+1).ptr();
          }
#line 3647 "PatchValueExpressionParser.tab.cc"
    break;

  case 212:
#line 1316 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeField(driver.runTime().deltaT().value()).ptr();
          }
#line 3655 "PatchValueExpressionParser.tab.cc"
    break;

  case 213:
#line 1319 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.makeField(driver.runTime().time().value()).ptr();
          }
#line 3663 "PatchValueExpressionParser.tab.cc"
    break;

  case 214:
#line 1322 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.toFace(*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[1].value.sfield);
          }
#line 3672 "PatchValueExpressionParser.tab.cc"
    break;

  case 215:
#line 1326 "../PatchValueExpressionParser.yy"
    {
            Foam::vectorField *Sf=driver.makeFaceAreaField().ptr();
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*Sf));
            delete Sf;
          }
#line 3682 "PatchValueExpressionParser.tab.cc"
    break;

  case 216:
#line 1331 "../PatchValueExpressionParser.yy"
    { (yylhs.value.sfield) = (yystack_[1].value.sfield); }
#line 3688 "PatchValueExpressionParser.tab.cc"
    break;

  case 217:
#line 1332 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getField<Foam::scalar>(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
          }
#line 3697 "PatchValueExpressionParser.tab.cc"
    break;

  case 218:
#line 1336 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getOldTimeField<Foam::scalar>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 3706 "PatchValueExpressionParser.tab.cc"
    break;

  case 219:
#line 1340 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.mapField<Foam::scalar>(*(yystack_[1].value.name)).ptr(); delete (yystack_[1].value.name);
          }
#line 3714 "PatchValueExpressionParser.tab.cc"
    break;

  case 220:
#line 1343 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.mapField<Foam::scalar>(*(yystack_[1].value.name),true).ptr(); delete (yystack_[1].value.name);
          }
#line 3722 "PatchValueExpressionParser.tab.cc"
    break;

  case 221:
#line 1346 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getLine(*(yystack_[0].value.name),driver.runTime().time().value()).ptr();
            delete (yystack_[0].value.name);
          }
#line 3731 "PatchValueExpressionParser.tab.cc"
    break;

  case 222:
#line 1350 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getLookup(*(yystack_[3].value.name),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[3].value.name); delete (yystack_[1].value.sfield);
          }
#line 3740 "PatchValueExpressionParser.tab.cc"
    break;

  case 223:
#line 1354 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getLookup2D(*(yystack_[5].value.name),*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[5].value.name); delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 3749 "PatchValueExpressionParser.tab.cc"
    break;

  case 224:
#line 1358 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getSurfaceNormalField<Foam::scalar>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 3758 "PatchValueExpressionParser.tab.cc"
    break;

  case 225:
#line 1362 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getPatchInternalField<Foam::scalar>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 3767 "PatchValueExpressionParser.tab.cc"
    break;

  case 226:
#line 1366 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getPatchNeighbourField<Foam::scalar>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 3776 "PatchValueExpressionParser.tab.cc"
    break;

  case 227:
#line 1370 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getPatchNeighbourPatch<Foam::scalar>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 3785 "PatchValueExpressionParser.tab.cc"
    break;

  case 228:
#line 1374 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = Foam::min(*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 3794 "PatchValueExpressionParser.tab.cc"
    break;

  case 229:
#line 1378 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = Foam::max(*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 3803 "PatchValueExpressionParser.tab.cc"
    break;

  case 230:
#line 1385 "../PatchValueExpressionParser.yy"
    {
      (yylhs.value.sfield)=driver.evaluatePluginFunction<Foam::scalar>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 3817 "PatchValueExpressionParser.tab.cc"
    break;

  case 231:
#line 1397 "../PatchValueExpressionParser.yy"
    { (yylhs.value.tfield) = (yystack_[0].value.tfield); }
#line 3823 "PatchValueExpressionParser.tab.cc"
    break;

  case 232:
#line 1398 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) + *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 3833 "PatchValueExpressionParser.tab.cc"
    break;

  case 233:
#line 1403 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.yfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) + *(yystack_[0].value.yfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.yfield);
          }
#line 3843 "PatchValueExpressionParser.tab.cc"
    break;

  case 234:
#line 1408 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.hfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) + *(yystack_[0].value.hfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.hfield);
          }
#line 3853 "PatchValueExpressionParser.tab.cc"
    break;

  case 235:
#line 1413 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.yfield) + *(yystack_[0].value.tfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.tfield);
          }
#line 3863 "PatchValueExpressionParser.tab.cc"
    break;

  case 236:
#line 1418 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.hfield) + *(yystack_[0].value.tfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.tfield);
          }
#line 3873 "PatchValueExpressionParser.tab.cc"
    break;

  case 237:
#line 1423 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.tfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.tfield);
          }
#line 3883 "PatchValueExpressionParser.tab.cc"
    break;

  case 238:
#line 1428 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.sfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.sfield);
          }
#line 3893 "PatchValueExpressionParser.tab.cc"
    break;

  case 239:
#line 1433 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.vfield) * *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 3903 "PatchValueExpressionParser.tab.cc"
    break;

  case 240:
#line 1438 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 3913 "PatchValueExpressionParser.tab.cc"
    break;

  case 241:
#line 1443 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.yfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.tfield);
          }
#line 3923 "PatchValueExpressionParser.tab.cc"
    break;

  case 242:
#line 1448 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.yfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.yfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.yfield);
          }
#line 3933 "PatchValueExpressionParser.tab.cc"
    break;

  case 243:
#line 1453 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.tfield);
          }
#line 3943 "PatchValueExpressionParser.tab.cc"
    break;

  case 244:
#line 1458 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.hfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.hfield);
          }
#line 3953 "PatchValueExpressionParser.tab.cc"
    break;

  case 245:
#line 1463 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.sfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.sfield);
          }
#line 3963 "PatchValueExpressionParser.tab.cc"
    break;

  case 246:
#line 1468 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) - *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 3973 "PatchValueExpressionParser.tab.cc"
    break;

  case 247:
#line 1473 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.yfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) - *(yystack_[0].value.yfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.yfield);
          }
#line 3983 "PatchValueExpressionParser.tab.cc"
    break;

  case 248:
#line 1478 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.hfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) - *(yystack_[0].value.hfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.hfield);
          }
#line 3993 "PatchValueExpressionParser.tab.cc"
    break;

  case 249:
#line 1483 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.yfield) - *(yystack_[0].value.tfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.tfield);
          }
#line 4003 "PatchValueExpressionParser.tab.cc"
    break;

  case 250:
#line 1488 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.hfield) - *(yystack_[0].value.tfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.tfield);
          }
#line 4013 "PatchValueExpressionParser.tab.cc"
    break;

  case 251:
#line 1493 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField(-*(yystack_[0].value.tfield));
            delete (yystack_[0].value.tfield);
          }
#line 4022 "PatchValueExpressionParser.tab.cc"
    break;

  case 252:
#line 1497 "../PatchValueExpressionParser.yy"
    { (yylhs.value.tfield) = (yystack_[1].value.tfield); }
#line 4028 "PatchValueExpressionParser.tab.cc"
    break;

  case 253:
#line 1498 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::skew(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 4037 "PatchValueExpressionParser.tab.cc"
    break;

  case 254:
#line 1502 "../PatchValueExpressionParser.yy"
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
#line 4053 "PatchValueExpressionParser.tab.cc"
    break;

  case 255:
#line 1513 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField(Foam::eigenVectors(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 4062 "PatchValueExpressionParser.tab.cc"
    break;

  case 256:
#line 1517 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::inv(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 4071 "PatchValueExpressionParser.tab.cc"
    break;

  case 257:
#line 1521 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::cof(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 4080 "PatchValueExpressionParser.tab.cc"
    break;

  case 258:
#line 1525 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::dev(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 4089 "PatchValueExpressionParser.tab.cc"
    break;

  case 259:
#line 1529 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::dev2(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 4098 "PatchValueExpressionParser.tab.cc"
    break;

  case 260:
#line 1533 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( (yystack_[5].value.tfield)->T() );
            delete (yystack_[5].value.tfield);
          }
#line 4107 "PatchValueExpressionParser.tab.cc"
    break;

  case 261:
#line 1537 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.tfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = driver.doConditional(
                *(yystack_[4].value.lfield),*(yystack_[2].value.tfield),*(yystack_[0].value.tfield)
            ).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 4119 "PatchValueExpressionParser.tab.cc"
    break;

  case 262:
#line 1544 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = driver.toFace(*(yystack_[1].value.tfield)).ptr();
            delete (yystack_[1].value.tfield);
          }
#line 4128 "PatchValueExpressionParser.tab.cc"
    break;

  case 263:
#line 1548 "../PatchValueExpressionParser.yy"
    { (yylhs.value.tfield) = (yystack_[1].value.tfield); }
#line 4134 "PatchValueExpressionParser.tab.cc"
    break;

  case 264:
#line 1549 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield)=driver.getField<Foam::tensor>(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
          }
#line 4143 "PatchValueExpressionParser.tab.cc"
    break;

  case 265:
#line 1553 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield)=driver.getOldTimeField<Foam::tensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 4152 "PatchValueExpressionParser.tab.cc"
    break;

  case 266:
#line 1557 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield)=driver.mapField<Foam::tensor>(*(yystack_[1].value.name)).ptr(); delete (yystack_[1].value.name);
          }
#line 4160 "PatchValueExpressionParser.tab.cc"
    break;

  case 267:
#line 1560 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield)=driver.mapField<Foam::tensor>(*(yystack_[1].value.name),true).ptr(); delete (yystack_[1].value.name);
          }
#line 4168 "PatchValueExpressionParser.tab.cc"
    break;

  case 268:
#line 1563 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield)=driver.getSurfaceNormalField<Foam::tensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 4177 "PatchValueExpressionParser.tab.cc"
    break;

  case 269:
#line 1567 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield)=driver.getPatchInternalField<Foam::tensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 4186 "PatchValueExpressionParser.tab.cc"
    break;

  case 270:
#line 1571 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield)=driver.getPatchNeighbourField<Foam::tensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 4195 "PatchValueExpressionParser.tab.cc"
    break;

  case 271:
#line 1575 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield)=driver.getPatchNeighbourPatch<Foam::tensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 4204 "PatchValueExpressionParser.tab.cc"
    break;

  case 272:
#line 1579 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = Foam::min(*(yystack_[3].value.tfield),*(yystack_[1].value.tfield)).ptr();
            delete (yystack_[3].value.tfield); delete (yystack_[1].value.tfield);
          }
#line 4213 "PatchValueExpressionParser.tab.cc"
    break;

  case 273:
#line 1583 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = Foam::max(*(yystack_[3].value.tfield),*(yystack_[1].value.tfield)).ptr();
            delete (yystack_[3].value.tfield); delete (yystack_[1].value.tfield);
          }
#line 4222 "PatchValueExpressionParser.tab.cc"
    break;

  case 274:
#line 1590 "../PatchValueExpressionParser.yy"
    {
      (yylhs.value.tfield)=driver.evaluatePluginFunction<Foam::tensor>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 4236 "PatchValueExpressionParser.tab.cc"
    break;

  case 275:
#line 1601 "../PatchValueExpressionParser.yy"
    { (yylhs.value.yfield) = (yystack_[0].value.yfield); }
#line 4242 "PatchValueExpressionParser.tab.cc"
    break;

  case 276:
#line 1602 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) + *(yystack_[0].value.yfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 4252 "PatchValueExpressionParser.tab.cc"
    break;

  case 277:
#line 1607 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.hfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) + *(yystack_[0].value.hfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.hfield);
          }
#line 4262 "PatchValueExpressionParser.tab.cc"
    break;

  case 278:
#line 1612 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.hfield) + *(yystack_[0].value.yfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.yfield);
          }
#line 4272 "PatchValueExpressionParser.tab.cc"
    break;

  case 279:
#line 1617 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.yfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.yfield);
          }
#line 4282 "PatchValueExpressionParser.tab.cc"
    break;

  case 280:
#line 1622 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.sfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.sfield);
          }
#line 4292 "PatchValueExpressionParser.tab.cc"
    break;

  case 281:
#line 1627 "../PatchValueExpressionParser.yy"
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
#line 4308 "PatchValueExpressionParser.tab.cc"
    break;

  case 282:
#line 1638 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.yfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.yfield);
          }
#line 4318 "PatchValueExpressionParser.tab.cc"
    break;

  case 283:
#line 1643 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.hfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.hfield);
          }
#line 4328 "PatchValueExpressionParser.tab.cc"
    break;

  case 284:
#line 1648 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.sfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.sfield);
          }
#line 4338 "PatchValueExpressionParser.tab.cc"
    break;

  case 285:
#line 1653 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) - *(yystack_[0].value.yfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 4348 "PatchValueExpressionParser.tab.cc"
    break;

  case 286:
#line 1658 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.hfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) - *(yystack_[0].value.hfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.hfield);
          }
#line 4358 "PatchValueExpressionParser.tab.cc"
    break;

  case 287:
#line 1663 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.hfield) - *(yystack_[0].value.yfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.yfield);
          }
#line 4368 "PatchValueExpressionParser.tab.cc"
    break;

  case 288:
#line 1668 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField(-*(yystack_[0].value.yfield));
            delete (yystack_[0].value.yfield);
          }
#line 4377 "PatchValueExpressionParser.tab.cc"
    break;

  case 289:
#line 1672 "../PatchValueExpressionParser.yy"
    { (yylhs.value.yfield) = (yystack_[1].value.yfield); }
#line 4383 "PatchValueExpressionParser.tab.cc"
    break;

  case 290:
#line 1673 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::symm(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 4392 "PatchValueExpressionParser.tab.cc"
    break;

  case 291:
#line 1677 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::symm(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 4401 "PatchValueExpressionParser.tab.cc"
    break;

  case 292:
#line 1681 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::twoSymm(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 4410 "PatchValueExpressionParser.tab.cc"
    break;

  case 293:
#line 1685 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::twoSymm(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 4419 "PatchValueExpressionParser.tab.cc"
    break;

  case 294:
#line 1689 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::inv(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 4428 "PatchValueExpressionParser.tab.cc"
    break;

  case 295:
#line 1693 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::cof(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 4437 "PatchValueExpressionParser.tab.cc"
    break;

  case 296:
#line 1697 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::dev(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 4446 "PatchValueExpressionParser.tab.cc"
    break;

  case 297:
#line 1701 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::dev2(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 4455 "PatchValueExpressionParser.tab.cc"
    break;

  case 298:
#line 1705 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::sqr(*(yystack_[1].value.vfield)) );
            delete (yystack_[1].value.vfield);
          }
#line 4464 "PatchValueExpressionParser.tab.cc"
    break;

  case 299:
#line 1709 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = (yystack_[5].value.yfield);
          }
#line 4472 "PatchValueExpressionParser.tab.cc"
    break;

  case 300:
#line 1712 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.yfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = driver.doConditional(
                *(yystack_[4].value.lfield),*(yystack_[2].value.yfield),*(yystack_[0].value.yfield)
            ).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 4484 "PatchValueExpressionParser.tab.cc"
    break;

  case 301:
#line 1719 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = driver.toFace(*(yystack_[1].value.yfield)).ptr();
            delete (yystack_[1].value.yfield);
          }
#line 4493 "PatchValueExpressionParser.tab.cc"
    break;

  case 302:
#line 1723 "../PatchValueExpressionParser.yy"
    { (yylhs.value.yfield) = (yystack_[1].value.yfield); }
#line 4499 "PatchValueExpressionParser.tab.cc"
    break;

  case 303:
#line 1724 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield)=driver.getField<Foam::symmTensor>(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
          }
#line 4508 "PatchValueExpressionParser.tab.cc"
    break;

  case 304:
#line 1728 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield)=driver.getOldTimeField<Foam::symmTensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 4517 "PatchValueExpressionParser.tab.cc"
    break;

  case 305:
#line 1732 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield)=driver.mapField<Foam::symmTensor>(*(yystack_[1].value.name)).ptr(); delete (yystack_[1].value.name);
          }
#line 4525 "PatchValueExpressionParser.tab.cc"
    break;

  case 306:
#line 1735 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield)=driver.mapField<Foam::symmTensor>(*(yystack_[1].value.name),true).ptr(); delete (yystack_[1].value.name);
          }
#line 4533 "PatchValueExpressionParser.tab.cc"
    break;

  case 307:
#line 1738 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield)=driver.getSurfaceNormalField<Foam::symmTensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 4542 "PatchValueExpressionParser.tab.cc"
    break;

  case 308:
#line 1742 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield)=driver.getPatchInternalField<Foam::symmTensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 4551 "PatchValueExpressionParser.tab.cc"
    break;

  case 309:
#line 1746 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield)=driver.getPatchNeighbourField<Foam::symmTensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 4560 "PatchValueExpressionParser.tab.cc"
    break;

  case 310:
#line 1750 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield)=driver.getPatchNeighbourPatch<Foam::symmTensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 4569 "PatchValueExpressionParser.tab.cc"
    break;

  case 311:
#line 1754 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = Foam::min(*(yystack_[3].value.yfield),*(yystack_[1].value.yfield)).ptr();
            delete (yystack_[3].value.yfield); delete (yystack_[1].value.yfield);
          }
#line 4578 "PatchValueExpressionParser.tab.cc"
    break;

  case 312:
#line 1758 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = Foam::max(*(yystack_[3].value.yfield),*(yystack_[1].value.yfield)).ptr();
            delete (yystack_[3].value.yfield); delete (yystack_[1].value.yfield);
          }
#line 4587 "PatchValueExpressionParser.tab.cc"
    break;

  case 313:
#line 1765 "../PatchValueExpressionParser.yy"
    {
      (yylhs.value.yfield)=driver.evaluatePluginFunction<Foam::symmTensor>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 4601 "PatchValueExpressionParser.tab.cc"
    break;

  case 314:
#line 1776 "../PatchValueExpressionParser.yy"
    { (yylhs.value.hfield) = (yystack_[0].value.hfield); }
#line 4607 "PatchValueExpressionParser.tab.cc"
    break;

  case 315:
#line 1777 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = driver.makeField(Foam::sphericalTensor(1)).ptr();
          }
#line 4615 "PatchValueExpressionParser.tab.cc"
    break;

  case 316:
#line 1780 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) + *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 4625 "PatchValueExpressionParser.tab.cc"
    break;

  case 317:
#line 1785 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.hfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.hfield);
          }
#line 4635 "PatchValueExpressionParser.tab.cc"
    break;

  case 318:
#line 1790 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.sfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.sfield);
          }
#line 4645 "PatchValueExpressionParser.tab.cc"
    break;

  case 319:
#line 1795 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 4655 "PatchValueExpressionParser.tab.cc"
    break;

  case 320:
#line 1800 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.sfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.sfield);
          }
#line 4665 "PatchValueExpressionParser.tab.cc"
    break;

  case 321:
#line 1805 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) - *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 4675 "PatchValueExpressionParser.tab.cc"
    break;

  case 322:
#line 1810 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField(-*(yystack_[0].value.hfield));
            delete (yystack_[0].value.hfield);
          }
#line 4684 "PatchValueExpressionParser.tab.cc"
    break;

  case 323:
#line 1814 "../PatchValueExpressionParser.yy"
    { (yylhs.value.hfield) = (yystack_[1].value.hfield); }
#line 4690 "PatchValueExpressionParser.tab.cc"
    break;

  case 324:
#line 1815 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::sph(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 4699 "PatchValueExpressionParser.tab.cc"
    break;

  case 325:
#line 1819 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::sph(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 4708 "PatchValueExpressionParser.tab.cc"
    break;

  case 326:
#line 1823 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::sph(*(yystack_[1].value.hfield)) );
            delete (yystack_[1].value.hfield);
          }
#line 4717 "PatchValueExpressionParser.tab.cc"
    break;

  case 327:
#line 1827 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::inv(*(yystack_[1].value.hfield)) );
            delete (yystack_[1].value.hfield);
          }
#line 4726 "PatchValueExpressionParser.tab.cc"
    break;

  case 328:
#line 1831 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = (yystack_[5].value.hfield);
          }
#line 4734 "PatchValueExpressionParser.tab.cc"
    break;

  case 329:
#line 1834 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.hfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = driver.doConditional(
                *(yystack_[4].value.lfield),*(yystack_[2].value.hfield),*(yystack_[0].value.hfield)
            ).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 4746 "PatchValueExpressionParser.tab.cc"
    break;

  case 330:
#line 1841 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = driver.toFace(*(yystack_[1].value.hfield)).ptr();
            delete (yystack_[1].value.hfield);
          }
#line 4755 "PatchValueExpressionParser.tab.cc"
    break;

  case 331:
#line 1845 "../PatchValueExpressionParser.yy"
    { (yylhs.value.hfield) = (yystack_[1].value.hfield); }
#line 4761 "PatchValueExpressionParser.tab.cc"
    break;

  case 332:
#line 1846 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield)=driver.getField<Foam::sphericalTensor>(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
          }
#line 4770 "PatchValueExpressionParser.tab.cc"
    break;

  case 333:
#line 1850 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield)=driver.getOldTimeField<Foam::sphericalTensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 4779 "PatchValueExpressionParser.tab.cc"
    break;

  case 334:
#line 1854 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield)=driver.mapField<Foam::sphericalTensor>(*(yystack_[1].value.name)).ptr(); delete (yystack_[1].value.name);
          }
#line 4787 "PatchValueExpressionParser.tab.cc"
    break;

  case 335:
#line 1857 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield)=driver.mapField<Foam::sphericalTensor>(*(yystack_[1].value.name),true).ptr();
            delete (yystack_[1].value.name);
          }
#line 4796 "PatchValueExpressionParser.tab.cc"
    break;

  case 336:
#line 1861 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield)=driver.getSurfaceNormalField<Foam::sphericalTensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 4805 "PatchValueExpressionParser.tab.cc"
    break;

  case 337:
#line 1865 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield)=driver.getPatchInternalField<Foam::sphericalTensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 4814 "PatchValueExpressionParser.tab.cc"
    break;

  case 338:
#line 1869 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield)=driver.getPatchNeighbourField<Foam::sphericalTensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 4823 "PatchValueExpressionParser.tab.cc"
    break;

  case 339:
#line 1873 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield)=driver.getPatchNeighbourPatch<Foam::sphericalTensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 4832 "PatchValueExpressionParser.tab.cc"
    break;

  case 340:
#line 1877 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = Foam::min(*(yystack_[3].value.hfield),*(yystack_[1].value.hfield)).ptr();
            delete (yystack_[3].value.hfield); delete (yystack_[1].value.hfield);
          }
#line 4841 "PatchValueExpressionParser.tab.cc"
    break;

  case 341:
#line 1881 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = Foam::max(*(yystack_[3].value.hfield),*(yystack_[1].value.hfield)).ptr();
            delete (yystack_[3].value.hfield); delete (yystack_[1].value.hfield);
          }
#line 4850 "PatchValueExpressionParser.tab.cc"
    break;

  case 342:
#line 1888 "../PatchValueExpressionParser.yy"
    {
      (yylhs.value.hfield)=driver.evaluatePluginFunction<Foam::sphericalTensor>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 4864 "PatchValueExpressionParser.tab.cc"
    break;

  case 343:
#line 1899 "../PatchValueExpressionParser.yy"
    { (yylhs.value.lfield) = driver.makeField(true).ptr(); }
#line 4870 "PatchValueExpressionParser.tab.cc"
    break;

  case 344:
#line 1900 "../PatchValueExpressionParser.yy"
    { (yylhs.value.lfield) = driver.makeField(false).ptr(); }
#line 4876 "PatchValueExpressionParser.tab.cc"
    break;

  case 345:
#line 1901 "../PatchValueExpressionParser.yy"
    {
           (yylhs.value.lfield) = driver.makeField(
                driver.runTime().outputTime()
           ).ptr();
       }
#line 4886 "PatchValueExpressionParser.tab.cc"
    break;

  case 346:
#line 1906 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::less<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 4900 "PatchValueExpressionParser.tab.cc"
    break;

  case 347:
#line 1915 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::greater<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 4914 "PatchValueExpressionParser.tab.cc"
    break;

  case 348:
#line 1924 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::less_equal<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 4928 "PatchValueExpressionParser.tab.cc"
    break;

  case 349:
#line 1933 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::greater_equal<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 4942 "PatchValueExpressionParser.tab.cc"
    break;

  case 350:
#line 1942 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::equal_to<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 4956 "PatchValueExpressionParser.tab.cc"
    break;

  case 351:
#line 1951 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::not_equal_to<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 4970 "PatchValueExpressionParser.tab.cc"
    break;

  case 352:
#line 1960 "../PatchValueExpressionParser.yy"
    { (yylhs.value.lfield) = (yystack_[1].value.lfield); }
#line 4976 "PatchValueExpressionParser.tab.cc"
    break;

  case 353:
#line 1961 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.lfield),(yystack_[0].value.lfield));
            (yylhs.value.lfield) = driver.doLogicalOp(
                *(yystack_[2].value.lfield),
                std::logical_and<Foam::scalar>(),
                *(yystack_[0].value.lfield)
            ).ptr();
            delete (yystack_[2].value.lfield); delete (yystack_[0].value.lfield);
          }
#line 4990 "PatchValueExpressionParser.tab.cc"
    break;

  case 354:
#line 1970 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.lfield),(yystack_[0].value.lfield));
            (yylhs.value.lfield) = driver.doLogicalOp(
                *(yystack_[2].value.lfield),
                std::logical_or<Foam::scalar>(),
                *(yystack_[0].value.lfield)
            ).ptr();
            delete (yystack_[2].value.lfield); delete (yystack_[0].value.lfield);
          }
#line 5004 "PatchValueExpressionParser.tab.cc"
    break;

  case 355:
#line 1979 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.lfield) = driver.doLogicalNot(*(yystack_[0].value.lfield)).ptr();
            delete (yystack_[0].value.lfield);
          }
#line 5013 "PatchValueExpressionParser.tab.cc"
    break;

  case 356:
#line 1983 "../PatchValueExpressionParser.yy"
    { (yylhs.value.lfield) = (yystack_[1].value.lfield); }
#line 5019 "PatchValueExpressionParser.tab.cc"
    break;

  case 357:
#line 1984 "../PatchValueExpressionParser.yy"
    {
        (yylhs.value.lfield)=driver.getVariable<bool>(*(yystack_[0].value.name),driver.size()).ptr();
        delete (yystack_[0].value.name);
      }
#line 5028 "PatchValueExpressionParser.tab.cc"
    break;

  case 358:
#line 1991 "../PatchValueExpressionParser.yy"
    {
      (yylhs.value.lfield)=driver.evaluatePluginFunction<bool>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          false
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 5042 "PatchValueExpressionParser.tab.cc"
    break;

  case 359:
#line 2002 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(*(yystack_[5].value.sfield),*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[5].value.sfield); delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 5051 "PatchValueExpressionParser.tab.cc"
    break;

  case 360:
#line 2008 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = driver.composeTensorField(
                *(yystack_[17].value.sfield),*(yystack_[15].value.sfield),*(yystack_[13].value.sfield),
                *(yystack_[11].value.sfield),*(yystack_[9].value.sfield),*(yystack_[7].value.sfield),
                *(yystack_[5].value.sfield),*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)
            ).ptr();
            delete (yystack_[17].value.sfield); delete (yystack_[15].value.sfield); delete (yystack_[13].value.sfield); delete (yystack_[11].value.sfield); delete (yystack_[9].value.sfield);
            delete (yystack_[7].value.sfield); delete (yystack_[5].value.sfield); delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 5065 "PatchValueExpressionParser.tab.cc"
    break;

  case 361:
#line 2019 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = driver.composeSymmTensorField(
                *(yystack_[11].value.sfield),*(yystack_[9].value.sfield),*(yystack_[7].value.sfield),
                *(yystack_[5].value.sfield),*(yystack_[3].value.sfield),
                *(yystack_[1].value.sfield)
            ).ptr();
            delete (yystack_[11].value.sfield); delete (yystack_[9].value.sfield); delete (yystack_[7].value.sfield); delete (yystack_[5].value.sfield); delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 5078 "PatchValueExpressionParser.tab.cc"
    break;

  case 362:
#line 2029 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = driver.composeSphericalTensorField(*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[1].value.sfield);
          }
#line 5087 "PatchValueExpressionParser.tab.cc"
    break;

  case 363:
#line 2035 "../PatchValueExpressionParser.yy"
    { (yylhs.value.vfield) = (yystack_[0].value.vfield); }
#line 5093 "PatchValueExpressionParser.tab.cc"
    break;

  case 364:
#line 2036 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) + *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 5103 "PatchValueExpressionParser.tab.cc"
    break;

  case 365:
#line 2041 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.vfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.vfield);
          }
#line 5113 "PatchValueExpressionParser.tab.cc"
    break;

  case 366:
#line 2046 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.sfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.sfield);
          }
#line 5123 "PatchValueExpressionParser.tab.cc"
    break;

  case 367:
#line 2051 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.vfield);
          }
#line 5133 "PatchValueExpressionParser.tab.cc"
    break;

  case 368:
#line 2056 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.tfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.tfield);
          }
#line 5143 "PatchValueExpressionParser.tab.cc"
    break;

  case 369:
#line 2061 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.yfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.vfield);
          }
#line 5153 "PatchValueExpressionParser.tab.cc"
    break;

  case 370:
#line 2066 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.yfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) & *(yystack_[0].value.yfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.yfield);
          }
#line 5163 "PatchValueExpressionParser.tab.cc"
    break;

  case 371:
#line 2071 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.vfield);
          }
#line 5173 "PatchValueExpressionParser.tab.cc"
    break;

  case 372:
#line 2076 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.hfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.hfield);
          }
#line 5183 "PatchValueExpressionParser.tab.cc"
    break;

  case 373:
#line 2081 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.sfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.sfield);
          }
#line 5193 "PatchValueExpressionParser.tab.cc"
    break;

  case 374:
#line 2086 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) ^ *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 5203 "PatchValueExpressionParser.tab.cc"
    break;

  case 375:
#line 2091 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = new Foam::vectorField(*(yystack_[2].value.vfield) - *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 5213 "PatchValueExpressionParser.tab.cc"
    break;

  case 376:
#line 2096 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(-*(yystack_[0].value.vfield));
            delete (yystack_[0].value.vfield);
          }
#line 5222 "PatchValueExpressionParser.tab.cc"
    break;

  case 377:
#line 2100 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(*(*(yystack_[0].value.tfield)));
            delete (yystack_[0].value.tfield);
          }
#line 5231 "PatchValueExpressionParser.tab.cc"
    break;

  case 378:
#line 2104 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(*(*(yystack_[0].value.yfield)));
            delete (yystack_[0].value.yfield);
          }
#line 5240 "PatchValueExpressionParser.tab.cc"
    break;

  case 379:
#line 2108 "../PatchValueExpressionParser.yy"
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
#line 5256 "PatchValueExpressionParser.tab.cc"
    break;

  case 380:
#line 2119 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = new Foam::vectorField(Foam::eigenValues(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 5265 "PatchValueExpressionParser.tab.cc"
    break;

  case 381:
#line 2123 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[3].value.tfield)->component(Foam::tensor::XX)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::XY)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::XZ)()
            ).ptr();
            delete (yystack_[3].value.tfield);
          }
#line 5278 "PatchValueExpressionParser.tab.cc"
    break;

  case 382:
#line 2131 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[3].value.tfield)->component(Foam::tensor::YX)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::YY)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::YZ)()
            ).ptr();
            delete (yystack_[3].value.tfield);
          }
#line 5291 "PatchValueExpressionParser.tab.cc"
    break;

  case 383:
#line 2139 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[3].value.tfield)->component(Foam::tensor::ZX)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::ZY)(),
                (yystack_[3].value.tfield)->component(Foam::tensor::ZZ)()
            ).ptr();
            delete (yystack_[3].value.tfield);
          }
#line 5304 "PatchValueExpressionParser.tab.cc"
    break;

  case 384:
#line 2147 "../PatchValueExpressionParser.yy"
    {
            //            $$ = new Foam::vectorField( Foam::diag(*$3) ); // not implemented?
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[1].value.tfield)->component(Foam::tensor::XX)(),
                (yystack_[1].value.tfield)->component(Foam::tensor::YY)(),
                (yystack_[1].value.tfield)->component(Foam::tensor::ZZ)()
            ).ptr();
            delete (yystack_[1].value.tfield);
          }
#line 5318 "PatchValueExpressionParser.tab.cc"
    break;

  case 385:
#line 2156 "../PatchValueExpressionParser.yy"
    {
            //            $$ = new Foam::vectorField( Foam::diag(*$3) ); // not implemented?
            (yylhs.value.vfield) = driver.composeVectorField(
                (yystack_[1].value.yfield)->component(Foam::symmTensor::XX)(),
                (yystack_[1].value.yfield)->component(Foam::symmTensor::YY)(),
                (yystack_[1].value.yfield)->component(Foam::symmTensor::ZZ)()
            ).ptr();
            delete (yystack_[1].value.yfield);
          }
#line 5332 "PatchValueExpressionParser.tab.cc"
    break;

  case 386:
#line 2165 "../PatchValueExpressionParser.yy"
    { (yylhs.value.vfield) = (yystack_[1].value.vfield); }
#line 5338 "PatchValueExpressionParser.tab.cc"
    break;

  case 387:
#line 2166 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.vfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.vfield));
            (yylhs.value.vfield) = driver.doConditional(
                *(yystack_[4].value.lfield),*(yystack_[2].value.vfield),*(yystack_[0].value.vfield)
            ).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 5350 "PatchValueExpressionParser.tab.cc"
    break;

  case 388:
#line 2173 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.makePointField().ptr();
          }
#line 5358 "PatchValueExpressionParser.tab.cc"
    break;

  case 389:
#line 2176 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.toPoint(*(yystack_[1].value.vfield)).ptr();
            delete (yystack_[1].value.vfield);
          }
#line 5367 "PatchValueExpressionParser.tab.cc"
    break;

  case 390:
#line 2180 "../PatchValueExpressionParser.yy"
    { (yylhs.value.vfield) = (yystack_[1].value.vfield); }
#line 5373 "PatchValueExpressionParser.tab.cc"
    break;

  case 391:
#line 2181 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield)=driver.getField<Foam::vector>(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
                    }
#line 5382 "PatchValueExpressionParser.tab.cc"
    break;

  case 392:
#line 2185 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield)=driver.getOldTimeField<Foam::vector>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
				}
#line 5391 "PatchValueExpressionParser.tab.cc"
    break;

  case 393:
#line 2192 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = Foam::min(*(yystack_[3].value.vfield),*(yystack_[1].value.vfield)).ptr();
            delete (yystack_[3].value.vfield); delete (yystack_[1].value.vfield);
          }
#line 5400 "PatchValueExpressionParser.tab.cc"
    break;

  case 394:
#line 2196 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = Foam::max(*(yystack_[3].value.vfield),*(yystack_[1].value.vfield)).ptr();
            delete (yystack_[3].value.vfield); delete (yystack_[1].value.vfield);
          }
#line 5409 "PatchValueExpressionParser.tab.cc"
    break;

  case 395:
#line 2203 "../PatchValueExpressionParser.yy"
    {
      (yylhs.value.vfield)=driver.evaluatePluginFunction<Foam::vector>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          true
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 5423 "PatchValueExpressionParser.tab.cc"
    break;

  case 396:
#line 2214 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) + *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 5433 "PatchValueExpressionParser.tab.cc"
    break;

  case 397:
#line 2219 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) - *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 5443 "PatchValueExpressionParser.tab.cc"
    break;

  case 398:
#line 2224 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 5453 "PatchValueExpressionParser.tab.cc"
    break;

  case 399:
#line 2229 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = driver.makeModuloField(*(yystack_[2].value.sfield),*(yystack_[0].value.sfield)).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 5463 "PatchValueExpressionParser.tab.cc"
    break;

  case 400:
#line 2234 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.sfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 5473 "PatchValueExpressionParser.tab.cc"
    break;

  case 401:
#line 2239 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::pow(*(yystack_[3].value.sfield), (yystack_[1].value.val)));
            delete (yystack_[3].value.sfield);
          }
#line 5482 "PatchValueExpressionParser.tab.cc"
    break;

  case 402:
#line 2243 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[3].value.sfield),(yystack_[1].value.sfield));
            (yylhs.value.sfield) = new Foam::scalarField(Foam::pow(*(yystack_[3].value.sfield), *(yystack_[1].value.sfield)));
            delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 5492 "PatchValueExpressionParser.tab.cc"
    break;

  case 403:
#line 2248 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::log(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5501 "PatchValueExpressionParser.tab.cc"
    break;

  case 404:
#line 2252 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::exp(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5510 "PatchValueExpressionParser.tab.cc"
    break;

  case 405:
#line 2256 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.vfield) & *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 5519 "PatchValueExpressionParser.tab.cc"
    break;

  case 406:
#line 2260 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.tfield) && *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 5528 "PatchValueExpressionParser.tab.cc"
    break;

  case 407:
#line 2264 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.tfield) && *(yystack_[0].value.yfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.yfield);
          }
#line 5537 "PatchValueExpressionParser.tab.cc"
    break;

  case 408:
#line 2268 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.tfield) && *(yystack_[0].value.hfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.hfield);
          }
#line 5546 "PatchValueExpressionParser.tab.cc"
    break;

  case 409:
#line 2272 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.yfield) && *(yystack_[0].value.tfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.tfield);
          }
#line 5555 "PatchValueExpressionParser.tab.cc"
    break;

  case 410:
#line 2276 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.yfield) && *(yystack_[0].value.yfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 5564 "PatchValueExpressionParser.tab.cc"
    break;

  case 411:
#line 2280 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.yfield) && *(yystack_[0].value.hfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.hfield);
          }
#line 5573 "PatchValueExpressionParser.tab.cc"
    break;

  case 412:
#line 2284 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.hfield) && *(yystack_[0].value.tfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.tfield);
          }
#line 5582 "PatchValueExpressionParser.tab.cc"
    break;

  case 413:
#line 2288 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.hfield) && *(yystack_[0].value.yfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.yfield);
          }
#line 5591 "PatchValueExpressionParser.tab.cc"
    break;

  case 414:
#line 2292 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(*(yystack_[2].value.hfield) && *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 5600 "PatchValueExpressionParser.tab.cc"
    break;

  case 415:
#line 2296 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(-*(yystack_[0].value.sfield));
            delete (yystack_[0].value.sfield);
          }
#line 5609 "PatchValueExpressionParser.tab.cc"
    break;

  case 416:
#line 2300 "../PatchValueExpressionParser.yy"
    { (yylhs.value.sfield) = (yystack_[1].value.sfield); }
#line 5615 "PatchValueExpressionParser.tab.cc"
    break;

  case 417:
#line 2301 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sqr(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5624 "PatchValueExpressionParser.tab.cc"
    break;

  case 418:
#line 2305 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sqrt(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5633 "PatchValueExpressionParser.tab.cc"
    break;

  case 419:
#line 2309 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sin(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5642 "PatchValueExpressionParser.tab.cc"
    break;

  case 420:
#line 2313 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::cos(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5651 "PatchValueExpressionParser.tab.cc"
    break;

  case 421:
#line 2317 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::tan(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5660 "PatchValueExpressionParser.tab.cc"
    break;

  case 422:
#line 2321 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::log10(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5669 "PatchValueExpressionParser.tab.cc"
    break;

  case 423:
#line 2325 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::asin(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5678 "PatchValueExpressionParser.tab.cc"
    break;

  case 424:
#line 2329 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::acos(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5687 "PatchValueExpressionParser.tab.cc"
    break;

  case 425:
#line 2333 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::atan(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5696 "PatchValueExpressionParser.tab.cc"
    break;

  case 426:
#line 2337 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::atan2(*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)));
            delete (yystack_[3].value.sfield);
            delete (yystack_[1].value.sfield);
          }
#line 5706 "PatchValueExpressionParser.tab.cc"
    break;

  case 427:
#line 2342 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sinh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5715 "PatchValueExpressionParser.tab.cc"
    break;

  case 428:
#line 2346 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::cosh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5724 "PatchValueExpressionParser.tab.cc"
    break;

  case 429:
#line 2350 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::tanh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5733 "PatchValueExpressionParser.tab.cc"
    break;

  case 430:
#line 2354 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::asinh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5742 "PatchValueExpressionParser.tab.cc"
    break;

  case 431:
#line 2358 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::acosh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5751 "PatchValueExpressionParser.tab.cc"
    break;

  case 432:
#line 2362 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::atanh(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5760 "PatchValueExpressionParser.tab.cc"
    break;

  case 433:
#line 2366 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::erf(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5769 "PatchValueExpressionParser.tab.cc"
    break;

  case 434:
#line 2370 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::erfc(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5778 "PatchValueExpressionParser.tab.cc"
    break;

  case 435:
#line 2374 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::lgamma(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5787 "PatchValueExpressionParser.tab.cc"
    break;

  case 436:
#line 2378 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::j0(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5796 "PatchValueExpressionParser.tab.cc"
    break;

  case 437:
#line 2382 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::j1(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5805 "PatchValueExpressionParser.tab.cc"
    break;

  case 438:
#line 2386 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::y0(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5814 "PatchValueExpressionParser.tab.cc"
    break;

  case 439:
#line 2390 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::y1(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5823 "PatchValueExpressionParser.tab.cc"
    break;

  case 440:
#line 2394 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::sign(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5832 "PatchValueExpressionParser.tab.cc"
    break;

  case 441:
#line 2398 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::pos(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5841 "PatchValueExpressionParser.tab.cc"
    break;

  case 442:
#line 2402 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::neg(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5850 "PatchValueExpressionParser.tab.cc"
    break;

  case 443:
#line 2406 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5859 "PatchValueExpressionParser.tab.cc"
    break;

  case 444:
#line 2410 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 5868 "PatchValueExpressionParser.tab.cc"
    break;

  case 445:
#line 2414 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.tfield)));
            delete (yystack_[1].value.tfield);
          }
#line 5877 "PatchValueExpressionParser.tab.cc"
    break;

  case 446:
#line 2418 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 5886 "PatchValueExpressionParser.tab.cc"
    break;

  case 447:
#line 2422 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::mag(*(yystack_[1].value.hfield)));
            delete (yystack_[1].value.hfield);
          }
#line 5895 "PatchValueExpressionParser.tab.cc"
    break;

  case 448:
#line 2426 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.sfield)));
            delete (yystack_[1].value.sfield);
          }
#line 5904 "PatchValueExpressionParser.tab.cc"
    break;

  case 449:
#line 2430 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.vfield)));
            delete (yystack_[1].value.vfield);
          }
#line 5913 "PatchValueExpressionParser.tab.cc"
    break;

  case 450:
#line 2434 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.tfield)));
            delete (yystack_[1].value.tfield);
          }
#line 5922 "PatchValueExpressionParser.tab.cc"
    break;

  case 451:
#line 2438 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 5931 "PatchValueExpressionParser.tab.cc"
    break;

  case 452:
#line 2442 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField(Foam::magSqr(*(yystack_[1].value.hfield)));
            delete (yystack_[1].value.hfield);
          }
#line 5940 "PatchValueExpressionParser.tab.cc"
    break;

  case 453:
#line 2446 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.vfield)->component(0));
            delete (yystack_[3].value.vfield);
          }
#line 5949 "PatchValueExpressionParser.tab.cc"
    break;

  case 454:
#line 2450 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.vfield)->component(1));
            delete (yystack_[3].value.vfield);
          }
#line 5958 "PatchValueExpressionParser.tab.cc"
    break;

  case 455:
#line 2454 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.vfield)->component(2));
            delete (yystack_[3].value.vfield);
          }
#line 5967 "PatchValueExpressionParser.tab.cc"
    break;

  case 456:
#line 2458 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(0));
            delete (yystack_[3].value.tfield);
          }
#line 5976 "PatchValueExpressionParser.tab.cc"
    break;

  case 457:
#line 2462 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(1));
            delete (yystack_[3].value.tfield);
          }
#line 5985 "PatchValueExpressionParser.tab.cc"
    break;

  case 458:
#line 2466 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(2));
            delete (yystack_[3].value.tfield);
          }
#line 5994 "PatchValueExpressionParser.tab.cc"
    break;

  case 459:
#line 2470 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(3));
            delete (yystack_[3].value.tfield);
          }
#line 6003 "PatchValueExpressionParser.tab.cc"
    break;

  case 460:
#line 2474 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(4));
            delete (yystack_[3].value.tfield);
          }
#line 6012 "PatchValueExpressionParser.tab.cc"
    break;

  case 461:
#line 2478 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(5));
            delete (yystack_[3].value.tfield);
          }
#line 6021 "PatchValueExpressionParser.tab.cc"
    break;

  case 462:
#line 2482 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(6));
            delete (yystack_[3].value.tfield);
          }
#line 6030 "PatchValueExpressionParser.tab.cc"
    break;

  case 463:
#line 2486 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(7));
            delete (yystack_[3].value.tfield);
          }
#line 6039 "PatchValueExpressionParser.tab.cc"
    break;

  case 464:
#line 2490 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.tfield)->component(8));
            delete (yystack_[3].value.tfield);
          }
#line 6048 "PatchValueExpressionParser.tab.cc"
    break;

  case 465:
#line 2494 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(0));
            delete (yystack_[3].value.yfield);
          }
#line 6057 "PatchValueExpressionParser.tab.cc"
    break;

  case 466:
#line 2498 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(1));
            delete (yystack_[3].value.yfield);
          }
#line 6066 "PatchValueExpressionParser.tab.cc"
    break;

  case 467:
#line 2502 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(2));
            delete (yystack_[3].value.yfield);
          }
#line 6075 "PatchValueExpressionParser.tab.cc"
    break;

  case 468:
#line 2506 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(3));
            delete (yystack_[3].value.yfield);
          }
#line 6084 "PatchValueExpressionParser.tab.cc"
    break;

  case 469:
#line 2510 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(4));
            delete (yystack_[3].value.yfield);
          }
#line 6093 "PatchValueExpressionParser.tab.cc"
    break;

  case 470:
#line 2514 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.yfield)->component(5));
            delete (yystack_[3].value.yfield);
          }
#line 6102 "PatchValueExpressionParser.tab.cc"
    break;

  case 471:
#line 2518 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = new Foam::scalarField((yystack_[3].value.hfield)->component(0));
            delete (yystack_[3].value.hfield);
          }
#line 6111 "PatchValueExpressionParser.tab.cc"
    break;

  case 472:
#line 2522 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.sfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.sfield));
            (yylhs.value.sfield) = driver.doConditional(
                *(yystack_[4].value.lfield),*(yystack_[2].value.sfield),*(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 6123 "PatchValueExpressionParser.tab.cc"
    break;

  case 473:
#line 2529 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = driver.toPoint(*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[1].value.sfield);
          }
#line 6132 "PatchValueExpressionParser.tab.cc"
    break;

  case 474:
#line 2533 "../PatchValueExpressionParser.yy"
    { (yylhs.value.sfield) = (yystack_[1].value.sfield); }
#line 6138 "PatchValueExpressionParser.tab.cc"
    break;

  case 475:
#line 2534 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getField<Foam::scalar>(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
          }
#line 6147 "PatchValueExpressionParser.tab.cc"
    break;

  case 476:
#line 2538 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getOldTimeField<Foam::scalar>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 6156 "PatchValueExpressionParser.tab.cc"
    break;

  case 477:
#line 2545 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getLookup(*(yystack_[3].value.name),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[3].value.name); delete (yystack_[1].value.sfield);
          }
#line 6165 "PatchValueExpressionParser.tab.cc"
    break;

  case 478:
#line 2549 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield)=driver.getLookup2D(*(yystack_[5].value.name),*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[5].value.name); delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 6174 "PatchValueExpressionParser.tab.cc"
    break;

  case 479:
#line 2553 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = Foam::min(*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 6183 "PatchValueExpressionParser.tab.cc"
    break;

  case 480:
#line 2557 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.sfield) = Foam::max(*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 6192 "PatchValueExpressionParser.tab.cc"
    break;

  case 481:
#line 2564 "../PatchValueExpressionParser.yy"
    {
      (yylhs.value.sfield)=driver.evaluatePluginFunction<Foam::scalar>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          true
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 6206 "PatchValueExpressionParser.tab.cc"
    break;

  case 482:
#line 2575 "../PatchValueExpressionParser.yy"
    { (yylhs.value.tfield) = (yystack_[0].value.tfield); }
#line 6212 "PatchValueExpressionParser.tab.cc"
    break;

  case 483:
#line 2576 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) + *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 6222 "PatchValueExpressionParser.tab.cc"
    break;

  case 484:
#line 2581 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.tfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.tfield);
          }
#line 6232 "PatchValueExpressionParser.tab.cc"
    break;

  case 485:
#line 2586 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.sfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.sfield);
          }
#line 6242 "PatchValueExpressionParser.tab.cc"
    break;

  case 486:
#line 2591 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.vfield),(yystack_[0].value.vfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.vfield) * *(yystack_[0].value.vfield));
            delete (yystack_[2].value.vfield); delete (yystack_[0].value.vfield);
          }
#line 6252 "PatchValueExpressionParser.tab.cc"
    break;

  case 487:
#line 2596 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 6262 "PatchValueExpressionParser.tab.cc"
    break;

  case 488:
#line 2601 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.yfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.tfield);
          }
#line 6272 "PatchValueExpressionParser.tab.cc"
    break;

  case 489:
#line 2606 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.yfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.yfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.yfield);
          }
#line 6282 "PatchValueExpressionParser.tab.cc"
    break;

  case 490:
#line 2611 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.tfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.tfield);
          }
#line 6292 "PatchValueExpressionParser.tab.cc"
    break;

  case 491:
#line 2616 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.hfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.hfield);
          }
#line 6302 "PatchValueExpressionParser.tab.cc"
    break;

  case 492:
#line 2621 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.sfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.sfield);
          }
#line 6312 "PatchValueExpressionParser.tab.cc"
    break;

  case 493:
#line 2626 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.tfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = new Foam::tensorField(*(yystack_[2].value.tfield) - *(yystack_[0].value.tfield));
            delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 6322 "PatchValueExpressionParser.tab.cc"
    break;

  case 494:
#line 2631 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField(-*(yystack_[0].value.tfield));
            delete (yystack_[0].value.tfield);
          }
#line 6331 "PatchValueExpressionParser.tab.cc"
    break;

  case 495:
#line 2635 "../PatchValueExpressionParser.yy"
    { (yylhs.value.tfield) = (yystack_[1].value.tfield); }
#line 6337 "PatchValueExpressionParser.tab.cc"
    break;

  case 496:
#line 2636 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::skew(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 6346 "PatchValueExpressionParser.tab.cc"
    break;

  case 497:
#line 2640 "../PatchValueExpressionParser.yy"
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
#line 6362 "PatchValueExpressionParser.tab.cc"
    break;

  case 498:
#line 2651 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField(Foam::eigenVectors(*(yystack_[1].value.yfield)));
            delete (yystack_[1].value.yfield);
          }
#line 6371 "PatchValueExpressionParser.tab.cc"
    break;

  case 499:
#line 2655 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::inv(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 6380 "PatchValueExpressionParser.tab.cc"
    break;

  case 500:
#line 2659 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::cof(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 6389 "PatchValueExpressionParser.tab.cc"
    break;

  case 501:
#line 2663 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::dev(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 6398 "PatchValueExpressionParser.tab.cc"
    break;

  case 502:
#line 2667 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( Foam::dev2(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 6407 "PatchValueExpressionParser.tab.cc"
    break;

  case 503:
#line 2671 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = new Foam::tensorField( (yystack_[5].value.tfield)->T() );
            delete (yystack_[5].value.tfield);
          }
#line 6416 "PatchValueExpressionParser.tab.cc"
    break;

  case 504:
#line 2675 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.tfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.tfield));
            (yylhs.value.tfield) = driver.doConditional(
                *(yystack_[4].value.lfield),*(yystack_[2].value.tfield),*(yystack_[0].value.tfield)
            ).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.tfield); delete (yystack_[0].value.tfield);
          }
#line 6428 "PatchValueExpressionParser.tab.cc"
    break;

  case 505:
#line 2682 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = driver.toPoint(*(yystack_[1].value.tfield)).ptr();
            delete (yystack_[1].value.tfield);
          }
#line 6437 "PatchValueExpressionParser.tab.cc"
    break;

  case 506:
#line 2686 "../PatchValueExpressionParser.yy"
    { (yylhs.value.tfield) = (yystack_[1].value.tfield); }
#line 6443 "PatchValueExpressionParser.tab.cc"
    break;

  case 507:
#line 2687 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield)=driver.getField<Foam::tensor>(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
          }
#line 6452 "PatchValueExpressionParser.tab.cc"
    break;

  case 508:
#line 2691 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield)=driver.getOldTimeField<Foam::tensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 6461 "PatchValueExpressionParser.tab.cc"
    break;

  case 509:
#line 2698 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = Foam::min(*(yystack_[3].value.tfield),*(yystack_[1].value.tfield)).ptr();
            delete (yystack_[3].value.tfield); delete (yystack_[1].value.tfield);
          }
#line 6470 "PatchValueExpressionParser.tab.cc"
    break;

  case 510:
#line 2702 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = Foam::max(*(yystack_[3].value.tfield),*(yystack_[1].value.tfield)).ptr();
            delete (yystack_[3].value.tfield); delete (yystack_[1].value.tfield);
          }
#line 6479 "PatchValueExpressionParser.tab.cc"
    break;

  case 511:
#line 2709 "../PatchValueExpressionParser.yy"
    {
      (yylhs.value.tfield)=driver.evaluatePluginFunction<Foam::tensor>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          true
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 6493 "PatchValueExpressionParser.tab.cc"
    break;

  case 512:
#line 2720 "../PatchValueExpressionParser.yy"
    { (yylhs.value.yfield) = (yystack_[0].value.yfield); }
#line 6499 "PatchValueExpressionParser.tab.cc"
    break;

  case 513:
#line 2721 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) + *(yystack_[0].value.yfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 6509 "PatchValueExpressionParser.tab.cc"
    break;

  case 514:
#line 2726 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.yfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.yfield);
          }
#line 6519 "PatchValueExpressionParser.tab.cc"
    break;

  case 515:
#line 2731 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.sfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.sfield);
          }
#line 6529 "PatchValueExpressionParser.tab.cc"
    break;

  case 516:
#line 2736 "../PatchValueExpressionParser.yy"
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
#line 6545 "PatchValueExpressionParser.tab.cc"
    break;

  case 517:
#line 2747 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.yfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.yfield);
          }
#line 6555 "PatchValueExpressionParser.tab.cc"
    break;

  case 518:
#line 2752 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.hfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.hfield);
          }
#line 6565 "PatchValueExpressionParser.tab.cc"
    break;

  case 519:
#line 2757 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.sfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.sfield);
          }
#line 6575 "PatchValueExpressionParser.tab.cc"
    break;

  case 520:
#line 2762 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.yfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = new Foam::symmTensorField(*(yystack_[2].value.yfield) - *(yystack_[0].value.yfield));
            delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 6585 "PatchValueExpressionParser.tab.cc"
    break;

  case 521:
#line 2767 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField(-*(yystack_[0].value.yfield));
            delete (yystack_[0].value.yfield);
          }
#line 6594 "PatchValueExpressionParser.tab.cc"
    break;

  case 522:
#line 2771 "../PatchValueExpressionParser.yy"
    { (yylhs.value.yfield) = (yystack_[1].value.yfield); }
#line 6600 "PatchValueExpressionParser.tab.cc"
    break;

  case 523:
#line 2772 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::symm(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 6609 "PatchValueExpressionParser.tab.cc"
    break;

  case 524:
#line 2776 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::symm(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 6618 "PatchValueExpressionParser.tab.cc"
    break;

  case 525:
#line 2780 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::twoSymm(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 6627 "PatchValueExpressionParser.tab.cc"
    break;

  case 526:
#line 2784 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::twoSymm(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 6636 "PatchValueExpressionParser.tab.cc"
    break;

  case 527:
#line 2788 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::inv(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 6645 "PatchValueExpressionParser.tab.cc"
    break;

  case 528:
#line 2792 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::cof(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 6654 "PatchValueExpressionParser.tab.cc"
    break;

  case 529:
#line 2796 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::dev(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 6663 "PatchValueExpressionParser.tab.cc"
    break;

  case 530:
#line 2800 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::dev2(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 6672 "PatchValueExpressionParser.tab.cc"
    break;

  case 531:
#line 2804 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = new Foam::symmTensorField( Foam::sqr(*(yystack_[1].value.vfield)) );
            delete (yystack_[1].value.vfield);
          }
#line 6681 "PatchValueExpressionParser.tab.cc"
    break;

  case 532:
#line 2808 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = (yystack_[5].value.yfield);
          }
#line 6689 "PatchValueExpressionParser.tab.cc"
    break;

  case 533:
#line 2811 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.yfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.yfield));
            (yylhs.value.yfield) = driver.doConditional(
                *(yystack_[4].value.lfield),*(yystack_[2].value.yfield),*(yystack_[0].value.yfield)
            ).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.yfield); delete (yystack_[0].value.yfield);
          }
#line 6701 "PatchValueExpressionParser.tab.cc"
    break;

  case 534:
#line 2818 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = driver.toPoint(*(yystack_[1].value.yfield)).ptr();
            delete (yystack_[1].value.yfield);
          }
#line 6710 "PatchValueExpressionParser.tab.cc"
    break;

  case 535:
#line 2822 "../PatchValueExpressionParser.yy"
    { (yylhs.value.yfield) = (yystack_[1].value.yfield); }
#line 6716 "PatchValueExpressionParser.tab.cc"
    break;

  case 536:
#line 2823 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield)=driver.getField<Foam::symmTensor>(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
          }
#line 6725 "PatchValueExpressionParser.tab.cc"
    break;

  case 537:
#line 2827 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield)=driver.getOldTimeField<Foam::symmTensor>(*(yystack_[1].value.name)).ptr();delete (yystack_[1].value.name);
          }
#line 6733 "PatchValueExpressionParser.tab.cc"
    break;

  case 538:
#line 2833 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = Foam::min(*(yystack_[3].value.yfield),*(yystack_[1].value.yfield)).ptr();
            delete (yystack_[3].value.yfield); delete (yystack_[1].value.yfield);
          }
#line 6742 "PatchValueExpressionParser.tab.cc"
    break;

  case 539:
#line 2837 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = Foam::max(*(yystack_[3].value.yfield),*(yystack_[1].value.yfield)).ptr();
            delete (yystack_[3].value.yfield); delete (yystack_[1].value.yfield);
          }
#line 6751 "PatchValueExpressionParser.tab.cc"
    break;

  case 540:
#line 2844 "../PatchValueExpressionParser.yy"
    {
      (yylhs.value.yfield)=driver.evaluatePluginFunction<Foam::symmTensor>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          true
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 6765 "PatchValueExpressionParser.tab.cc"
    break;

  case 541:
#line 2855 "../PatchValueExpressionParser.yy"
    { (yylhs.value.hfield) = (yystack_[0].value.hfield); }
#line 6771 "PatchValueExpressionParser.tab.cc"
    break;

  case 542:
#line 2856 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) + *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 6781 "PatchValueExpressionParser.tab.cc"
    break;

  case 543:
#line 2861 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.sfield) * *(yystack_[0].value.hfield));
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.hfield);
          }
#line 6791 "PatchValueExpressionParser.tab.cc"
    break;

  case 544:
#line 2866 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.sfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) * *(yystack_[0].value.sfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.sfield);
          }
#line 6801 "PatchValueExpressionParser.tab.cc"
    break;

  case 545:
#line 2871 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) & *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 6811 "PatchValueExpressionParser.tab.cc"
    break;

  case 546:
#line 2876 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.sfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) / *(yystack_[0].value.sfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.sfield);
          }
#line 6821 "PatchValueExpressionParser.tab.cc"
    break;

  case 547:
#line 2881 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.hfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = new Foam::sphericalTensorField(*(yystack_[2].value.hfield) - *(yystack_[0].value.hfield));
            delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 6831 "PatchValueExpressionParser.tab.cc"
    break;

  case 548:
#line 2886 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField(-*(yystack_[0].value.hfield));
            delete (yystack_[0].value.hfield);
          }
#line 6840 "PatchValueExpressionParser.tab.cc"
    break;

  case 549:
#line 2890 "../PatchValueExpressionParser.yy"
    { (yylhs.value.hfield) = (yystack_[1].value.hfield); }
#line 6846 "PatchValueExpressionParser.tab.cc"
    break;

  case 550:
#line 2891 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::sph(*(yystack_[1].value.tfield)) );
            delete (yystack_[1].value.tfield);
          }
#line 6855 "PatchValueExpressionParser.tab.cc"
    break;

  case 551:
#line 2895 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::sph(*(yystack_[1].value.yfield)) );
            delete (yystack_[1].value.yfield);
          }
#line 6864 "PatchValueExpressionParser.tab.cc"
    break;

  case 552:
#line 2899 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = new Foam::sphericalTensorField( Foam::sph(*(yystack_[1].value.hfield)) );
            delete (yystack_[1].value.hfield);
          }
#line 6873 "PatchValueExpressionParser.tab.cc"
    break;

  case 553:
#line 2903 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = (yystack_[5].value.hfield);
          }
#line 6881 "PatchValueExpressionParser.tab.cc"
    break;

  case 554:
#line 2906 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[4].value.lfield),(yystack_[2].value.hfield)); sameSize((yystack_[4].value.lfield),(yystack_[0].value.hfield));
            (yylhs.value.hfield) = driver.doConditional(
                *(yystack_[4].value.lfield),*(yystack_[2].value.hfield),*(yystack_[0].value.hfield)
            ).ptr();
            delete (yystack_[4].value.lfield); delete (yystack_[2].value.hfield); delete (yystack_[0].value.hfield);
          }
#line 6893 "PatchValueExpressionParser.tab.cc"
    break;

  case 555:
#line 2913 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = driver.toPoint(*(yystack_[1].value.hfield)).ptr();
            delete (yystack_[1].value.hfield);
          }
#line 6902 "PatchValueExpressionParser.tab.cc"
    break;

  case 556:
#line 2917 "../PatchValueExpressionParser.yy"
    { (yylhs.value.hfield) = (yystack_[1].value.hfield); }
#line 6908 "PatchValueExpressionParser.tab.cc"
    break;

  case 557:
#line 2918 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield)=driver.getField<Foam::sphericalTensor>(*(yystack_[0].value.name)).ptr();
            delete (yystack_[0].value.name);
          }
#line 6917 "PatchValueExpressionParser.tab.cc"
    break;

  case 558:
#line 2922 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield)=driver.getOldTimeField<Foam::sphericalTensor>(*(yystack_[1].value.name)).ptr();
            delete (yystack_[1].value.name);
          }
#line 6926 "PatchValueExpressionParser.tab.cc"
    break;

  case 559:
#line 2929 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = Foam::min(*(yystack_[3].value.hfield),*(yystack_[1].value.hfield)).ptr();
            delete (yystack_[3].value.hfield); delete (yystack_[1].value.hfield);
          }
#line 6935 "PatchValueExpressionParser.tab.cc"
    break;

  case 560:
#line 2933 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = Foam::max(*(yystack_[3].value.hfield),*(yystack_[1].value.hfield)).ptr();
            delete (yystack_[3].value.hfield); delete (yystack_[1].value.hfield);
          }
#line 6944 "PatchValueExpressionParser.tab.cc"
    break;

  case 561:
#line 2940 "../PatchValueExpressionParser.yy"
    {
      (yylhs.value.hfield)=driver.evaluatePluginFunction<Foam::sphericalTensor>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          true
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 6958 "PatchValueExpressionParser.tab.cc"
    break;

  case 562:
#line 2951 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.vfield) = driver.composeVectorField(*(yystack_[5].value.sfield),*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[5].value.sfield); delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 6967 "PatchValueExpressionParser.tab.cc"
    break;

  case 563:
#line 2957 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.tfield) = driver.composeTensorField(
                *(yystack_[17].value.sfield),*(yystack_[15].value.sfield),*(yystack_[13].value.sfield),
                *(yystack_[11].value.sfield),*(yystack_[9].value.sfield),*(yystack_[7].value.sfield),
                *(yystack_[5].value.sfield),*(yystack_[3].value.sfield),*(yystack_[1].value.sfield)
            ).ptr();
            delete (yystack_[17].value.sfield); delete (yystack_[15].value.sfield); delete (yystack_[13].value.sfield); delete (yystack_[11].value.sfield); delete (yystack_[9].value.sfield);
            delete (yystack_[7].value.sfield); delete (yystack_[5].value.sfield); delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 6981 "PatchValueExpressionParser.tab.cc"
    break;

  case 564:
#line 2967 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.yfield) = driver.composeSymmTensorField(
                *(yystack_[11].value.sfield),*(yystack_[9].value.sfield),*(yystack_[7].value.sfield),
                *(yystack_[5].value.sfield),*(yystack_[3].value.sfield),
                *(yystack_[1].value.sfield)
            ).ptr();
            delete (yystack_[11].value.sfield); delete (yystack_[9].value.sfield); delete (yystack_[7].value.sfield); delete (yystack_[5].value.sfield); delete (yystack_[3].value.sfield); delete (yystack_[1].value.sfield);
          }
#line 6994 "PatchValueExpressionParser.tab.cc"
    break;

  case 565:
#line 2976 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.hfield) = driver.composeSphericalTensorField(*(yystack_[1].value.sfield)).ptr();
            delete (yystack_[1].value.sfield);
          }
#line 7003 "PatchValueExpressionParser.tab.cc"
    break;

  case 566:
#line 2982 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::less<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 7017 "PatchValueExpressionParser.tab.cc"
    break;

  case 567:
#line 2991 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::greater<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 7031 "PatchValueExpressionParser.tab.cc"
    break;

  case 568:
#line 3000 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::less_equal<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 7045 "PatchValueExpressionParser.tab.cc"
    break;

  case 569:
#line 3009 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::greater_equal<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 7059 "PatchValueExpressionParser.tab.cc"
    break;

  case 570:
#line 3018 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::equal_to<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 7073 "PatchValueExpressionParser.tab.cc"
    break;

  case 571:
#line 3027 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.sfield),(yystack_[0].value.sfield));
            (yylhs.value.lfield) = driver.doCompare(
                *(yystack_[2].value.sfield),
                std::not_equal_to<Foam::scalar>(),
                *(yystack_[0].value.sfield)
            ).ptr();
            delete (yystack_[2].value.sfield); delete (yystack_[0].value.sfield);
          }
#line 7087 "PatchValueExpressionParser.tab.cc"
    break;

  case 572:
#line 3036 "../PatchValueExpressionParser.yy"
    { (yylhs.value.lfield) = (yystack_[1].value.lfield); }
#line 7093 "PatchValueExpressionParser.tab.cc"
    break;

  case 573:
#line 3037 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.lfield),(yystack_[0].value.lfield));
            (yylhs.value.lfield) = driver.doLogicalOp(
                *(yystack_[2].value.lfield),
                std::logical_and<Foam::scalar>(),
                *(yystack_[0].value.lfield)
            ).ptr();
            delete (yystack_[2].value.lfield); delete (yystack_[0].value.lfield);
          }
#line 7107 "PatchValueExpressionParser.tab.cc"
    break;

  case 574:
#line 3046 "../PatchValueExpressionParser.yy"
    {
            sameSize((yystack_[2].value.lfield),(yystack_[0].value.lfield));
            (yylhs.value.lfield) = driver.doLogicalOp(
                *(yystack_[2].value.lfield),
                std::logical_or<Foam::scalar>(),
                *(yystack_[0].value.lfield)).ptr();
            delete (yystack_[2].value.lfield); delete (yystack_[0].value.lfield);
          }
#line 7120 "PatchValueExpressionParser.tab.cc"
    break;

  case 575:
#line 3054 "../PatchValueExpressionParser.yy"
    {
            (yylhs.value.lfield) = driver.doLogicalNot(*(yystack_[0].value.lfield)).ptr();
            delete (yystack_[0].value.lfield);
          }
#line 7129 "PatchValueExpressionParser.tab.cc"
    break;

  case 576:
#line 3058 "../PatchValueExpressionParser.yy"
    { (yylhs.value.lfield) = (yystack_[1].value.lfield); }
#line 7135 "PatchValueExpressionParser.tab.cc"
    break;

  case 577:
#line 3059 "../PatchValueExpressionParser.yy"
    {
        (yylhs.value.lfield)=driver.getVariable<bool>(*(yystack_[0].value.name),driver.pointSize()).ptr();
        delete (yystack_[0].value.name);
 }
#line 7144 "PatchValueExpressionParser.tab.cc"
    break;

  case 578:
#line 3066 "../PatchValueExpressionParser.yy"
    {
      (yylhs.value.lfield)=driver.evaluatePluginFunction<bool>(
          *(yystack_[2].value.name),
          yystack_[1].location,
          numberOfFunctionChars,
          true
      ).ptr();
      delete (yystack_[2].value.name);
  }
#line 7158 "PatchValueExpressionParser.tab.cc"
    break;


#line 7162 "PatchValueExpressionParser.tab.cc"

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
  PatchValueExpressionParser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  PatchValueExpressionParser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
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


  const short PatchValueExpressionParser::yypact_ninf_ = -276;

  const signed char PatchValueExpressionParser::yytable_ninf_ = -1;

  const short
  PatchValueExpressionParser::yypact_[] =
  {
     228,  2427,  2613,  2613,  2613,  2613,  2613,  2613,  2613,  2613,
    2613,  2613,  2613,  2613,  2989,  2989,  2989,  2989,  2989,  2989,
    2989,  2989,  2989,  2989,  2989,  2989,  -194,  -191,    22,  -276,
    -276,  -172,  -164,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -162,  -156,  -148,  -146,  -144,
    -143,  -140,  -126,  -124,  -120,  -118,  -102,  -276,   -99,   -98,
     -84,   -79,  -276,  -276,  -276,  -276,   -76,   -75,   -54,   -52,
     -40,   -36,   -34,   -32,   -18,    13,    15,    28,    35,    36,
      43,    44,    47,    60,    72,   103,   109,   124,   125,   127,
     129,   132,   137,   142,   144,   146,   153,   155,   156,   157,
     160,   169,   214,   215,   222,   223,   225,   227,   230,   233,
     237,   238,   239,   240,   248,   249,   250,   251,   254,   259,
     260,   261,   263,   267,   272,   273,  -276,  -276,   274,   276,
     280,   285,   286,   287,   289,   293,   300,   302,   305,   306,
     308,   311,   314,   326,  2427,  2427,  2427,  2427,  -276,  6276,
     -56,  -276,  -276,  6248,   -56,  1171,   -56,  1346,   -56,  5831,
     -56,  -166,   -56,  -276,  -276,  -276,  -276,  6284,   -56,  6259,
     -56,  5844,   -56,  5857,   -56,  5870,   -56,  -276,  -276,  -276,
    -276,    61,   -56,   327,   328,   329,   334,   343,   344,   348,
     349,   350,   352,   353,   362,   366,   367,   368,   369,   375,
     376,   377,   378,   417,   424,   460,   465,   472,   473,   485,
     486,   487,   488,   491,   493,   494,   495,   496,   501,   508,
     513,   516,   520,   522,   525,   530,   534,   544,   545,   548,
     553,   554,   555,   557,  2613,  2613,  2613,  2613,  6276,  5117,
    1171,  1346,  5831,  -166,  3137,  1468,  6248,  2978,   942,    74,
    1766,   131,  2224,   171,  -150,  -154,   560,   561,   568,   605,
     606,   609,   610,   613,   618,   619,   620,   622,   626,   630,
     631,   632,   633,   635,   638,   639,   640,   642,   646,   656,
     661,   663,   665,   671,   678,   680,   683,   686,   691,   692,
     693,   695,   699,   704,   705,   706,   708,   712,   717,   718,
     719,   721,   725,   730,   731,   732,   734,  2989,  2989,  2989,
    2989,  6284,  5135,  5844,  5857,  5870,    61,  3156,  2058,  6259,
    5945,  4917,   229,  4930,   244,  4943,   265,   -57,  -137,  -276,
    -276,  -276,  2427,  2427,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  2427,  2427,  2427,  2427,
     -30,   -29,  -190,  -165,   -16,   -15,  -153,  -149,   -61,    75,
     346,   528,   542,   552,   952,  1070,  1145,  6397,   743,   744,
     745,  2427,  2427,  2427,  2427,  2427,  2427,  2427,  2427,  2427,
    2427,  2427,  2427,  2427,  2427,  2427,  2427,  2427,  2427,  2427,
    2427,  2427,  2427,  2427,  2427,  2427,  2427,  2427,  2427,  2427,
    2427,  2427,  2427,  2427,  2427,  2427,  2427,  2427,  2613,  2989,
     747,   750,   746,  2427,  2613,  2427,  2427,  2427,  2613,  2427,
    2427,  2427,  2427,  2427,  2427,  2427,   753,   754,   134,  -276,
     310,   474,   515,   562,  -276,   685,   752,   760,   310,   474,
     685,   752,  5958,  3175,   278,   291,   304,   -80,  5971,  3194,
     512,   527,   541,   -62,  -276,  -276,  2613,  2613,  2613,  2613,
    2613,  2613,  -276,  -276,   -56,  -276,  2613,  2613,  2613,  2613,
    2613,  2613,  2613,  2613,  2613,  2613,  2613,  -276,  2613,  2613,
    2613,  2613,  2613,  2613,  -276,  -276,  2613,  2613,  2613,  2613,
    2613,  2613,  -276,  -276,  2613,  2613,  2613,  2613,  2613,  2613,
    -276,  -276,  2613,  2613,  2613,  -276,  2989,  2989,  2989,  2989,
    2989,  2989,  -276,  -276,  2989,  2989,  2989,  2989,  2989,  2989,
    2989,  2989,  2989,  2989,  2989,  -276,  2989,  2989,  2989,  2989,
    2989,  2989,  -276,  -276,  2989,  2989,  2989,  2989,  2989,  2989,
    -276,  -276,  2989,  2989,  2989,  2989,  2989,  2989,  -276,  -276,
    2989,  2989,  2989,  -276,  2613,  2613,  2613,  2613,  2613,  2613,
    1238,  2613,  2613,  2613,  2613,  2613,  2613,  2613,  2613,  2427,
    2427,  2613,  2613,  2613,  2613,  2613,  2613,  2613,  2613,  2613,
    2613,  2613,  2613,  2613,  2613,  2613,  2613,  2613,  2613,  2613,
    2613,  2613,  2613,  2613,  2613,  2613,  2613,  2613,  2613,  2613,
    2613,  2613,  2613,  2613,  2613,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  2989,  2989,  2989,
    2989,  2989,  2989,  1308,  2989,  2989,  2989,  2989,  2989,  2989,
    2989,  2989,  2989,  2989,  2989,  2989,  2989,  2989,  2989,  2989,
    2989,  2989,  2989,  2989,  2989,  2989,  2989,  2989,  2989,  2989,
    2989,  2989,  2989,  2989,  2989,  2989,  2989,  2989,  2989,  2989,
    2989,  2989,  2989,  2989,  2989,  2989,  2989,  2989,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    3213,  3232,  5153,  5171,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  5189,  5207,  5225,  5243,
    5261,  5279,  3251,  3270,   759,  -276,   767,  -276,  -276,  -276,
     769,  -276,   772,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,   773,   774,   775,   784,   785,   786,   788,   792,   796,
     797,   798,   799,   803,   805,   807,   810,   814,   815,   816,
     819,   821,   822,   826,   833,   835,   837,   838,   839,   840,
     842,  -276,  -276,  -276,  5297,  5315,  3289,  3308,  3327,  3346,
    5984,  3365,   559,   624,   637,  5997,  3384,   682,   697,   710,
    6010,  3403,   723,   736,   749,  6023,  3422,   789,   802,   820,
    3441,  3460,  3479,  3498,  3517,  3536,   471,  2795,  4956,  4969,
    4982,  5906,  3080,  4995,  5008,  5021,  5919,  3099,  5034,  5047,
    5060,  5932,  3118,  5073,  5086,  5099,  3555,  3574,  3593,  3612,
    6036,  3631,  6049,  3650,  6062,  3669,  6075,  3688,  6088,  3707,
    6101,  3726,  3745,  3764,  3783,  3802,  3821,  3840,  3859,  3878,
    3897,  3916,  5333,  5351,  3935,  3954,  3973,  3992,  4011,  4030,
    4049,  4068,  4087,  4106,  4125,  4144,  4163,  4182,  4201,  4220,
    4239,  4258,  4277,  4296,  4315,  4334,  4353,  4372,  4391,  4410,
    4429,  4448,  4467,  4486,  4505,  4524,  6114,  4543,   836,   860,
     878,  6127,  4562,   928,   972,   990,  1363,  1427,  -276,  1005,
    1020,  1083,  1096,  1117,  1144,  1227,  1257,  1271,  1284,  1310,
    1389,  1402,  1415,  1431,  1489,  1513,  1562,  1601,  1614,  1627,
    1649,  1685,  1740,  1753,  1800,  1820,  1833,  1846,  1934,  1947,
    1962,  2001,  2014,  2029,  2113,  2134,  2148,  2172,  2185,  2198,
    2211,  2280,  2293,  2323,  2462,  2475,  2489,  2509,  2647,  2660,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,    58,    58,   134,  -276,  -276,   134,
     310,   474,   515,   134,   -20,  -276,  6248,  6248,  6248,  6248,
    6248,  6248,   -55,   -55,  -276,   134,  -276,   310,   474,   515,
    -276,   -48,   345,   667,   -64,    66,   115,   -64,    66,   115,
    -276,  -276,   134,   310,   474,   515,     2,   -48,   345,   667,
     -64,    66,   115,   -64,    66,   115,  -276,  -276,   134,   310,
     474,   515,    71,   -48,   345,   667,   -64,    66,   115,   -64,
      66,   115,  -276,  -276,   134,   310,   474,   515,   -89,   148,
    5887,  1038,  1449,  2083,   572,  -276,   174,   174,   562,  -276,
    -276,   562,   685,   752,   760,   562,    67,  6259,  6259,  6259,
    6259,  6259,  6259,    79,    79,  -276,   562,  -276,   685,   752,
     760,  -276,  1702,  6292,  6300,   123,   123,  -276,  -276,   562,
     685,   752,   760,    20,  1702,  6292,  6300,   221,   221,  -276,
    -276,   562,   685,   752,   760,   143,  1702,  6292,  6300,   307,
     307,  -276,  -276,   562,   685,   752,   760,   -83,  1882,  5901,
    2614,  2678,  2704,   862,  -276,  6140,  4581,  6153,  4600,  2418,
    5369,  6230,  5387,  -276,  -276,  2613,  2989,  2613,  2989,  2613,
    2989,  2613,  2989,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  2613,
      52,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  2613,  -276,  2613,  -276,  2613,  2613,  2613,  2989,  -276,
    2989,  -276,  2989,  2989,  2989,  2613,  -276,  2613,  -276,  2613,
    2613,  2613,  2989,  -276,  2989,  -276,  2989,  2989,  2989,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  2613,  2989,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,   846,
     847,   850,   854,   855,   863,   864,   865,   868,   872,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,   873,  -276,  -276,  -276,  -276,
    -276,  -276,   874,  -276,   876,  2613,  2613,  2613,  2613,  2613,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,   880,  -276,  -276,  -276,  -276,
    -276,  -276,   884,  -276,   898,  2989,  2989,  2989,  2989,  2989,
    4619,  4638,  5405,  5423,  5441,  5459,  5477,  5495,  4657,  -276,
    2801,   900,  4676,  6166,  4695,  2718,  2835,  2851,  6179,  4714,
    2873,  2891,  2904,  6192,  4733,  2994,  3007,  3020,  6205,  4752,
    3035,  3048,  3061,  4771,  4790,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,   901,   904,   905,  6276,  6248,
    1171,  1346,  5831,   906,   907,   911,  6284,  6259,  5844,  5857,
    5870,  -276,  -276,  2613,  2989,  2613,  2989,  2613,  2989,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  4809,  4828,  5513,  5531,  5549,  5567,  -276,  -276,  2613,
    2989,  2613,  2989,  5585,  5603,  5621,  5639,  2613,  2989,  2613,
    2989,  5657,  5675,  5693,  5711,  2613,  2989,  2613,  2989,  5729,
    5747,  4847,  4866,  2613,  2989,  -276,  -276,  5765,  5783,  2613,
    2989,  5801,  5819,  2613,  2989,  4885,  4904,  -276,  -276
  };

  const unsigned short
  PatchValueExpressionParser::yydefact_[] =
  {
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
     221,     0,     0,   217,    81,   357,   264,   303,   332,   475,
     391,   577,   507,   536,   557,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
       0,     0,   343,   344,   315,   198,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,    33,
       0,   115,    49,    32,     0,    38,     0,    40,     0,    42,
       0,    34,     0,    48,   231,   275,   314,    36,     0,    35,
       0,    39,     0,    41,     0,    43,     0,   363,   482,   512,
     541,    37,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      29,     1,     0,     0,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,   134,
     251,   288,   322,   376,   415,   494,   521,   548,    63,    64,
     377,   378,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   355,   575,     0,     0,     0,     0,
       0,     0,    44,    30,     0,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   216,     0,     0,
       0,     0,     0,     0,    45,   263,     0,     0,     0,     0,
       0,     0,    45,   302,     0,     0,     0,     0,     0,     0,
      45,   331,     0,     0,     0,   356,     0,     0,     0,     0,
       0,     0,    44,   390,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   474,     0,     0,     0,     0,
       0,     0,    45,   506,     0,     0,     0,     0,     0,     0,
      45,   535,     0,     0,     0,     0,     0,     0,    45,   556,
       0,     0,     0,   576,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     5,     8,     9,    12,
      13,    16,    17,    20,    21,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,     7,
      10,    11,    14,    15,    18,    19,    22,    23,    26,    27,
       0,     0,     0,     0,   230,   481,    91,   395,   274,   511,
     313,   540,   342,   561,   358,   578,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,     0,   205,   199,   200,
       0,   208,     0,   210,    74,   215,    76,    77,    78,   207,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   212,   213,   345,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,   388,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     201,   202,    65,   135,   252,   289,   323,   352,   386,   416,
     495,   522,   549,   572,    61,    50,   239,    52,    59,   124,
      54,    56,    58,    60,     0,    31,   350,   351,   348,   349,
     346,   347,   117,   116,   119,    51,   118,   237,   279,   317,
     120,   125,   126,   127,   246,   247,   248,   232,   233,   234,
     238,   245,    53,   240,   242,   244,     0,   128,   129,   130,
     249,   285,   286,   235,   276,   277,   280,   284,    55,   241,
     281,   283,     0,   131,   132,   133,   250,   287,   321,   236,
     278,   316,   318,   320,    57,   243,   282,   319,     0,     0,
       0,     0,     0,     0,   354,   353,   375,   364,   486,   366,
     373,   405,   368,   370,   372,   374,     0,   570,   571,   568,
     569,   566,   567,   397,   396,   399,   365,   398,   484,   514,
     543,   400,   406,   407,   408,   493,   483,   485,   492,   367,
     487,   489,   491,     0,   409,   410,   411,   520,   513,   515,
     519,   369,   488,   516,   518,     0,   412,   413,   414,   547,
     542,   544,   546,   371,   490,   517,   545,     0,     0,     0,
       0,     0,     0,   574,   573,     0,     0,     0,     0,     0,
       0,     0,     0,   222,   477,     0,     0,     0,     0,     0,
       0,     0,     0,   362,   565,   204,   206,   209,   211,   224,
      85,   268,   307,   336,   225,    86,   269,   308,   337,   226,
      87,   270,   309,   338,   227,    88,   271,   310,   339,   218,
      82,   265,   304,   333,   476,   392,   508,   537,   558,     0,
       0,   122,   403,   123,   404,   163,   162,   164,   165,   166,
     444,   443,   445,   446,   447,   168,   167,   169,   170,   171,
     449,   448,   450,   451,   452,   138,   419,   139,   420,   140,
     421,     0,   102,     0,    94,     0,     0,     0,     0,   104,
       0,    96,     0,     0,     0,     0,   103,     0,    95,     0,
       0,     0,     0,   105,     0,    97,     0,     0,     0,   106,
     108,   107,   109,   112,   100,   113,   101,   110,    98,   111,
      99,   298,   136,   531,   417,   137,   418,   141,   422,   142,
     423,   143,   424,   144,   425,     0,     0,   146,   427,   147,
     428,   148,   429,   149,   430,   150,   431,   151,   432,   152,
     433,   153,   434,   154,   435,   155,   436,   156,   437,   157,
     438,   158,   439,   159,   440,   160,   441,   161,   442,   389,
     473,   505,   534,   555,    79,   214,   262,   301,   330,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
      72,   384,   385,   172,   173,   174,   258,   296,   501,   529,
     291,   290,   524,   523,   253,   496,   175,   176,   177,   257,
     295,   500,   528,   256,   294,   327,   499,   527,   324,   325,
     326,   550,   551,   552,   293,   292,   526,   525,   259,   297,
     502,   530,    66,    67,   379,   380,   254,   255,   497,   498,
     178,   179,   180,    68,    69,    70,   181,   182,   183,   184,
     185,   186,   187,   188,   189,     0,   190,   191,   192,   193,
     194,   195,     0,   196,     0,     0,     0,     0,     0,     0,
     453,   454,   455,   381,   382,   383,   456,   457,   458,   459,
     460,   461,   462,   463,   464,     0,   465,   466,   467,   468,
     469,   470,     0,   471,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,    83,   266,   305,   334,
     220,    84,   267,   306,   335,     0,     0,     0,    73,   197,
     261,   300,   329,     0,     0,     0,   387,   472,   504,   533,
     554,   223,   478,     0,     0,     0,     0,     0,     0,   121,
      93,   401,   402,    89,   228,   272,   311,   340,   393,   479,
     509,   538,   559,    90,   229,   273,   312,   341,   394,   480,
     510,   539,   560,   145,   426,   260,   299,   328,   503,   532,
     553,     0,     0,     0,     0,     0,     0,   359,   562,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   361,   564,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   360,   563
  };

  const short
  PatchValueExpressionParser::yypgoto_[] =
  {
    -276,  -276,  -276,  -123,  -276,   558,  -275,  6115,   983,  1857,
    -276,  -276,  -276,  -276,   206,  -276,  1686,  -276,  1485,  -276,
    1286,  -276,     7,  -276,  -276,  -276,  -276,  -276,   857,  -276,
      -1,  -276,   426,  -276,   720,  -276,  1019,  -276,  -276,  -276,
    -276,  -276,     5,  -276
  };

  const short
  PatchValueExpressionParser::yydefgoto_[] =
  {
      -1,    28,    29,   465,   148,   954,   986,   684,   410,   238,
     150,  1411,   151,   152,   246,   154,   240,   156,   241,   158,
     242,   160,   243,   162,   163,   164,   165,   166,   311,   168,
     319,   170,   313,   172,   314,   174,   315,   176,   177,   178,
     179,   180,   316,   182
  };

  const unsigned short
  PatchValueExpressionParser::yytable_[] =
  {
     169,   704,   706,   329,  1363,   330,   181,   708,   161,   502,
    1393,   503,   504,   312,   317,   710,   712,   463,   464,   254,
     255,   502,   331,   503,   504,   502,   332,   503,   504,   327,
     328,   477,   709,   485,   333,   493,   334,   501,   550,   505,
     551,   552,   335,   616,   714,   513,   615,   525,   715,   533,
     336,   541,   337,   549,   338,   339,   256,   257,   340,   553,
     679,  1340,  1341,  1342,    39,    40,    41,    42,    43,    44,
    1364,    46,   341,    48,   342,    50,  1394,    52,   343,    54,
     344,    56,  1409,  1343,  1344,  1345,  1346,  1347,  1348,  1349,
    1350,  1351,  1352,  1353,  1354,   502,   345,   503,   504,   346,
     347,  1373,  1374,  1375,  1376,  1377,  1378,  1379,  1380,  1381,
    1382,  1383,  1384,   550,   348,   551,   552,   937,   550,   349,
     551,   552,   350,   351,   481,   482,   483,   258,   259,   260,
     261,   484,   474,   475,   476,   943,   716,   479,   480,   678,
     481,   482,   483,   434,   352,   449,   353,   484,  1370,  1371,
    1372,   453,   455,   447,   454,  1356,  1357,  1358,   354,  1359,
    1360,  1355,   355,  1361,   356,   262,   357,   705,   707,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,  1385,
     358,   711,   713,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   124,   153,   239,   244,
     128,   359,   296,   360,   297,   298,   299,  1002,   300,   301,
     302,   303,   304,   305,   306,  1018,   361,  1386,  1387,  1388,
    1362,  1389,  1390,   362,   363,  1391,   550,  1410,   551,   552,
     308,   364,   365,   447,   454,   366,   458,   459,   460,   461,
     309,   310,   478,   462,   489,   490,   491,  1063,   367,   479,
     480,   492,   481,   482,   483,  1075,   522,   523,   524,   484,
     368,   610,   717,  1087,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   369,  1392,   497,   498,   499,   434,   370,   449,   486,
     500,   529,   530,   531,   453,   455,   487,   488,   532,   489,
     490,   491,   371,   372,  1365,   373,   492,   374,   612,   462,
     375,   681,   683,   456,   457,   376,   458,   459,   460,   461,
     377,   955,   378,   462,   379,   697,   699,   701,   703,   494,
     429,   380,   443,   381,   382,   383,   495,   496,   384,   497,
     498,   499,   508,   509,   510,   511,   500,   385,   614,   512,
     755,   757,   759,   766,   776,   781,   783,   785,   792,   802,
     807,   809,   813,   817,   821,   823,   825,   827,   829,   831,
     833,   835,   837,   839,   841,   843,   845,   847,   849,   851,
     853,   855,   857,   859,   861,   863,   865,   526,   872,   537,
     538,   539,   386,   387,   527,   528,   540,   529,   530,   531,
     388,   389,   534,   390,   532,   391,   673,   171,   392,   535,
     536,   393,   537,   538,   539,   394,   395,   396,   397,   540,
     429,   675,   443,   542,   321,   322,   398,   399,   400,   401,
     543,   544,   402,   545,   546,   547,   478,   403,   404,   405,
     548,   406,   677,   479,   480,   407,   481,   482,   483,   486,
     408,   409,   412,   484,   413,   934,   487,   488,   414,   489,
     490,   491,   494,   415,   416,   417,   492,   418,   935,   495,
     496,   419,   497,   498,   499,   545,   546,   547,   420,   500,
     421,   936,   548,   422,   423,   484,   424,  1029,  1030,   425,
    1024,  1025,   426,  1037,  1038,  1039,  1040,  1041,  1042,  1043,
    1044,  1045,  1047,  1051,   427,   554,   555,   556,  1057,  1058,
     487,   488,   557,   489,   490,   491,  1069,  1070,   680,   682,
     492,   558,   559,   718,  1081,  1082,   560,   561,   562,  1089,
     563,   564,   696,   698,   700,   702,  1093,  1094,   721,   722,
     565,   723,   724,   725,   566,   567,   568,   569,  1096,  1098,
     435,   440,   450,   570,   571,   572,   573,   754,   756,   758,
     761,   771,   780,   782,   784,   787,   797,   806,   808,   811,
     815,   819,   822,   824,   826,   828,   830,   832,   834,   836,
     838,   840,   842,   844,   846,   848,   850,   852,   854,   856,
     858,   860,   862,   864,   867,   574,   681,   683,   697,   699,
     701,   703,   575,   755,   757,   759,   766,   776,   781,   783,
     785,  1100,  1102,   821,   823,   825,   827,   829,   831,   833,
     835,   837,   839,   841,   843,   845,   847,   849,   851,   853,
     855,   857,   859,   861,   863,   865,   456,   457,   576,   458,
     459,   460,   461,   577,   947,   948,   462,  1181,  1182,   492,
     578,   579,   956,   957,   958,   959,   960,   961,   962,   963,
     964,   966,   970,   580,   581,   582,   583,   980,   981,   584,
     526,   585,   586,   587,   588,   996,   997,   527,   528,   589,
     529,   530,   531,  1012,  1013,   534,   590,   532,  1020,   940,
     500,   591,   535,   536,   592,   537,   538,   539,   593,   542,
     594,   173,   540,   595,   941,   719,   543,   544,   596,   545,
     546,   547,   597,   435,   440,   450,   548,   478,   942,   720,
     323,   324,   598,   599,   479,   480,   600,   481,   482,   483,
     504,   601,   602,   603,   484,   604,  1157,   512,   617,   618,
     680,   682,   696,   698,   700,   702,   619,   754,   756,   758,
     761,   771,   780,   782,   784,   787,   797,   819,   822,   824,
     826,   828,   830,   832,   834,   836,   838,   840,   842,   844,
     846,   848,   850,   852,   854,   856,   858,   860,   862,   864,
     767,   777,   486,   620,   621,   793,   803,   622,   623,   487,
     488,   624,   489,   490,   491,   494,   625,   626,   627,   492,
     628,  1158,   495,   496,   629,   497,   498,   499,   630,   631,
     632,   633,   500,   634,  1159,   873,   635,   636,   637,   881,
     638,   888,   892,   895,   639,   901,   906,   911,   916,   920,
     924,   928,   495,   496,   640,   497,   498,   499,   167,   641,
     526,   642,   500,   643,   436,   441,   451,   527,   528,   644,
     529,   530,   531,   318,   320,   534,   645,   532,   646,  1162,
     532,   647,   535,   536,   648,   537,   538,   539,   542,   649,
     650,   651,   540,   652,  1163,   543,   544,   653,   545,   546,
     547,   478,   654,   655,   656,   548,   657,  1164,   479,   480,
     658,   481,   482,   483,   486,   659,   660,   661,   484,   662,
    1167,   487,   488,   663,   489,   490,   491,   494,   664,   665,
     666,   492,   667,  1168,   495,   496,  1032,   497,   498,   499,
     751,   752,   753,   878,   500,   876,  1169,   540,   877,  1048,
     930,   931,  1052,  1055,  1056,   548,  1115,  1060,   726,   727,
    1064,   728,   729,   730,  1116,  1072,  1117,   526,  1076,  1118,
    1119,  1120,  1121,  1084,   527,   528,  1090,   529,   530,   531,
     534,  1122,  1123,  1124,   532,  1125,  1172,   535,   536,  1126,
     537,   538,   539,  1127,  1128,  1129,  1130,   540,   542,  1173,
    1131,   433,  1132,   448,  1133,   543,   544,  1134,   545,   546,
     547,  1135,  1136,  1137,   478,   548,  1138,  1174,  1139,  1140,
     175,   479,   480,  1141,   481,   482,   483,   436,   441,   451,
    1142,   484,  1143,  1271,  1144,  1145,  1146,  1147,   486,  1148,
     552,   325,   326,  1435,  1436,   487,   488,  1437,   489,   490,
     491,  1438,  1439,   767,   777,   492,   494,  1272,   793,   803,
    1440,  1441,  1442,   495,   496,  1443,   497,   498,   499,  1444,
    1036,  1445,  1446,   500,  1447,  1273,   731,   732,  1453,   733,
     734,   735,  1454,   881,   888,   892,   895,   901,   906,   911,
     916,   920,   924,   928,   768,   778,  1455,  1471,  1495,   794,
     804,  1496,  1497,  1498,  1499,  1401,   526,  1403,  1500,  1405,
     411,  1407,     0,   527,   528,     0,   529,   530,   531,     0,
     478,     0,     0,   532,     0,  1276,     0,   479,   480,   874,
     481,   482,   483,   882,     0,   889,   893,   484,   609,   902,
     907,   912,   917,   921,   925,   929,     0,     0,     0,  1412,
     534,   736,   737,     0,   738,   739,   740,   535,   536,     0,
     537,   538,   539,   437,   433,   452,   448,   540,   542,  1277,
       0,     0,     0,     0,     0,   543,   544,     0,   545,   546,
     547,     0,     0,   478,     0,   548,     0,  1278,     0,  1419,
     479,   480,     0,   481,   482,   483,     0,     0,   486,     0,
     484,     0,  1289,  1429,     0,   487,   488,     0,   489,   490,
     491,     0,     0,     0,  1367,   492,   478,  1290,     0,     0,
       0,     0,     0,   479,   480,     0,   481,   482,   483,     0,
    1033,   765,   775,   484,     0,  1434,   791,   801,     0,     0,
     812,   816,   820,  1049,   741,   742,  1053,   743,   744,   745,
       0,  1061,     0,     0,  1065,  1067,  1068,     0,     0,  1073,
       0,   526,  1077,     0,     0,     0,   871,  1085,   527,   528,
    1091,   529,   530,   531,   534,     0,     0,     0,   532,     0,
    1291,   535,   536,     0,   537,   538,   539,   159,     0,     0,
       0,   540,     0,  1292,     0,   478,   252,   253,     0,     0,
       0,     0,   479,   480,     0,   481,   482,   483,     0,     0,
       0,  1400,   484,  1402,  1293,  1404,     0,  1406,     0,     0,
     746,   747,   486,   748,   749,   750,   437,     0,   452,   487,
     488,     0,   489,   490,   491,     0,     0,     0,     0,   492,
       0,  1294,     0,     0,     0,     0,     0,   768,   778,   478,
       0,     0,   794,   804,     0,  1408,   479,   480,     0,   481,
     482,   483,     0,  1026,  1027,  1028,   484,  1031,  1035,  1279,
    1280,     0,  1281,  1282,  1283,     0,     0,   882,   889,   893,
    1046,   902,   907,   912,   917,   921,   925,   929,  1059,  1414,
       0,     0,     0,   769,   779,  1457,  1071,     0,   795,   805,
       0,     0,     0,  1424,  1083,   494,     0,  1088,     0,   434,
       0,     0,   495,   496,     0,   497,   498,   499,     0,     0,
       0,     0,   500,     0,  1295,     0,  1095,  1097,   875,     0,
     432,     0,   446,  1284,  1285,   478,  1286,  1287,  1288,     0,
     913,  1433,   479,   480,     0,   481,   482,   483,     0,   486,
       0,     0,   484,     0,  1296,     0,   487,   488,     0,   489,
     490,   491,   526,  1502,     0,  1504,   492,  1506,  1297,   527,
     528,     0,   529,   530,   531,     0,     0,     0,     0,   532,
       0,  1298,     0,     0,   765,   775,   157,     0,   534,  1099,
    1101,   820,     0,   250,   251,   535,   536,     0,   537,   538,
     539,     0,     0,     0,     0,   540,     0,  1299,     0,  1514,
       0,  1516,     0,     0,     0,     0,     0,  1522,     0,  1524,
     432,     0,   446,     0,   486,  1530,     0,  1532,     0,  1034,
       0,   487,   488,  1538,   489,   490,   491,     0,     0,  1542,
       0,   492,  1050,  1546,     0,  1054,     0,     0,     0,     0,
    1062,     0,     0,  1066,     0,     0,     0,     0,  1074,     0,
       0,  1078,  1079,  1080,     0,     0,  1086,   478,     0,  1092,
       0,     0,  1449,     0,   479,   480,     0,   481,   482,   483,
     486,     0,     0,     0,   484,     0,  1300,   487,   488,     0,
     489,   490,   491,   526,     0,     0,     0,   492,     0,  1301,
     527,   528,     0,   529,   530,   531,     0,     0,     0,   534,
     532,     0,  1302,     0,     0,     0,   535,   536,  1420,   537,
     538,   539,     0,     0,     0,  1368,   540,   486,  1303,   431,
     439,   445,  1430,     0,   487,   488,     0,   489,   490,   491,
       0,     0,     0,     0,   492,     0,   769,   779,     0,     0,
       0,   795,   805,   456,   457,     0,   458,   459,   460,   461,
     764,   774,     0,   462,   607,   790,   800,   478,     0,  1501,
       0,  1503,     0,  1505,   479,   480,     0,   481,   482,   483,
       0,     0,   913,     0,   484,     0,  1304,   155,     0,     0,
       0,   526,   248,   249,   870,     0,     0,     0,   527,   528,
     885,   529,   530,   531,   898,     0,   905,   910,   532,     0,
    1305,     0,     0,     0,     0,  1513,     0,  1515,     0,   431,
     439,   445,     0,  1521,     0,  1523,     0,     0,     0,     0,
       0,  1529,     0,  1531,     0,     0,     0,     0,     0,  1537,
     478,     0,     0,     0,     0,  1541,   952,   479,   480,  1545,
     481,   482,   483,     0,     0,     0,     0,   484,     0,  1306,
       0,   969,     0,     0,   973,   976,   979,     0,     0,   985,
       0,     0,   989,   992,   995,     0,     0,  1001,     0,   486,
    1005,  1008,  1011,     0,     0,  1017,   487,   488,  1023,   489,
     490,   491,   494,     0,     0,     0,   492,     0,  1307,   495,
     496,     0,   497,   498,   499,   478,     0,     0,     0,   500,
       0,  1308,   479,   480,     0,   481,   482,   483,     0,     0,
       0,     0,   484,  1458,  1309,     0,     0,   486,     0,     0,
     430,   438,   444,     0,   487,   488,   435,   489,   490,   491,
       0,     0,     0,     0,   492,     0,  1310,     0,     0,     0,
     764,   774,     0,     0,     0,   790,   800,     0,   149,   763,
     773,   245,   247,   526,   789,   799,     0,     0,     0,     0,
     527,   528,     0,   529,   530,   531,     0,     0,     0,     0,
     532,     0,  1311,     0,     0,   905,   910,   527,   528,     0,
     529,   530,   531,   869,     0,     0,     0,   532,   880,   884,
     887,   891,     0,   897,   900,   904,   909,   915,   919,   923,
     927,     0,     0,  1421,     0,     0,     0,     0,   534,     0,
     430,   438,   444,     0,     0,   535,   536,  1431,   537,   538,
     539,   478,     0,     0,     0,   540,     0,  1312,   479,   480,
       0,   481,   482,   483,   486,   951,     0,     0,   484,     0,
    1313,   487,   488,     0,   489,   490,   491,     0,     0,     0,
     968,   492,   611,   972,   975,   978,     0,     0,   984,     0,
       0,   988,   991,   994,     0,     0,  1000,     0,   486,  1004,
    1007,  1010,     0,     0,  1016,   487,   488,  1022,   489,   490,
     491,     0,     0,     0,     0,   492,     0,  1314,   494,     0,
       0,   428,     0,   442,     0,   495,   496,     0,   497,   498,
     499,   526,     0,     0,     0,   500,     0,  1315,   527,   528,
       0,   529,   530,   531,   534,     0,     0,     0,   532,     0,
    1316,   535,   536,     0,   537,   538,   539,     0,     0,     0,
       0,   540,     0,  1317,     0,  1418,     0,     0,     0,   763,
     773,     0,     0,     0,   789,   799,     0,     0,  1395,  1428,
     762,   772,     0,     0,     0,   788,   798,   506,   507,     0,
     508,   509,   510,   511,     0,     0,     0,   512,     0,   880,
     887,   891,     0,   900,   904,   909,   915,   919,   923,   927,
       0,   428,     0,   442,   868,     0,     0,     0,     0,   879,
     883,   886,   890,   894,   896,   899,   903,   908,   914,   918,
     922,   926,   478,     0,     0,     0,     0,     0,  1459,   479,
     480,     0,   481,   482,   483,   486,     0,     0,     0,   484,
     436,  1318,   487,   488,     0,   489,   490,   491,     0,     0,
     494,     0,   492,     0,  1319,     0,   950,   495,   496,     0,
     497,   498,   499,     0,     0,     0,     0,   500,     0,  1320,
       0,   967,     0,     0,   971,   974,   977,     0,     0,   983,
       0,     0,   987,   990,   993,     0,     0,   999,     0,   526,
    1003,  1006,  1009,     0,     0,  1015,   527,   528,  1021,   529,
     530,   531,   534,     0,     0,     0,   532,     0,  1321,   535,
     536,     0,   537,   538,   539,     0,     0,   542,     0,   540,
       0,  1322,     0,  1422,   543,   544,     0,   545,   546,   547,
       0,     0,     0,     0,   548,     0,  1323,  1432,     0,     0,
       0,   760,   770,     0,     0,     0,   786,   796,     0,     0,
     810,   814,   818,   506,   507,     0,   508,   509,   510,   511,
     762,   772,  1456,   512,   670,   788,   798,     0,     0,  1369,
       0,   494,     0,     0,     0,   866,     0,   433,   495,   496,
       0,   497,   498,   499,     0,     0,     0,     0,   500,     0,
     879,   886,   890,   894,   899,   903,   908,   914,   918,   922,
     926,   478,     0,     0,     0,     0,     0,     0,   479,   480,
       0,   481,   482,   483,     0,     0,     0,     0,   484,     0,
    1324,     0,   486,   944,   945,   946,     0,   949,   953,   487,
     488,     0,   489,   490,   491,     0,   526,     0,     0,   492,
       0,  1325,   965,   527,   528,     0,   529,   530,   531,     0,
     982,     0,     0,   532,     0,  1326,     0,     0,   998,     0,
     534,     0,     0,     0,     0,     0,  1014,   535,   536,  1019,
     537,   538,   539,   478,     0,     0,     0,   540,     0,  1327,
     479,   480,     0,   481,   482,   483,   486,     0,     0,     0,
     484,     0,  1328,   487,   488,     0,   489,   490,   491,   526,
       0,     0,     0,   492,     0,  1329,   527,   528,     0,   529,
     530,   531,   494,     0,     0,     0,   532,     0,  1330,   495,
     496,     0,   497,   498,   499,     0,     0,     0,  1460,   500,
     613,   760,   770,     0,     0,     0,   786,   796,   818,   437,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,   534,     0,
       0,     0,     0,     0,     0,   535,   536,     0,   537,   538,
     539,   478,     0,  1417,     0,   540,     0,  1331,   479,   480,
       0,   481,   482,   483,     0,     0,     0,  1427,   484,     0,
    1332,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   486,    58,    59,    60,    61,    62,    63,   487,   488,
       0,   489,   490,   491,     0,     0,     0,     0,   492,     0,
    1333,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,     0,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,     0,   506,   507,     0,   508,   509,   510,   511,
       0,     0,   144,   512,  1188,   145,    30,   183,   184,    33,
      34,    35,    36,    37,    38,   146,   147,     0,     0,     0,
       0,    45,     0,    47,     0,    49,     0,    51,     0,    53,
     526,    55,     0,    57,     0,     0,     0,   527,   528,     0,
     529,   530,   531,   534,     0,  1452,     0,   532,     0,  1334,
     535,   536,     0,   537,   538,   539,     0,   478,     0,     0,
     540,  1416,  1335,     0,   479,   480,     0,   481,   482,   483,
       0,     0,     0,     0,   484,  1426,  1336,   486,   185,   186,
     187,   188,    62,    63,   487,   488,     0,   489,   490,   491,
       0,     0,     0,     0,   492,     0,  1337,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,   189,    84,    85,    86,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
      97,    98,    99,   100,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,     0,   125,   126,
     127,     0,     0,   223,   130,   224,   225,   226,   134,   227,
     228,   229,   230,   231,   232,   233,   142,   143,     0,     0,
    1397,     0,   526,     0,     0,     0,     0,     0,   234,   527,
     528,   235,   529,   530,   531,   256,   257,     0,     0,   532,
       0,   236,   237,    39,    40,    41,    42,    43,    44,     0,
      46,     0,    48,     0,    50,   526,    52,     0,    54,     0,
      56,  1470,   527,   528,     0,   529,   530,   531,   534,     0,
       0,     0,   532,     0,  1338,   535,   536,     0,   537,   538,
     539,     0,     0,  1451,  1398,   540,   534,  1339,     0,     0,
       0,     0,     0,   535,   536,     0,   537,   538,   539,     0,
       0,  1415,     0,   540,     0,     0,   258,   259,   260,   261,
    1399,     0,   542,     0,     0,  1425,     0,     0,     0,   543,
     544,     0,   545,   546,   547,     0,   478,     0,     0,   548,
       0,     0,     0,   479,   480,     0,   481,   482,   483,     0,
       0,     0,     0,   484,   262,  1475,     0,     0,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     0,     0,
       0,     0,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   124,     0,     0,     0,   128,
       0,   296,     0,   297,   298,   299,     0,   300,   301,   302,
     303,   304,   305,   306,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,     0,   307,     0,     0,   308,
       0,  1183,  1184,   256,   257,     0,     0,     0,     0,   309,
     310,    39,    40,    41,    42,    43,    44,     0,    46,     0,
      48,     0,    50,   486,    52,     0,    54,     0,    56,     0,
     487,   488,     0,   489,   490,   491,     0,     0,     0,   494,
     492,     0,  1476,     0,     0,     0,   495,   496,  1413,   497,
     498,   499,     0,     0,     0,     0,   500,     0,  1477,     0,
       0,   526,  1423,  1450,     0,     0,     0,     0,   527,   528,
       0,   529,   530,   531,   258,   259,   260,   261,   532,   534,
    1480,     0,     0,     0,     0,     0,   535,   536,     0,   537,
     538,   539,   542,     0,     0,     0,   540,     0,  1481,   543,
     544,     0,   545,   546,   547,     0,     0,     0,     0,   548,
       0,  1482,   262,     0,     0,     0,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,     0,     0,     0,     0,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   124,     0,     0,     0,   128,     0,   296,
       0,   297,   298,   299,     0,   300,   301,   302,   303,   304,
     305,   306,     0,   456,   457,     0,   458,   459,   460,   461,
       0,     0,   478,   462,   307,   608,     0,   308,     0,   479,
     480,     0,   481,   482,   483,   486,     0,   309,   310,   484,
       0,  1485,   487,   488,     0,   489,   490,   491,   494,     0,
       0,     0,   492,     0,  1486,   495,   496,     0,   497,   498,
     499,     0,     0,   526,     0,   500,     0,  1487,     0,     0,
     527,   528,  1448,   529,   530,   531,   534,     0,     0,     0,
     532,     0,  1490,   535,   536,     0,   537,   538,   539,   542,
       0,     0,     0,   540,     0,  1491,   543,   544,     0,   545,
     546,   547,     0,     0,     0,     0,   548,     0,  1492,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
       0,     0,     0,     0,     0,     0,  1190,  1191,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,     0,
       0,     0,     0,     0,     0,  1197,  1198,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,     0,     0,
       0,     0,     0,     0,  1204,  1205,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,     0,     0,     0,
       0,     0,     0,     0,   606,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,     0,     0,     0,     0,
       0,     0,     0,   669,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,     0,     0,     0,     0,     0,
       0,     0,   933,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,     0,     0,     0,     0,     0,     0,
       0,   939,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,     0,     0,     0,     0,     0,     0,     0,
    1103,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,     0,     0,     0,     0,     0,     0,     0,  1104,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,     0,     0,     0,     0,     0,     0,     0,  1113,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
       0,     0,     0,     0,     0,     0,     0,  1114,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,     0,
       0,     0,     0,     0,     0,     0,  1151,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,     0,     0,
       0,     0,     0,     0,     0,  1152,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,     0,     0,     0,
       0,     0,     0,     0,  1153,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,     0,     0,     0,     0,
       0,     0,     0,  1154,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,     0,     0,     0,     0,     0,
       0,     0,  1156,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,     0,     0,     0,     0,     0,     0,
       0,  1161,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,     0,     0,     0,     0,     0,     0,     0,
    1166,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,     0,     0,     0,     0,     0,     0,     0,  1171,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,     0,     0,     0,     0,     0,     0,     0,  1175,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
       0,     0,     0,     0,     0,     0,     0,  1176,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,     0,
       0,     0,     0,     0,     0,     0,  1177,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,     0,     0,
       0,     0,     0,     0,     0,  1178,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,     0,     0,     0,
       0,     0,     0,     0,  1179,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,     0,     0,     0,     0,
       0,     0,     0,  1180,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,     0,     0,     0,     0,     0,
       0,     0,  1209,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,     0,     0,     0,     0,     0,     0,
       0,  1210,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,     0,     0,     0,     0,     0,     0,     0,
    1211,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,     0,     0,     0,     0,     0,     0,     0,  1212,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,     0,     0,     0,     0,     0,     0,     0,  1214,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
       0,     0,     0,     0,     0,     0,     0,  1216,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,     0,
       0,     0,     0,     0,     0,     0,  1218,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,     0,     0,
       0,     0,     0,     0,     0,  1220,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,     0,     0,     0,
       0,     0,     0,     0,  1222,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,     0,     0,     0,     0,
       0,     0,     0,  1224,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,     0,     0,     0,     0,     0,
       0,     0,  1225,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,     0,     0,     0,     0,     0,     0,
       0,  1226,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,     0,     0,     0,     0,     0,     0,     0,
    1227,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,     0,     0,     0,     0,     0,     0,     0,  1228,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,     0,     0,     0,     0,     0,     0,     0,  1229,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
       0,     0,     0,     0,     0,     0,     0,  1230,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,     0,
       0,     0,     0,     0,     0,     0,  1231,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,     0,     0,
       0,     0,     0,     0,     0,  1232,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,     0,     0,     0,
       0,     0,     0,     0,  1233,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,     0,     0,     0,     0,
       0,     0,     0,  1234,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,     0,     0,     0,     0,     0,
       0,     0,  1237,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,     0,     0,     0,     0,     0,     0,
       0,  1238,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,     0,     0,     0,     0,     0,     0,     0,
    1239,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,     0,     0,     0,     0,     0,     0,     0,  1240,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,     0,     0,     0,     0,     0,     0,     0,  1241,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
       0,     0,     0,     0,     0,     0,     0,  1242,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,     0,
       0,     0,     0,     0,     0,     0,  1243,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,     0,     0,
       0,     0,     0,     0,     0,  1244,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,     0,     0,     0,
       0,     0,     0,     0,  1245,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,     0,     0,     0,     0,
       0,     0,     0,  1246,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,     0,     0,     0,     0,     0,
       0,     0,  1247,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,     0,     0,     0,     0,     0,     0,
       0,  1248,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,     0,     0,     0,     0,     0,     0,     0,
    1249,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,     0,     0,     0,     0,     0,     0,     0,  1250,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,     0,     0,     0,     0,     0,     0,     0,  1251,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
       0,     0,     0,     0,     0,     0,     0,  1252,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,     0,
       0,     0,     0,     0,     0,     0,  1253,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,     0,     0,
       0,     0,     0,     0,     0,  1254,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,     0,     0,     0,
       0,     0,     0,     0,  1255,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,     0,     0,     0,     0,
       0,     0,     0,  1256,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,     0,     0,     0,     0,     0,
       0,     0,  1257,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,     0,     0,     0,     0,     0,     0,
       0,  1258,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,     0,     0,     0,     0,     0,     0,     0,
    1259,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,     0,     0,     0,     0,     0,     0,     0,  1260,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,     0,     0,     0,     0,     0,     0,     0,  1261,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
       0,     0,     0,     0,     0,     0,     0,  1262,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,     0,
       0,     0,     0,     0,     0,     0,  1263,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,     0,     0,
       0,     0,     0,     0,     0,  1264,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,     0,     0,     0,
       0,     0,     0,     0,  1265,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,     0,     0,     0,     0,
       0,     0,     0,  1266,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,     0,     0,     0,     0,     0,
       0,     0,  1267,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,     0,     0,     0,     0,     0,     0,
       0,  1268,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,     0,     0,     0,     0,     0,     0,     0,
    1270,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,     0,     0,     0,     0,     0,     0,     0,  1275,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,     0,     0,     0,     0,     0,     0,     0,  1191,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
       0,     0,     0,     0,     0,     0,     0,  1205,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,     0,
       0,     0,     0,     0,     0,     0,  1461,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,     0,     0,
       0,     0,     0,     0,     0,  1462,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,     0,     0,     0,
       0,     0,     0,     0,  1469,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,     0,     0,     0,     0,
       0,     0,     0,  1472,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,     0,     0,     0,     0,     0,
       0,     0,  1474,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,     0,     0,     0,     0,     0,     0,
       0,  1479,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,     0,     0,     0,     0,     0,     0,     0,
    1484,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,     0,     0,     0,     0,     0,     0,     0,  1489,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,     0,     0,     0,     0,     0,     0,     0,  1493,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
       0,     0,     0,     0,     0,     0,     0,  1494,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,     0,
       0,     0,     0,     0,     0,     0,  1507,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,     0,     0,
       0,     0,     0,     0,     0,  1508,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,     0,     0,     0,
       0,     0,     0,     0,  1535,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,     0,     0,     0,     0,
       0,     0,     0,  1536,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,     0,     0,     0,     0,     0,
       0,     0,  1547,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,     0,   526,     0,     0,     0,     0,
       0,  1548,   527,   528,     0,   529,   530,   531,   534,     0,
       0,     0,   532,   672,     0,   535,   536,     0,   537,   538,
     539,   542,     0,     0,     0,   540,   674,     0,   543,   544,
       0,   545,   546,   547,   478,     0,     0,     0,   548,   676,
       0,   479,   480,     0,   481,   482,   483,   486,     0,     0,
       0,   484,  1185,     0,   487,   488,     0,   489,   490,   491,
     494,     0,     0,     0,   492,  1186,     0,   495,   496,     0,
     497,   498,   499,   526,     0,     0,     0,   500,  1187,     0,
     527,   528,     0,   529,   530,   531,   534,     0,     0,     0,
     532,  1192,     0,   535,   536,     0,   537,   538,   539,   542,
       0,     0,     0,   540,  1193,     0,   543,   544,     0,   545,
     546,   547,   478,     0,     0,     0,   548,  1194,     0,   479,
     480,     0,   481,   482,   483,   486,     0,     0,     0,   484,
    1199,     0,   487,   488,     0,   489,   490,   491,   494,     0,
       0,     0,   492,  1200,     0,   495,   496,     0,   497,   498,
     499,   526,     0,     0,     0,   500,  1201,     0,   527,   528,
       0,   529,   530,   531,   534,     0,     0,     0,   532,  1206,
       0,   535,   536,     0,   537,   538,   539,   542,     0,     0,
       0,   540,  1207,     0,   543,   544,     0,   545,   546,   547,
       0,     0,     0,     0,   548,  1208,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,     0,     0,     0,
       0,     0,     0,   605,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,     0,     0,     0,     0,     0,
       0,   668,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,     0,     0,     0,     0,     0,     0,  1105,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,     0,     0,     0,     0,     0,     0,  1106,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,     0,
       0,     0,     0,     0,     0,  1107,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,     0,     0,     0,
       0,     0,     0,  1108,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,     0,     0,     0,     0,     0,
       0,  1109,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,     0,     0,     0,     0,     0,     0,  1110,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,     0,     0,     0,     0,     0,     0,  1111,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,     0,
       0,     0,     0,     0,     0,  1112,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,     0,     0,     0,
       0,     0,     0,  1149,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,     0,     0,     0,     0,     0,
       0,  1150,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,     0,     0,     0,     0,     0,     0,  1235,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,     0,     0,     0,     0,     0,     0,  1236,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,     0,
       0,     0,     0,     0,     0,  1190,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,     0,     0,     0,
       0,     0,     0,  1204,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,     0,     0,     0,     0,     0,
       0,  1463,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,     0,     0,     0,     0,     0,     0,  1464,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,     0,     0,     0,     0,     0,     0,  1465,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,     0,
       0,     0,     0,     0,     0,  1466,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,     0,     0,     0,
       0,     0,     0,  1467,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,     0,     0,     0,     0,     0,
       0,  1468,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,     0,     0,     0,     0,     0,     0,  1509,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,     0,     0,     0,     0,     0,     0,  1510,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,     0,
       0,     0,     0,     0,     0,  1511,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,     0,     0,     0,
       0,     0,     0,  1512,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,     0,     0,     0,     0,     0,
       0,  1517,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,     0,     0,     0,     0,     0,     0,  1518,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,     0,     0,     0,     0,     0,     0,  1519,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,     0,
       0,     0,     0,     0,     0,  1520,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,     0,     0,     0,
       0,     0,     0,  1525,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,     0,     0,     0,     0,     0,
       0,  1526,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,     0,     0,     0,     0,     0,     0,  1527,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,     0,     0,     0,     0,     0,     0,  1528,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,     0,
       0,     0,     0,     0,     0,  1533,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,     0,     0,     0,
       0,     0,     0,  1534,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,     0,     0,     0,     0,     0,
       0,  1539,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,     0,     0,     0,     0,     0,     0,  1540,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,     0,     0,     0,     0,     0,     0,  1543,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   494,
       0,     0,     0,     0,     0,  1544,   495,   496,     0,   497,
     498,   499,   526,     0,     0,     0,   500,     0,     0,   527,
     528,     0,   529,   530,   531,   534,     0,     0,     0,   532,
       0,     0,   535,   536,     0,   537,   538,   539,   542,     0,
       0,     0,   540,     0,     0,   543,   544,     0,   545,   546,
     547,     0,     0,  1366,     0,   548,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,  1396,     0,     0,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   506,   507,     0,   508,   509,   510,   511,     0,     0,
       0,   512,  1188,  1189,   456,   457,     0,   458,   459,   460,
     461,     0,     0,     0,   462,  1195,  1196,   506,   507,     0,
     508,   509,   510,   511,     0,     0,     0,   512,  1202,  1203,
     506,   507,     0,   508,   509,   510,   511,     0,     0,     0,
     512,     0,   671,   456,   457,     0,   458,   459,   460,   461,
       0,     0,     0,   462,     0,   932,   506,   507,     0,   508,
     509,   510,   511,     0,     0,     0,   512,     0,   938,   456,
     457,     0,   458,   459,   460,   461,     0,     0,     0,   462,
       0,  1155,   506,   507,     0,   508,   509,   510,   511,     0,
       0,     0,   512,     0,  1160,   456,   457,     0,   458,   459,
     460,   461,     0,     0,     0,   462,     0,  1165,   506,   507,
       0,   508,   509,   510,   511,     0,     0,     0,   512,     0,
    1170,   456,   457,     0,   458,   459,   460,   461,     0,     0,
       0,   462,     0,  1213,   506,   507,     0,   508,   509,   510,
     511,     0,     0,     0,   512,     0,  1215,   456,   457,     0,
     458,   459,   460,   461,     0,     0,     0,   462,     0,  1217,
     506,   507,     0,   508,   509,   510,   511,     0,     0,     0,
     512,     0,  1219,   456,   457,     0,   458,   459,   460,   461,
       0,     0,     0,   462,     0,  1221,   506,   507,     0,   508,
     509,   510,   511,     0,     0,     0,   512,     0,  1223,   456,
     457,     0,   458,   459,   460,   461,     0,     0,     0,   462,
       0,  1269,   506,   507,     0,   508,   509,   510,   511,     0,
       0,     0,   512,     0,  1274,   506,   507,     0,   508,   509,
     510,   511,     0,     0,     0,   512,     0,  1189,   506,   507,
       0,   508,   509,   510,   511,     0,     0,     0,   512,     0,
    1203,   456,   457,     0,   458,   459,   460,   461,     0,     0,
       0,   462,     0,  1473,   506,   507,     0,   508,   509,   510,
     511,     0,     0,     0,   512,     0,  1478,   456,   457,     0,
     458,   459,   460,   461,     0,     0,     0,   462,     0,  1483,
     506,   507,     0,   508,   509,   510,   511,     0,     0,     0,
     512,     0,  1488,   741,   742,     0,   743,   744,   745,   746,
     747,     0,   748,   749,   750,   506,   507,     0,   508,   509,
     510,   511,     0,     0,     0,   512,  1202,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,     0,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   456,   457,     0,   458,   459,   460,   461,     0,   506,
     507,   462,   508,   509,   510,   511,     0,   535,   536,   512,
     537,   538,   539,     0,     0,   543,   544,   540,   545,   546,
     547,     0,     0,     0,     0,   548
  };

  const short
  PatchValueExpressionParser::yycheck_[] =
  {
       1,    31,    31,   197,    93,   196,     1,   197,     1,   175,
      93,   177,   178,    14,    15,    31,    31,    73,    74,    12,
      13,   175,     0,   177,   178,   175,   198,   177,   178,    24,
      25,   154,   197,   156,   198,   158,   198,   160,   175,   162,
     177,   178,   198,   197,   197,   168,   196,   170,   197,   172,
     198,   174,   198,   176,   198,   198,     4,     5,   198,   182,
     197,    81,    82,    83,    12,    13,    14,    15,    16,    17,
     159,    19,   198,    21,   198,    23,   159,    25,   198,    27,
     198,    29,    30,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,   175,   198,   177,   178,   198,
     198,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,   175,   198,   177,   178,   197,   175,   198,
     177,   178,   198,   198,   188,   189,   190,    75,    76,    77,
      78,   195,   187,   188,   189,   197,   197,   185,   186,   196,
     188,   189,   190,   144,   198,   146,   198,   195,    81,    82,
      83,   146,   147,   146,   147,    84,    85,    86,   198,    88,
      89,   159,   198,    92,   198,   113,   198,   197,   197,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   159,
     198,   197,   197,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,     1,     2,     3,
     158,   198,   160,   198,   162,   163,   164,   492,   166,   167,
     168,   169,   170,   171,   172,   500,   198,    84,    85,    86,
     159,    88,    89,   198,   198,    92,   175,   185,   177,   178,
     188,   198,   198,   236,   237,   198,   188,   189,   190,   191,
     198,   199,   178,   195,   188,   189,   190,   532,   198,   185,
     186,   195,   188,   189,   190,   540,   187,   188,   189,   195,
     198,   197,   197,   548,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   198,   159,   188,   189,   190,   307,   198,   309,   178,
     195,   188,   189,   190,   309,   310,   185,   186,   195,   188,
     189,   190,   198,   198,   176,   198,   195,   198,   197,   195,
     198,   332,   333,   185,   186,   198,   188,   189,   190,   191,
     198,   464,   198,   195,   198,   346,   347,   348,   349,   178,
     144,   198,   146,   198,   198,   198,   185,   186,   198,   188,
     189,   190,   188,   189,   190,   191,   195,   198,   197,   195,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   178,   409,   188,
     189,   190,   198,   198,   185,   186,   195,   188,   189,   190,
     198,   198,   178,   198,   195,   198,   197,     1,   198,   185,
     186,   198,   188,   189,   190,   198,   198,   198,   198,   195,
     234,   197,   236,   178,    18,    19,   198,   198,   198,   198,
     185,   186,   198,   188,   189,   190,   178,   198,   198,   198,
     195,   198,   197,   185,   186,   198,   188,   189,   190,   178,
     198,   198,   198,   195,   198,   197,   185,   186,   198,   188,
     189,   190,   178,   198,   198,   198,   195,   198,   197,   185,
     186,   198,   188,   189,   190,   188,   189,   190,   198,   195,
     198,   197,   195,   198,   198,   195,   198,   508,   509,   198,
     503,   504,   198,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   198,   198,   198,   198,   529,   530,
     185,   186,   198,   188,   189,   190,   537,   538,   332,   333,
     195,   198,   198,   197,   545,   546,   198,   198,   198,   550,
     198,   198,   346,   347,   348,   349,   551,   552,     6,     7,
     198,     9,    10,    11,   198,   198,   198,   198,   569,   570,
     144,   145,   146,   198,   198,   198,   198,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   198,   617,   618,   619,   620,
     621,   622,   198,   624,   625,   626,   627,   628,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   648,   649,   650,
     651,   652,   653,   654,   655,   656,   185,   186,   198,   188,
     189,   190,   191,   198,   458,   459,   195,   196,   197,   195,
     198,   198,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   198,   198,   198,   198,   481,   482,   198,
     178,   198,   198,   198,   198,   489,   490,   185,   186,   198,
     188,   189,   190,   497,   498,   178,   198,   195,   502,   197,
     195,   198,   185,   186,   198,   188,   189,   190,   198,   178,
     198,     1,   195,   198,   197,   197,   185,   186,   198,   188,
     189,   190,   198,   307,   308,   309,   195,   178,   197,   197,
      20,    21,   198,   198,   185,   186,   198,   188,   189,   190,
     178,   198,   198,   198,   195,   198,   197,   195,   198,   198,
     554,   555,   556,   557,   558,   559,   198,   561,   562,   563,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   587,   588,   589,   590,   591,   592,   593,
     374,   375,   178,   198,   198,   379,   380,   198,   198,   185,
     186,   198,   188,   189,   190,   178,   198,   198,   198,   195,
     198,   197,   185,   186,   198,   188,   189,   190,   198,   198,
     198,   198,   195,   198,   197,   409,   198,   198,   198,   413,
     198,   415,   416,   417,   198,   419,   420,   421,   422,   423,
     424,   425,   185,   186,   198,   188,   189,   190,     1,   198,
     178,   198,   195,   198,   144,   145,   146,   185,   186,   198,
     188,   189,   190,    16,    17,   178,   198,   195,   198,   197,
     195,   198,   185,   186,   198,   188,   189,   190,   178,   198,
     198,   198,   195,   198,   197,   185,   186,   198,   188,   189,
     190,   178,   198,   198,   198,   195,   198,   197,   185,   186,
     198,   188,   189,   190,   178,   198,   198,   198,   195,   198,
     197,   185,   186,   198,   188,   189,   190,   178,   198,   198,
     198,   195,   198,   197,   185,   186,   510,   188,   189,   190,
     197,   197,   197,   197,   195,   198,   197,   195,   198,   523,
     197,   197,   526,   527,   528,   195,   197,   531,     6,     7,
     534,     9,    10,    11,   197,   539,   197,   178,   542,   197,
     197,   197,   197,   547,   185,   186,   550,   188,   189,   190,
     178,   197,   197,   197,   195,   197,   197,   185,   186,   197,
     188,   189,   190,   197,   197,   197,   197,   195,   178,   197,
     197,   144,   197,   146,   197,   185,   186,   197,   188,   189,
     190,   197,   197,   197,   178,   195,   197,   197,   197,   197,
       1,   185,   186,   197,   188,   189,   190,   307,   308,   309,
     197,   195,   197,   197,   197,   197,   197,   197,   178,   197,
     178,    22,    23,   197,   197,   185,   186,   197,   188,   189,
     190,   197,   197,   627,   628,   195,   178,   197,   632,   633,
     197,   197,   197,   185,   186,   197,   188,   189,   190,   197,
     512,   198,   198,   195,   198,   197,     6,     7,   198,     9,
      10,    11,   198,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   374,   375,   198,   197,   197,   379,
     380,   197,   197,   197,   197,  1106,   178,  1108,   197,  1110,
     127,  1112,    -1,   185,   186,    -1,   188,   189,   190,    -1,
     178,    -1,    -1,   195,    -1,   197,    -1,   185,   186,   409,
     188,   189,   190,   413,    -1,   415,   416,   195,   196,   419,
     420,   421,   422,   423,   424,   425,    -1,    -1,    -1,  1150,
     178,     6,     7,    -1,     9,    10,    11,   185,   186,    -1,
     188,   189,   190,   144,   307,   146,   309,   195,   178,   197,
      -1,    -1,    -1,    -1,    -1,   185,   186,    -1,   188,   189,
     190,    -1,    -1,   178,    -1,   195,    -1,   197,    -1,  1190,
     185,   186,    -1,   188,   189,   190,    -1,    -1,   178,    -1,
     195,    -1,   197,  1204,    -1,   185,   186,    -1,   188,   189,
     190,    -1,    -1,    -1,   176,   195,   178,   197,    -1,    -1,
      -1,    -1,    -1,   185,   186,    -1,   188,   189,   190,    -1,
     510,   374,   375,   195,    -1,  1236,   379,   380,    -1,    -1,
     383,   384,   385,   523,     6,     7,   526,     9,    10,    11,
      -1,   531,    -1,    -1,   534,   535,   536,    -1,    -1,   539,
      -1,   178,   542,    -1,    -1,    -1,   409,   547,   185,   186,
     550,   188,   189,   190,   178,    -1,    -1,    -1,   195,    -1,
     197,   185,   186,    -1,   188,   189,   190,     1,    -1,    -1,
      -1,   195,    -1,   197,    -1,   178,    10,    11,    -1,    -1,
      -1,    -1,   185,   186,    -1,   188,   189,   190,    -1,    -1,
      -1,  1105,   195,  1107,   197,  1109,    -1,  1111,    -1,    -1,
      12,    13,   178,    15,    16,    17,   307,    -1,   309,   185,
     186,    -1,   188,   189,   190,    -1,    -1,    -1,    -1,   195,
      -1,   197,    -1,    -1,    -1,    -1,    -1,   627,   628,   178,
      -1,    -1,   632,   633,    -1,  1149,   185,   186,    -1,   188,
     189,   190,    -1,   506,   507,   508,   195,   510,   511,     6,
       7,    -1,     9,    10,    11,    -1,    -1,   657,   658,   659,
     523,   661,   662,   663,   664,   665,   666,   667,   531,  1183,
      -1,    -1,    -1,   374,   375,  1396,   539,    -1,   379,   380,
      -1,    -1,    -1,  1197,   547,   178,    -1,   550,    -1,  1410,
      -1,    -1,   185,   186,    -1,   188,   189,   190,    -1,    -1,
      -1,    -1,   195,    -1,   197,    -1,   569,   570,   409,    -1,
     144,    -1,   146,     6,     7,   178,     9,    10,    11,    -1,
     421,  1235,   185,   186,    -1,   188,   189,   190,    -1,   178,
      -1,    -1,   195,    -1,   197,    -1,   185,   186,    -1,   188,
     189,   190,   178,  1464,    -1,  1466,   195,  1468,   197,   185,
     186,    -1,   188,   189,   190,    -1,    -1,    -1,    -1,   195,
      -1,   197,    -1,    -1,   627,   628,     1,    -1,   178,   632,
     633,   634,    -1,     8,     9,   185,   186,    -1,   188,   189,
     190,    -1,    -1,    -1,    -1,   195,    -1,   197,    -1,  1510,
      -1,  1512,    -1,    -1,    -1,    -1,    -1,  1518,    -1,  1520,
     234,    -1,   236,    -1,   178,  1526,    -1,  1528,    -1,   510,
      -1,   185,   186,  1534,   188,   189,   190,    -1,    -1,  1540,
      -1,   195,   523,  1544,    -1,   526,    -1,    -1,    -1,    -1,
     531,    -1,    -1,   534,    -1,    -1,    -1,    -1,   539,    -1,
      -1,   542,   543,   544,    -1,    -1,   547,   178,    -1,   550,
      -1,    -1,  1366,    -1,   185,   186,    -1,   188,   189,   190,
     178,    -1,    -1,    -1,   195,    -1,   197,   185,   186,    -1,
     188,   189,   190,   178,    -1,    -1,    -1,   195,    -1,   197,
     185,   186,    -1,   188,   189,   190,    -1,    -1,    -1,   178,
     195,    -1,   197,    -1,    -1,    -1,   185,   186,  1192,   188,
     189,   190,    -1,    -1,    -1,   176,   195,   178,   197,   144,
     145,   146,  1206,    -1,   185,   186,    -1,   188,   189,   190,
      -1,    -1,    -1,    -1,   195,    -1,   627,   628,    -1,    -1,
      -1,   632,   633,   185,   186,    -1,   188,   189,   190,   191,
     374,   375,    -1,   195,   196,   379,   380,   178,    -1,  1463,
      -1,  1465,    -1,  1467,   185,   186,    -1,   188,   189,   190,
      -1,    -1,   663,    -1,   195,    -1,   197,     1,    -1,    -1,
      -1,   178,     6,     7,   408,    -1,    -1,    -1,   185,   186,
     414,   188,   189,   190,   418,    -1,   420,   421,   195,    -1,
     197,    -1,    -1,    -1,    -1,  1509,    -1,  1511,    -1,   234,
     235,   236,    -1,  1517,    -1,  1519,    -1,    -1,    -1,    -1,
      -1,  1525,    -1,  1527,    -1,    -1,    -1,    -1,    -1,  1533,
     178,    -1,    -1,    -1,    -1,  1539,   460,   185,   186,  1543,
     188,   189,   190,    -1,    -1,    -1,    -1,   195,    -1,   197,
      -1,   475,    -1,    -1,   478,   479,   480,    -1,    -1,   483,
      -1,    -1,   486,   487,   488,    -1,    -1,   491,    -1,   178,
     494,   495,   496,    -1,    -1,   499,   185,   186,   502,   188,
     189,   190,   178,    -1,    -1,    -1,   195,    -1,   197,   185,
     186,    -1,   188,   189,   190,   178,    -1,    -1,    -1,   195,
      -1,   197,   185,   186,    -1,   188,   189,   190,    -1,    -1,
      -1,    -1,   195,  1397,   197,    -1,    -1,   178,    -1,    -1,
     144,   145,   146,    -1,   185,   186,  1410,   188,   189,   190,
      -1,    -1,    -1,    -1,   195,    -1,   197,    -1,    -1,    -1,
     564,   565,    -1,    -1,    -1,   569,   570,    -1,     1,   374,
     375,     4,     5,   178,   379,   380,    -1,    -1,    -1,    -1,
     185,   186,    -1,   188,   189,   190,    -1,    -1,    -1,    -1,
     195,    -1,   197,    -1,    -1,   599,   600,   185,   186,    -1,
     188,   189,   190,   408,    -1,    -1,    -1,   195,   413,   414,
     415,   416,    -1,   418,   419,   420,   421,   422,   423,   424,
     425,    -1,    -1,  1193,    -1,    -1,    -1,    -1,   178,    -1,
     234,   235,   236,    -1,    -1,   185,   186,  1207,   188,   189,
     190,   178,    -1,    -1,    -1,   195,    -1,   197,   185,   186,
      -1,   188,   189,   190,   178,   460,    -1,    -1,   195,    -1,
     197,   185,   186,    -1,   188,   189,   190,    -1,    -1,    -1,
     475,   195,   196,   478,   479,   480,    -1,    -1,   483,    -1,
      -1,   486,   487,   488,    -1,    -1,   491,    -1,   178,   494,
     495,   496,    -1,    -1,   499,   185,   186,   502,   188,   189,
     190,    -1,    -1,    -1,    -1,   195,    -1,   197,   178,    -1,
      -1,   144,    -1,   146,    -1,   185,   186,    -1,   188,   189,
     190,   178,    -1,    -1,    -1,   195,    -1,   197,   185,   186,
      -1,   188,   189,   190,   178,    -1,    -1,    -1,   195,    -1,
     197,   185,   186,    -1,   188,   189,   190,    -1,    -1,    -1,
      -1,   195,    -1,   197,    -1,  1188,    -1,    -1,    -1,   564,
     565,    -1,    -1,    -1,   569,   570,    -1,    -1,   176,  1202,
     374,   375,    -1,    -1,    -1,   379,   380,   185,   186,    -1,
     188,   189,   190,   191,    -1,    -1,    -1,   195,    -1,   594,
     595,   596,    -1,   598,   599,   600,   601,   602,   603,   604,
      -1,   234,    -1,   236,   408,    -1,    -1,    -1,    -1,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   178,    -1,    -1,    -1,    -1,    -1,  1398,   185,
     186,    -1,   188,   189,   190,   178,    -1,    -1,    -1,   195,
    1410,   197,   185,   186,    -1,   188,   189,   190,    -1,    -1,
     178,    -1,   195,    -1,   197,    -1,   460,   185,   186,    -1,
     188,   189,   190,    -1,    -1,    -1,    -1,   195,    -1,   197,
      -1,   475,    -1,    -1,   478,   479,   480,    -1,    -1,   483,
      -1,    -1,   486,   487,   488,    -1,    -1,   491,    -1,   178,
     494,   495,   496,    -1,    -1,   499,   185,   186,   502,   188,
     189,   190,   178,    -1,    -1,    -1,   195,    -1,   197,   185,
     186,    -1,   188,   189,   190,    -1,    -1,   178,    -1,   195,
      -1,   197,    -1,  1194,   185,   186,    -1,   188,   189,   190,
      -1,    -1,    -1,    -1,   195,    -1,   197,  1208,    -1,    -1,
      -1,   374,   375,    -1,    -1,    -1,   379,   380,    -1,    -1,
     383,   384,   385,   185,   186,    -1,   188,   189,   190,   191,
     564,   565,  1395,   195,   196,   569,   570,    -1,    -1,   176,
      -1,   178,    -1,    -1,    -1,   408,    -1,  1410,   185,   186,
      -1,   188,   189,   190,    -1,    -1,    -1,    -1,   195,    -1,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   178,    -1,    -1,    -1,    -1,    -1,    -1,   185,   186,
      -1,   188,   189,   190,    -1,    -1,    -1,    -1,   195,    -1,
     197,    -1,   178,   456,   457,   458,    -1,   460,   461,   185,
     186,    -1,   188,   189,   190,    -1,   178,    -1,    -1,   195,
      -1,   197,   475,   185,   186,    -1,   188,   189,   190,    -1,
     483,    -1,    -1,   195,    -1,   197,    -1,    -1,   491,    -1,
     178,    -1,    -1,    -1,    -1,    -1,   499,   185,   186,   502,
     188,   189,   190,   178,    -1,    -1,    -1,   195,    -1,   197,
     185,   186,    -1,   188,   189,   190,   178,    -1,    -1,    -1,
     195,    -1,   197,   185,   186,    -1,   188,   189,   190,   178,
      -1,    -1,    -1,   195,    -1,   197,   185,   186,    -1,   188,
     189,   190,   178,    -1,    -1,    -1,   195,    -1,   197,   185,
     186,    -1,   188,   189,   190,    -1,    -1,    -1,  1399,   195,
     196,   564,   565,    -1,    -1,    -1,   569,   570,   571,  1410,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   178,    -1,
      -1,    -1,    -1,    -1,    -1,   185,   186,    -1,   188,   189,
     190,   178,    -1,  1187,    -1,   195,    -1,   197,   185,   186,
      -1,   188,   189,   190,    -1,    -1,    -1,  1201,   195,    -1,
     197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   178,    75,    76,    77,    78,    79,    80,   185,   186,
      -1,   188,   189,   190,    -1,    -1,    -1,    -1,   195,    -1,
     197,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,    -1,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,    -1,   185,   186,    -1,   188,   189,   190,   191,
      -1,    -1,   185,   195,   196,   188,     3,     4,     5,     6,
       7,     8,     9,    10,    11,   198,   199,    -1,    -1,    -1,
      -1,    18,    -1,    20,    -1,    22,    -1,    24,    -1,    26,
     178,    28,    -1,    30,    -1,    -1,    -1,   185,   186,    -1,
     188,   189,   190,   178,    -1,  1369,    -1,   195,    -1,   197,
     185,   186,    -1,   188,   189,   190,    -1,   178,    -1,    -1,
     195,  1186,   197,    -1,   185,   186,    -1,   188,   189,   190,
      -1,    -1,    -1,    -1,   195,  1200,   197,   178,    75,    76,
      77,    78,    79,    80,   185,   186,    -1,   188,   189,   190,
      -1,    -1,    -1,    -1,   195,    -1,   197,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,    -1,    -1,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,    -1,    -1,
     176,    -1,   178,    -1,    -1,    -1,    -1,    -1,   185,   185,
     186,   188,   188,   189,   190,     4,     5,    -1,    -1,   195,
      -1,   198,   199,    12,    13,    14,    15,    16,    17,    -1,
      19,    -1,    21,    -1,    23,   178,    25,    -1,    27,    -1,
      29,    30,   185,   186,    -1,   188,   189,   190,   178,    -1,
      -1,    -1,   195,    -1,   197,   185,   186,    -1,   188,   189,
     190,    -1,    -1,  1368,   176,   195,   178,   197,    -1,    -1,
      -1,    -1,    -1,   185,   186,    -1,   188,   189,   190,    -1,
      -1,  1185,    -1,   195,    -1,    -1,    75,    76,    77,    78,
     176,    -1,   178,    -1,    -1,  1199,    -1,    -1,    -1,   185,
     186,    -1,   188,   189,   190,    -1,   178,    -1,    -1,   195,
      -1,    -1,    -1,   185,   186,    -1,   188,   189,   190,    -1,
      -1,    -1,    -1,   195,   113,   197,    -1,    -1,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    -1,    -1,
      -1,    -1,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,    -1,    -1,    -1,   158,
      -1,   160,    -1,   162,   163,   164,    -1,   166,   167,   168,
     169,   170,   171,   172,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,   185,    -1,    -1,   188,
      -1,   196,   197,     4,     5,    -1,    -1,    -1,    -1,   198,
     199,    12,    13,    14,    15,    16,    17,    -1,    19,    -1,
      21,    -1,    23,   178,    25,    -1,    27,    -1,    29,    -1,
     185,   186,    -1,   188,   189,   190,    -1,    -1,    -1,   178,
     195,    -1,   197,    -1,    -1,    -1,   185,   186,  1181,   188,
     189,   190,    -1,    -1,    -1,    -1,   195,    -1,   197,    -1,
      -1,   178,  1195,  1367,    -1,    -1,    -1,    -1,   185,   186,
      -1,   188,   189,   190,    75,    76,    77,    78,   195,   178,
     197,    -1,    -1,    -1,    -1,    -1,   185,   186,    -1,   188,
     189,   190,   178,    -1,    -1,    -1,   195,    -1,   197,   185,
     186,    -1,   188,   189,   190,    -1,    -1,    -1,    -1,   195,
      -1,   197,   113,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,    -1,    -1,    -1,    -1,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,    -1,    -1,    -1,   158,    -1,   160,
      -1,   162,   163,   164,    -1,   166,   167,   168,   169,   170,
     171,   172,    -1,   185,   186,    -1,   188,   189,   190,   191,
      -1,    -1,   178,   195,   185,   197,    -1,   188,    -1,   185,
     186,    -1,   188,   189,   190,   178,    -1,   198,   199,   195,
      -1,   197,   185,   186,    -1,   188,   189,   190,   178,    -1,
      -1,    -1,   195,    -1,   197,   185,   186,    -1,   188,   189,
     190,    -1,    -1,   178,    -1,   195,    -1,   197,    -1,    -1,
     185,   186,  1365,   188,   189,   190,   178,    -1,    -1,    -1,
     195,    -1,   197,   185,   186,    -1,   188,   189,   190,   178,
      -1,    -1,    -1,   195,    -1,   197,   185,   186,    -1,   188,
     189,   190,    -1,    -1,    -1,    -1,   195,    -1,   197,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
      -1,    -1,    -1,    -1,    -1,    -1,   196,   197,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   197,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,    -1,    -1,
      -1,    -1,    -1,    -1,   196,   197,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   197,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   197,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     197,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   197,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   197,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     197,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   197,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   197,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     197,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   197,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   197,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     197,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   197,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   197,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     197,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   197,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   197,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     197,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   197,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   197,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     197,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   197,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   197,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     197,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   197,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   197,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     197,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   197,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   197,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,    -1,   178,    -1,    -1,    -1,    -1,
      -1,   197,   185,   186,    -1,   188,   189,   190,   178,    -1,
      -1,    -1,   195,   196,    -1,   185,   186,    -1,   188,   189,
     190,   178,    -1,    -1,    -1,   195,   196,    -1,   185,   186,
      -1,   188,   189,   190,   178,    -1,    -1,    -1,   195,   196,
      -1,   185,   186,    -1,   188,   189,   190,   178,    -1,    -1,
      -1,   195,   196,    -1,   185,   186,    -1,   188,   189,   190,
     178,    -1,    -1,    -1,   195,   196,    -1,   185,   186,    -1,
     188,   189,   190,   178,    -1,    -1,    -1,   195,   196,    -1,
     185,   186,    -1,   188,   189,   190,   178,    -1,    -1,    -1,
     195,   196,    -1,   185,   186,    -1,   188,   189,   190,   178,
      -1,    -1,    -1,   195,   196,    -1,   185,   186,    -1,   188,
     189,   190,   178,    -1,    -1,    -1,   195,   196,    -1,   185,
     186,    -1,   188,   189,   190,   178,    -1,    -1,    -1,   195,
     196,    -1,   185,   186,    -1,   188,   189,   190,   178,    -1,
      -1,    -1,   195,   196,    -1,   185,   186,    -1,   188,   189,
     190,   178,    -1,    -1,    -1,   195,   196,    -1,   185,   186,
      -1,   188,   189,   190,   178,    -1,    -1,    -1,   195,   196,
      -1,   185,   186,    -1,   188,   189,   190,   178,    -1,    -1,
      -1,   195,   196,    -1,   185,   186,    -1,   188,   189,   190,
      -1,    -1,    -1,    -1,   195,   196,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,   196,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,   196,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,   196,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,   196,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,   196,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,   196,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,   196,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,   196,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,   196,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,   196,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,   196,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,   196,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,   196,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,   196,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,   196,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,   196,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,   196,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,   196,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,   196,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,   196,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,   196,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,   196,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,   196,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,   196,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,   196,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,   196,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,   196,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,   196,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,   196,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,   196,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,   196,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,   196,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   178,
      -1,    -1,    -1,    -1,    -1,   196,   185,   186,    -1,   188,
     189,   190,   178,    -1,    -1,    -1,   195,    -1,    -1,   185,
     186,    -1,   188,   189,   190,   178,    -1,    -1,    -1,   195,
      -1,    -1,   185,   186,    -1,   188,   189,   190,   178,    -1,
      -1,    -1,   195,    -1,    -1,   185,   186,    -1,   188,   189,
     190,    -1,    -1,   176,    -1,   195,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   176,    -1,    -1,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   185,   186,    -1,   188,   189,   190,   191,    -1,    -1,
      -1,   195,   196,   197,   185,   186,    -1,   188,   189,   190,
     191,    -1,    -1,    -1,   195,   196,   197,   185,   186,    -1,
     188,   189,   190,   191,    -1,    -1,    -1,   195,   196,   197,
     185,   186,    -1,   188,   189,   190,   191,    -1,    -1,    -1,
     195,    -1,   197,   185,   186,    -1,   188,   189,   190,   191,
      -1,    -1,    -1,   195,    -1,   197,   185,   186,    -1,   188,
     189,   190,   191,    -1,    -1,    -1,   195,    -1,   197,   185,
     186,    -1,   188,   189,   190,   191,    -1,    -1,    -1,   195,
      -1,   197,   185,   186,    -1,   188,   189,   190,   191,    -1,
      -1,    -1,   195,    -1,   197,   185,   186,    -1,   188,   189,
     190,   191,    -1,    -1,    -1,   195,    -1,   197,   185,   186,
      -1,   188,   189,   190,   191,    -1,    -1,    -1,   195,    -1,
     197,   185,   186,    -1,   188,   189,   190,   191,    -1,    -1,
      -1,   195,    -1,   197,   185,   186,    -1,   188,   189,   190,
     191,    -1,    -1,    -1,   195,    -1,   197,   185,   186,    -1,
     188,   189,   190,   191,    -1,    -1,    -1,   195,    -1,   197,
     185,   186,    -1,   188,   189,   190,   191,    -1,    -1,    -1,
     195,    -1,   197,   185,   186,    -1,   188,   189,   190,   191,
      -1,    -1,    -1,   195,    -1,   197,   185,   186,    -1,   188,
     189,   190,   191,    -1,    -1,    -1,   195,    -1,   197,   185,
     186,    -1,   188,   189,   190,   191,    -1,    -1,    -1,   195,
      -1,   197,   185,   186,    -1,   188,   189,   190,   191,    -1,
      -1,    -1,   195,    -1,   197,   185,   186,    -1,   188,   189,
     190,   191,    -1,    -1,    -1,   195,    -1,   197,   185,   186,
      -1,   188,   189,   190,   191,    -1,    -1,    -1,   195,    -1,
     197,   185,   186,    -1,   188,   189,   190,   191,    -1,    -1,
      -1,   195,    -1,   197,   185,   186,    -1,   188,   189,   190,
     191,    -1,    -1,    -1,   195,    -1,   197,   185,   186,    -1,
     188,   189,   190,   191,    -1,    -1,    -1,   195,    -1,   197,
     185,   186,    -1,   188,   189,   190,   191,    -1,    -1,    -1,
     195,    -1,   197,     6,     7,    -1,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,   185,   186,    -1,   188,   189,
     190,   191,    -1,    -1,    -1,   195,   196,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   185,   186,    -1,   188,   189,   190,   191,    -1,   185,
     186,   195,   188,   189,   190,   191,    -1,   185,   186,   195,
     188,   189,   190,    -1,    -1,   185,   186,   195,   188,   189,
     190,    -1,    -1,    -1,    -1,   195
  };

  const unsigned char
  PatchValueExpressionParser::yystos_[] =
  {
       0,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,   201,   202,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    75,    76,
      77,    78,    79,    80,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   185,   188,   198,   199,   204,   209,
     210,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,     4,     5,    75,    76,    77,    78,   113,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   160,   162,   163,   164,   166,   167,   168,
     169,   170,   171,   172,   185,   188,   198,   199,   209,   214,
     216,   218,   220,   222,   214,   209,   214,   209,   216,   216,
     218,   218,   220,   220,   222,   222,     4,     5,    75,    76,
      77,    78,   113,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   160,   162,   163,   164,
     166,   167,   168,   169,   170,   171,   172,   185,   188,   198,
     199,   228,   230,   232,   234,   236,   242,   230,   228,   230,
     228,   232,   232,   234,   234,   236,   236,   242,   242,   197,
     196,     0,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     208,   208,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   209,   214,
     216,   218,   220,   228,   230,   232,   234,   236,   216,   218,
     232,   234,   209,   214,   216,   218,   220,   222,   228,   230,
     232,   234,   236,   242,   222,   242,   185,   186,   188,   189,
     190,   191,   195,    73,    74,   203,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   203,   178,   185,
     186,   188,   189,   190,   195,   203,   178,   185,   186,   188,
     189,   190,   195,   203,   178,   185,   186,   188,   189,   190,
     195,   203,   175,   177,   178,   203,   185,   186,   188,   189,
     190,   191,   195,   203,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   203,   178,   185,   186,   188,
     189,   190,   195,   203,   178,   185,   186,   188,   189,   190,
     195,   203,   178,   185,   186,   188,   189,   190,   195,   203,
     175,   177,   178,   203,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   196,   197,   196,   197,   196,
     197,   196,   197,   196,   197,   196,   197,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   196,   197,
     196,   197,   196,   197,   196,   197,   196,   197,   196,   197,
     214,   230,   214,   230,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   214,   230,   214,   230,
     214,   230,   214,   230,    31,   197,    31,   197,   197,   197,
      31,   197,    31,   197,   197,   197,   197,   197,   197,   197,
     197,     6,     7,     9,    10,    11,     6,     7,     9,    10,
      11,     6,     7,     9,    10,    11,     6,     7,     9,    10,
      11,     6,     7,     9,    10,    11,    12,    13,    15,    16,
      17,   197,   197,   197,   214,   230,   214,   230,   214,   230,
     209,   214,   216,   218,   220,   228,   230,   232,   234,   236,
     209,   214,   216,   218,   220,   228,   230,   232,   234,   236,
     214,   230,   214,   230,   214,   230,   209,   214,   216,   218,
     220,   228,   230,   232,   234,   236,   209,   214,   216,   218,
     220,   228,   230,   232,   234,   236,   214,   230,   214,   230,
     209,   214,   228,   230,   209,   214,   228,   230,   209,   214,
     228,   230,   214,   230,   214,   230,   214,   230,   214,   230,
     214,   230,   214,   230,   214,   230,   214,   230,   214,   230,
     214,   230,   214,   230,   214,   230,   214,   230,   214,   230,
     214,   230,   214,   230,   214,   230,   214,   230,   214,   230,
     214,   230,   214,   230,   214,   230,   209,   214,   216,   218,
     220,   228,   230,   232,   234,   236,   198,   198,   197,   216,
     218,   232,   234,   216,   218,   220,   216,   218,   232,   234,
     216,   218,   232,   234,   216,   232,   216,   218,   220,   216,
     218,   232,   234,   216,   218,   220,   232,   234,   216,   218,
     220,   232,   234,   236,   216,   218,   232,   234,   216,   218,
     232,   234,   216,   218,   232,   234,   216,   218,   232,   234,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   209,   209,   209,   214,   214,   209,
     216,   218,   220,   209,   205,   203,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   209,   214,   216,   218,   220,
     214,   216,   218,   220,   216,   218,   220,   216,   218,   220,
     214,   214,   209,   216,   218,   220,   206,   216,   218,   220,
     216,   218,   220,   216,   218,   220,   214,   214,   209,   216,
     218,   220,   206,   216,   218,   220,   216,   218,   220,   216,
     218,   220,   214,   214,   209,   216,   218,   220,   206,   209,
     214,   216,   218,   220,   222,   222,   228,   228,   228,   230,
     230,   228,   232,   234,   236,   228,   205,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   228,   230,   232,   234,
     236,   230,   232,   234,   236,   232,   232,   230,   230,   228,
     232,   234,   236,   206,   232,   234,   236,   234,   234,   230,
     230,   228,   232,   234,   236,   206,   232,   234,   236,   236,
     236,   230,   230,   228,   232,   234,   236,   206,   228,   230,
     232,   234,   236,   242,   242,   228,   230,   228,   230,   228,
     230,   228,   230,   197,   197,   196,   196,   196,   196,   196,
     196,   196,   196,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   196,
     196,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   196,   197,   196,   197,   196,   196,   196,   196,   197,
     196,   197,   196,   196,   196,   196,   197,   196,   197,   196,
     196,   196,   196,   197,   196,   197,   196,   196,   196,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   196,   196,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,     6,
       7,     9,    10,    11,     6,     7,     9,    10,    11,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
      81,    82,    83,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,   159,    84,    85,    86,    88,
      89,    92,   159,    93,   159,   176,   176,   176,   176,   176,
      81,    82,    83,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,   159,    84,    85,    86,    88,
      89,    92,   159,    93,   159,   176,   176,   176,   176,   176,
     214,   230,   214,   230,   214,   230,   214,   230,   214,    30,
     185,   211,   230,   209,   214,   216,   218,   220,   228,   230,
     232,   234,   236,   209,   214,   216,   218,   220,   228,   230,
     232,   234,   236,   214,   230,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   198,   198,   198,   209,   214,
     216,   218,   220,   198,   198,   198,   228,   230,   232,   234,
     236,   197,   197,   196,   196,   196,   196,   196,   196,   197,
      30,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   214,   230,   214,   230,   214,   230,   197,   197,   196,
     196,   196,   196,   214,   230,   214,   230,   196,   196,   196,
     196,   214,   230,   214,   230,   196,   196,   196,   196,   214,
     230,   214,   230,   196,   196,   197,   197,   214,   230,   196,
     196,   214,   230,   196,   196,   214,   230,   197,   197
  };

  const unsigned char
  PatchValueExpressionParser::yyr1_[] =
  {
       0,   200,   201,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     203,   203,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   205,   206,   207,   208,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   210,   211,   211,   212,   212,   212,   212,   212,   212,
     212,   212,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     215,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   217,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   219,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   221,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   223,   224,
     225,   226,   227,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   229,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   231,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   233,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     235,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   237,   238,   239,   240,   241,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   243
  };

  const unsigned char
  PatchValueExpressionParser::yyr2_[] =
  {
       0,     2,     1,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     0,     0,     0,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     3,     4,     4,     4,     4,
       4,     4,     4,     5,     3,     3,     3,     3,     3,     4,
       2,     1,     4,     5,     5,     4,     4,     4,     4,     6,
       6,     3,     1,     2,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     1,     1,     3,     3,     3,     3,
       3,     6,     4,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     6,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     5,     1,     3,
       3,     3,     3,     3,     4,     3,     4,     3,     3,     4,
       3,     4,     3,     3,     4,     3,     2,     1,     4,     5,
       5,     1,     4,     6,     4,     4,     4,     4,     6,     6,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     4,     4,     4,     4,     4,     4,     4,
       6,     5,     4,     2,     1,     4,     5,     5,     4,     4,
       4,     4,     6,     6,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     6,
       5,     4,     2,     1,     4,     5,     5,     4,     4,     4,
       4,     6,     6,     3,     1,     1,     3,     3,     3,     3,
       3,     3,     2,     3,     4,     4,     4,     4,     6,     5,
       4,     2,     1,     4,     5,     5,     4,     4,     4,     4,
       6,     6,     3,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     1,     3,     8,
      20,    14,     4,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     4,
       4,     4,     4,     4,     4,     4,     3,     5,     3,     4,
       2,     1,     4,     6,     6,     3,     3,     3,     3,     3,
       3,     6,     6,     4,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     6,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     5,     4,     2,     1,     4,     4,     6,     6,
       6,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     4,     4,     4,     4,
       4,     4,     4,     6,     5,     4,     2,     1,     4,     6,
       6,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     6,     5,     4,     2,     1,     4,     6,     6,
       3,     1,     3,     3,     3,     3,     3,     3,     2,     3,
       4,     4,     4,     6,     5,     4,     2,     1,     4,     6,
       6,     3,     8,    20,    14,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     1,     3
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const PatchValueExpressionParser::yytname_[] =
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
  "TOKEN_rand", "TOKEN_randFixed", "TOKEN_id", "TOKEN_dist",
  "TOKEN_randNormal", "TOKEN_randNormalFixed", "TOKEN_position",
  "TOKEN_area", "TOKEN_Sf", "TOKEN_Cn", "TOKEN_delta", "TOKEN_weights",
  "TOKEN_normal", "TOKEN_snGrad", "TOKEN_internalField",
  "TOKEN_neighbourField", "TOKEN_neighbourPatch", "TOKEN_oldTime",
  "TOKEN_deltaT", "TOKEN_time", "TOKEN_outputTime", "TOKEN_pow",
  "TOKEN_log", "TOKEN_exp", "TOKEN_mag", "TOKEN_magSqr", "TOKEN_sin",
  "TOKEN_cos", "TOKEN_tan", "TOKEN_min", "TOKEN_max", "TOKEN_minPosition",
  "TOKEN_maxPosition", "TOKEN_average", "TOKEN_sum", "TOKEN_sqr",
  "TOKEN_sqrt", "TOKEN_log10", "TOKEN_asin", "TOKEN_acos", "TOKEN_atan",
  "TOKEN_atan2", "TOKEN_sinh", "TOKEN_cosh", "TOKEN_tanh", "TOKEN_asinh",
  "TOKEN_acosh", "TOKEN_atanh", "TOKEN_erf", "TOKEN_erfc", "TOKEN_lgamma",
  "TOKEN_besselJ0", "TOKEN_besselJ1", "TOKEN_besselY0", "TOKEN_besselY1",
  "TOKEN_sign", "TOKEN_pos", "TOKEN_neg", "TOKEN_toPoint", "TOKEN_toFace",
  "TOKEN_mapped", "TOKEN_mappedInternal", "TOKEN_points",
  "TOKEN_transpose", "TOKEN_diag", "TOKEN_tr", "TOKEN_dev", "TOKEN_symm",
  "TOKEN_skew", "TOKEN_det", "TOKEN_cof", "TOKEN_inv", "TOKEN_sph",
  "TOKEN_twoSymm", "TOKEN_dev2", "TOKEN_eigenValues", "TOKEN_eigenVectors",
  "TOKEN_cpu", "TOKEN_weight", "'?'", "':'", "TOKEN_OR", "TOKEN_AND",
  "TOKEN_EQ", "TOKEN_NEQ", "TOKEN_LEQ", "TOKEN_GEQ", "'<'", "'>'", "'-'",
  "'+'", "'%'", "'*'", "'/'", "'&'", "'^'", "TOKEN_NEG", "TOKEN_NOT",
  "TOKEN_HODGE", "'.'", "','", "')'", "'('", "'!'", "$accept",
  "switch_start", "switch_expr", "restOfFunction", "unit",
  "vectorComponentSwitch", "tensorComponentSwitch", "eatCharactersSwitch",
  "mappedFieldIdSwitch", "vexp", "evaluateVectorFunction", "scalar",
  "sreduced", "vreduced", "exp", "evaluateScalarFunction", "texp",
  "evaluateTensorFunction", "yexp", "evaluateSymmTensorFunction", "hexp",
  "evaluateSphericalTensorFunction", "lexp", "evaluateLogicalFunction",
  "vector", "tensor", "symmTensor", "sphericalTensor", "pvexp",
  "evaluatePointVectorFunction", "pexp", "evaluatePointScalarFunction",
  "ptexp", "evaluatePointTensorFunction", "pyexp",
  "evaluatePointSymmTensorFunction", "phexp",
  "evaluatePointSphericalTensorFunction", "pvector", "ptensor",
  "psymmTensor", "psphericalTensor", "plexp",
  "evaluatePointLogicalFunction", YY_NULLPTR
  };

#if PARSERPATCHDEBUG
  const unsigned short
  PatchValueExpressionParser::yyrline_[] =
  {
       0,   386,   386,   390,   391,   397,   403,   409,   415,   421,
     427,   433,   439,   445,   451,   457,   463,   469,   475,   481,
     487,   493,   499,   505,   511,   517,   523,   529,   535,   540,
     547,   548,   550,   551,   552,   553,   554,   555,   556,   557,
     558,   559,   562,   565,   570,   573,   576,   579,   582,   583,
     587,   592,   597,   602,   607,   612,   617,   622,   627,   632,
     637,   642,   647,   651,   655,   659,   660,   671,   675,   683,
     691,   699,   708,   717,   724,   727,   730,   733,   736,   739,
     743,   744,   748,   752,   755,   758,   762,   766,   770,   774,
     778,   784,   795,   796,   799,   802,   805,   808,   811,   814,
     817,   820,   825,   834,   843,   852,   861,   870,   879,   888,
     897,   901,   905,   909,   915,   916,   917,   922,   927,   932,
     937,   947,   952,   956,   960,   964,   969,   974,   979,   984,
     989,   994,   999,  1004,  1009,  1013,  1014,  1018,  1022,  1026,
    1030,  1034,  1038,  1042,  1046,  1050,  1055,  1059,  1063,  1067,
    1071,  1075,  1079,  1083,  1087,  1091,  1095,  1099,  1103,  1107,
    1111,  1115,  1119,  1123,  1127,  1131,  1135,  1139,  1143,  1147,
    1151,  1155,  1159,  1163,  1167,  1171,  1175,  1179,  1183,  1187,
    1191,  1195,  1199,  1203,  1207,  1211,  1215,  1219,  1223,  1227,
    1231,  1235,  1239,  1243,  1247,  1251,  1255,  1259,  1266,  1275,
    1278,  1281,  1286,  1289,  1292,  1295,  1298,  1301,  1304,  1307,
    1310,  1313,  1316,  1319,  1322,  1326,  1331,  1332,  1336,  1340,
    1343,  1346,  1350,  1354,  1358,  1362,  1366,  1370,  1374,  1378,
    1384,  1397,  1398,  1403,  1408,  1413,  1418,  1423,  1428,  1433,
    1438,  1443,  1448,  1453,  1458,  1463,  1468,  1473,  1478,  1483,
    1488,  1493,  1497,  1498,  1502,  1513,  1517,  1521,  1525,  1529,
    1533,  1537,  1544,  1548,  1549,  1553,  1557,  1560,  1563,  1567,
    1571,  1575,  1579,  1583,  1589,  1601,  1602,  1607,  1612,  1617,
    1622,  1627,  1638,  1643,  1648,  1653,  1658,  1663,  1668,  1672,
    1673,  1677,  1681,  1685,  1689,  1693,  1697,  1701,  1705,  1709,
    1712,  1719,  1723,  1724,  1728,  1732,  1735,  1738,  1742,  1746,
    1750,  1754,  1758,  1764,  1776,  1777,  1780,  1785,  1790,  1795,
    1800,  1805,  1810,  1814,  1815,  1819,  1823,  1827,  1831,  1834,
    1841,  1845,  1846,  1850,  1854,  1857,  1861,  1865,  1869,  1873,
    1877,  1881,  1887,  1899,  1900,  1901,  1906,  1915,  1924,  1933,
    1942,  1951,  1960,  1961,  1970,  1979,  1983,  1984,  1990,  2002,
    2008,  2019,  2029,  2035,  2036,  2041,  2046,  2051,  2056,  2061,
    2066,  2071,  2076,  2081,  2086,  2091,  2096,  2100,  2104,  2108,
    2119,  2123,  2131,  2139,  2147,  2156,  2165,  2166,  2173,  2176,
    2180,  2181,  2185,  2192,  2196,  2202,  2214,  2219,  2224,  2229,
    2234,  2239,  2243,  2248,  2252,  2256,  2260,  2264,  2268,  2272,
    2276,  2280,  2284,  2288,  2292,  2296,  2300,  2301,  2305,  2309,
    2313,  2317,  2321,  2325,  2329,  2333,  2337,  2342,  2346,  2350,
    2354,  2358,  2362,  2366,  2370,  2374,  2378,  2382,  2386,  2390,
    2394,  2398,  2402,  2406,  2410,  2414,  2418,  2422,  2426,  2430,
    2434,  2438,  2442,  2446,  2450,  2454,  2458,  2462,  2466,  2470,
    2474,  2478,  2482,  2486,  2490,  2494,  2498,  2502,  2506,  2510,
    2514,  2518,  2522,  2529,  2533,  2534,  2538,  2545,  2549,  2553,
    2557,  2563,  2575,  2576,  2581,  2586,  2591,  2596,  2601,  2606,
    2611,  2616,  2621,  2626,  2631,  2635,  2636,  2640,  2651,  2655,
    2659,  2663,  2667,  2671,  2675,  2682,  2686,  2687,  2691,  2698,
    2702,  2708,  2720,  2721,  2726,  2731,  2736,  2747,  2752,  2757,
    2762,  2767,  2771,  2772,  2776,  2780,  2784,  2788,  2792,  2796,
    2800,  2804,  2808,  2811,  2818,  2822,  2823,  2827,  2833,  2837,
    2843,  2855,  2856,  2861,  2866,  2871,  2876,  2881,  2886,  2890,
    2891,  2895,  2899,  2903,  2906,  2913,  2917,  2918,  2922,  2929,
    2933,  2939,  2951,  2957,  2967,  2976,  2982,  2991,  3000,  3009,
    3018,  3027,  3036,  3037,  3046,  3054,  3058,  3059,  3065
  };

  // Print the state stack on the debug stream.
  void
  PatchValueExpressionParser::yystack_print_ ()
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
  PatchValueExpressionParser::yy_reduce_print_ (int yyrule)
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
#endif // PARSERPATCHDEBUG

  PatchValueExpressionParser::token_number_type
  PatchValueExpressionParser::yytranslate_ (int t)
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
       2,     2,     2,   199,     2,     2,     2,   187,   190,     2,
     198,   197,   188,   186,   196,   185,   195,   189,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   176,     2,
     183,     2,   184,   175,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   191,     2,     2,     2,     2,     2,
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
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     177,   178,   179,   180,   181,   182,   192,   193,   194
    };
    const unsigned user_token_number_max_ = 438;
    const token_number_type undef_token_ = 2;

    if (static_cast<int> (t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }

} // parserPatch
#line 9608 "PatchValueExpressionParser.tab.cc"

#line 3078 "../PatchValueExpressionParser.yy"


void parserPatch::PatchValueExpressionParser::error (
    const parserPatch::PatchValueExpressionParser::location_type& l,
    const std::string& m
)
{
     driver.error (l, m);
}
