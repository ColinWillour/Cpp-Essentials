#include <iostream>

double* normalize(const double* arr, size_t size, double* min_out, double* max_out) {
        // your code here (must use pointer arithmetic)
        return nullptr;
}

int main() {
        size_t size = 4;
        double* data = new double[size]{5.0, 15.0, 10.0, 20.0};

        double min_val = 0;
        double max_val = 0;

        double* norm = normalize(data, size, &min_val, &max_val);

        std::cout << "Min = " << min_val << ", Max = " << max_val << std::endl;

        std::cout << "Normalized = [";
        for (size_t i = 0; i < size; i++) {
                std::cout << norm[i];
                if (i + 1 < size) std::cout << ", ";
        }
        std::cout << "]" << std::endl;

        delete[] data;
        delete[] norm;
        return 0;
}

