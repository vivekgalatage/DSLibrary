namespace ds {
namespace container {

template <typename T>
Tree<T>::Tree() { };

template <typename T>
Tree<T>::Tree(Node<T>* root)
{
    m_root = root;
    m_currentPosition = m_root;
}

template <typename T>
void Tree<T>::setRoot(Node<T>* root)
{
    m_root = root;
    m_currentPosition = m_root;
}

template <typename T>
Node<T>* Tree<T>::root() const
{
    return m_root;
}

template <typename T>
void Tree<T>::setCurrentPosition(Node<T>* pos)
{
    m_currentPosition = pos;
}

template <typename T>
Node<T>* Tree<T>::currentPosition() const
{
    return m_currentPosition;
}

template <typename T>
void Tree<T>::addChildToLeft(Node<T>* child)
{
    m_currentPosition->addChildToLeft(child);
    child->setParent(m_currentPosition);
}

template <typename T>
void Tree<T>::addChildToRight(Node<T>* child)
{
    m_currentPosition->addChildToRight(child);
    child->setParent(m_currentPosition);
}

template <typename T>
void Tree<T>::addChildAtPosition(int pos, Node<T>* child)
{
    m_currentPosition->addChildAtPosition(pos, child);
    child->setParent(m_currentPosition);
}

template <typename T>
Node<T>* Tree<T>::parent() const
{
    return m_currentPosition->parent();
}

template <typename T>
int Tree<T>::children()
{
    return m_currentPosition->children();
}

}; // namespace utils
}; // namespace ds
