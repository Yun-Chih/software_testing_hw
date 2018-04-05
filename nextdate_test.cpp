#include "nextdate.h"
#include "gtest/gtest.h"

namespace {

TEST(NextDateTest, DecisionTable) {
  EXPECT_STREQ("4/16/2001", NextDate(4, 15, 2001));
  EXPECT_STREQ("5/1/2001", NextDate(4, 30, 2001));
  EXPECT_STREQ("Invalid input date", NextDate(4, 31, 2001));
  EXPECT_STREQ("1/16/2001", NextDate(1, 15, 2001));
  EXPECT_STREQ("2/1/2001", NextDate(1, 31, 2001));
  EXPECT_STREQ("12/16/2001", NextDate(12, 15, 2001));
  EXPECT_STREQ("1/1/2002", NextDate(12, 31, 2001));
  EXPECT_STREQ("2/16/2001", NextDate(2, 15, 2001));
  EXPECT_STREQ("2/29/2004", NextDate(2, 28, 2004));
  EXPECT_STREQ("3/1/2001", NextDate(2, 28, 2001));
  EXPECT_STREQ("3/1/2004", NextDate(2, 29, 2004));
  EXPECT_STREQ("Invalid input date", NextDate(2, 29, 2001));
  EXPECT_STREQ("Invalid input date", NextDate(2, 30, 2001));
}

}
