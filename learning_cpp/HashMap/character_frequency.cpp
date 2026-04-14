#include <iostream>
#include <unordered_map>
using std::endl, std::cout, std::string;

void frequency(const string& s) {
	std::unordered_map<char, int> freq;
	for (const char& c : s) {
		freq[c]++;
	}
	for (const auto& pair : freq) {
		cout << pair.first << ": " << pair.second << endl;
	}
}


int main() {
	frequency("Hello World");
	return 0;
}
