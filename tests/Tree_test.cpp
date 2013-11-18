#include "container/Tree.h"
#include <gtest/gtest.h>
#include <stdlib.h>

using ds::container::Tree;

TEST(TreeTest, childParentTest)
{
    Node<int>* node = new Node<int>(10);
    Node<int>* node1 = new Node<int>(100);
    Node<int>* node2 = new Node<int>(200);
    Tree<int> tree;
    
    tree.setRoot(node);
    EXPECT_TRUE(tree.root()->value() == 10);

    tree.addChildToLeft(node1);
    tree.addChildToLeft(node2);
    EXPECT_TRUE(tree.root()->getChildAt(0)->value() == 200);
    EXPECT_TRUE(tree.root()->getChildAt(1)->value() == 100);
    
    tree.setCurrentPosition(node2);
    EXPECT_TRUE(tree.currentPosition()->value() == 200);
    EXPECT_TRUE(tree.currentPosition()->parent()->value() == 10);
}
