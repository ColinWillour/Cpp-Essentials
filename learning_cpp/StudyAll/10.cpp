#include <iostream>
using std::endl, std::cout, std::string;

int main() {
	while(true) {
		cout << "Enter an integer: ";
		int pick;
		std::cin >> pick;
		switch(pick) {
			case 0: {
				return 0;
				break;
			}
			case 1: {
				cout << "Enter a string: ";
				string str;
				std::cin >> str;
				cout << "Length: " << str.size() << endl;
				if (str.find("hello") != string::npos) {
					cout << "Contains 'hello'" << endl;
				}
				cout << "Substr: " << str.substr(2, 4);
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

