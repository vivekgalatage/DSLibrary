namespace ds {
namespace container {

template <typename T>
Tree<T>::Tree()
    : root_(0)
{
}

template <typename T>
Tree<T>::Tree(TreeNode<T>* root)
    : root_(root)
{
}

template <typename T>
void Tree<T>::setRoot(TreeNode<T>* root)
{
    root_ = root;
}

template <typename T>
TreeNode<T>* Tree<T>::root() const
{
    return root_;
}

}; // namespace utils
}; // namespace ds
