#include <expected>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <stdexcept>
using std::cout, std::endl, std::string;

std::expected<int, string> divide(int a, int b) {
        if (b == 0) {
                return std::unexpected("Zero divis");
        }
        return a / b;
}

int main() {
	auto result = divide(10, 0);
	if (result) {
		cout << result.value() << endl;
	}
	else {
		cout << result.error() << endl;
		return 1;
	}
        return 0;
}
