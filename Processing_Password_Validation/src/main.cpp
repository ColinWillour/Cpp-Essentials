#include <iostream>
#include <string>
//#include "validation.h"
//#include "audit_mode.cpp"
using std::cout, std::cin, std::endl, std::string;

int main() {
	int option;
	cout << "1. Check a single password" << endl;
	cout << "2. Process a TSC/CSV file" << endl;
	cout << "3. Quit" << endl;
	cin >> option;

	switch {
		case 1:
			cout << "1" << endl;
		case 2:
			cout << "2" << endl;
		case 3:
			cout << "3" << endl;
	}
}
