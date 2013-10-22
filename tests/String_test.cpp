#include "base/String.h"

#include <gtest/gtest.h>

using ds::base::String;

TEST(StringTest, stringLengthTest)
{
    String emptyString;
    EXPECT_TRUE(emptyString.length() == 0);
    EXPECT_TRUE(emptyString.empty());

    String nonEmptyString("non-empty", 8);
    EXPECT_TRUE(nonEmptyString.length() != 0);
    EXPECT_TRUE(nonEmptyString.length() == 8);

    String copyString(nonEmptyString);
    EXPECT_TRUE(copyString.length() == nonEmptyString.length());
    EXPECT_TRUE(copyString.length() != 0);

    String copyEmptyString(emptyString);
    EXPECT_TRUE(copyEmptyString.empty());
}

