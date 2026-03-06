#include <iostream>
#include <vector>
using std::string, std::endl, std::cout;

int main() {
	std::vector<int> readings;
	int x;

	while(true) {
		cout << "Enter number (-1 to quit): ";
		std::cin >> x;
		if (x == -1) {
			break;
		}
		if (x > 10000 || x < 0) {
			continue;
		}

		bool duplicate = false;
		for (int i = 0; i < readings.size(); i++) {
			if (x == readings[i]) {
				duplicate = true;
				break;
			}
		}

		if (!duplicate) {
			readings.push_back(x);
		}
	}

	double sum = 0.0;
	int max = readings[0];
	int max_index;
	for (int i = 0; i < readings.size(); i++) {
		sum += readings[i];
		if (readings[i] > max) {
			max = readings[i];
			max_index = i;
		}
		if (readings[i] % 2 == 0) {
			readings.insert(readings.begin() + i + 1, -2);
			i++;
		}
	}
	int size = readings.size();
	int average = sum / size;
	int capacity = readings.capacity();
        readings.insert(readings.begin(), 0);
        readings.insert(readings.end(), 999);
	
	cout << "Vector: ";
	for (int i = 0; i < size; i++) {
		cout << " " << readings[i] << endl;
	}
	cout << "Size: " << size << endl;
	cout << "Capacity: " << capacity << endl;
	cout << "Sum: " << sum << endl;
	cout << "Average: " << average << endl;
	cout << "Max: " << max << endl;
	cout << "Index of max: " << max_index << endl;
	return 0;
}
		
