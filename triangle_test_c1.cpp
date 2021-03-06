#include "triangle.h"
#include "gtest/gtest.h"
#include "gtest/gtest.h"

namespace {
TEST(TriangleTest, c1) {
  EXPECT_STREQ("Equilateral", Triangle(5, 5, 5));
  EXPECT_STREQ("Isosceles", Triangle(2, 2, 3));
  EXPECT_STREQ("Scalene", Triangle(3, 4, 5));
  EXPECT_STREQ("Not a triangle", Triangle(201, 5, 0));

  EXPECT_STREQ("Not a triangle", Triangle(1, 100, 201));
  EXPECT_STREQ("Not a triangle", Triangle(1, 2, 3));
  EXPECT_STREQ("Isosceles", Triangle(2, 3, 3));
}

}


