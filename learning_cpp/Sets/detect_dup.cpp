#include <iostream>
#include <unordered_set>
using std::endl, std::cout, std::string;

bool detect_dup(const string& s) {
	std::unordered_set<char> seen;
	for (const char& c : s) {
		if (seen.contains(c)) {
			return true;
		}
		seen.insert(c);
	}
	return false;
}

int main() {
	cout << detect_dup("Hello") << endl;
	return 0;
}
