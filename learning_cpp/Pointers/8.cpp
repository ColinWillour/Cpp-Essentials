#include <iostream>
using std::endl, std::cout, std::string;

int* findMax(int* arr, int size) {
	int* max = arr;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) > *max) {
			max = arr + i;
		}
	}
	return max;
}


int main() {
	int array[] = {10, 40, 70, 90, 20};
	int* max = findMax(array, 5);
	cout << "Max: " << *max << endl;
	return 0;
}
