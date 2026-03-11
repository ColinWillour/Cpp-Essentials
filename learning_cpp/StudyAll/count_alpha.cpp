#include <cctype>
#include <iostream>
#include <string>
using std::endl, std::cout, std::string;

int countLetters(const std::string& s) {
	int count = 0;
	for (char c : s) {
		if (std::isalpha(c)) {
			count++;
		}
	}
	return count;
}

int main() {
	string str;
	cout << "Enter a string: ";
	std::cin >> str;
	int count = countLetters(str);
	cout << "Letter Count: " << count << endl;
	return 0;
}
