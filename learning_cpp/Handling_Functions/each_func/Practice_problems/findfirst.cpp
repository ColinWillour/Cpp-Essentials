/*
Practice Problem — find_first_not_of()

Instructions:
1. Use the string: "   ...,,1234Hello World"
2. Call find_first_not_of(" .,0123456789") on it.
3. Print the index returned.
4. Then print the substring starting at that index.
5. If the function returns string::npos, print a message saying no valid character was found.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	// your code here
	string example = "   ...,,1234Hello World";
	size_t index = example.find_first_not_of(" .,0123456789");
	if (index == string::npos) {
		cout << "Invalid" << endl;
	}
	else {
		cout << "Index: " << index << endl;
		cout << "Substring: " << example.substr(index) << endl;
	}

	return 0;
}

