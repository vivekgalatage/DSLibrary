#include "container/Node.h"
#include <gtest/gtest.h>
#include <stdlib.h>

using ds::container::Node;

TEST(NodeTest, childParentTest)
{
    Node<int>* node = new Node<int>(10);
    Node<int>* node1 = new Node<int>(100);
    Node<int>* node2 = new Node<int>(200);
    Node<int>* node3 = new Node<int>(300);
    node->addChildToLeft(node1);
    node1->setParent(node);
    node->addChildToLeft(node2);
    node2->setParent(node);
    node2->addChildToRight(node3);
    node3->setParent(node2);

    EXPECT_TRUE(node->getChildAt(0)->value() == 200);
    EXPECT_TRUE(node2->getChildAt(0)->value() == 300);
    EXPECT_TRUE(node3->parent()->value() == 200);
}
