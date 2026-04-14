#include <iostream>
#include <string>
using std::endl, std::cout, std::string;
// Class is private by default
// Struct is public by default

class Rectangle {
// protected: private but subclasses can access
	double width_;
public:
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
	Rectangle r;
	r.setWidth(5);
	r.height_ = 2;
	cout << r.area() << endl;
	return 0;
}
