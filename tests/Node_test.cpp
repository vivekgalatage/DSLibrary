#include "container/Node.h"
#include <gtest/gtest.h>

using ds::container::Node;

typedef Node<int> IntNode;

TEST(NodeTest, valueTypeTest)
{
    IntNode node(10);
    IntNode node1(100, IntNode::TreeNode);

    EXPECT_TRUE(node.value() == 10);
    EXPECT_TRUE(node.type() == IntNode::InvalidNode);
    EXPECT_TRUE(node1.value() == 100);
    EXPECT_TRUE(node1.value() == IntNode::TreeNode);
}
