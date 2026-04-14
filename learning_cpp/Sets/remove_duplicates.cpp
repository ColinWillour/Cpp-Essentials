#include <iostream>
#include <unordered_set>
using std::string, std::endl, std::cout;


string remove_dup(const string& s) {
	std::unordered_set<char> seen;
	string result;
	for (const char& c : s) {
		if (!seen.contains(c)) {
			result += c;
			seen.insert(c);
		}
	}
	return result;
}

int main() {
	cout << remove_dup("banana") << endl;
	return 0;
}
