#include <iostream>
#include <string>
using std::endl, std::cout, std::string;

int add(int argc, int argv[]) {
	int sum = 0;
	for (int i = 0; i < argc; i++) {
		sum += argv[i];
	}
	return sum;
}

int main() {
	cout << "Enter 5 integers to add: " << endl;
	int arr[5];
	int num;
	for (int i = 0; i < 5; i++) {
		std::cin >> num;
		arr[i] = num;
	}

	int sum = add(5, arr);
	cout << "Sum: " << sum << endl;
	return 0;
}
