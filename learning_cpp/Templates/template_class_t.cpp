#include <iostream>
#include <vector>
#include <string>

using std::cout, std::endl;

template <class T> // type T - "int x" becomes "T x"
T sum(const std::vector<T>& vec) {
	T total{};
	for(T x : vec) {
		total += x;
	}
	return total;
}

int main() {
	std::vector<std::string> vec;
	vec.push_back(std::string("hello"));
	vec.push_back(std::string(" world"));
	cout << sum(vec) << endl;
	return 0;
}
