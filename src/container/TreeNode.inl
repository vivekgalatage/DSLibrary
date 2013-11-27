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
    m_parent = parent;
}

template <typename T>
void TreeNode<T>::appendChild(TreeNode* child)
{
    if (m_children.size()) {
        child->Node<T>::m_previous = static_cast<Node<T>*>(m_children.back());
        m_children.back()->Node<T>::m_next = static_cast<Node<T>*>(child);
    }
    m_children.push_back(child);
    child->setParent(this);
}

template <typename T>
TreeNode<T>* TreeNode<T>::parent() const
{
    return m_parent;
}

template <typename T>
TreeNode<T>* TreeNode<T>::firstChild() const
{
    if (m_children.size())
        return m_children.front();
    else
        return 0;
}

template <typename T>
TreeNode<T>* TreeNode<T>::lastChild() const
{
    if (m_children.size())
        return m_children.back();
    else
        return 0;
}

template <typename T>
TreeNode<T>* TreeNode<T>::nextSibling() const
{
    return static_cast<TreeNode<T>*>(Node<T>::m_next);
}

template <typename T>
TreeNode<T>* TreeNode<T>::previousSibling() const
{
    return static_cast<TreeNode<T>*>(Node<T>::m_previous);
}

template <typename T>
T TreeNode<T>::value() const
{
    return Node<T>::m_value;
}

template <typename T>
int TreeNode<T>::children() const
{
    return m_children.size();
}

}; // namespace container
}; // namespace ds
