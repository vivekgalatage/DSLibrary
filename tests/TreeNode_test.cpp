#include "container/TreeNode.h"
#include <gtest/gtest.h>

using ds::container::TreeNode;

TEST(TreeNodeTest, childParentTest)
{
    TreeNode<int>* node = new TreeNode<int>(10);
    TreeNode<int>* node1 = new TreeNode<int>(100);
    TreeNode<int>* node2 = new TreeNode<int>(200);
    TreeNode<int>* node3 = new TreeNode<int>(300);
    TreeNode<int>* node4 = new TreeNode<int>(400);
    node->appendChild(node1);
    node->appendChild(node2);
    node2->appendChild(node3);
    node->appendChild(node4);

    EXPECT_TRUE(node->firstChild()->value() == 100);
    EXPECT_TRUE(node2->parent()->value() == 10);
    EXPECT_TRUE(node2->firstChild()->value() == 300);
    EXPECT_TRUE(node->lastChild()->value() == 400);
    EXPECT_TRUE(node->children() == 3);
}
