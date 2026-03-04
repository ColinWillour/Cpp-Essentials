// Read a file and print the longest line.

#include <iostream>
#include <string>
#include <fstream>
using std::endl, std::cout, std::string;

int main() {
	std::ifstream file("long.txt");
	if (!file.is_open()) {
		cout << "File Error" << endl;
		return 1;
	}

	int size;
	string line;
	string longest_line;
	while (getline(file, line)) {
		if (line.size() > size) {
			size = line.size();
			longest_line = line;
		}
	}
	cout << "Longest line: " << longest_line << endl;
	cout << "Length: " << size << endl;
}
