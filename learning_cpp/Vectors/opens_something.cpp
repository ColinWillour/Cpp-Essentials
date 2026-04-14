#include <fstream>
#include <iostream>
#include <cctype>
using std::endl, std::cout, std::string, std::cin;

int main() {
	std::ifstream file("data.txt");
	if (!file.is_open()) {
		cout << "File Error" << endl;
		return 1;
	}

	string line;
	while (std::getline(file, line)) {
		cout << line << endl;
	}
}
