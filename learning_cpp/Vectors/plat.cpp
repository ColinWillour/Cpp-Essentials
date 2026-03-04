#include <iostream>
#include <vecctor>
using std::endl, std::cout;

int main() {
	std::vector<int> a{};
	std::vector<int> b(5);
	std::vector<int> c(5, 7);
	std::vector<int> d = {1, 2, 3};
	std::cout << d[1];
	std::cout << d.at(1);	// bounds checking, same as above
	a.size();
	a.empty();	// no mutation, true if empty else false
	a.push_back();
	a.pop_back(); 	// Remove last element
	a.clear();	// clear
	a.front();	// first element
	a.back();	// last element
}
