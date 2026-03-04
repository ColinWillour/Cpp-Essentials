// Read a file and count how many times the word "apple" appears.

#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
using std::cout, std::endl, std::string;

int main() {
	std::ifstream file("apple.txt");
	if (!file.is_open()) {
		cout << "File Error" << endl;
		return 12;
	}

	string line;
	int apple_count = 0;
	while (getline(file, line)) {
		for (char &c : line) {
			c = tolower(c);
		}

		if (line.find("apple") == string::npos) {
			continue;
		}
		apple_count += 1;
	}

	cout << apple_count << endl; 
}
