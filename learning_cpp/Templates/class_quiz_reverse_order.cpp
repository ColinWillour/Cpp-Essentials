#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using std::string, std::endl, std::cout, std::vector;

int main() {
	string s = "C++ is so much fun";
	vector<string> words;
	string word;

	std::istringstream iss(s);
	while (iss >> word) {
		words.push_back(word);
	}

	for (auto it = words.rbegin(); it != words.rend; ++it) {
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}

