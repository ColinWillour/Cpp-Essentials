#include <iostream>
#include <string>
using std::cout, std::cin, std:: endl, std::string;

int main() {
	const int x = 5;
	const int* px = &x;
	const int y = 7;
	px = &y;
	cout << "px=" << px << endl;
	cout << "*px=" << *px << endl;
	return 0;
}
