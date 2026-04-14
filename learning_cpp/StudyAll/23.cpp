#include <iostream>
#include <vector>
using std::endl, std::cout, std::string;

int main() {
	std::vector<int> v;
	for (int i = 0; i <= 8; i++) {
		v.push_back(i);
	}

	for (int i : v) {
		if (i % 2 == 0) {
			cout << i << " ";
		}
		else if (i == 3) {
			cout << v.at(3) << " ";
		}
	}
	return 0;
}
