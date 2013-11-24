namespace ds {
namespace container {

template <typename T>
Tree<T>::Tree()
    : m_root(0)
    , m_iterator(0)
{
}

template <typename T>
Tree<T>::Tree(TreeNode<T>* root)
    : m_root(root)
    , m_iterator(root)
{
}

template <typename T>
void Tree<T>::setRoot(TreeNode<T>* root)
{
    m_root = root;
    m_iterator = m_root;
}

template <typename T>
TreeNode<T>* Tree<T>::root() const
{
    return m_root;
}

template <typename T>
void Tree<T>::setIterator(TreeNode<T>* pos)
{
    m_iterator = pos;
}

template <typename T>
TreeNode<T>* Tree<T>::iterator() const
{
    return m_iterator;
}

template <typename T>
void Tree<T>::appendChild(TreeNode<T>* child)
{
    m_iterator->appendChild(child);
}

template <typename T>
TreeNode<T>* Tree<T>::parent() const
{
    return m_iterator->parent();
}

}; // namespace utils
}; // namespace ds
