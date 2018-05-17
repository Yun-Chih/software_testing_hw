#include "commission.h"
#include "gtest/gtest.h"
#include "gtest/gtest.h"

namespace {
TEST(CommissionTest, c0) {
  EXPECT_STREQ("240", Commission(19, 19, 19));
  EXPECT_STREQ("Program terminate", Commission(-1, 40, 45));
  EXPECT_STREQ("Invalid input", Commission(0, 40, 45));
  EXPECT_STREQ("Invalid input", Commission(35, 0, 45));
  EXPECT_STREQ("Invalid input", Commission(35, 40, 0));
}

}
