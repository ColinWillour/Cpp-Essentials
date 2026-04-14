#include <iostream>
#include <cctype>
#include <vector>
#include <string>
using std::endl, std::cout, std::string, std::cin;


namespace STATS {
	double average(std::vector<double> v) {	
		double sum = 0;
		for (double d : v) {
			sum += d;
		}
		double average = sum / v.size();
		return average;
	}
}

void print(double num) {
	cout << num << endl;
}

void print(std::string s) {
	cout << s << endl;
}

int main() {
	std::vector<double>* v = new std::vector<double>();
	cout << "Enter 5 numbers (doubles):" << endl;
	double number;
	for (int i = 0; i < 5; i++) {
		cin >> number;
		(*v).push_back(number);
	}
	double avg = STATS::average(*v);
	print(avg);

	(avg > 50) ? print("Above") : print("Below");
	delete v;
	v = nullptr;
	return 0;
}
