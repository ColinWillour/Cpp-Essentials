#include <iostream>

// TODO: Write your processElements function here
void processElements(int* a, int* b, int& multiplier) {
	if (a == nullptr || b == nullptr) {
		return;
	}

	int temp = *a;
	*a = *b;
	*b = temp;

	*a = (*a) * multiplier;
	multiplier++;
}


int main() {
    int x = 10;
    int y = 20;
    int m = 5;

    std::cout << "Before: x=" << x << ", y=" << y << ", m=" << m << std::endl;

    // Call your function
    processElements(&x, &y, m);

    // Expected Output:
    // x should be 100 (y's old value 20 * multiplier 5)
    // y should be 10 (x's old value)
    // m should be 6 (incremented)
    std::cout << "After:  x=" << x << ", y=" << y << ", m=" << m << std::endl;

    return 0;
}
