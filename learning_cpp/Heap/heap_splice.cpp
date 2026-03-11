#include <iostream>
#include <vector>
using std::endl, std::cout, std::string, std::cin;

int* splice(const int* arr, size_t start, size_t end, size_t size) {
	int* split = new int[end - start];
	for (int i = 0; i < size; i++) {
		if (i >= start && i < end) {
			split[i - start] = arr[i];
		}
	}
	return split;
}

int main() {
	int size = 10;
	cout << "Enter 10 numbers to fill the heap array: " << endl;
	int value;
	int* orig = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> value;
		orig[i] = value;
	}

	int start;
	int end;
	cout << "Enter a starting index: ";
	cin >> start;
	cout << "Enter a ending index: ";
	cin >> end;

	if ((start < 0 || start >= 10) || (end < 0 || end >= 10)) {
		cout << "Start or end value in not between 1-10" << endl;
		return 0;
	}
	int* split = splice(orig, start, end, size);
	
	if(split != nullptr) {
		cout << "Original = [";
		bool first = true;
		for (int i = 0; i < size; i++) {
			if (first == true) {
				cout << orig[i];
				first = false;
			}
			else {
				cout << ", " << orig[i];
			}
		}
		cout << "]" << endl;
		first = true;
		cout << "Spliced = [";
		for (int i = 0; i < end-start; i++) {
			if (first == true) {
				cout << split[i];
				first = false;
			}
			else {
				cout << ", " << split[i];
			}
		}
		cout << "]" << endl;
	}
	delete[] split;
	delete[] orig;
}

	
	





