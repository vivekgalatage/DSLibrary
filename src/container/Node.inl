namespace ds {
namespace container {

template <typename T>
Node<T>::Node()
    : m_type(Node<T>::InvalidNode)
{
}

template <typename T>
Node<T>::Node(const Node<T>::Type& type)
    : m_type(type)
{
}

template <typename T>
Node<T>::Node(const T& val)
    : m_value(val)
    , m_type(Node<T>::InvalidNode)
{
}

template <typename T>
Node<T>::Node(const T& val, const Node<T>::Type& type)
    : m_value(val)
    , m_type(type)
{
}

template <typename T>
void Node<T>::setValue(const T& val)
{
    m_value = val;
}

template <typename T>
T Node<T>::value() const
{
    return m_value;
}

template <typename T>
Node<T>* Node<T>::next() const
{
    return m_next;
}

template <typename T>
Node<T>* Node<T>::previous() const
{
    return m_previous;
}

template <typename T>
typename Node<T>::Type Node<T>::type() const
{
    return m_type;
}

}; // namespace container
}; // namespace ds
