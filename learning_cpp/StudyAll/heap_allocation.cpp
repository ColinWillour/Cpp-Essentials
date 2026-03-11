#include <iostream>
using std::endl, std::cout, std::string;

int* makeArray(int n) {
	int* arr = new int[5];
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	return arr;
}

int main() {
	int* p = makeArray(5);
	for (int i = 0; i < 5; i++) {
		cout << p[i] << " ";
	}
	cout << " " << endl;
	delete[] p;
}
