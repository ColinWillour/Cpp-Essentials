#include <iostream>
#include <fstream>
using namespace std;

/*
    TODO:
    1. Write a function:
           void computeStats(int* arr, int size, int* sum, double* avg, int* maxVal)

       Requirements:
       - Use ONLY pointer arithmetic inside the function (no arr[i]).
       - Write results into *sum, *avg, *maxVal.

    2. In main():
       - Ask the user how many integers to read.
       - Dynamically allocate an int array of that size.
       - Open "numbers.txt" and read exactly that many integers.
       - Call computeStats().
       - Print the results.
       - Delete the array using delete[].
*/

void computeStats(int* arr, int size, int* sum, double* avg, int* maxVal) {
	// TODO: implement using pointer arithmetic
	*sum = 0;
	*maxVal = arr[0];
	
	for (int i = 0; i < size; i++) {
		*sum += arr[i];
		if (arr[i] > *maxVal) {
			*maxVal = arr[i];
		}
	}
	*avg = static_cast<double>(*sum) / size;
	
	cout << "Array: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	int size;
	cout << "How many numbers should I read? ";
	cin >> size;

	// TODO: allocate array on heap
	// TODO: open file and read values
	// TODO: call computeStats
	// TODO: print results
	// TODO: delete[] the array
	int* arr = new int[size];
	ifstream file("numbers.txt");
	if (!file.is_open()) {
		cout << "file error" << endl;
		return 1;
	}

	for (int i = 0; i < size; i++) {
		file >> arr[i];
	}
	
	int sum = 0;
	double avg = 0;
	int maxVal;

	computeStats(arr, size, &sum, &avg, &maxVal); 
	
	cout << "\nSum: " << sum << endl;
	cout << "Average: " << avg << endl;
	cout << "Max Value: " << maxVal << endl;
	
	delete[] arr;
	return 0;
}

