#include <iostream>
#include <string>
using std::endl, std::cout, std::string;

int countEven(const int* arr, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) % 2 == 0) {
			count++;
		}
	}
	return count;
}

int main() {
	int arr[10] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
	cout << "Even numbers in arr: " << countEven(arr, 10) << endl;
	return 0;
}
