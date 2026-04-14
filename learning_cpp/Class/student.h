#pragma once

#include <string>
#include <vector>
#include <iostream>

class Student {
public:
	std::string_name_;
	double mt_, final_;
	std::vector<double> homeworks_;
	void read(std::istream& is);
	void print(std::ostream& os);
};

int main() {
	auto s = std::make_shared<Student>();
	Student sp;
	(*sp).name_ = "Joe";
	sp -> mt_ = 80;
	sp -> final_ = 100;
	sp -> homeworks_.push_back(90);
	sp -> homeworkd_.push_bacl(95);
	std::cout << "s.name" << sp->name_ << std::endl;
}
