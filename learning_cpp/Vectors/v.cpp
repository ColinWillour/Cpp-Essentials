// declares vector - push 5 string - prints using ranged based for loop reference


#include <iostream>
#include <vector>

int main() {
	std::vector<std::string> v;
	std::string one, two, three, four, five;
	one = "one";
	two = "two";
	three = "three";
	four = "four";
	five = "five";
	v.push_back(one);
	v.push_back(two);
	v.push_back(three);
	v.push_back(four);
	v.push_back(five);
	for (std::string& c : v) {
		std::cout << c << std::endl;
	}
}
