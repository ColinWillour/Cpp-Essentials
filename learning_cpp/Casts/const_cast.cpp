#include <iostream>
#include <string>
using std::endl, std::cout, std::cin, std::string;

int main() {
	const int x = 10;

	int* p = const_cast<int*>(&x);

	*p = 20;
	cout << x << endl;
	return 0;
}
