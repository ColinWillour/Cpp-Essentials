#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

/*
    FILE HANDLING PRACTICE — Q2 (Harder)

    TODO:
    1. Open "words.txt" using ifstream.
       - If the file fails to open, print "File error" and exit.
*/

int main() {
	ifstream file("words.txt");
	if (!file.is_open()) {
		cout << "File error\n";
			return 1;
	}

	// TODO: implement frequency table logic here
	string line;
	int apple_count;
	int banana_count;
	int dog_count;
	int cat_count;
	while (getline(file, line)) {
		if (line.find("apple")) {
			apple_count++;
		}
		if (line.find("banana")) {
			banana_count++;
		}
		if (line.find("dog")) {
			dog_count++;
		}
		if (line.find("cat")) {
			cat_count++;
		}
	}
	cout << "Apple: " << apple_count << endl;
	cout << "Banana: " << banana_count << endl;
	cout << "Dog: " << dog_count << endl;
	cout << "Cat: " << cat_count << endl;

	file.close();
	return 0;
}

