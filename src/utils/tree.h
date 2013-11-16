#ifndef DS_UTILS_TREE_H
#define DS_UTILS_TREE_H

#include "node.h"

namespace ds {
namespace utils {

template <class T>
class Tree {
public:
    Tree();
    Tree(Node<T>* root);
    void setRoot(Node<T>* root);
    Node<T>* root() const;
    void setCurrentPosition(Node<T>* pos);
    Node<T>* currentPosition() const;
    void addChildToLeft(Node<T>* child);
    void addChildToRight(Node<T>* child);
    void addChildAtPosition(int pos, Node<T>* child);
    Node<T>* parent() const;
    int children();
private:
    Node<T>* m_root;
    Node<T>* m_currentPosition;
};

}; // namespace utils
}; // namespace ds
#endif // DS_UTILS_TREE_H
