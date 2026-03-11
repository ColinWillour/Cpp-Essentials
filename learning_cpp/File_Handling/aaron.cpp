// print every line in file, if "hello" in file, print found else not found

#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
using std::endl, std::cout, std::string;

int main() {
	std::ifstream file("hello.txt");
	if (!file.is_open()) {
		cout << "File error, file isn't open" << endl;
		return 1;
	}

	string line;
	bool contains = false;
	while (getline(file, line)) {
		for (char& c : line) {
			c = std::tolower(c);
		}
		if (line.find("hello") != string::npos) {
			contains = true;
		}
	}
	if (contains == true) {
		cout << "Found it" << endl;
	}
	else {
		cout << "Not in file" << endl;
	}
	return 0;
}

