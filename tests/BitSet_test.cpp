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
    
private:
    bool setResetTest();
    bool utilityFunctionsTest();
};

bool BitSetTest::setResetTest()
{
    BitSet bitset(3);
    bitset.set(0);
    bitset.reset(1);
    bitset.set(2);
    assert(bitset[0] && !bitset[1] && bitset[2]);

    int size = random() % 63;
    BitSet bitsetFalse(size);
    assert(!bitsetFalse.test(random() % size));

    BitSet bitsetTrue(size, true);
    assert(bitsetTrue.test(random() % size));
    
    return true;

}

bool BitSetTest::utilityFunctionsTest()
{
    BitSet bitSetTrue(4, true);
    assert(bitSetTrue.all());
    assert(!bitSetTrue.none());
    
    BitSet bitSetFalse(4);
    assert(bitSetFalse.none());
    assert(!bitSetFalse.any());
    
    BitSet bitSetOne(4);
    assert(!bitSetOne.any());
    bitSetOne.set(1);
    assert(bitSetOne.any());
    
    return true;
}

bool BitSetTest::run()
{
    setResetTest();
    utilityFunctionsTest();
    return true;
}

std::string BitSetTest::description()
{
    return "Unit Test: ds::utils::BitSet";
}

REGISTER_TEST(BitSetTest);
