#include <iostream>
#include <string>
using std::cout, std::cin, std::string, std::endl;

int main() {
	int x = 5;
	int* const px = &x;
	int y = 7;
	px = &y;
	cout << "px=" << px << endl;
	cout << "*px=" << *px << endl;
	return 0;
} 
