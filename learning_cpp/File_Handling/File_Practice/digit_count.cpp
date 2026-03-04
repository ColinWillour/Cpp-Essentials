// Read a file and count how many digits appear in the entire file.

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using std::cout, std::endl, std::string;

int main() {
	std::ifstream file("digits.txt");
	if (!file.is_open()) {
		cout << "File Error" << endl;
		return 1;
	}

	string line;
	int digit_count;
	while (getline(file, line)) {
		for (char c : line) {
			if (isdigit(c)) {
				digit_count += 1;
			}
		}
	}
	cout << "Number of digits: " << digit_count << endl;

	file.close();
}
