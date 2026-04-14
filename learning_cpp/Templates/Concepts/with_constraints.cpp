#include <iostream>
#include <iterator>
#include <vector>
#include <concepts>
using std::endl, std::cout, std::vector;

template <class T>
concept Comparable = 
	requires(T aa, T bb) {
		{aa > bb};
	};

template <Comparable T>
T add(T a, T b) {
	return a + b;
}

int main(){ 
	cout << add(5, 7) << endl;
	return 0;
}
