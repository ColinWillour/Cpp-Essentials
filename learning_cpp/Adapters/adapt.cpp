#include <list>
#include <iostream>
#include <iterator>
#include <vector>
#include <sstream>

template <typename InputIterator, typename OutputIterator>
OutputIterator mycopy(
	InputIterator from,
	InputIterator to,
	OutputIterator into
){
	while (from != to) {
		*into = *from;
		++from;
		++into;
	}
	return into;
}

int main() {
	std::list<int> a = {1, 20, 5, 12, 34, 17};
	std::list<int> b = {0, 0, 0, 0, 0, 0};
	mycopy(a.begin(), a.end(), b.begin());
	for (const int& x : b) {
		std::cout << x << " ";
	}
	std::cout << std::endl;
	return 0;
}
