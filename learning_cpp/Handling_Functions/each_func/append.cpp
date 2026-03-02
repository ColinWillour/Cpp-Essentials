// Demonstrates append() - Build a file path.

#include <iostream>
#include <string>
using std::cout, std::endl, std::string;

int main() {
	string path = "/home/user";
	cout << "Original Path: " << path << endl;
	path.append("/documents");

	cout << "Path Appended: " << path << endl;
	return 0;
}

