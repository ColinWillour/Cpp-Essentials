// erase() - Remove dashes from phone number.

#include <iostream>
#include <string>
using std::string, std::cout, std::endl;

int main() {
	string phone = "860-555-1234";
	cout << "Original: " << phone << endl;

	phone.erase(3, 1);
	phone.erase(6, 1);

	cout << "Digits only: " << phone << endl;
	return 0;
}

