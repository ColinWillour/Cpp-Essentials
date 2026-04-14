#include <iostream>
#include <cctype>
#include <string>
using std::endl, std::cout, std::endl;

std::string subString(std::string str) {
	size_t pos = 0;
	if (str.find(".") != std::string::npos) {
		pos = str.find(".");
	}
	else {
		return "";
	}
	
	return str.substr(pos + 1);
}

int main() {
	std::string line = "something.sup";
	cout << subString(line) << endl;
	return 0;
}
