#include <iostream>
#include <vector>
using std::cout, std::endl, std::string;

int main() {
	std::vector<int> nums;
	int x;
	bool loop = true;

	while(loop == true) {
		cout << "Enter number (-1 to quit): ";
		std::cin >> x;
		if (x == -1) {
			loop = false;
			break;
		}
		nums.push_back(x);
	}

	int sum = 0;
	int max = 0;
	for (size_t i = 0; i < nums.size(); i++) {
		sum += nums[i];
		if (nums[i] > max) {
			max = nums[i];
		}
		cout << "Index " << i << ": " << 
			nums[i] << endl;
	}

	cout << "Sum: " << sum << endl;
	cout << "Max: " << max << endl;
}


