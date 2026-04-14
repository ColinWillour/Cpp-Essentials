#include <iostream>
#include <vector>
#include <unordered_set>
using std::endl, std::cout, std::string;

int main() {
	std::unordered_set<string> users;
	users.insert("colin");
	users.insert("toby");
	users.insert("toby"); // ignored NO DUPS
	users.insert("colton");
	if (users.find("toby") != users.end()) {
		cout << "Found" << endl;
	}
	for (const string& user : users) {
		cout << user << endl;
	}
	return 0;
}
