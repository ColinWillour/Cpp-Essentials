#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
    FILE HANDLING PRACTICE — Q1

    TODO:
    1. Open a file named "input.txt" using ifstream.
       - If the file fails to open, print "File error" and exit.

    2. Read the file line-by-line using getline().
       - Count how many lines are in the file.
       - Count how many TOTAL characters appear (do NOT count '\n').
       - Count how many TOTAL words appear.
         (A word is anything separated by spaces.)

    3. After reading the entire file:
       - Print the number of lines.
       - Print the number of words.
       - Print the number of characters.

    4. Close the file.
*/

int main() {
	ifstream file("input.txt");

	if (!file.is_open()) {
		cout << "File error\n";
			return 1;
	}

	// TODO: implement counting logic here
	string line;
	int count;
	while (getline(file, line)) {
		count += 1;
	}
	cout << count << endl;

	file.close();
	return 0;
}


