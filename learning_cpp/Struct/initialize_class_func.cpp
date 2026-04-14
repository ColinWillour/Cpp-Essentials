#include <iostream>
#include <string>
using std::endl, std::cout, std::string;

class Rectangle {
	double width_;
public:
	Rectangle(): width_(1), height_(1) {}
	Rectangle(double w, double h): width_(w), height_(h) {
		cout << "Hi" << endl;
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
