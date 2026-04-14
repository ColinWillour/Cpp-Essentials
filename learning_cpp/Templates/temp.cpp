#include <iostream>
#include <vector>
#include <stack> // last in first out, must take from top
using std::cout, std::endl, std::stack;

int sum(const std::vector<int>& vec) {
	int total = 0;
	for(int x : vec) {
		total += x;
	}
	return total;
}

int main() {
	stack<int> vec;
	for (int i = 0; i < 5; ++i) {
		vec.push_back(i);
	}
	for (int x : vec){
		cout << "val=" << x << endl;
	}
	cout << sum(vec) << endl;
	return 0;
}
