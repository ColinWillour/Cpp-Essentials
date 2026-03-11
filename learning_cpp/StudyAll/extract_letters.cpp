#include <iostream>
using std::endl, std::cout, std::string;

char* extractLetters(const string& s, int& outSize) {
	for (char c : s) {
		while (isalpha(c)) {
			

}

int main() {
	string line;
	cout << "Enter a string: ";
	std::cin >> line;
	int outSize;
	outSize = extractLetters(line, line.size()); 
}
