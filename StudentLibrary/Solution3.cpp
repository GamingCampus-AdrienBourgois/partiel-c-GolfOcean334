#include "Solution3.h"
#include <algorithm>

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
}

void Solution3::SortWords() 
{
    std::sort(words.begin(), words.end(), [](const std::string& a, const std::string& b) {
        std::string aLower = a;
        std::transform(aLower.begin(), aLower.end(), aLower.begin(), ::tolower);

        std::string bLower = b;
        std::transform(bLower.begin(), bLower.end(), bLower.begin(), ::tolower);

        return aLower < bLower;
        });
}

std::vector<std::string> Solution3::GetSortedWords() const
{
	return words;
}



#endif
