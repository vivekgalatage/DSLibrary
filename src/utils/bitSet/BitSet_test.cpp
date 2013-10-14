#include "BitSet.h"

#include "testing/Test.h"
#include "testing/TestFramework.h"

using namespace ds::utils;

class BitSetTest : public ds::testing::Test
{
public:
    bool run();
    std::string description();
};

bool BitSetTest::run()
{
    BitSet bitset(3);
    bitset.set(0);
    bitset.reset(1);
    bitset.set(2);

    if (bitset[0] && !bitset[1] && bitset[2])
        return true;
    else
        return false;
}

std::string BitSetTest::description()
{
    return "Unit Test: ds::utils::BitSet";
}

REGISTER_TEST(BitSetTest);
