#include "nextdate.h"
#include "gtest/gtest.h"

namespace {

TEST(NextDateTest, c1) {
  EXPECT_STREQ("Invalid input date", NextDate(4, 31, 1811));
  EXPECT_STREQ("Invalid input date", NextDate(0, 31, 2004));
  EXPECT_STREQ("Invalid input date", NextDate(4, 0, 2004));
  EXPECT_STREQ("1/1/2005", NextDate(12, 31, 2004));

  EXPECT_STREQ("Invalid input date", NextDate(4, 31, 2013));
  EXPECT_STREQ("Invalid input date", NextDate(13, 31, 2004));
  EXPECT_STREQ("Invalid input date", NextDate(4, 32, 2004));
  EXPECT_STREQ("1/2/2004", NextDate(1, 1, 2004));
}

}
