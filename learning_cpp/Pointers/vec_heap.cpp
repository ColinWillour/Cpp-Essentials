#include <iostream>
#include <vector>

int* duplicate_and_increment(const std::vector<int>& nums) {
        int* arr = new int[nums.size()];
	for (size_t i = 0; i < nums.size(); i++) {
		arr[i] = nums[i] + 1;
	}
		
        return arr;
}

int main() {
        std::vector<int> v = {10, 20, 30, 40};

        int* arr = duplicate_and_increment(v);

        if (arr != nullptr) {
                for (size_t i = 0; i < v.size(); i++) {
                        std::cout << arr[i] << " ";
                }
                std::cout << std::endl;
        }

        delete[] arr;
        return 0;
}

