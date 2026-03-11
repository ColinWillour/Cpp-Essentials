#include <iostream>
#include <vector>
using std::endl, std::cout, std::string;

int* filterEven(const std::vector<int>& nums, size_t& out_size) {
	int* arr = new int[out_size];
	int count = 0;
	for (size_t i = 0; i < out_size; i++) {
		if (nums[i] % 2 == 0) {
			*(arr + count) = nums[i];
			count++;
		}
	}
	out_size = count;
	return arr;
}

int main() {
	std::vector<int> v = {3, 10, 7, 8, 12};
	size_t size = v.size();

	cout << "Original = [";
	bool start = true;
	for (int i = 0; i < size; i++) {
		if (start == true) {
			cout << v[i];
			start = false;
		}
		else {
			cout << ", " << v[i];
		}
	}
	cout << "]" << endl;

	int* arr = filterEven(v, size);
	

	if (arr != nullptr) {
		bool first = true;
		cout << "Even = [";
		for (int i = 0; i < size; i++) {
			if (first == true) {
				cout << arr[i];
				first = false;
			}
			else {
				cout << ", " << arr[i];
			}
		}
		cout << "]" << endl;
	}
	delete[] arr;
	return 0;
}
