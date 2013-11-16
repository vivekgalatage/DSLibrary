#include "node.h"

namespace ds {
namespace utils {

template <class T>
Node<T>::Node() { };

template <class T>
Node<T>::Node(T val)
{
    m_value = val;
}

template <class T>
void Node<T>::setValue(const T val)
{
    m_value = val;
}

template <class T>
T Node<T>::value() const
{
    return m_value;
}

template<class T>
void Node<T>::setParent(Node<T>* parent)
{
    m_parent = parent;
}

template <class T>
Node<T>* Node<T>::parent() const
{
    return m_parent;
}

template <class T>
int Node<T>::children()
{
    return m_children.size();
}

template <class T>
void Node<T>::addChildToRight(Node<T>* child)
{
    m_children.push_back(child);
}

template <class T>
void Node<T>::addChildToLeft(Node<T>* child)
{
    m_children.insert(m_children.begin(), child);
}

template <class T>
void Node<T>::addChildAtPosition(int pos, Node<T>* child)
{
    if (m_children.size() >= pos)
        m_children.insert(m_children.begin() + pos, child);
}

template <class T>
Node<T>* Node<T>::getChildAt(int pos) const
{
    if (pos < m_children.size())
        return m_children[pos];
    else
        return 0;
}

}; // namespace utils
}; // namespace ds
