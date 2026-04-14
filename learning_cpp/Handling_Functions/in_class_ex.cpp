#include <iostream>
#include <string>
#include <cctype>
using std::endl, std::cout, std::string;

/*int main() {
	string s = "Hello World";
	int index = 0;
	for (int i = 0; i < s.size(); i += 2) {
		s[i] = std::toupper(s[i]);
	}
	for (char c : s) {
		cout << c;
	}
	cout << "" << endl;
	return 0;
}*/

int main() {
	string s = "HELlo wORld";
	int index = 0;
	for (char& c : s) {
		if (index % 2 == 0) {
			c = toupper(c);
		}
		else {
			c = tolower(c);
		}
		index += 1;
	}
	for (char c : s) {
		cout << c;
	}
	cout << "" << endl;
	return 0;
}

