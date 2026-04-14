#include <iostream>
#include <vector>
using std::cout, std::endl, std::vector;

int main() { // both loops do same thing, second is cleaner
	vector<int> vec;
	for (int i = 0; i < 5; ++i){
		vec.push_back(i);
	}
	//for (
	//	vector<int>::reverse_iterator it = vec.rbegin();
	//	it != vec.rend();
	//	it++
	//) {
	//	cout << *it << " ";
	//}

	for (auto it = vec.rbegin(); it != vec.rend(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}
