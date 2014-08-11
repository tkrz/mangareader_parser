/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf -L C++ -E -t C:/Users/tkrz/AppData/Local/Temp/tkrz/mangareader_parser-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "C:/Users/tkrz/AppData/Local/Temp/tkrz/mangareader_parser-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "pl.tkrz.mangareader.parser.ExampleProxy.h"
#include "pl.tkrz.mangareader.parser.MangareaderParserModule.h"


#line 14 "C:/Users/tkrz/AppData/Local/Temp/tkrz/mangareader_parser-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 12, duplicates = 0 */

class MangareaderParserBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
MangareaderParserBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
MangareaderParserBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 39,
      MAX_WORD_LENGTH = 50,
      MIN_HASH_VALUE = 39,
      MAX_HASH_VALUE = 50
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 16 "C:/Users/tkrz/AppData/Local/Temp/tkrz/mangareader_parser-generated/KrollGeneratedBindings.gperf"
      {"pl.tkrz.mangareader.parser.ExampleProxy", ::pl::tkrz::mangareader::parser::mangareaderparser::ExampleProxy::bindProxy, ::pl::tkrz::mangareader::parser::mangareaderparser::ExampleProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 17 "C:/Users/tkrz/AppData/Local/Temp/tkrz/mangareader_parser-generated/KrollGeneratedBindings.gperf"
      {"pl.tkrz.mangareader.parser.MangareaderParserModule", ::pl::tkrz::mangareader::parser::MangareaderParserModule::bindProxy, ::pl::tkrz::mangareader::parser::MangareaderParserModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "C:/Users/tkrz/AppData/Local/Temp/tkrz/mangareader_parser-generated/KrollGeneratedBindings.gperf"

