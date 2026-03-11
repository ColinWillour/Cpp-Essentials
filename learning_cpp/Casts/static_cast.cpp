#include <iostream>
#include <string>
using std::cout, std::cin, std::endl, std::string;

int main() {
	int x = 10;
	int y = 7;
	double d = static_cast<double>(x) / y;
	cout << d << endl;
	return 0;
}
