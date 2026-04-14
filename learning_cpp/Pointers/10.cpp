#include <iostream>
using std::cout, std::endl;

void fill(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = (i + 1) * 10;
    }
}

void reverse(int* arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + size - 1 - i);
        *(arr + size - 1 - i) = temp;
    }
}

int main() {
    int* arr = new int[5];
    fill(arr, 5);
    cout << "Filled:   ";
    for (int i = 0; i < 5; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    reverse(arr, 5);
    cout << "Reversed: ";
    for (int i = 0; i < 5; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
