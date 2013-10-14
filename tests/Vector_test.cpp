#include "container/Vector.h"

#include "testing/Test.h"
#include "testing/TestFramework.h"

using namespace ds::testing;

class VectorTest : public ds::testing::Test
{
public:
    bool run();
    std::string description();
};

bool VectorTest::run()
{
    return true;
}

std::string VectorTest::description()
{
    return "Unit Test: ds::container::Vector";
}

REGISTER_TEST(VectorTest);
