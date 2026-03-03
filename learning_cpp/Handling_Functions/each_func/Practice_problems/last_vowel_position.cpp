/*
File: last_vowel_position.cpp
Practice Problem — find_last_of()

Instructions:
1. Use the string: "Programming".
2. Call find_last_of("aeiouAEIOU") to find the last vowel.
3. Print the index.
4. Print the vowel itself.
5. If no vowel is found, print a message saying so.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	// your code here
	string example;
	cout << "Enter a string: ";
	getline(cin, example);
	size_t pos = example.find_last_of("aeiouAEIOU");
	if (pos == string::npos) {
		cout << "No vowels" << endl;
	}
	else {
		cout << "Index: " << pos << endl;
		cout << "Vowel: " << example.substr(pos, 1) << endl;
	}

	return 0;
}

