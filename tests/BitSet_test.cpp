#include "utils/BitSet.h"

#include "testing/Test.h"
#include "testing/TestFramework.h"
#include <assert.h>
#include <stdlib.h>

using namespace ds::utils;

class BitSetTest : public ds::testing::Test
{
public:
    bool run();
    std::string description();
};

bool BitSetTest::run()
{
    int size = random() % 63;
    BitSet bitsetFalse(size);
    assert(!bitsetFalse.test(random() % size));

    BitSet bitsetTrue(size, true);
    assert(bitsetTrue.test(random() % size));

    return true;
}

std::string BitSetTest::description()
{
    return "Unit Test: ds::utils::BitSet";
}

REGISTER_TEST(BitSetTest);
