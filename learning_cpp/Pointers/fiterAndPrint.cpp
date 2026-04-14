#include <iostream>
using std::endl, std::cout, std::string;

void filterAndPrint(int* arr, size_t size, int threshold) {
	for (int i = 0; i < size; i++) {
		if (*(arr + i) > threshold) {
			cout << *(arr + i) << " ";
		}
	}
}

int main() {
	int arr[] = {3, 10, 5, 20, 1};
	size_t size = 5;
	int threshold = 6;
	filterAndPrint(arr, size, threshold);
	return 0;
}
