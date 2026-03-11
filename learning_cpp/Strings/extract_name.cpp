#include <iostream>
#include <cctype>
#include <string>
using std::endl, std::cout, std::string;

int main() {
	string name = "Colin Willour";
	int space_pos = name.find(" ");
	string first = name.substr(0, space_pos);
	string last = name.substr(space_pos + 1, name.length());
	cout << first << " " << last << endl;
	return 0;
}
