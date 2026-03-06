// Read a CSV file and compute the sum of the second column.

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using std::endl, std::cout, std::string;

int main() {
	std::ifstream file("sec_col.txt");
	if (!file.is_open()) {
		cout << "File Error" << endl;
		return 1;
	}
	
	string val;
	while (file >> val) {
		if 
