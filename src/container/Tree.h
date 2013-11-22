#ifndef DS_CONTAINER_TREE_H
#define DS_CONTAINER_TREE_H

#include "TreeNode.h"

namespace ds {
namespace container {

template <typename T>
class Tree {
public:
    Tree();
    explicit Tree(TreeNode<T>* root);
    void setRoot(TreeNode<T>* root);
    TreeNode<T>* root() const;
    void setCurrentPosition(TreeNode<T>* pos);
    TreeNode<T>* currentPosition() const;
    void addChild(TreeNode<T>* child);
    TreeNode<T>* parent() const;
private:
    TreeNode<T>* m_root;
    TreeNode<T>* m_currentPosition;
};

}; // namespace utils
}; // namespace ds

#include "Tree.inl"
#endif // DS_CONTAINER_TREE_H
