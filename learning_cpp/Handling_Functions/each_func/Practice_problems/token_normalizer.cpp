#include <iostream>
#include <string>
#include <cctype>
using std::cout, std::cin, std::endl, std::string;

/*
    TOKEN NORMALIZER — SHORT VERSION

    Transform the input string using ONLY:
    find, find_first_of, find_first_not_of, find_last_of,
    substr, erase, insert, append, replace, rfind,
    isdigit, isxdigit, isalnum, toupper, tolower.

    RULES:

    1. Trim:
       Remove leading/trailing NON‑alphanumeric chars.

    2. Space Normalize:
       Turn any run of spaces/tabs/newlines into ONE space.

    3. Hex Tokens:
       Tokens starting with 0x/0X + hex digits → uppercase.

    4. Digit Tokens:
       Tokens of ONLY digits → wrap in [ ].

    5. Word Tokens:
       Tokens of ONLY letters → lowercase.

    6. Reverse Last Token:
       Find last token with rfind and reverse it manually.

    7. Print final string.
*/

int main() {
	string s;
	std::getline(cin, s);

	// TODO: Implement all rules.
	size_t pos = s.find_first_of(",.;'/)(*&^%$#@!<>?:");
	s.erase(pos, 1);
	pos = s.find_last_of(",.;'/)(*&^%$#@!<>?:");
	s.erase(pos, 1);
	
	s.find_first_of("

	cout << s << endl;
	return 0;
}

