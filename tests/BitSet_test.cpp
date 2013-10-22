#include "utils/BitSet.h"
#include <gtest/gtest.h>
#include <stdlib.h>

using ds::utils::BitSet;

TEST(BitSetTest, setResetTest)
{
    BitSet bitset(3);
    bitset.set(0);
    bitset.reset(1);
    bitset.set(2);
    EXPECT_TRUE(bitset[0] && !bitset[1] && bitset[2]);

    int size = rand() % 63;
    BitSet bitsetFalse(size);
    EXPECT_TRUE(!bitsetFalse.test(rand() % size));

    BitSet bitsetTrue(size, true);
    EXPECT_TRUE(bitsetTrue.test(rand() % size));
}

TEST(BitSetTest, utilityFunctionsTest)
{
    BitSet bitSetTrue(4, true);
    EXPECT_TRUE(bitSetTrue.all());
    EXPECT_TRUE(!bitSetTrue.none());

    bitSetTrue.reset(3);
    EXPECT_TRUE(!bitSetTrue.all());
    bitSetTrue.set(3);
    EXPECT_TRUE(bitSetTrue.all());

    BitSet bitSetFalse(4);
    EXPECT_TRUE(bitSetFalse.none());
    EXPECT_TRUE(!bitSetFalse.any());

    BitSet bitSetOne(4);
    EXPECT_TRUE(!bitSetOne.any());
    bitSetOne.set(1);
    EXPECT_TRUE(bitSetOne.any());

    BitSet bitFlip(4);
    EXPECT_TRUE(!bitFlip[0]);
    bitFlip.flip(0);
    EXPECT_TRUE(bitFlip[0]);
    bitFlip.flip(0);
    EXPECT_TRUE(!bitFlip[0]);
}

