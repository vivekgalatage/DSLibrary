namespace ds {
namespace container {

template <typename T>
Tree<T>::Tree()
    : m_root(0)
{
}

template <typename T>
Tree<T>::Tree(TreeNode<T>* root)
    : m_root(root)
{
}

template <typename T>
void Tree<T>::setRoot(TreeNode<T>* root)
{
    m_root = root;
}

template <typename T>
TreeNode<T>* Tree<T>::root() const
{
    return m_root;
}

}; // namespace utils
}; // namespace ds
