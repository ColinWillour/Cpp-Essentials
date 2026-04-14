#include <iostream>
#include <string>
#include <cctype>
using std::endl, std::cout, std::string;

int sumCharacters(const std::string& s) {
	int sum = 0;
	for (const char& c : s) {
		sum += static_cast<int>(c);
	}
	return sum;
}

int main() {
	string s = "ABC";
	int sum = sumCharacters(s);
	cout << "Output: " << sum << endl;
	return 0;
}
