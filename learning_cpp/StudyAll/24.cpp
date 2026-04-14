#include <iostream>
#include <fstream>
#include <string>
using std::cout, std::endl, std::string;

namespace TEXT {
	string process(string s) {
		for (char& c : s) {
			c = std::toupper(c);
		}
		return s;
	}

	int process(int x) {
		x *= 2;
		return x;
	}
}


int main() {
	while (true) {
		cout << "Enter an integer" << endl;
		int pick;
		std::cin >> pick;
		switch (pick) {
			case 0: {
				return 0;
			}
			case 1: {
				string str;
				std::cin >> str;
				string upper = TEXT::process(str);
				cout << upper << endl;
				break;
			}
			case 2: {
				cout << "Enter a file name: ";
				string filename;
				std::cin >> filename;
				std::ifstream file(filename);
				if (!file.is_open()) {
					std::cerr << "File not open";
					break;
				}
				string line;
				while (getline(file, line)) {
					cout << line << endl;
				}
				break;
			}
			default: {
				cout << "Unknown command" << endl;
				break;
			}
		}
	}
	return 0;
}

