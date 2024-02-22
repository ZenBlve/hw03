#include "hw03.h"

std::string convertTo12Hour(std::string time24Hour) {
	int hours = std::stoi(time24Hour.substr(0, 2));
	int minutes = std::stoi(time24Hour.substr(3, 2));
	std::string am_pm;

	if (hours < 12)
		am_pm = "AM";
	else
		am_pm = "PM";

	if (hours == 0)
		hours = 12;
	else if (hours > 12) 
		hours -=12;

	return std::to_string(hours) + ":" + ((minutes < 10) ? "0" : "") + std::to_string(minutes) + " " + am_pm;
}
