#include <iostream>
#include <string>
#include <cctype> // Required for toupper

std::string status = "active";

void transformData(double* val, bool changeString) {
    if (val == nullptr) return;

    if (changeString) {
        // Range-based for loop using a reference (char& c)
        // This is exactly what is shown on page 681 of your slides
        for (char& c : status) {
            c = std::toupper(c);
        }
    } else {
        // Using static_cast for 'normal' type conversions
        // This is the preferred C++ way shown on page 678
        int converted = static_cast<int>(*val);
        std::cout << "Converted value: " << (converted * 2) << std::endl;
    }
}

int main() {
    double pi = 3.14159;
    
    // Test Part 1: Casting
    transformData(&pi, false); 
    
    // Test Part 2: In-place string modification
    transformData(&pi, true);
    std::cout << "New status: " << status << std::endl; // Should be ACTIVE

    return 0;
}
