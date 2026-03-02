//rfind(), Find last occurrence of a word.

#include <iostream>
#include <string>
using std::string, std::cout, std::endl;

int main() {
	string text, word;
	cout << "Enter a sentence: ";
	std::getline(std::cin, text);

	cout << "Enter word to search: ";
	std::cin >> word;

	size_t pos = text.rfind(word);

	if (pos != string::npos)
		cout << "Last occurrence at index: " << pos << endl;
	else
		cout << "Not found" << endl;
	
	return 0;
}

