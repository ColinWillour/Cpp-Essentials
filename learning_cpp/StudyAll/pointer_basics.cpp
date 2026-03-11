#include <iostream>
using std::endl, std::cout, std::string;

int addThroughPointer(int* p, int* q) {
	int sum;
	sum = *p + *q;
	return sum;
}	

int main() {
	int a;
	int b;
	cout << "Enter two integers to add:" << endl;
	std::cin >> a;
	std::cin >> b;
	cout << addThroughPointer(&a, &b) << endl;
	return 0;
}
