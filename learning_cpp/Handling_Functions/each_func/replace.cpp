// replace() - Censor a bad word (also uses .find())

#include <iostream>
#include <string>
using std::endl, std::string, std::cout, std::cin;

int main() {
	string msg = "This is stupid!";
	cout << "Original: " << msg << endl;
	size_t pos = msg.find("stupid");

	if (pos != string::npos)
		msg.replace(pos, 6, "******");

	cout << "Censored: " << msg << endl;
	return 0;
}

