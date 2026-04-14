#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <functional>
#include <list>
using std::endl, std::cout;

template <class InputIterator, class T>
InputIterator my_find(
	InputIterator from, 
	InputIterator to, 
	const T& target
) {
	while (from != to) {
		if (*from == target) {
			return from;
		}
		++from;
	}
	return from;
}

int main() {
	std::list<int> vec = {1, 20, 5, 12, 34, 17};
	auto at = my_find(vec.begin(), vec.end(), 17);
	bool found = (at != vec.end());
	cout << "found? " << found << endl;
	if (found) {
		cout << "value=" << *at << endl;
	}
	return 0;
}
