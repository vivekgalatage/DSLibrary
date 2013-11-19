#include "container/TreeNode.h"
#include <gtest/gtest.h>
#include <stdlib.h>

using ds::container::Node;

TEST(TreeNodeTest, childParentTest)
{
    TreeNode<int>* node = new TreeNode<int>(10);
    TreeNode<int>* node1 = new TreeNode<int>(100);
    TreeNode<int>* node2 = new TreeNode<int>(200);
    TreeNode<int>* node3 = new TreeNode<int>(300);
    TreeNode<int>* node4 = new TreeNode<int>(400);
    node->addChild(node1);
    node->addChild(node2);
    node2->addChild(node3);
    node->addChild(node4);

    EXPECT_TRUE(node->firstChild()->value() == 100);
    EXPECT_TRUE(node2->previousSibling()->value() == 100);
    EXPECT_TRUE(node2->parent()->value() == 10);
    EXPECT_TRUE(node2->firstChild()->value() == 300);
    EXPECT_TRUE(node->lastChild()->value() == 400);
    EXPECT_TRUE(node4->previousSibling()->value() == 200);
    EXPECT_TRUE(node->children() == 3);
}
