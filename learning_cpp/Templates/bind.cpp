#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <functional>
using std::endl, std::cout;

template <class T>
bool my_find(std::vector<T>& x, const T& v, std::function<int(double, double)> cmp) {
	int low = 0;
	int up = x.size() - 1;
	while (low <= up) {
		const int mid = (low + up) / 2;
		int c = cmp(x[mid], v);
		if (c == 0) {
			return true;
		}
		else if (c > 0) {
			up = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	return false;
}

int main() {
	std::vector<int> vec = {1, 20, 5, 12, 34, 17};
	auto at = my_find(vec.begin(), vec.end(), 17);
	bool found = (at != vec.end());
	cout << "found? " << found << endl;
	if (found) {
		cout << "value=" << *at << endl;
	}
	return 0;
}
