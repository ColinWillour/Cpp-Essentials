#include <iostream>
#include <cctype>
using std::endl, std::cout, std::string;

int countDigits(string s) {
	int count = 0;
	for (char c : s) {
		if (std::isdigit(c) == true) {
			count++;
		}
	}
	return count;
}

int main() {
	string s = "123_hello_there_321";
	int count = countDigits(s);
	cout << "Digit Count: " << count << endl;
	return 0;
}
