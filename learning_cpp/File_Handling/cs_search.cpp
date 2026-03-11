#include <iostream>
#include <fstream>
#include <string>
using std::endl, std::cout, std::string;

int main() {
	std::ifstream file("random.txt");
	if (!file.is_open()) {
		cout << "file error" << endl;
		return 1;
	}

	string line;
	bool does_have = false;
	int count = 0;
	while(getline(file, line)) {
		size_t pos = line.find("cs");
		while(pos != string::npos) {
			count += 1;
			pos = line.find("cs", pos + 1);
		}
	}

	std::ofstream fileout("random.txt", std::ios::app);

	if (!fileout.is_open()) {
		cout << "file error" << endl;
		return 1;
	}

	fileout << "\nSophie's banana bread is AMAZING!" << endl;
	fileout << "I Love you Sophie!" << endl;


	cout << "Count of (cs): " << count << endl;
}


