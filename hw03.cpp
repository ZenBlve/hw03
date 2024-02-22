#include "hw03.h"

int main() {
	int choice;
	std::string time;

	showChoices();
	std::cin >> choice;

	if (choice == 1 || choice == 2) {
		if (choice == 1) {
			time = getTimeTwelveHour();
			printConvertedTime(twelveToTwentyFourHour(time));
		}
		else {
			time = getTimeTwentyFourHour();
			printConvertedTime(twentyFourToTwelveHour(time));
		}
	}
	else {
		std::cout << "Invalid choice. Please run the program again and choose a valid option.\n";
	}

	return 0;
}
