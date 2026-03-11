#include <iostream>
#include <string>
#include "validation.h"
#include "audit_mode.h"
using std::cout, std::cin, std::endl, std::string;

int main(int argc, char* argv[]) {
	if (argc == 3) {
		process_file(argv[1], argv[2]);
	}
	else {
		run_menu();
	}	
}

