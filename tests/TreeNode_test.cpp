#include "container/TreeNode.h"
#include <gtest/gtest.h>

using ds::container::TreeNode;

TEST(TreeNodeTest, childParentTest)
{
    TreeNode<int> node(10);
    TreeNode<int> node1(100);
    TreeNode<int> node2(200);
    TreeNode<int> node3(300);
    TreeNode<int> node4(400);
    TreeNode<int> node5(500);
    TreeNode<int> node6(600);
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
