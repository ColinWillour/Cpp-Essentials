/*
File: erase_middle.cpp
Practice Problem — erase()

Instructions:
1. Start with the string: "Hello---World".
2. Use erase(start, length) to remove the three dashes in the middle.
3. Print the final cleaned string: HelloWorld.
4. Do NOT rebuild the string manually — you must use erase().
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	// your code here
	string example = "Hello---World";
	cout << "Original: " << example << endl;
	example.erase(5, 3);
	cout << "Fixed Middle: " << example << endl;
	example.insert(5, 1, ' ');
	cout << "Fixed More: " << example << endl;

	return 0;
}

