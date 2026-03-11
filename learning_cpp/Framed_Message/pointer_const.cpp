#include <iostream>
#include <string>
using std::cout, std::cin, std:: endl, std::string;

int main() {
	int x = 5;
	const int* px = &x;
	cout << "px=" << px << endl;
	cout << "*px=" << *px << endl;
	x = 10; // this works x is not const
	cout << "*px=" << *px << endl;
	//*px = 50; - doesnt work, *px is const
	return 0;
}
