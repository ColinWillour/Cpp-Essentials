#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;

    // Add elements
    nums.push_back(5);
    nums.push_back(10);
    nums.push_back(15);

    // Print using index
    for (size_t i = 0; i < nums.size(); i++) {
        cout << "nums[" << i << "] = " << nums[i] << endl;
    }

    // Insert at index 1
    nums.insert(nums.begin() + 1, 99);

    // Remove last element
    nums.pop_back();

    // Print using range-for
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

