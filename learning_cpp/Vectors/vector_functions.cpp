#include <iostream>
#include <vector>
using std::endl, std::cout;

int main() {
	std::vector<int> v = {1, 2, 3};
	v.push_back(4);
	v.pop_back();
	cout << v.back() << endl;
	cout << v.front() << endl;

	//for (size_t i = 0; i < v.size(); ++i) {

}
