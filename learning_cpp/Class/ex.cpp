#pragma once

#include <string>
#include <vector>
#include <iostream>

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
