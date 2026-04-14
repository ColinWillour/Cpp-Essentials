#include <iostream>
#include <vector>
#include <string>
using std::endl, std::cout, std::string;

int main() {
	std::vector<int> vec;
	for (int i = 0; i < 5; ++i) {
		vec.push_back(i);
	}
	for (std::vector<int>::reverse_iterator it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}
