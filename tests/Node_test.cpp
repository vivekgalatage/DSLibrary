#include "container/Node.h"
#include <gtest/gtest.h>

using ds::container::Node;

TEST(NodeTest, childParentTest)
{
    Node<int> node(10);
    Node<int> node1(100, Node<int>::TreeNode);

    EXPECT_TRUE(node.value() == 10);
    EXPECT_TRUE(node1.value() == 100);
}
