#include "container/Tree.h"
#include <gtest/gtest.h>
#include <stdlib.h>

using ds::container::Tree;

TEST(TreeTest, childParentTest)
{
    TreeNode<int>* node = new TreeNode<int>(10);
    TreeNode<int>* node1 = new TreeNode<int>(100);
    TreeNode<int>* node2 = new TreeNode<int>(200);
    Tree<int> tree;
    
    tree.setRoot(node);
    EXPECT_TRUE(tree.root()->value() == 10);

    tree.appendChild(node1);
    tree.appendChild(node2);
    EXPECT_TRUE(tree.root()->firstChild()->value() == 100);
    EXPECT_TRUE(tree.root()->lastChild()->value() == 200);
    
    tree.setIterator(node2);
    EXPECT_TRUE(tree.iterator()->value() == 200);
    EXPECT_TRUE(tree.iterator()->parent()->value() == 10);
}
