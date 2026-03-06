#include <iostream>
#include <vector>

std::vector<int> filterEvenNumbers(int* arr, int size) {
  	std::vector<int> evens;

	// TODO: 1. Loop through the array using the pointer
    	// TODO: 2. If an element is even, add it to the 'evens' vector
   	// TODO: 3. Deallocate the heap array using the correct 'delete'
	
    	if (arr == nullptr) {
		return std::vector<int>();
	}

	for (int i = 0; i < size; i++) {
	       if (arr[i] % 2 == 0) {
	       		evens.push_back(arr[i]);
	 	}
	}

	delete[] arr;	

    	return evens;
}

int main() {
    	int n = 5;
    	// Allocating a dynamic array on the heap
    	int* myData = new int[n]{10, 15, 20, 25, 30}; 

    	std::vector<int> result = filterEvenNumbers(myData, n);

    	std::cout << "Even numbers found: ";
    	for (int num : result) {
        	std::cout << num << " ";
    	}
    	std::cout << std::endl;

    	return 0;
}
