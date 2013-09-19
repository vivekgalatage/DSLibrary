#include "String.h"

#include "testing/Test.h"
#include "testing/TestFramework.h"

using namespace ds::testing;

class StringTest : public ds::testing::Test
{
public:
    bool run();
    std::string description();
};

bool StringTest::run()
{
    return true;
}

std::string StringTest::description()
{
    return "Unit Test: ds::base::String";
}

REGISTER_TEST(StringTest);
