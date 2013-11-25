#include "container/Tree.h"
#include <gtest/gtest.h>

using ds::container::Tree;

TEST(TreeTest, childParentTest)
{
    TreeNode<int> node(10);
    TreeNode<int> node1(100);
    Tree<int> tree;
    node.appendChild(&node1);
    
    tree.setRoot(&node);
    EXPECT_TRUE(tree.root()->value() == 10);
    EXPECT_TRUE(tree.root()->firstChild()->value() == 100);
}
