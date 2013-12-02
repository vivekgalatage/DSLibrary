#include "container/TreeNode.h"
#include <gtest/gtest.h>

using ds::container::TreeNode;

typedef TreeNode<int> IntTreeNode;

TEST(TreeNodeTest, childParentTest)
{
    IntTreeNode node(10);
    IntTreeNode node1(100);
    IntTreeNode node2(200);
    IntTreeNode node3(300);
    IntTreeNode node4(400);
    IntTreeNode node5(500);
    IntTreeNode node6(600);
    node.appendChild(&node1);
    node.appendChild(&node2);
    node2.appendChild(&node3);
    node.appendChild(&node4);
    node3.appendChild(&node5);
    node3.appendChild(&node6);

    EXPECT_TRUE(node.firstChild()->value() == 100);
    EXPECT_TRUE(node2.parent()->value() == 10);
    EXPECT_TRUE(node1.nextSibling()->value() == 200);
    EXPECT_TRUE(node2.previousSibling()->value() == 100);
    EXPECT_TRUE(node2.firstChild()->value() == 300);
    EXPECT_TRUE(node.lastChild()->value() == 400);
    EXPECT_TRUE(node.children() == 3);
    EXPECT_TRUE(node1.nextSibling()->firstChild()->value() == 300);
    EXPECT_TRUE(node1.nextSibling()->firstChild()->firstChild()->nextSibling()->value() == 600);
}
