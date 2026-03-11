#include <iostream>
#include <cctype>
#include <string>
using std::endl, std::cout, std::string;

int countDigits(const string& s) {
    int count = 0;
    for (char c : s) {
        if (std::isdigit(static_cast<unsigned char>(c))) {
            count++;
        }
    }
    return count;
}

bool containsCat(const string& s) {
    return s.find("cat") != string::npos;
}

int sumNumbers(const string& s) {
    int sum = 0;
    string current = "";

    for (char c : s) {
        if (std::isdigit(static_cast<unsigned char>(c))) {
            current += c;        // build the number
        } else {
            if (!current.empty()) {
                sum += std::stoi(current);
                current = "";
            }
        }
    }

    // handle trailing number
    if (!current.empty()) {
        sum += std::stoi(current);
    }

    return sum;
}

int main() {
    cout << "Enter a string: ";
    string line;
    std::getline(std::cin, line);

    // A. Count digits
    int num_digits = countDigits(line);

    // B. First and last word
    size_t first_space = line.find(' ');
    size_t last_space  = line.rfind(' ');

    string first = (first_space == string::npos)
        ? line
        : line.substr(0, first_space);

    string last = (last_space == string::npos)
        ? line
        : line.substr(last_space + 1);

    // C. Remove whitespace
    string no_space = "";
    for (char c : line) {
        if (!std::isspace(static_cast<unsigned char>(c))) {
            no_space += c;
        }
    }

    // D. Uppercase version
    string upper = "";
    for (char c : line) {
        upper += std::toupper(static_cast<unsigned char>(c));
    }

    // E. Contains "cat"
    bool has_cat = containsCat(line);

    // F. Sum of numbers
    int sum = sumNumbers(line);

    // Output
    cout << "Digits: " << num_digits << endl;
    cout << "First word: " << first << endl;
    cout << "Last word: " << last << endl;
    cout << "No-space version: " << no_space << endl;
    cout << "Uppercase: " << upper << endl;
    cout << "Contains 'cat': " << (has_cat ? "yes" : "no") << endl;
    cout << "Sum of numbers: " << sum << endl;

    return 0;
}

