#include "triangle.h"
#include "gtest/gtest.h"
#include "gtest/gtest.h"

namespace {
TEST(TriangleTest, WeakNormal) {
  EXPECT_STREQ("Equilateral", Triangle(5, 5, 5));
  EXPECT_STREQ("Isosceles", Triangle(2, 2, 3));
  EXPECT_STREQ("Scalene", Triangle(3, 4, 5));
  EXPECT_STREQ("Not a triangle", Triangle(4, 1, 2));
}

TEST(TriangleTest, WeakRobust) {
  EXPECT_STREQ("Not a triangle", Triangle(-1, 5, 5));
  EXPECT_STREQ("Not a triangle", Triangle(5, -1, 5));
  EXPECT_STREQ("Not a triangle", Triangle(5, 5, -1));
  EXPECT_STREQ("Not a triangle", Triangle(201, 5, 5));
  EXPECT_STREQ("Not a triangle", Triangle(5, 201, 5));
  EXPECT_STREQ("Not a triangle", Triangle(5, 5, 201));
}

TEST(TriangleTest, StrongRobust) {
  EXPECT_STREQ("Not a triangle", Triangle(-1, -1, 5));
  EXPECT_STREQ("Not a triangle", Triangle(-1, 201, 5));
  EXPECT_STREQ("Not a triangle", Triangle(201, -1, 5));
  EXPECT_STREQ("Not a triangle", Triangle(201, 201, 5));
  EXPECT_STREQ("Not a triangle", Triangle(-1, 5, -1));
  EXPECT_STREQ("Not a triangle", Triangle(-1, 5, 201));
  EXPECT_STREQ("Not a triangle", Triangle(201, 5, -1));
  EXPECT_STREQ("Not a triangle", Triangle(201, 5, 201));
  EXPECT_STREQ("Not a triangle", Triangle(5, -1, -1));
  EXPECT_STREQ("Not a triangle", Triangle(5, -1, 201));
  EXPECT_STREQ("Not a triangle", Triangle(5, 201, -1));
  EXPECT_STREQ("Not a triangle", Triangle(5, 201, 201));

  EXPECT_STREQ("Not a triangle", Triangle(-1, -1, -1));
  EXPECT_STREQ("Not a triangle", Triangle(-1, -1, 201));
  EXPECT_STREQ("Not a triangle", Triangle(-1, 201, -1));
  EXPECT_STREQ("Not a triangle", Triangle(-1, 201, 201));
  EXPECT_STREQ("Not a triangle", Triangle(201, -1, -1));
  EXPECT_STREQ("Not a triangle", Triangle(201, -1, 201));
  EXPECT_STREQ("Not a triangle", Triangle(201, 201, -1));
  EXPECT_STREQ("Not a triangle", Triangle(201, 201, 201));
}
}


