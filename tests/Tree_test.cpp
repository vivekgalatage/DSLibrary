#include "container/Tree.h"
#include <gtest/gtest.h>

using ds::container::Tree;

typedef TreeNode<int> IntTreeNode;

TEST(TreeTest, childParentTest)
{
    IntTreeNode node(10);
    IntTreeNode node1(100);
    Tree<int> tree;
    node.appendChild(&node1);
    
    tree.setRoot(&node);
    EXPECT_TRUE(tree.root()->value() == 10);
    EXPECT_TRUE(tree.root()->firstChild()->value() == 100);
}
