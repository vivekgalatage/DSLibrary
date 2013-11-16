#ifndef DS_UTILS_NODE_H
#define DS_UTILS_NODE_H

#include <vector>

namespace ds {
namespace utils {

template <class T>
class Node {
public:
    Node();
    Node(T val);
    void setValue(const T val);
    void setParent(Node* parent);
    T value() const;
    Node* parent() const;
    int children();
    void addChildToLeft(Node* child);
    void addChildToRight(Node* child);
    void addChildAtPosition(int pos, Node* child);
    Node* getChildAt(int pos) const;
private:
    T m_value;
    Node* m_parent;
    std::vector<Node*> m_children;
};

}; // namespace utils
}; // namespace ds
#endif // DS_UTILS_NODE_H
