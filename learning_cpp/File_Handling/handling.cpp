#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("input.txt");   // open for reading
    ofstream fout("output.txt"); // open for writing

    if (!fin.is_open() || !fout.is_open()) {
        cout << "File error\n";
        return 1;
    }

    string line;
    while (getline(fin, line)) {     // read line-by-line
        fout << "Read: " << line << "\n";  // write to output
    }

    fin.close();
    fout.close();
}

