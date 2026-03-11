#include <iostream>
#include <cctype>
using std::endl, std::cout, std::string;

int countVowels(const std::string& s) {
	int count = 0;
	size_t pos = s.find_first_of("aeiouAEIOU");
	while (pos != string::npos) {
		count++;
		pos = s.find_first_of("aeiouAEIOU", pos + 1);
	}
	return count;
}

int main() {
	string str;
	cout << "Enter a string: ";
	std::cin >> str;
	int vowel_count = countVowels(str);
	cout << "Vowel Count: " << vowel_count << endl;
	return 0;
}
