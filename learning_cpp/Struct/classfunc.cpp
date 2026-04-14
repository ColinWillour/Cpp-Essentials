#include <iostream>
#include <string>
using std::endl, std::cout, std::string;

class Rectangle {
	double width_;
public:
	Rectangle(double width, double height) {
		width_ = width;
		height_ = height;
	}
	Rectangle(double width) {
		width_ = width;
		height_ = 5;
	}
	double height_;
	double area() const;
	void setWidth(double width);
	double getWidth();
};

double Rectangle::area() const {
	return width_ * height_;
}

void Rectangle::setWidth(double width) {
	height_ = 1;
	width_ = width;
}

double Rectangle::getWidth() {
	return width_;
}

int main() {
	Rectangle r(5, 2);
	cout << r.area() << endl;
	return 0;
}
