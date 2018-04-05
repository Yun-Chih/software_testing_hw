#include "nextdate.h"
//#include <iostream>
#include <string>
#include <sstream>


const char* NextDate(int month, int day, int year) {
  int month_arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (year % 4 == 0) month_arr[1] = 29;

  if (year < 1812 || year > 2012) return "Invalid input date";
  else if (month < 1 || month > 12) return "Invalid input date";
  else if (day < 1 || day > month_arr[month - 1]) return "Invalid input date";

  day++;
  if (day > month_arr[month - 1]) {
    day = 1;
    month++;
  }
  if (month > 12) {
    month = 1;
    year++;
  }
  
  std::stringstream ss;
  
  ss << month;
  ss << "/";
  ss << day;
  ss << "/";
  ss << year;

  std::string str = ss.str();

  //std::cout << str << std::endl;
  //std::cout << str.c_str() << std::endl;
 
  return str.c_str();
}
