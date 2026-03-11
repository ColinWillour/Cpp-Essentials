#include <iostream>
#include <string>
using std::endl, std::cout, std::string, std::cin;

int main() {
	string s = "Hello";
	for (/*const*/ char& c : s) {
		c = 'a';
		cout << c << endl;
	}
	return 0;
}
