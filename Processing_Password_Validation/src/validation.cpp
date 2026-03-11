#include <iostream>
#include <cctype>
#include <string>
#include "validation.h"
using std::endl, std::string, std::cout;

bool is_valid_password(string password) {
	if (password.length() < 8) {
		cout << "Password not long enough" << endl;
		return false;
	}

	bool upper_check = false;
	bool not_alnum_check = false;

	for (char c : password) {
		if (std::isupper(c)) {
			upper_check = true;
		}
		if (!std::isalnum(c)) {
			not_alnum_check = true;
		}
	}

	if (upper_check && not_alnum_check) {
		return true;
	}
	else {
		return false;
	}
}
