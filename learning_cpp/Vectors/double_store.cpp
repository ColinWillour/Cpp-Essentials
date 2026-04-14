#include <iostream>
#include <string>
using std::endl, std::cin, std::cout, std::string;

int main() {
	double* pi = new double(3.14);
	cout << *pi << endl;
	delete pi;
	pi = nullptr;
	return 0;
}

