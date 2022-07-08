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





#include "RawFoamDictionaryParser.tab.hh"


// Unqualified %code blocks.
#line 77 "../RawFoamDictionaryParser.yy"

# include "RawFoamDictionaryParserDriver.H"

    namespace parserRawDict {
        RawFoamDictionaryParser::symbol_type yylex(
            Foam::RawFoamDictionaryParserDriver &driver
        );
    }

#line 55 "RawFoamDictionaryParser.tab.cc"


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
#if YYDEBUG

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

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 46 "../RawFoamDictionaryParser.yy"
namespace parserRawDict {
#line 150 "RawFoamDictionaryParser.tab.cc"


  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  RawFoamDictionaryParser::yytnamerr_ (const char *yystr)
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
  RawFoamDictionaryParser::RawFoamDictionaryParser (Foam::RawFoamDictionaryParserDriver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {}

  RawFoamDictionaryParser::~RawFoamDictionaryParser ()
  {}

  RawFoamDictionaryParser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  RawFoamDictionaryParser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  RawFoamDictionaryParser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  RawFoamDictionaryParser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  RawFoamDictionaryParser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  RawFoamDictionaryParser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  RawFoamDictionaryParser::symbol_number_type
  RawFoamDictionaryParser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  RawFoamDictionaryParser::stack_symbol_type::stack_symbol_type ()
  {}

  RawFoamDictionaryParser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 15: // "label"
        value.YY_MOVE_OR_COPY< Foam::label > (YY_MOVE (that.value));
        break;

      case 14: // "scalar"
        value.YY_MOVE_OR_COPY< Foam::scalar > (YY_MOVE (that.value));
        break;

      case 16: // "string"
      case 17: // "unknown"
      case 18: // "raw"
        value.YY_MOVE_OR_COPY< Foam::string > (YY_MOVE (that.value));
        break;

      case 12: // "word"
      case 13: // "redirection"
        value.YY_MOVE_OR_COPY< Foam::word > (YY_MOVE (that.value));
        break;

      case 19: // "bool"
        value.YY_MOVE_OR_COPY< bool > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  RawFoamDictionaryParser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 15: // "label"
        value.move< Foam::label > (YY_MOVE (that.value));
        break;

      case 14: // "scalar"
        value.move< Foam::scalar > (YY_MOVE (that.value));
        break;

      case 16: // "string"
      case 17: // "unknown"
      case 18: // "raw"
        value.move< Foam::string > (YY_MOVE (that.value));
        break;

      case 12: // "word"
      case 13: // "redirection"
        value.move< Foam::word > (YY_MOVE (that.value));
        break;

      case 19: // "bool"
        value.move< bool > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  RawFoamDictionaryParser::stack_symbol_type&
  RawFoamDictionaryParser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 15: // "label"
        value.move< Foam::label > (that.value);
        break;

      case 14: // "scalar"
        value.move< Foam::scalar > (that.value);
        break;

      case 16: // "string"
      case 17: // "unknown"
      case 18: // "raw"
        value.move< Foam::string > (that.value);
        break;

      case 12: // "word"
      case 13: // "redirection"
        value.move< Foam::word > (that.value);
        break;

      case 19: // "bool"
        value.move< bool > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  RawFoamDictionaryParser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  RawFoamDictionaryParser::yy_print_ (std::ostream& yyo,
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
      case 12: // "word"
#line 113 "../RawFoamDictionaryParser.yy"
        { yyoutput << yysym.value.template as < Foam::word > (); }
#line 400 "RawFoamDictionaryParser.tab.cc"
        break;

      case 13: // "redirection"
#line 113 "../RawFoamDictionaryParser.yy"
        { yyoutput << yysym.value.template as < Foam::word > (); }
#line 406 "RawFoamDictionaryParser.tab.cc"
        break;

      case 14: // "scalar"
#line 113 "../RawFoamDictionaryParser.yy"
        { yyoutput << yysym.value.template as < Foam::scalar > (); }
#line 412 "RawFoamDictionaryParser.tab.cc"
        break;

      case 15: // "label"
#line 113 "../RawFoamDictionaryParser.yy"
        { yyoutput << yysym.value.template as < Foam::label > (); }
#line 418 "RawFoamDictionaryParser.tab.cc"
        break;

      case 16: // "string"
#line 113 "../RawFoamDictionaryParser.yy"
        { yyoutput << yysym.value.template as < Foam::string > (); }
#line 424 "RawFoamDictionaryParser.tab.cc"
        break;

      case 17: // "unknown"
#line 113 "../RawFoamDictionaryParser.yy"
        { yyoutput << yysym.value.template as < Foam::string > (); }
#line 430 "RawFoamDictionaryParser.tab.cc"
        break;

      case 18: // "raw"
#line 113 "../RawFoamDictionaryParser.yy"
        { yyoutput << yysym.value.template as < Foam::string > (); }
#line 436 "RawFoamDictionaryParser.tab.cc"
        break;

      case 19: // "bool"
#line 113 "../RawFoamDictionaryParser.yy"
        { yyoutput << yysym.value.template as < bool > (); }
#line 442 "RawFoamDictionaryParser.tab.cc"
        break;

      default:
        break;
    }
    yyo << ')';
  }
#endif

  void
  RawFoamDictionaryParser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  RawFoamDictionaryParser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  RawFoamDictionaryParser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  RawFoamDictionaryParser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  RawFoamDictionaryParser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  RawFoamDictionaryParser::debug_level_type
  RawFoamDictionaryParser::debug_level () const
  {
    return yydebug_;
  }

  void
  RawFoamDictionaryParser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  RawFoamDictionaryParser::state_type
  RawFoamDictionaryParser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  RawFoamDictionaryParser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  RawFoamDictionaryParser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  RawFoamDictionaryParser::operator() ()
  {
    return parse ();
  }

  int
  RawFoamDictionaryParser::parse ()
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
#line 68 "../RawFoamDictionaryParser.yy"
{
    // Initialize the initial location.
    yyla.location.begin.filename = yyla.location.end.filename = &(driver.is().name());
}

#line 567 "RawFoamDictionaryParser.tab.cc"


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
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
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
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case 15: // "label"
        yylhs.value.emplace< Foam::label > ();
        break;

      case 14: // "scalar"
        yylhs.value.emplace< Foam::scalar > ();
        break;

      case 16: // "string"
      case 17: // "unknown"
      case 18: // "raw"
        yylhs.value.emplace< Foam::string > ();
        break;

      case 12: // "word"
      case 13: // "redirection"
        yylhs.value.emplace< Foam::word > ();
        break;

      case 19: // "bool"
        yylhs.value.emplace< bool > ();
        break;

      default:
        break;
    }


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
#line 120 "../RawFoamDictionaryParser.yy"
    {}
#line 715 "RawFoamDictionaryParser.tab.cc"
    break;

  case 3:
#line 121 "../RawFoamDictionaryParser.yy"
    {}
#line 721 "RawFoamDictionaryParser.tab.cc"
    break;

  case 4:
#line 124 "../RawFoamDictionaryParser.yy"
    { driver.add(yystack_[2].value.as < Foam::word > (),yystack_[1].value.as < Foam::word > ()); }
#line 727 "RawFoamDictionaryParser.tab.cc"
    break;

  case 5:
#line 125 "../RawFoamDictionaryParser.yy"
    { error(yystack_[1].location,"Redirection "+yystack_[1].value.as < Foam::word > ()+" can't be parsed"); driver.add(yystack_[2].value.as < Foam::word > (),driver.getError()); }
#line 733 "RawFoamDictionaryParser.tab.cc"
    break;

  case 6:
#line 126 "../RawFoamDictionaryParser.yy"
    { driver.add(yystack_[2].value.as < Foam::word > (),yystack_[1].value.as < Foam::scalar > ()); }
#line 739 "RawFoamDictionaryParser.tab.cc"
    break;

  case 7:
#line 127 "../RawFoamDictionaryParser.yy"
    { driver.add(yystack_[2].value.as < Foam::word > (),yystack_[1].value.as < Foam::label > ()); }
#line 745 "RawFoamDictionaryParser.tab.cc"
    break;

  case 8:
#line 128 "../RawFoamDictionaryParser.yy"
    { driver.add(yystack_[2].value.as < Foam::word > (),yystack_[1].value.as < bool > ()); }
#line 751 "RawFoamDictionaryParser.tab.cc"
    break;

  case 9:
#line 129 "../RawFoamDictionaryParser.yy"
    { driver.add(yystack_[2].value.as < Foam::word > (),yystack_[1].value.as < Foam::string > ()); }
#line 757 "RawFoamDictionaryParser.tab.cc"
    break;

  case 10:
#line 130 "../RawFoamDictionaryParser.yy"
    { driver.addTopDictAs(yystack_[1].value.as < Foam::word > ()); }
#line 763 "RawFoamDictionaryParser.tab.cc"
    break;

  case 11:
#line 131 "../RawFoamDictionaryParser.yy"
    { driver.add(yystack_[2].value.as < Foam::word > (),driver.getLabelList()); driver.startLabelList(); }
#line 769 "RawFoamDictionaryParser.tab.cc"
    break;

  case 12:
#line 132 "../RawFoamDictionaryParser.yy"
    { driver.add(yystack_[2].value.as < Foam::word > (),driver.getScalarList()); driver.startScalarList(); }
#line 775 "RawFoamDictionaryParser.tab.cc"
    break;

  case 13:
#line 133 "../RawFoamDictionaryParser.yy"
    { driver.add(yystack_[2].value.as < Foam::word > (),driver.getWordList()); driver.startWordList(); }
#line 781 "RawFoamDictionaryParser.tab.cc"
    break;

  case 14:
#line 134 "../RawFoamDictionaryParser.yy"
    { driver.add(yystack_[2].value.as < Foam::word > (),driver.getBoolList()); driver.startBoolList(); }
#line 787 "RawFoamDictionaryParser.tab.cc"
    break;

  case 15:
#line 135 "../RawFoamDictionaryParser.yy"
    { driver.add(yystack_[2].value.as < Foam::word > (),driver.getStringList()); driver.startStringList(); }
#line 793 "RawFoamDictionaryParser.tab.cc"
    break;

  case 16:
#line 136 "../RawFoamDictionaryParser.yy"
    {driver.add(yystack_[2].value.as < Foam::word > (),driver.getLabelListList()); driver.startLabelListList();}
#line 799 "RawFoamDictionaryParser.tab.cc"
    break;

  case 17:
#line 137 "../RawFoamDictionaryParser.yy"
    {driver.add(yystack_[2].value.as < Foam::word > (),driver.getScalarListList()); driver.startScalarListList();}
#line 805 "RawFoamDictionaryParser.tab.cc"
    break;

  case 18:
#line 138 "../RawFoamDictionaryParser.yy"
    {driver.add(yystack_[2].value.as < Foam::word > (),driver.getWordListList()); driver.startWordListList();}
#line 811 "RawFoamDictionaryParser.tab.cc"
    break;

  case 19:
#line 139 "../RawFoamDictionaryParser.yy"
    {driver.add(yystack_[2].value.as < Foam::word > (),driver.getBoolListList()); driver.startBoolListList();}
#line 817 "RawFoamDictionaryParser.tab.cc"
    break;

  case 20:
#line 140 "../RawFoamDictionaryParser.yy"
    {driver.add(yystack_[2].value.as < Foam::word > (),driver.getStringListList()); driver.startStringListList();}
#line 823 "RawFoamDictionaryParser.tab.cc"
    break;

  case 21:
#line 141 "../RawFoamDictionaryParser.yy"
    { driver.add(yystack_[2].value.as < Foam::word > (),driver.getError()); yyerrok; }
#line 829 "RawFoamDictionaryParser.tab.cc"
    break;

  case 22:
#line 142 "../RawFoamDictionaryParser.yy"
    { yyclearin; driver.setRawMode();}
#line 835 "RawFoamDictionaryParser.tab.cc"
    break;

  case 23:
#line 142 "../RawFoamDictionaryParser.yy"
    {
    driver.add(yystack_[4].value.as < Foam::word > (),Foam::string(Foam::string(yystack_[3].value.as < Foam::word > ())+" "+Foam::string(yystack_[1].value.as < Foam::string > ())));
                                       }
#line 843 "RawFoamDictionaryParser.tab.cc"
    break;

  case 24:
#line 145 "../RawFoamDictionaryParser.yy"
    {}
#line 849 "RawFoamDictionaryParser.tab.cc"
    break;

  case 25:
#line 145 "../RawFoamDictionaryParser.yy"
    { yyerrok; }
#line 855 "RawFoamDictionaryParser.tab.cc"
    break;

  case 26:
#line 146 "../RawFoamDictionaryParser.yy"
    {}
#line 861 "RawFoamDictionaryParser.tab.cc"
    break;

  case 27:
#line 150 "../RawFoamDictionaryParser.yy"
    {
      error(yystack_[0].location,"Can't parse regular expression key "+yystack_[0].value.as < Foam::string > ());
      YYERROR;
      // throw syntax_error(@1,"Can't parse regular expression key "+$1);
  }
#line 871 "RawFoamDictionaryParser.tab.cc"
    break;

  case 28:
#line 158 "../RawFoamDictionaryParser.yy"
    {}
#line 877 "RawFoamDictionaryParser.tab.cc"
    break;

  case 29:
#line 159 "../RawFoamDictionaryParser.yy"
    {}
#line 883 "RawFoamDictionaryParser.tab.cc"
    break;

  case 30:
#line 160 "../RawFoamDictionaryParser.yy"
    { for(int i=0;i<yystack_[3].value.as < Foam::label > ();i++) { driver.addToList(yystack_[1].value.as < Foam::label > ()); } }
#line 889 "RawFoamDictionaryParser.tab.cc"
    break;

  case 31:
#line 164 "../RawFoamDictionaryParser.yy"
    { driver.addToList(yystack_[0].value.as < Foam::label > ()); }
#line 895 "RawFoamDictionaryParser.tab.cc"
    break;

  case 32:
#line 165 "../RawFoamDictionaryParser.yy"
    { driver.addToList(yystack_[0].value.as < Foam::label > ()); }
#line 901 "RawFoamDictionaryParser.tab.cc"
    break;

  case 33:
#line 168 "../RawFoamDictionaryParser.yy"
    {}
#line 907 "RawFoamDictionaryParser.tab.cc"
    break;

  case 34:
#line 169 "../RawFoamDictionaryParser.yy"
    {}
#line 913 "RawFoamDictionaryParser.tab.cc"
    break;

  case 35:
#line 170 "../RawFoamDictionaryParser.yy"
    {}
#line 919 "RawFoamDictionaryParser.tab.cc"
    break;

  case 36:
#line 171 "../RawFoamDictionaryParser.yy"
    { for(int i=0;i<yystack_[3].value.as < Foam::label > ();i++) { driver.addToList(yystack_[1].value.as < Foam::scalar > ()); } }
#line 925 "RawFoamDictionaryParser.tab.cc"
    break;

  case 38:
#line 179 "../RawFoamDictionaryParser.yy"
    { driver.addToList(yystack_[0].value.as < Foam::scalar > ()); }
#line 931 "RawFoamDictionaryParser.tab.cc"
    break;

  case 39:
#line 180 "../RawFoamDictionaryParser.yy"
    { driver.addToList(yystack_[0].value.as < Foam::scalar > ()); }
#line 937 "RawFoamDictionaryParser.tab.cc"
    break;

  case 40:
#line 181 "../RawFoamDictionaryParser.yy"
    { driver.moveLabelListToScalar(); driver.addToList(yystack_[0].value.as < Foam::scalar > ()); }
#line 943 "RawFoamDictionaryParser.tab.cc"
    break;

  case 41:
#line 182 "../RawFoamDictionaryParser.yy"
    { driver.addToList(Foam::scalar(yystack_[0].value.as < Foam::label > ())); }
#line 949 "RawFoamDictionaryParser.tab.cc"
    break;

  case 42:
#line 186 "../RawFoamDictionaryParser.yy"
    {}
#line 955 "RawFoamDictionaryParser.tab.cc"
    break;

  case 43:
#line 187 "../RawFoamDictionaryParser.yy"
    {}
#line 961 "RawFoamDictionaryParser.tab.cc"
    break;

  case 44:
#line 191 "../RawFoamDictionaryParser.yy"
    { driver.addToList(yystack_[0].value.as < Foam::word > ()); }
#line 967 "RawFoamDictionaryParser.tab.cc"
    break;

  case 45:
#line 192 "../RawFoamDictionaryParser.yy"
    { driver.addToList(yystack_[0].value.as < Foam::word > ()); }
#line 973 "RawFoamDictionaryParser.tab.cc"
    break;

  case 46:
#line 196 "../RawFoamDictionaryParser.yy"
    {}
#line 979 "RawFoamDictionaryParser.tab.cc"
    break;

  case 47:
#line 197 "../RawFoamDictionaryParser.yy"
    {}
#line 985 "RawFoamDictionaryParser.tab.cc"
    break;

  case 48:
#line 198 "../RawFoamDictionaryParser.yy"
    { for(int i=0;i<yystack_[3].value.as < Foam::label > ();i++) { driver.addToList(yystack_[1].value.as < bool > ()); } }
#line 991 "RawFoamDictionaryParser.tab.cc"
    break;

  case 49:
#line 202 "../RawFoamDictionaryParser.yy"
    { driver.addToList(yystack_[0].value.as < bool > ()); }
#line 997 "RawFoamDictionaryParser.tab.cc"
    break;

  case 50:
#line 203 "../RawFoamDictionaryParser.yy"
    { driver.addToList(yystack_[0].value.as < bool > ()); }
#line 1003 "RawFoamDictionaryParser.tab.cc"
    break;

  case 51:
#line 207 "../RawFoamDictionaryParser.yy"
    {}
#line 1009 "RawFoamDictionaryParser.tab.cc"
    break;

  case 52:
#line 208 "../RawFoamDictionaryParser.yy"
    {}
#line 1015 "RawFoamDictionaryParser.tab.cc"
    break;

  case 53:
#line 212 "../RawFoamDictionaryParser.yy"
    { driver.addToList(yystack_[0].value.as < Foam::string > ()); }
#line 1021 "RawFoamDictionaryParser.tab.cc"
    break;

  case 54:
#line 213 "../RawFoamDictionaryParser.yy"
    { driver.addToList(yystack_[0].value.as < Foam::string > ()); }
#line 1027 "RawFoamDictionaryParser.tab.cc"
    break;

  case 55:
#line 217 "../RawFoamDictionaryParser.yy"
    {}
#line 1033 "RawFoamDictionaryParser.tab.cc"
    break;

  case 56:
#line 221 "../RawFoamDictionaryParser.yy"
    { driver.addToList(driver.getLabelList()); driver.startLabelList();}
#line 1039 "RawFoamDictionaryParser.tab.cc"
    break;

  case 57:
#line 222 "../RawFoamDictionaryParser.yy"
    {driver.addToList(driver.getLabelList()); driver.startLabelList();}
#line 1045 "RawFoamDictionaryParser.tab.cc"
    break;

  case 58:
#line 226 "../RawFoamDictionaryParser.yy"
    {}
#line 1051 "RawFoamDictionaryParser.tab.cc"
    break;

  case 59:
#line 230 "../RawFoamDictionaryParser.yy"
    {driver.addToList(driver.getScalarList()); driver.startScalarList();}
#line 1057 "RawFoamDictionaryParser.tab.cc"
    break;

  case 60:
#line 231 "../RawFoamDictionaryParser.yy"
    { driver.addToList(driver.getScalarList()); driver.startScalarList(); }
#line 1063 "RawFoamDictionaryParser.tab.cc"
    break;

  case 61:
#line 232 "../RawFoamDictionaryParser.yy"
    { driver.moveLabelListListToScalar(); driver.addToList(driver.getScalarList()); driver.startScalarList(); }
#line 1069 "RawFoamDictionaryParser.tab.cc"
    break;

  case 62:
#line 233 "../RawFoamDictionaryParser.yy"
    { driver.moveLabelListToScalar(); driver.addToList(driver.getScalarList()); driver.startScalarList(); }
#line 1075 "RawFoamDictionaryParser.tab.cc"
    break;

  case 63:
#line 237 "../RawFoamDictionaryParser.yy"
    {}
#line 1081 "RawFoamDictionaryParser.tab.cc"
    break;

  case 64:
#line 241 "../RawFoamDictionaryParser.yy"
    {driver.addToList(driver.getWordList()); driver.startWordList();}
#line 1087 "RawFoamDictionaryParser.tab.cc"
    break;

  case 65:
#line 242 "../RawFoamDictionaryParser.yy"
    {driver.addToList(driver.getWordList()); driver.startWordList();}
#line 1093 "RawFoamDictionaryParser.tab.cc"
    break;

  case 66:
#line 243 "../RawFoamDictionaryParser.yy"
    {driver.addToList(driver.getWordList()); driver.startWordList();}
#line 1099 "RawFoamDictionaryParser.tab.cc"
    break;

  case 67:
#line 247 "../RawFoamDictionaryParser.yy"
    {}
#line 1105 "RawFoamDictionaryParser.tab.cc"
    break;

  case 68:
#line 251 "../RawFoamDictionaryParser.yy"
    {driver.addToList(driver.getStringList()); driver.startStringList();}
#line 1111 "RawFoamDictionaryParser.tab.cc"
    break;

  case 69:
#line 252 "../RawFoamDictionaryParser.yy"
    { driver.addToList(driver.getStringList()); driver.startStringList(); }
#line 1117 "RawFoamDictionaryParser.tab.cc"
    break;

  case 70:
#line 253 "../RawFoamDictionaryParser.yy"
    { driver.addToList(driver.getStringList()); driver.startStringList(); }
#line 1123 "RawFoamDictionaryParser.tab.cc"
    break;

  case 71:
#line 257 "../RawFoamDictionaryParser.yy"
    {}
#line 1129 "RawFoamDictionaryParser.tab.cc"
    break;

  case 72:
#line 261 "../RawFoamDictionaryParser.yy"
    { driver.addToList(driver.getBoolList()); driver.startBoolList();}
#line 1135 "RawFoamDictionaryParser.tab.cc"
    break;

  case 73:
#line 262 "../RawFoamDictionaryParser.yy"
    { driver.addToList(driver.getBoolList()); driver.startBoolList();}
#line 1141 "RawFoamDictionaryParser.tab.cc"
    break;

  case 74:
#line 263 "../RawFoamDictionaryParser.yy"
    { driver.addToList(driver.getBoolList()); driver.startBoolList();}
#line 1147 "RawFoamDictionaryParser.tab.cc"
    break;

  case 75:
#line 268 "../RawFoamDictionaryParser.yy"
    { driver.newTopDict(); }
#line 1153 "RawFoamDictionaryParser.tab.cc"
    break;

  case 76:
#line 268 "../RawFoamDictionaryParser.yy"
    {}
#line 1159 "RawFoamDictionaryParser.tab.cc"
    break;


#line 1163 "RawFoamDictionaryParser.tab.cc"

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
  RawFoamDictionaryParser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  RawFoamDictionaryParser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
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


  const signed char RawFoamDictionaryParser::yypact_ninf_ = -60;

  const signed char RawFoamDictionaryParser::yytable_ninf_ = -1;

  const short
  RawFoamDictionaryParser::yypact_[] =
  {
     -60,    15,   -60,   -60,     9,   -60,   -60,   -60,     5,    25,
     -60,    11,    51,    53,   118,    61,    95,   125,   127,   -60,
     132,   133,   134,   135,   136,   137,   138,   139,   -60,    91,
     -60,    58,   -60,   -60,   -60,    12,   -60,   -60,   -60,    89,
     -60,    92,   -60,   105,   -60,     7,   -60,    71,    38,    56,
      74,    78,    81,   -60,   -60,    77,   -60,   -60,   -60,    43,
     110,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   140,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,    94,   -60,    28,
     -60,   -60,   -60,   -60,   -60,   108,   -60,    96,   -60,   -60,
      75,   -60,   141,   -60,   -60,    14,   -60,   123,   -60,   -60,
      72,   143,    97,   100,   111,    33,    85,   142,   144,   145,
     -60,    20,   104,   146,   128,   129,   130,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60
  };

  const unsigned char
  RawFoamDictionaryParser::yydefact_[] =
  {
       2,     0,     1,    26,     0,    27,     3,    24,     0,     0,
      75,    22,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
      21,     0,    37,    44,    38,    31,    53,    49,    56,     0,
      59,     0,    64,     0,    72,     0,    68,     0,     0,     0,
       0,     0,     0,     2,     4,     0,     5,     6,     7,     0,
       0,     9,     8,    11,    12,    13,    14,    15,    16,    17,
      18,    20,    19,     0,    31,    28,    40,    32,    33,    39,
      41,    42,    45,    46,    50,    51,    54,     0,    55,     0,
      57,    61,    58,    62,    60,     0,    63,     0,    66,    65,
       0,    67,     0,    70,    69,     0,    71,     0,    74,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,     0,     0,     0,    76,    23,    29,
      35,    43,    47,    52,    36,    30,    48
  };

  const signed char
  RawFoamDictionaryParser::yypgoto_[] =
  {
     -60,    99,   -60,   -60,   -60,   -60,     0,   -53,     2,    82,
     -52,    -5,   -58,    -6,   -59,    -4,   -57,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60
  };

  const signed char
  RawFoamDictionaryParser::yydefgoto_[] =
  {
      -1,     1,     6,    55,    29,     7,    17,    39,    18,    19,
      41,    20,    43,    21,    45,    22,    47,    23,    48,    24,
      49,    25,    50,    26,    51,    27,    52,    28,    53
  };

  const unsigned char
  RawFoamDictionaryParser::yytable_[] =
  {
     115,   114,   116,    44,    42,    46,   112,   113,    30,    38,
       8,    40,    83,     9,    54,     2,    59,    10,     3,    32,
      60,    11,    12,    13,    14,    15,    84,     4,    16,    31,
      32,     5,   121,    37,    34,    74,   122,    33,   132,    34,
      35,    36,    87,    88,    37,    99,   109,   104,    90,    93,
      91,    94,    84,    89,    56,    33,    57,    34,    74,    36,
      87,    92,    37,    32,    61,   114,   115,   116,   112,   113,
      33,    89,    34,    74,    36,     3,    85,    37,    95,    96,
      32,   127,   100,   101,     4,   105,   106,    86,     5,    97,
     133,    36,    73,   102,    75,   111,   107,    78,    62,    32,
     123,    86,   129,    76,    77,   130,    79,    80,    34,    74,
      81,    76,    77,    32,    79,    80,   131,    82,   117,   118,
      33,    58,    59,    82,   117,   118,    60,   125,    63,   119,
      64,   126,    98,   103,   108,    65,    66,    67,    68,    69,
      70,    71,    72,   120,    36,   124,   128,     0,    37,   119,
       0,   134,   110,   135,   136,     0,     0,     0,    33
  };

  const signed char
  RawFoamDictionaryParser::yycheck_[] =
  {
      59,    59,    59,     9,     9,     9,    59,    59,     3,     9,
       1,     9,     5,     4,     3,     0,     4,     8,     3,     5,
       8,    12,    13,    14,    15,    16,    19,    12,    19,     4,
       5,    16,     4,    19,    14,    15,     8,    12,     5,    14,
      15,    16,     4,     5,    19,    50,    52,    51,    48,    49,
      48,    49,    19,    15,     3,    12,     3,    14,    15,    16,
       4,     5,    19,     5,     3,   123,   125,   124,   121,   121,
      12,    15,    14,    15,    16,     3,     5,    19,     4,     5,
       5,     9,     4,     5,    12,     4,     5,    16,    16,    15,
       5,    16,     1,    15,     5,    18,    15,     5,     3,     5,
       4,    16,     5,    14,    15,     5,    14,    15,    14,    15,
       5,    14,    15,     5,    14,    15,     5,    12,    14,    15,
      12,     3,     4,    12,    14,    15,     8,     4,     3,    19,
       3,     8,    50,    51,    52,     3,     3,     3,     3,     3,
       3,     3,     3,     3,    16,     4,     3,    -1,    19,    19,
      -1,     9,    53,     9,     9,    -1,    -1,    -1,    12
  };

  const unsigned char
  RawFoamDictionaryParser::yystos_[] =
  {
       0,    21,     0,     3,    12,    16,    22,    25,     1,     4,
       8,    12,    13,    14,    15,    16,    19,    26,    28,    29,
      31,    33,    35,    37,    39,    41,    43,    45,    47,    24,
       3,     4,     5,    12,    14,    15,    16,    19,    26,    27,
      28,    30,    31,    32,    33,    34,    35,    36,    38,    40,
      42,    44,    46,    48,     3,    23,     3,     3,     3,     4,
       8,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,    15,     5,    14,    15,     5,    14,
      15,     5,    12,     5,    19,     5,    16,     4,     5,    15,
      26,    28,     5,    26,    28,     4,     5,    15,    29,    31,
       4,     5,    15,    29,    35,     4,     5,    15,    29,    33,
      21,    18,    27,    30,    32,    34,    36,    14,    15,    19,
       3,     4,     8,     4,     4,     4,     8,     9,     3,     5,
       5,     5,     5,     5,     9,     9,     9
  };

  const unsigned char
  RawFoamDictionaryParser::yyr1_[] =
  {
       0,    20,    21,    21,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    23,    22,    24,    22,    22,    25,    26,    26,
      26,    27,    27,    28,    28,    28,    28,    29,    30,    30,
      30,    30,    31,    31,    32,    32,    33,    33,    33,    34,
      34,    35,    35,    36,    36,    37,    38,    38,    39,    40,
      40,    40,    40,    41,    42,    42,    42,    43,    44,    44,
      44,    45,    46,    46,    46,    48,    47
  };

  const unsigned char
  RawFoamDictionaryParser::yyr2_[] =
  {
       0,     2,     0,     2,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     0,     5,     0,     4,     1,     1,     3,     4,
       4,     1,     2,     3,     1,     4,     4,     2,     1,     2,
       2,     2,     3,     4,     1,     2,     3,     4,     4,     1,
       2,     3,     4,     1,     2,     3,     1,     2,     3,     1,
       2,     2,     2,     3,     1,     2,     2,     3,     1,     2,
       2,     3,     1,     2,     2,     0,     4
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const RawFoamDictionaryParser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\";\"", "\"(\"", "\")\"",
  "\"[\"", "\"]\"", "\"{\"", "\"}\"", "\":\"", "\",\"", "\"word\"",
  "\"redirection\"", "\"scalar\"", "\"label\"", "\"string\"",
  "\"unknown\"", "\"raw\"", "\"bool\"", "$accept", "assignments",
  "assignment", "$@1", "$@2", "regexp", "labelList", "labelSeq",
  "scalarList", "emptyList", "scalarSeq", "wordList", "wordSeq",
  "boolList", "boolSeq", "stringList", "stringSeq", "labelListList",
  "labelListSeq", "scalarListList", "scalarListSeq", "wordListList",
  "wordListSeq", "stringListList", "stringListSeq", "boolListList",
  "boolListSeq", "dictionary", "$@3", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short
  RawFoamDictionaryParser::yyrline_[] =
  {
       0,   120,   120,   121,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   142,   145,   145,   146,   150,   158,   159,
     160,   164,   165,   168,   169,   170,   171,   175,   179,   180,
     181,   182,   186,   187,   191,   192,   196,   197,   198,   202,
     203,   207,   208,   212,   213,   217,   221,   222,   226,   230,
     231,   232,   233,   237,   241,   242,   243,   247,   251,   252,
     253,   257,   261,   262,   263,   268,   268
  };

  // Print the state stack on the debug stream.
  void
  RawFoamDictionaryParser::yystack_print_ ()
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
  RawFoamDictionaryParser::yy_reduce_print_ (int yyrule)
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
#endif // YYDEBUG


#line 46 "../RawFoamDictionaryParser.yy"
} // parserRawDict
#line 1644 "RawFoamDictionaryParser.tab.cc"

#line 270 "../RawFoamDictionaryParser.yy"


void
parserRawDict::RawFoamDictionaryParser::error(
    const location_type& l,
    const std::string& m
)
{
    using namespace Foam;

    std::ostringstream o;
    o << "Parser error " << m << " at " << l;

    driver.setError(o.str());

    switch(driver.errorMode()) {
        case RawFoamDictionaryParserDriver::WarnError:
            WarningIn("RawFoamDictionaryParser")
                << o.str()
                    << endl;
            break;
        case RawFoamDictionaryParserDriver::FailError:
            //            Foam::Info << "Fail" << endl;
            FatalErrorIn("RawFoamDictionaryParser")
                << o.str()
                    << endl
                    << exit(FatalError);
            break;
        case RawFoamDictionaryParserDriver::SilentError:
            break;
    }
}

parserRawDict::RawFoamDictionaryParser::symbol_type parserRawDict::yylex(
    Foam::RawFoamDictionaryParserDriver &driver
) {
    using namespace Foam;

    static token lastToken;
    static bool pushed=false;  // work around a EOF-problem

    RawFoamDictionaryParser::location_type loc(
        &(driver.is().name()),
        driver.is().lineNumber(),
        0
    );

    // Info << nl << driver.is().eof() << " " << driver.is().good()
    //     << driver.is().bad() << endl;
    if(driver.debug()>2 ) {
        Info << "Stream: Good " << driver.is().good() << " EOF "
            << driver.is().eof() << endl;
    }

    if(driver.is().eof()) {
        if(!pushed) {
            if(driver.debug()>2 ) {
                Info << "Detected EOF" << endl;
            }
            return RawFoamDictionaryParser::make_END_OF_FILE(loc);
        }
    }
    pushed=false;

    if(driver.rawMode()) {
        if(driver.debug()>2 ) {
            Info << "Starting raw mode " << endl;
        }

        Foam::OStringStream result;
        result << lastToken;

        while(driver.is().good()) {
            token tok(driver.is());
            if(
                tok.isPunctuation()
                &&
                tok.pToken()==token::END_STATEMENT
            ) {
                if(driver.debug()>2 ) {
                    Info << "Found ';'" << endl;
                    Info << "Stream: Good " << driver.is().good() << " EOF "
                        << driver.is().eof() << endl;
                }
                driver.is().putBack(tok);
                pushed=true;
                break;
            }
            result << " " << tok;
        }
        driver.resetRawMode();
        return RawFoamDictionaryParser::make_RAW(result.str(),loc);
    }
    token nextToken(driver.is());
    lastToken=nextToken;

    if(driver.debug()>2 ) {
        Info << "Next token: " << nextToken.info() << endl;
    }
    switch(nextToken.type()) {
        case token::WORD:
            if(
                nextToken.wordToken()=="yes"
                ||
                nextToken.wordToken()=="true"
                ||
                nextToken.wordToken()=="on"
            ) {
                return RawFoamDictionaryParser::make_BOOL(
                    true,
                    loc
                );
            }
            if(
                nextToken.wordToken()=="no"
                ||
                nextToken.wordToken()=="false"
                ||
                nextToken.wordToken()=="off"
            ) {
                return RawFoamDictionaryParser::make_BOOL(
                    false,
                    loc
                );
            }
            if(nextToken.wordToken()[0]=='$') {
                return RawFoamDictionaryParser::make_REDIRECTION(
                    nextToken.wordToken(),
                    loc
                );
            }
            return RawFoamDictionaryParser::make_WORD(
                nextToken.wordToken(),
                loc
            );
            break;
        case token::STRING:
            return RawFoamDictionaryParser::make_STRING(
                nextToken.stringToken(),
                loc
            );
            break;
        case token::FLOAT_SCALAR:
            return RawFoamDictionaryParser::make_SCALAR(
                scalar(nextToken.floatScalarToken()),
                loc
            );
            break;
        case token::DOUBLE_SCALAR:
            return RawFoamDictionaryParser::make_SCALAR(
                scalar(nextToken.doubleScalarToken()),
                loc
            );
            break;
#ifdef FOAM_HAS_LONG_DOUBLE_SCALAR
        case token::LONG_DOUBLE_SCALAR:
            return RawFoamDictionaryParser::make_SCALAR(
                scalar(nextToken.longDoubleScalarToken()),
                loc
            );
            break;
#endif
        case token::LABEL:
            return RawFoamDictionaryParser::make_LABEL(
                nextToken.labelToken(),
                loc
            );
            break;
        case token::PUNCTUATION:
            switch(nextToken.pToken()) {
                case token::BEGIN_BLOCK:
                    return RawFoamDictionaryParser::make_BEGIN_BLOCK(loc);
                case token::END_BLOCK:
                    return RawFoamDictionaryParser::make_END_BLOCK(loc);
                case token::BEGIN_LIST:
                    return RawFoamDictionaryParser::make_BEGIN_LIST(loc);
                case token::END_LIST:
                    return RawFoamDictionaryParser::make_END_LIST(loc);
                case token::END_STATEMENT:
                    return RawFoamDictionaryParser::make_END_STATEMENT(loc);
                default:
                    return RawFoamDictionaryParser::make_UNKNOWN(string(nextToken.pToken()),loc);
            }
            break;
#ifdef FOAM_TOKEN_CLASS_HAS_FATAL_ERROR
        case token::FATALERROR:
#else
        case token::ERROR:
#endif
            return RawFoamDictionaryParser::make_END_OF_FILE(loc);
            break;
        case token::COMPOUND:
        case token::UNDEFINED:
        default:
            return RawFoamDictionaryParser::make_UNKNOWN(string("undefined token"),loc);
            break;
    }
}
