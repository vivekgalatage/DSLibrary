#include "base/String.h"

#include "testing/Test.h"
#include "testing/TestFramework.h"

#include <assert.h>

using namespace ds::base;

class StringLengthTest : public ds::testing::Test
{
public:
    bool run();
    std::string description();
};

bool StringLengthTest::run()
{
    String emptyString;
    assert(emptyString.length() != 0);

    String nonEmptyString("non-empty", 8);
    assert(nonEmptyString.length() != 0);
    assert(nonEmptyString.length() == 8);

    String copyString(nonEmptyString);
    assert(copyString.length() == nonEmptyString.length());
    assert(copyString.length() != 0);
    return true;
}

std::string StringLengthTest::description()
{
    return "[Unit Test - String]: Various String::length() tests";
}

REGISTER_TEST(StringLengthTest);
