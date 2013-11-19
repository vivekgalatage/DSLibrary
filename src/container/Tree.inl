namespace ds {
namespace container {

template <typename T>
Tree<T>::Tree() { };

template <typename T>
Tree<T>::Tree(TreeNode<T>* root)
{
    m_root = root;
    m_currentPosition = m_root;
}

template <typename T>
void Tree<T>::setRoot(TreeNode<T>* root)
{
    m_root = root;
    m_currentPosition = m_root;
}

template <typename T>
TreeNode<T>* Tree<T>::root() const
{
    return m_root;
}

template <typename T>
void Tree<T>::setCurrentPosition(TreeNode<T>* pos)
{
    m_currentPosition = pos;
}

template <typename T>
TreeNode<T>* Tree<T>::currentPosition() const
{
    return m_currentPosition;
}

template <typename T>
void Tree<T>::addChild(TreeNode<T>* child)
{
    m_currentPosition->addChild(child);
}

template <typename T>
TreeNode<T>* Tree<T>::parent() const
{
    return m_currentPosition->parent();
}

}; // namespace utils
}; // namespace ds
