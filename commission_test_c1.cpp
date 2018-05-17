#include "commission.h"
#include "gtest/gtest.h"
#include "gtest/gtest.h"

namespace {
TEST(CommissionTest, c1) {
  EXPECT_STREQ("240", Commission(19, 19, 19));
  EXPECT_STREQ("Program terminate", Commission(-1, 40, 45));
  EXPECT_STREQ("Invalid input", Commission(0, 40, 45));
  EXPECT_STREQ("Invalid input", Commission(35, 0, 45));
  EXPECT_STREQ("Invalid input", Commission(35, 40, 0));

  EXPECT_STREQ("Invalid input", Commission(71, 40, 45));
  EXPECT_STREQ("Invalid input", Commission(35, 81, 45));
  EXPECT_STREQ("Invalid input", Commission(35, 40, 91));
  EXPECT_STREQ("10", Commission(1, 1, 1));
  EXPECT_STREQ("115", Commission(11, 11, 11));
  EXPECT_STREQ("205", Commission(17, 17, 17));
}

}
