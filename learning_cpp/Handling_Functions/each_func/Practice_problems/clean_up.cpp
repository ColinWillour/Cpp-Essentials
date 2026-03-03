/*
    Write a program that:

    - Asks the user to enter a full sentence.
    - Removes all punctuation characters from the sentence.
    - Counts how many characters were removed.
    - Prints the cleaned sentence.
    - Prints how many characters were removed.
*/

#include <iostream>
#include <string>
using std::endl, std::cin, std::string, std::getline, std::cout;

int main() {
	string sentence;
	cout << "Enter a full sentence: ";
	getline(cin, sentence);
	size_t pos = sentence.find_first_of(".?!");

	while (pos != string::npos) {
		sentence.erase(pos, 1);
		pos = sentence.find_first_of(".?!");
	}

	cout << "Without punctuation: " << sentence << endl;
	return 0;
}
