namespace ds {
namespace container {

template <typename T>
TreeNode<T>::TreeNode()
    : Node<T>(Node<T>::TreeNode)
{
}

template <typename T>
TreeNode<T>::TreeNode(const T& val)
    : Node<T>(val, Node<T>::TreeNode)
{
}

template <typename T>
void TreeNode<T>::setParent(TreeNode* parent)
{
    parent_ = parent;
}

template <typename T>
void TreeNode<T>::appendChild(TreeNode* child)
{
    if (children_.size()) {
        child->Node<T>::previous_ = static_cast<Node<T>*>(children_.back());
        children_.back()->Node<T>::next_ = static_cast<Node<T>*>(child);
    }
    children_.push_back(child);
    child->setParent(this);
}

template <typename T>
TreeNode<T>* TreeNode<T>::parent() const
{
    return parent_;
}

template <typename T>
TreeNode<T>* TreeNode<T>::firstChild() const
{
    if (children_.size())
        return children_.front();
    else
        return 0;
}

template <typename T>
TreeNode<T>* TreeNode<T>::lastChild() const
{
    if (children_.size())
        return children_.back();
    else
        return 0;
}

template <typename T>
TreeNode<T>* TreeNode<T>::nextSibling() const
{
    return static_cast<TreeNode<T>*>(Node<T>::next_);
}

template <typename T>
TreeNode<T>* TreeNode<T>::previousSibling() const
{
    return static_cast<TreeNode<T>*>(Node<T>::previous_);
}

template <typename T>
T TreeNode<T>::value() const
{
    return Node<T>::value_;
}

template <typename T>
int TreeNode<T>::children() const
{
    return children_.size();
}

}; // namespace container
}; // namespace ds
