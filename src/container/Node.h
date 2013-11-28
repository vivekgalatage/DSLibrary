#ifndef DS_CONTAINER_NODE_H
#define DS_CONTAINER_NODE_H

namespace ds {
namespace container {

template <typename T>
class Node {
public:
    enum Type {
        InvalidNode = -1,
        TreeNode,
        ListNode
    };

    Node();
    explicit Node(const Type& type);
    explicit Node(const T& val);
    Node(const T& val, const Type& type);
    void setValue(const T& val);
    T value() const;
    Node* next() const;
    Node* previous() const;
    Type type() const;
protected:
    T m_value;
    Node* m_next;
    Node* m_previous;
    Type m_type;
};

}; // namespace conatainer
}; // namespace ds

#include "Node.inl"

#endif // DS_CONTAINER_NODE_H
