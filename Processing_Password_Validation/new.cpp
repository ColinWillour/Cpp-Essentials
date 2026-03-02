#include <iostream>



int main() {

  int A[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  A[0] = 10;

  std::cout << ++A[1] << std::endl;

  for (int i = 0; i < 10; i++) {

    if (i == 3) {

      i++;

    }

    if (i == 5) {

      break;

    }

    std::cout << A[i] << " ";

  }

  return 0;

}
