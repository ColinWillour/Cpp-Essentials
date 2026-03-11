#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include "audit_mode.h"
#include "validation.h"
using std::endl, std::cout, std::string;

void process_file(std::string input, std::string output) {
	std::ifstream input_file(input);
	if (!input_file.is_open()) {
		std::cerr << "Error opening file";
		return;
	}

	std::ofstream output_file(output, std::ios::app);
	if (!output_file.is_open()) {
		std::cerr << "Error opening file";
		return;
	}
	
	char input_delimiter;
	char output_delimiter;
	if (input.find(".tsv") != string::npos) {
		input_delimiter = '\t';
	}
	else if (input.find(".csv") != string::npos) {
		input_delimiter = ',';
	}
	else {
		std::cerr << "Error file not found";
	}
	if (output.find(".tsv") != string::npos) {
		output_delimiter = '\t';
	}
	else if (output.find(".csv") != string::npos) {
		output_delimiter = ',';
	}
	else {
		std::cerr << "Error file not found";
	}

	string username = "";
	string email = "";
	string password = "";
	while(getline(input_file, username, input_delimiter)) {
		getline(input_file, email, input_delimiter);
		getline(input_file, password);
	

		bool is_valid = is_valid_password(password);
		if (!is_valid) {
			output_file << username << output_delimiter << email << output_delimiter << password << endl;
		}
	}	
		
}

void run_menu() {
	int loop = true;
	while (loop) {
		cout << "1. Check a single password" << endl;
		cout << "2. Process a TSV/CSV file" << endl;
		cout << "3. Quit" << endl;
		int pick;
		std::cin >> pick;
		switch (pick) {
			case 1: {
				cout << "Enter a password:" << endl;
				string password;
				std::cin >> password;
				bool is_valid = is_valid_password(password);
				if (is_valid) {
					cout << "Valid" << endl;
				}
				else {
					cout << "Invalid" << endl;
				}
				break;
			}

			case 2: {
				cout << "Input file: ";
				string input;
				string output;
				std::cin >> input;
				cout << "Output file: ";
				std::cin >> output;
				process_file(input, output);
				break;
			}

			case 3: {
				loop = false;
				break;
			}
		}
	}
}
