#include <iostream>
#include <string>
#include <fstream>
using std::cout, std::string, std::endl;

int main() {
	std::ifstream file("records.txt");
	if (!file.is_open()) {
		cout << "File Error" << endl;
		return 1;
	}

	string line;
	while (std::getline(file, line)) {
		if (line.empty()) {
			continue;
		}

		size_t pos1 = line.find(" ");
		size_t pos2 = line.find(" ", pos1 + 1);
		
		if (pos1 == string::npos || pos2 == string::npos) {
			continue;
		}
		
		string name;
		string age;
		string salary;
		name = line.substr(0, pos1);
		age = line.substr(pos1 + 1, pos2 - pos1 - 1);
		salary = line.substr(pos2 + 1);

		cout << "Name: " << name << ", Age: " << age << ", Salary: " << salary << endl;
	}

	file.close();
}


