#include "hw03.h"

int main() {
	int choice;
	std::string time;

	displayMenu();
	std::cin >> choice;

	if (choice == 1 || choice == 2) {
		std::cout << "Enter the time: ";
		std::cin >> time;


