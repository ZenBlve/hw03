#ifndef HW03_H
#define HW03_H_
/**********************************************************
 * Christopher Rafanan	* CS1B TTh 7:30-9:50	* Assig 3 *
 * Conversion of 12-hour to/from 24-hour time notation	*
 * Due: Thursday, February 22, 2024 *
 * *******************************************************/
#include <iostream>
#include <string>

/**********************************************************
 * Convert 12-hour to/from 24-hour time notation
 *
 *  This program will convert any given 12-hour time
 *  notation to 24-hour time notation and vice versa.
 *
 *  INPUTS
 *  Menu Choice
 *  12-hour time input (including AM/PM)
 *  24-hour time input
 *
 *  OUTPUTS
 *  Converted 24-hour time notation from 12-hour
 *  Converted 12-hour time notation form 24-hour
 *  ******************************************************/
std::string convertTo24Hour(std::string time12hour);

std::string convertTo12Hour(std::string time24Hour);

std::string getTime24Hour();

std::string getTime12Hour();

void printConvertedTime(std::string time);

void displayMenu();
#endif
