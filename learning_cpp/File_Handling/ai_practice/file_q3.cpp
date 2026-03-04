#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
    FILE HANDLING PRACTICE — Q3 (Harder)

    TODO:
    1. Open "data.csv" using ifstream.
       - If the file fails to open, print "File error" and exit.

    2. Read the file line-by-line using getline(fin, line).

    3. Each line contains exactly 3 integers separated by commas.
       Example: 10,20,30

       Steps:
         - Find the comma positions.
         - Extract substrings for each number.
         - Convert them to integers using stoi().

    4. Maintain running totals:
         int sum1 = 0, sum2 = 0, sum3 = 0;
         int rows = 0;

    5. After processing the file:
         Print:
            Column 1 sum: ___
            Column 2 sum: ___
            Column 3 sum: ___
            Total rows: ___

    6. Close the file.
*/

int main() {
	ifstream file("data.csv");
	if (!file.is_open()) {
		cout << "File error\n";
			return 1;
	}

	// TODO: implement CSV parsing and column summation
	string line;
	while (getline(file, line)) {
		size_t pos1 = line.find(',');
		size_t pos2 = line.find(',', pos1 + 1)		

	file.close();
	return 0;
}

