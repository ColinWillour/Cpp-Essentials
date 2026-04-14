// Custom data type
// Organize related data into one object
// Improve readability
// Can Next stucts

#include <iostream>
#include <string>
using std::endl, std::cout, std::string;

struct Address {
	string street;
	string city;
};

struct Student {
	string name;
	int id;
	double gpa;
	Address address;
};

int main() {
	Student s1;
	s1.name = "Colin";
	s1.id = 10001;
	s1.gpa = 3.5;
	s1.address.street = "Boulder ln";
	s1.address.city = "Mansfield";
	Student s2;
	s2.name = "Ryan";
	s2.address.street = "Main st";
	s2.address.city = "Manchester";
	cout << s2.name << " lives in " << s2.address.street << ", " << s2.address.city << endl;
	cout << s1.name << " lives in " << s1.address.street << ", " << s1.address.city << endl;
	return 0;
}
