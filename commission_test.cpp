#include "commission.h"
#include "gtest/gtest.h"
#include "gtest/gtest.h"

namespace {
TEST(CommissionTest, WeakNormal) {
  EXPECT_STREQ("10", Commission(1, 1, 1));
  EXPECT_STREQ("20", Commission(2, 2, 2));
  EXPECT_STREQ("90", Commission(9, 9, 9));
  EXPECT_STREQ("100", Commission(10, 10, 10));
  EXPECT_STREQ("115", Commission(11, 11, 11));
  EXPECT_STREQ("205", Commission(17, 17, 17));
  EXPECT_STREQ("220", Commission(18, 18, 18));
  EXPECT_STREQ("240", Commission(19, 19, 19));
  EXPECT_STREQ("Program terminate", Commission(-1, 40, 45));
  EXPECT_STREQ("Program terminate", Commission(-1, 0, 91));
}

//TEST(CommissionTest, WeakRobust) {
//}

//TEST(CommissionTest, StrongRobust) {
//}
}


