namespace ds {
namespace container {

template <typename T>
TreeNode<T>::TreeNode()
    : m_value(0)
{
}

template <typename T>
TreeNode<T>::TreeNode(const T& val)
    : m_value(val)
{
}

template <typename T>
TreeNode<T>::~TreeNode()
{
    delete m_value;
    delete m_parent;
    delete m_children;
}

template <typename T>
void TreeNode<T>::setParent(TreeNode* parent)
{
    m_parent = parent;
}

template <typename T>
void TreeNode<T>::appendChild(TreeNode* child)
{
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
T TreeNode<T>::value() const
{
    return m_value;
}

template <typename T>
int TreeNode<T>::children() const
{
    return m_children.size();
}

}; // namespace container
}; // namespace ds
