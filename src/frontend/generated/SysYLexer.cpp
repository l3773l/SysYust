

#include "SysYLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct SysYLexerStaticData final {
  SysYLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SysYLexerStaticData(const SysYLexerStaticData&) = delete;
  SysYLexerStaticData(SysYLexerStaticData&&) = delete;
  SysYLexerStaticData& operator=(const SysYLexerStaticData&) = delete;
  SysYLexerStaticData& operator=(SysYLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag sysylexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
SysYLexerStaticData *sysylexerLexerStaticData = nullptr;

void sysylexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (sysylexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(sysylexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SysYLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "T__25", "T__26", "T__27", "T__28", "T__29", "T__30", "T__31", "T__32", 
      "Ident", "Nondigit", "Digit", "IntConst", "DecimalConstant", "NonzeroDigit", 
      "OctalConstant", "OctalDigit", "HexadecimalConstant", "HexadecimalPrefix", 
      "HexadecimalDigit", "FloatConst", "DecimalFloatingConstant", "FractionalConstant", 
      "ExponentPart", "Sign", "HexadecimalFloatingConstant", "HexadecimalFractionalConstant", 
      "BinaryExponentPart", "Whitespace", "Newline", "BlockComment", "LineComment"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'const'", "','", "';'", "'void'", "'int'", "'float'", "'['", 
      "']'", "'='", "'{'", "'}'", "'('", "')'", "'if'", "'else'", "'while'", 
      "'break'", "'continue'", "'return'", "'+'", "'-'", "'!'", "'*'", "'/'", 
      "'%'", "'<'", "'>'", "'<='", "'>='", "'=='", "'!='", "'&&'", "'||'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "Ident", "IntConst", "FloatConst", "Whitespace", "Newline", "BlockComment", 
      "LineComment"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,40,399,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,1,0,
  	1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,
  	4,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,
  	11,1,11,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,
  	15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,
  	17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,
  	20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,
  	27,1,27,1,27,1,28,1,28,1,28,1,29,1,29,1,29,1,30,1,30,1,30,1,31,1,31,1,
  	31,1,32,1,32,1,32,1,33,1,33,1,33,5,33,226,8,33,10,33,12,33,229,9,33,1,
  	34,1,34,1,35,1,35,1,36,1,36,1,36,3,36,238,8,36,1,37,1,37,5,37,242,8,37,
  	10,37,12,37,245,9,37,1,38,1,38,1,39,1,39,5,39,251,8,39,10,39,12,39,254,
  	9,39,1,40,1,40,1,41,1,41,4,41,260,8,41,11,41,12,41,261,1,42,1,42,1,42,
  	1,43,1,43,1,44,1,44,3,44,271,8,44,1,45,1,45,3,45,275,8,45,1,45,4,45,278,
  	8,45,11,45,12,45,279,1,45,1,45,3,45,284,8,45,1,46,5,46,287,8,46,10,46,
  	12,46,290,9,46,1,46,1,46,4,46,294,8,46,11,46,12,46,295,1,46,4,46,299,
  	8,46,11,46,12,46,300,1,46,1,46,3,46,305,8,46,1,47,1,47,3,47,309,8,47,
  	1,47,4,47,312,8,47,11,47,12,47,313,1,48,1,48,1,49,1,49,1,49,4,49,321,
  	8,49,11,49,12,49,322,3,49,325,8,49,1,49,1,49,1,50,5,50,330,8,50,10,50,
  	12,50,333,9,50,1,50,1,50,4,50,337,8,50,11,50,12,50,338,1,50,4,50,342,
  	8,50,11,50,12,50,343,1,50,1,50,3,50,348,8,50,1,51,1,51,3,51,352,8,51,
  	1,51,4,51,355,8,51,11,51,12,51,356,1,52,4,52,360,8,52,11,52,12,52,361,
  	1,52,1,52,1,53,1,53,3,53,368,8,53,1,53,3,53,371,8,53,1,53,1,53,1,54,1,
  	54,1,54,1,54,5,54,379,8,54,10,54,12,54,382,9,54,1,54,1,54,1,54,1,54,1,
  	54,1,55,1,55,1,55,1,55,5,55,393,8,55,10,55,12,55,396,9,55,1,55,1,55,1,
  	380,0,56,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,
  	13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,
  	49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,0,71,0,
  	73,35,75,0,77,0,79,0,81,0,83,0,85,0,87,0,89,36,91,0,93,0,95,0,97,0,99,
  	0,101,0,103,0,105,37,107,38,109,39,111,40,1,0,11,3,0,65,90,95,95,97,122,
  	1,0,48,57,1,0,49,57,1,0,48,55,2,0,88,88,120,120,3,0,48,57,65,70,97,102,
  	2,0,69,69,101,101,2,0,43,43,45,45,2,0,80,80,112,112,2,0,9,9,32,32,2,0,
  	10,10,13,13,412,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,
  	0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,
  	0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,
  	31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,
  	0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,
  	0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,
  	63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,73,1,0,0,0,0,89,1,0,0,0,0,105,
  	1,0,0,0,0,107,1,0,0,0,0,109,1,0,0,0,0,111,1,0,0,0,1,113,1,0,0,0,3,119,
  	1,0,0,0,5,121,1,0,0,0,7,123,1,0,0,0,9,128,1,0,0,0,11,132,1,0,0,0,13,138,
  	1,0,0,0,15,140,1,0,0,0,17,142,1,0,0,0,19,144,1,0,0,0,21,146,1,0,0,0,23,
  	148,1,0,0,0,25,150,1,0,0,0,27,152,1,0,0,0,29,155,1,0,0,0,31,160,1,0,0,
  	0,33,166,1,0,0,0,35,172,1,0,0,0,37,181,1,0,0,0,39,188,1,0,0,0,41,190,
  	1,0,0,0,43,192,1,0,0,0,45,194,1,0,0,0,47,196,1,0,0,0,49,198,1,0,0,0,51,
  	200,1,0,0,0,53,202,1,0,0,0,55,204,1,0,0,0,57,207,1,0,0,0,59,210,1,0,0,
  	0,61,213,1,0,0,0,63,216,1,0,0,0,65,219,1,0,0,0,67,222,1,0,0,0,69,230,
  	1,0,0,0,71,232,1,0,0,0,73,237,1,0,0,0,75,239,1,0,0,0,77,246,1,0,0,0,79,
  	248,1,0,0,0,81,255,1,0,0,0,83,257,1,0,0,0,85,263,1,0,0,0,87,266,1,0,0,
  	0,89,270,1,0,0,0,91,283,1,0,0,0,93,304,1,0,0,0,95,306,1,0,0,0,97,315,
  	1,0,0,0,99,317,1,0,0,0,101,347,1,0,0,0,103,349,1,0,0,0,105,359,1,0,0,
  	0,107,370,1,0,0,0,109,374,1,0,0,0,111,388,1,0,0,0,113,114,5,99,0,0,114,
  	115,5,111,0,0,115,116,5,110,0,0,116,117,5,115,0,0,117,118,5,116,0,0,118,
  	2,1,0,0,0,119,120,5,44,0,0,120,4,1,0,0,0,121,122,5,59,0,0,122,6,1,0,0,
  	0,123,124,5,118,0,0,124,125,5,111,0,0,125,126,5,105,0,0,126,127,5,100,
  	0,0,127,8,1,0,0,0,128,129,5,105,0,0,129,130,5,110,0,0,130,131,5,116,0,
  	0,131,10,1,0,0,0,132,133,5,102,0,0,133,134,5,108,0,0,134,135,5,111,0,
  	0,135,136,5,97,0,0,136,137,5,116,0,0,137,12,1,0,0,0,138,139,5,91,0,0,
  	139,14,1,0,0,0,140,141,5,93,0,0,141,16,1,0,0,0,142,143,5,61,0,0,143,18,
  	1,0,0,0,144,145,5,123,0,0,145,20,1,0,0,0,146,147,5,125,0,0,147,22,1,0,
  	0,0,148,149,5,40,0,0,149,24,1,0,0,0,150,151,5,41,0,0,151,26,1,0,0,0,152,
  	153,5,105,0,0,153,154,5,102,0,0,154,28,1,0,0,0,155,156,5,101,0,0,156,
  	157,5,108,0,0,157,158,5,115,0,0,158,159,5,101,0,0,159,30,1,0,0,0,160,
  	161,5,119,0,0,161,162,5,104,0,0,162,163,5,105,0,0,163,164,5,108,0,0,164,
  	165,5,101,0,0,165,32,1,0,0,0,166,167,5,98,0,0,167,168,5,114,0,0,168,169,
  	5,101,0,0,169,170,5,97,0,0,170,171,5,107,0,0,171,34,1,0,0,0,172,173,5,
  	99,0,0,173,174,5,111,0,0,174,175,5,110,0,0,175,176,5,116,0,0,176,177,
  	5,105,0,0,177,178,5,110,0,0,178,179,5,117,0,0,179,180,5,101,0,0,180,36,
  	1,0,0,0,181,182,5,114,0,0,182,183,5,101,0,0,183,184,5,116,0,0,184,185,
  	5,117,0,0,185,186,5,114,0,0,186,187,5,110,0,0,187,38,1,0,0,0,188,189,
  	5,43,0,0,189,40,1,0,0,0,190,191,5,45,0,0,191,42,1,0,0,0,192,193,5,33,
  	0,0,193,44,1,0,0,0,194,195,5,42,0,0,195,46,1,0,0,0,196,197,5,47,0,0,197,
  	48,1,0,0,0,198,199,5,37,0,0,199,50,1,0,0,0,200,201,5,60,0,0,201,52,1,
  	0,0,0,202,203,5,62,0,0,203,54,1,0,0,0,204,205,5,60,0,0,205,206,5,61,0,
  	0,206,56,1,0,0,0,207,208,5,62,0,0,208,209,5,61,0,0,209,58,1,0,0,0,210,
  	211,5,61,0,0,211,212,5,61,0,0,212,60,1,0,0,0,213,214,5,33,0,0,214,215,
  	5,61,0,0,215,62,1,0,0,0,216,217,5,38,0,0,217,218,5,38,0,0,218,64,1,0,
  	0,0,219,220,5,124,0,0,220,221,5,124,0,0,221,66,1,0,0,0,222,227,3,69,34,
  	0,223,226,3,69,34,0,224,226,3,71,35,0,225,223,1,0,0,0,225,224,1,0,0,0,
  	226,229,1,0,0,0,227,225,1,0,0,0,227,228,1,0,0,0,228,68,1,0,0,0,229,227,
  	1,0,0,0,230,231,7,0,0,0,231,70,1,0,0,0,232,233,7,1,0,0,233,72,1,0,0,0,
  	234,238,3,75,37,0,235,238,3,79,39,0,236,238,3,83,41,0,237,234,1,0,0,0,
  	237,235,1,0,0,0,237,236,1,0,0,0,238,74,1,0,0,0,239,243,3,77,38,0,240,
  	242,3,71,35,0,241,240,1,0,0,0,242,245,1,0,0,0,243,241,1,0,0,0,243,244,
  	1,0,0,0,244,76,1,0,0,0,245,243,1,0,0,0,246,247,7,2,0,0,247,78,1,0,0,0,
  	248,252,5,48,0,0,249,251,3,81,40,0,250,249,1,0,0,0,251,254,1,0,0,0,252,
  	250,1,0,0,0,252,253,1,0,0,0,253,80,1,0,0,0,254,252,1,0,0,0,255,256,7,
  	3,0,0,256,82,1,0,0,0,257,259,3,85,42,0,258,260,3,87,43,0,259,258,1,0,
  	0,0,260,261,1,0,0,0,261,259,1,0,0,0,261,262,1,0,0,0,262,84,1,0,0,0,263,
  	264,5,48,0,0,264,265,7,4,0,0,265,86,1,0,0,0,266,267,7,5,0,0,267,88,1,
  	0,0,0,268,271,3,91,45,0,269,271,3,99,49,0,270,268,1,0,0,0,270,269,1,0,
  	0,0,271,90,1,0,0,0,272,274,3,93,46,0,273,275,3,95,47,0,274,273,1,0,0,
  	0,274,275,1,0,0,0,275,284,1,0,0,0,276,278,3,71,35,0,277,276,1,0,0,0,278,
  	279,1,0,0,0,279,277,1,0,0,0,279,280,1,0,0,0,280,281,1,0,0,0,281,282,3,
  	95,47,0,282,284,1,0,0,0,283,272,1,0,0,0,283,277,1,0,0,0,284,92,1,0,0,
  	0,285,287,3,71,35,0,286,285,1,0,0,0,287,290,1,0,0,0,288,286,1,0,0,0,288,
  	289,1,0,0,0,289,291,1,0,0,0,290,288,1,0,0,0,291,293,5,46,0,0,292,294,
  	3,71,35,0,293,292,1,0,0,0,294,295,1,0,0,0,295,293,1,0,0,0,295,296,1,0,
  	0,0,296,305,1,0,0,0,297,299,3,71,35,0,298,297,1,0,0,0,299,300,1,0,0,0,
  	300,298,1,0,0,0,300,301,1,0,0,0,301,302,1,0,0,0,302,303,5,46,0,0,303,
  	305,1,0,0,0,304,288,1,0,0,0,304,298,1,0,0,0,305,94,1,0,0,0,306,308,7,
  	6,0,0,307,309,3,97,48,0,308,307,1,0,0,0,308,309,1,0,0,0,309,311,1,0,0,
  	0,310,312,3,71,35,0,311,310,1,0,0,0,312,313,1,0,0,0,313,311,1,0,0,0,313,
  	314,1,0,0,0,314,96,1,0,0,0,315,316,7,7,0,0,316,98,1,0,0,0,317,324,3,85,
  	42,0,318,325,3,101,50,0,319,321,3,87,43,0,320,319,1,0,0,0,321,322,1,0,
  	0,0,322,320,1,0,0,0,322,323,1,0,0,0,323,325,1,0,0,0,324,318,1,0,0,0,324,
  	320,1,0,0,0,325,326,1,0,0,0,326,327,3,103,51,0,327,100,1,0,0,0,328,330,
  	3,87,43,0,329,328,1,0,0,0,330,333,1,0,0,0,331,329,1,0,0,0,331,332,1,0,
  	0,0,332,334,1,0,0,0,333,331,1,0,0,0,334,336,5,46,0,0,335,337,3,87,43,
  	0,336,335,1,0,0,0,337,338,1,0,0,0,338,336,1,0,0,0,338,339,1,0,0,0,339,
  	348,1,0,0,0,340,342,3,87,43,0,341,340,1,0,0,0,342,343,1,0,0,0,343,341,
  	1,0,0,0,343,344,1,0,0,0,344,345,1,0,0,0,345,346,5,46,0,0,346,348,1,0,
  	0,0,347,331,1,0,0,0,347,341,1,0,0,0,348,102,1,0,0,0,349,351,7,8,0,0,350,
  	352,3,97,48,0,351,350,1,0,0,0,351,352,1,0,0,0,352,354,1,0,0,0,353,355,
  	3,71,35,0,354,353,1,0,0,0,355,356,1,0,0,0,356,354,1,0,0,0,356,357,1,0,
  	0,0,357,104,1,0,0,0,358,360,7,9,0,0,359,358,1,0,0,0,360,361,1,0,0,0,361,
  	359,1,0,0,0,361,362,1,0,0,0,362,363,1,0,0,0,363,364,6,52,0,0,364,106,
  	1,0,0,0,365,367,5,13,0,0,366,368,5,10,0,0,367,366,1,0,0,0,367,368,1,0,
  	0,0,368,371,1,0,0,0,369,371,5,10,0,0,370,365,1,0,0,0,370,369,1,0,0,0,
  	371,372,1,0,0,0,372,373,6,53,0,0,373,108,1,0,0,0,374,375,5,47,0,0,375,
  	376,5,42,0,0,376,380,1,0,0,0,377,379,9,0,0,0,378,377,1,0,0,0,379,382,
  	1,0,0,0,380,381,1,0,0,0,380,378,1,0,0,0,381,383,1,0,0,0,382,380,1,0,0,
  	0,383,384,5,42,0,0,384,385,5,47,0,0,385,386,1,0,0,0,386,387,6,54,0,0,
  	387,110,1,0,0,0,388,389,5,47,0,0,389,390,5,47,0,0,390,394,1,0,0,0,391,
  	393,8,10,0,0,392,391,1,0,0,0,393,396,1,0,0,0,394,392,1,0,0,0,394,395,
  	1,0,0,0,395,397,1,0,0,0,396,394,1,0,0,0,397,398,6,55,0,0,398,112,1,0,
  	0,0,30,0,225,227,237,243,252,261,270,274,279,283,288,295,300,304,308,
  	313,322,324,331,338,343,347,351,356,361,367,370,380,394,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  sysylexerLexerStaticData = staticData.release();
}

}

SysYLexer::SysYLexer(CharStream *input) : Lexer(input) {
  SysYLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *sysylexerLexerStaticData->atn, sysylexerLexerStaticData->decisionToDFA, sysylexerLexerStaticData->sharedContextCache);
}

SysYLexer::~SysYLexer() {
  delete _interpreter;
}

std::string SysYLexer::getGrammarFileName() const {
  return "SysY.g4";
}

const std::vector<std::string>& SysYLexer::getRuleNames() const {
  return sysylexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& SysYLexer::getChannelNames() const {
  return sysylexerLexerStaticData->channelNames;
}

const std::vector<std::string>& SysYLexer::getModeNames() const {
  return sysylexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& SysYLexer::getVocabulary() const {
  return sysylexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SysYLexer::getSerializedATN() const {
  return sysylexerLexerStaticData->serializedATN;
}

const atn::ATN& SysYLexer::getATN() const {
  return *sysylexerLexerStaticData->atn;
}




void SysYLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  sysylexerLexerInitialize();
#else
  ::antlr4::internal::call_once(sysylexerLexerOnceFlag, sysylexerLexerInitialize);
#endif
}
