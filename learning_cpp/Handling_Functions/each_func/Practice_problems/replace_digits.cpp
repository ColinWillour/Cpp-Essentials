/*
File: replace_digits.cpp
Practice Problem — replace() + find_first_of()

Instructions:
1. Start with the string: "Room 204 is on floor 2."
2. Use find_first_of("0123456789") to locate digits.
3. Replace each digit with '#'.
4. Continue until no digits remain.
5. Print the final string: Room ### is on floor #.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	// your code here
	string example;
	cout << "Enter string line" << endl;
	getline(cin, example);
	size_t pos = example.find_first_of("0123456789");

	while (pos != string::npos) {
		example.replace(pos, 1, "#");
		pos = example.find_first_of("0123456789");
	}
	cout << example << endl;
	return 0;
}

