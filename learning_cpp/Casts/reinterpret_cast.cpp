#include <iostream>

int main() {
	int x = 65;
	char* p = reinterpret_cast<char*>(&x);
	return 0;
}
