#include <fstream>
#include <iostream>
using std::endl, std::cout, std::string;

int main() {
	std::ifstream infile("input.txt");
	if (!infile.is_open()) {
		std::cerr << "File Error"; 
		return 0;
	}
	std::ofstream outfile("output.txt");
	if (!outfile.is_open()) {
		std::cerr << "File Error";
		return 0;
	}

	string line;
	int count = 1;
	while (getline(infile, line)) {
		outfile << count << ": " << line << endl;	
		count++;
	}
	return 0;
}
