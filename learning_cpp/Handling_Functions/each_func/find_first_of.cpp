// find_first_of(), Find first vowel in a sentence

#include <iostream>
#include <string>
using std::cout, std::endl, std::string;

int main() {
	string s;
	cout << "Enter a sentence: ";
	std::getline(std::cin, s);

	size_t pos = s.find_first_of("aAeEiIoOuU");

	if (pos != string::npos)
		cout << "First vowel at index: " << pos << endl;
	else
		cout << "No vowels found" << endl;

	return 0;
}

