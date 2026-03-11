#include <iostream>
using namespace std;

/*
    reverseArray:
    - Takes a pointer to the array and its size.
    - Reverses the array IN PLACE using ONLY pointer arithmetic.
*/
void reverseArray(int* arr, int size) {
	// TODO: implement using pointer arithmetic only
	int* left = arr;
        int* right = arr + size - 1;

	while (left < right) {
		int temp = *left;
		*left = *right;
		*right = temp;

		left++;
		right--;	
}

/*
    findMinMax:
    - Takes the array and size.
    - Writes the minimum into *minVal and maximum into *maxVal.
*/
void findMinMax(int* arr, int size, int* minVal, int* maxVal) {
	// TODO: implement using pointer arithmetic only
	int *minVal = *arr;
	int *maxVal = *arr;
	for (int i = 0; i < size; i++) {
		int value = *(arr + i)
		if (value > *maxVal) {
			*maxVal = value;
		}
		if (value < *minVal) {
			*minVal = value;
		}
	}
}

int main() {
	int n;
	cout << "Enter array size: ";
	cin >> n;

	// TODO: allocate array on heap
	// TODO: read n integers from user
	// TODO: call reverseArray
	// TODO: call findMinMax
	// TODO: print reversed array, min, max
	// TODO: delete[] array
	int* arr = new int[n];
	cout << "Insert " << n << "integers: ";
	for (int i = 0; i <= n; i++) {
		cin >> arr[i];
	}

	int minVal;
	int maxVal;
	findMinMax(arr, n, &minVal, &maxVal);
	reverseArray(arr, n);

	delete[] arr;
	return 0;
}

