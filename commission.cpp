#include "commission.h"
#include <iostream>
#include <string>
#include <sstream>

const char* Commission(int lock, int stock, int barrel) {
  if (lock == -1) return "Program terminate";

  if (lock < 1 || lock > 70 || stock < 1 || stock > 80 || barrel < 1 || barrel > 90)
    return "Invalid input";

  int sales = lock * 45 + stock * 30 + barrel * 25;
  int commission = sales * 10;
  sales -= 1000;
  if (sales > 0) commission += sales * 5;
  sales -= 800;
  if (sales > 0) commission += sales * 5;
  commission /= 100;
  //std::cout << commission << std::endl;
  
  std::stringstream ss;
  ss << commission;
  std::string str = ss.str();
  
  //std::cout << str.c_str() << std::endl;
  return str.c_str();
}
