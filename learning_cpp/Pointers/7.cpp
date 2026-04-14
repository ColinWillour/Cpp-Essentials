#include <iostream>
using std::endl, std::cout, std::string;

int swap(int* a, int* b) {
	int temp = *b;
	*b = *a;
	*a = temp;
	return 0;	
}

int main() {
	int a = 5;
	int b = 10;
	cout << "Before: a = " << a << ", b = " << b << endl;
	swap(&a, &b);
	cout << "After a = " << a << ", b = " << b << endl;
	return 0;
}
