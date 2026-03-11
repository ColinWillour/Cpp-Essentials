#include <iostream>
#include <string>
#include <fstream>
using std::endl, std::cout, std::string;

int* filterEvens(int* arr, int size, int* outSize) {
    // TODO: implement using pointer arithmetic only
    	int count = 0;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) % 2 == 0) {
			count++;
		}
	}

	*outSize = count;
	int* evens = new int[count];

}

int main() {
	int n;
	cout << "Input a size: ";
	std::cin >> n;

	int arrints;
	cout << "\nEnter " << n << " integers: ";
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arrints;
		arr[i] = arrints;
	}

	int outSize;
	filterEvens(arr, size, &outSize);

	delete[] arr;
	return 0;
}
