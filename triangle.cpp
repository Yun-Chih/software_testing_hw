#include "triangle.h"
//#include <iostream>

const char* Triangle(int a, int b, int c) {
  int tmp;
  if ( a > b) { 
    tmp = b;
    b = a;
    a = tmp;
  }
  if ( b > c) {
    tmp = c;
    c = b;
    b = tmp;
  }
  if ( a > b) {
    tmp = b;
    b = a;
    a = tmp;
  }

  //std::cout <<"var: " << a << b << c << std::endl;
  if ( a < 1 || c > 200 || a + b <= c ) return "Not a triangle";

  else if ( c == b && b == a ) return "Equilateral";

  else if ( c != b && b != a ) return "Scalene";

  else return "Isosceles";

}
