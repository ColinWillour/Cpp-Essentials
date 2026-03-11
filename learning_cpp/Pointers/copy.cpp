#include <iostream>
using std::endl, std::cout, std::string;

int* uniqueCopy(int* arr, int size, int* outSize) {
	// TODO: implement using pointer arithmetic only
	for (int i = 0; i < size; i++) {
		bool is_duplicate = true;
		int count;
		int* begin = std::begin(arr);
		int* end = std::end(arr);
		int* pos1 = std::find(begin, end, *(arr+i));
		int* pos2 = std::find(pos1, end, *(arr+i));
		if (pos1 == pos2) {
			is_duplicate = false;
			count++;
		}

		cout << "Set: [";
		int* set = new int[count];
		for (int i = 0; i < count; i++) {
			cout << " " << set[i] << endl;
		}
		return 0;
	}			
}

int main() {
	cout << "What size array?: ";
	int n;
	std::cin >> n;

	int* arr = new int[n];
	cout << "Fill the array with " << n << " numbers: " << endl;;
	for (int i = 0; i < n; i++) {
		int number;
		std::cin >> number;
	}
	cout << "test" << endl;

	int outSize;
	uniqueCopy(arr, n, &outSize);

	delete[] arr;
	return 0;
}


