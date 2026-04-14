#include <iostream>
using std::endl, std::cout, std::string;

int main() {
	char arr[] = "world";
	cout << arr << endl;

	arr[4] = 'D';

	cout << arr << endl;
	for (char c : arr) {
		cout << c << endl;
	}
}
