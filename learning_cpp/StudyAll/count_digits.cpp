#include <iostream>
#include <cctype>
using std::endl, std::cout, std::string;

int countDigits(const string& s) {
	int count = 0;
	for (char c : s) {
		if (std::isdigit(static_cast<unsigned char>(c))) {
			count++;
		}
	}
	return count;
}

int main() {
	cout << "Enter a string: ";
	string str;
	std::cin >> str;
	cout << "Number of digits: " << countDigits(str) << endl;
}
