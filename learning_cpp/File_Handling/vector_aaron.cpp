//vector size 5
//for loop to push elements 1-5
//print arr, remove last using function
//print again
//del

#include <iostream>
#include <vector>
using std::endl, std::cout, std::string;

int main() {
	std::vector<int> v;
	for (int i = 0; i < 6; i++) {
		v.push_back(i);
	}
	bool first = true;
	cout << "Vector = [";
	for (int i = 0; i < v.size(); i++) {
		if (first == true) {
			cout << v[i];
			first = false;
		}
		else {
			cout << ", " << v[i];
		}
	}
	cout << "]" << endl;

	v.pop_back();
	bool begin = true;
	cout << "Vector = [";
	for (int i = 0; i < v.size(); i++) {
		if (begin == true) {
			cout << v[i];
			begin = false;
		}
		else {
			cout << ", " << v[i];
		}
	}
	cout << "]" << endl;
}
