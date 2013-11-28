#ifndef DS_CONTAINER_TREENODE_H
#define DS_CONTAINER_TREENODE_H

#include "Node.h"
#include <vector>

namespace ds {
namespace container {

template <typename T>
class TreeNode : public Node<T> {
public:
    TreeNode();
    explicit TreeNode(const T& val);
    void setParent(TreeNode* parent);
    void appendChild(TreeNode* child);
    TreeNode* parent() const;
    TreeNode* firstChild() const;
    TreeNode* lastChild() const;
    TreeNode* nextSibling() const;
    TreeNode* previousSibling() const;
    T value() const;
    int children() const;

private:
    TreeNode* m_parent;
    std::vector<TreeNode*> m_children;
};

}; // namespace container
}; // namespace ds

#include "TreeNode.inl"

#endif // DS_CONTAINER_TREENODE_H
