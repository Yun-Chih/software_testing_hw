#include "nextdate.h"
#include "gtest/gtest.h"

namespace {

TEST(NextDateTest, c0) {
  EXPECT_STREQ("Invalid input date", NextDate(4, 31, 1811));
  EXPECT_STREQ("Invalid input date", NextDate(0, 31, 2004));
  EXPECT_STREQ("Invalid input date", NextDate(4, 0, 2004));
  EXPECT_STREQ("1/1/2005", NextDate(12, 31, 2004));
}

}
