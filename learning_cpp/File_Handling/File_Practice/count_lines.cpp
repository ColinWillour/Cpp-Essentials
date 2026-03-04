// Read a file and count how many lines it has.

#include <iostream>
#include <fstream>
using std::endl, std::cout, std::string;

int main() {
	std::ifstream file("count.txt");
	if (!file.is_open()) {
		cout << "File Error" << endl;
		return 1;
	}

	string line;
	int count;
	while (getline(file, line)) {
		count = count + 1;
	}

	cout << "Number of lines: " << count << endl;
}
