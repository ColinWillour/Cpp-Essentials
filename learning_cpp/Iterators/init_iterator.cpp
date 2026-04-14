#include <iostream>
#include <vector>
#include <string>
using std::endl, std::cout, std::string;

int main() {
	std::vector<int> vec;
	for (int i = 0; i < 5; ++i) {
		vec.push_back(i);
	}
	std::vector<int>::iterator on3 = vec.begin() + 2;
	cout << "Rank3 is = " << *on3 << endl;
	*on3 = 17;
	return 0;
}
