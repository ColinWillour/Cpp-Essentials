// insert() - Insert comma into a large number

#include <iostream>
#include <string>
using std::cout, std::string, std::endl;

int main() {
	string num = "1000000";
	cout << "Original: " << num << endl;
	num.insert(1, ",");
	num.insert(5, ",");

	cout << "Formatted: " << num << endl;
 	return 0;
}

