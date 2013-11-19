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

    tree.addChild(node1);
    tree.addChild(node2);
    EXPECT_TRUE(tree.root()->firstChild()->value() == 100);
    EXPECT_TRUE(tree.root()->lastChild()->value() == 200);
    
    tree.setCurrentPosition(node2);
    EXPECT_TRUE(tree.currentPosition()->value() == 200);
    EXPECT_TRUE(tree.currentPosition()->parent()->value() == 10);
    EXPECT_TRUE(tree.currentPosition()->previousSibling()->value() == 100);
}
