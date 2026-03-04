// Read a file and print only the lines that contain the word "error".

#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
using std::cout, std::endl, std::string;

int main() {
	std::ifstream file("error.txt");
	if (!file.is_open()) {
		cout << "File Error" << endl;
		return 1;
	}

	string line;
	while(getline(file, line)) {
		for (char &c : line) {
			c = tolower(c);
		}
		if (line.find("error") == string::npos) {
			continue;
		}
		else {
			cout << "ERROR: " << line << endl;
		}
	}
	file.close();
}
