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

  if ( a + b <= c ) return "Not a triangle";

  if ( c == b && b == c ) return "Equilateral";

  else if ( c != b && b != a ) return "Scalene";

  else return "Isosceles";

}
