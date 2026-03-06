#include <iostream>
#include <string>
#include <fstream>
using std::endl, std::string, std::cout;

int main() {
	std::ifstream file("letters.txt");
	if (!file.is_open()) {
		cout << "File Error" << endl;
		return 1;
	}

	int letter_count = 0;
	string line;
	while (getline(file, line)) {
		for (char c : line) {
			if (isalpha(c)) {
				letter_count++;
			}
		}
	}
	cout << "Number of Letters: " << letter_count << endl;
}
