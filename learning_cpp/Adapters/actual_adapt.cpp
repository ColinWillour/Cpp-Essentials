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
		*into++ = *from++;
	}
	return into;
}

int main() {
	std::list<int> a = {1, 20, 5, 12, 34, 17};
	std::list<int> b = {};
	mycopy(a.begin(), a.end(), std::back_inserter(b)); // wrapper - increases memory
	for (const int& x : b) {
		std::cout << x << " ";
	}
	std::cout << std::endl;
	return 0;
}
