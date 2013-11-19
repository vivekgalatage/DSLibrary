#ifndef DS_CONTAINER_TREENODE_H
#define DS_CONTAINER_TREENODE_H

#include <vector>

namespace ds {
namespace container {

template <typename T>
class TreeNode {
public:
    TreeNode();
    TreeNode(T val);
    void setParent(TreeNode* parent);
    void addChild(TreeNode* child);
    TreeNode* parent() const;
    TreeNode* firstChild() const;
    TreeNode* lastChild() const;
    void setNextSibling(TreeNode* next);
    void setPreviousSibling(TreeNode* previous);
    TreeNode* nextSibling() const;
    TreeNode* previousSibling() const;
    T value() const;
    int children() const;

private:
    T m_value;
    TreeNode* m_nextSibling;
    TreeNode* m_previousSibling;
    TreeNode* m_parent;
    std::vector<TreeNode*> m_children;
};

}; // namespace container
}; // namespace ds

#include "TreeNode.inl"

#endif // DS_CONTAINER_TREENODE_H
