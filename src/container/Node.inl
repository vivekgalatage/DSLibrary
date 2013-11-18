namespace ds {
namespace container {

template <typename T>
Node<T>::Node() { };

template <typename T>
Node<T>::Node(T val)
{
    m_value = val;
}

template <typename T>
void Node<T>::setValue(const T val)
{
    m_value = val;
}

template <typename T>
T Node<T>::value() const
{
    return m_value;
}

template<typename T>
void Node<T>::setParent(Node<T>* parent)
{
    m_parent = parent;
}

template <typename T>
Node<T>* Node<T>::parent() const
{
    return m_parent;
}

template <typename T>
int Node<T>::children()
{
    return m_children.size();
}

template <typename T>
void Node<T>::addChildToRight(Node<T>* child)
{
    m_children.push_back(child);
}

template <typename T>
void Node<T>::addChildToLeft(Node<T>* child)
{
    m_children.insert(m_children.begin(), child);
}

template <typename T>
void Node<T>::addChildAtPosition(int pos, Node<T>* child)
{
    if (m_children.size() >= pos)
        m_children.insert(m_children.begin() + pos, child);
}

template <typename T>
Node<T>* Node<T>::getChildAt(int pos) const
{
    if (pos < m_children.size())
        return m_children[pos];
    else
        return 0;
}

}; // namespace utils
}; // namespace ds
