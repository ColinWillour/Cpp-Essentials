#include <iostream>
#include <vector>
using std::cout, std::endl;

int main() {
	std::vector<int> v;
	cout << v.size() << endl;

	for (int i = 0; i < 33; ++i) {
		v.push_back(i);
		cout << "size=" << v.size() << " capacity=" << v.capacity() << endl;
	}
}
