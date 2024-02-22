#include "hw03.h"

std::string convertTo24Hour(std::string time12Hour) {
	int hours = std::stoi(time12Hour.substr(0, 2));
	int minutes = std::stoi(time12Hour.substr(3, 2));
	std::string am_pm = time12Hour.substr(5, 2);

	if (am_pm == "PM" && hours != 12)
		hours +=12;
	else if (am_pm == "AM" && hours ==12)
		hours = 0;

	return std::to_string(hours) + ":" + ((minutes < 10) ? "0" : "") + std::to_string(minutes);
}
