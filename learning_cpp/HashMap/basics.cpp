#include <unordered_map>
#include <iostream>
using std::unordered_map, std::endl, std::cout, std::string;

int main() {
	unordered_map<int, string> students;
	students[1001] = "John";
	students[1002] = "Jane";
	cout << students[1001] << endl;
	for (const auto& pair : students) {
		cout << pair.first << "->" << pair.second << endl;
	}
	return 0;
}
