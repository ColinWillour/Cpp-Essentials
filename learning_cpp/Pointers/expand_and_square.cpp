#include <iostream>
#include <vector>

int* expand_and_square(const std::vector<int>& nums, size_t extra) {
        int* arr = new int[nums.size() + extra];
	for (size_t i = 0; i < nums.size() + extra; i++) {
		if (i > nums.size() - 1) {
			*(arr + i) = -1;
		}
		else {
			*(arr + i) = nums[i] * nums[i];
		}
	}
        return arr;
}

int main() {
        std::vector<int> v = {2, 4, 6};

        int* arr = expand_and_square(v, 2);

        if (arr != nullptr) {
                for (size_t i = 0; i < v.size() + 2; i++) {
                        std::cout << arr[i] << " ";
                }
                std::cout << std::endl;
        }

        delete[] arr;
        return 0;
}

