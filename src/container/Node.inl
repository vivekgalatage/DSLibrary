namespace ds {
namespace container {

template <typename T>
Node<T>::Node()
    : type_(Node<T>::InvalidNode)
{
}

template <typename T>
Node<T>::Node(const Node<T>::Type& type)
    : type_(type)
{
}

template <typename T>
Node<T>::Node(const T& val)
    : value_(val)
    , type_(Node<T>::InvalidNode)
{
}

template <typename T>
Node<T>::Node(const T& val, const Node<T>::Type& type)
    : value_(val)
    , type_(type)
{
}

template <typename T>
void Node<T>::setValue(const T& val)
{
    value_ = val;
}

template <typename T>
T Node<T>::value() const
{
    return value_;
}

template <typename T>
Node<T>* Node<T>::next() const
{
    return next_;
}

template <typename T>
Node<T>* Node<T>::previous() const
{
    return previous_;
}

template <typename T>
typename Node<T>::Type Node<T>::type() const
{
    return type_;
}

}; // namespace container
}; // namespace ds
