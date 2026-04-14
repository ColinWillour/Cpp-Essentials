#include <iostream>
using std::endl, std::cout, std::string;

int countNegatives(int* arr, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) < 0) {
			count++;
		}
	}
	return count;
}

int main() {
	int arr[] = {2, 5, -1, 6, -7, -8};
	int neg_count = countNegatives(arr, 6);
	cout << "Negative Numbers: " << neg_count << endl;
	return 0;
}
