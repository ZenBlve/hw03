#include "hw03.h"

int main() {
	int choice;
	std::string time;

	displayMenu();
	std::cin >> choice;

	if (choice == 1 || choice == 2) {
		if (choice == 1) {
			time = getTime12Hour();
			printConvertedTime(convertTo24Hour(time));
		}
		else {
			time = getTime24Hour();
			printConvertedTime(convertTo12Hour(time));
		}
	}
	else {
		std::cout << "Invalid choice. Please run the program again and choose a valid option.\n";
	}

	return 0;
}
