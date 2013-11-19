namespace ds {
namespace container {

template <typename T>
TreeNode<T>::TreeNode() { };

template <typename T>
TreeNode<T>::TreeNode(T val)
{
    m_value = val;
}

template <typename T>
void TreeNode<T>::setParent(TreeNode* parent)
{
    m_parent = parent;
}

template <typename T>
void TreeNode<T>::addChild(TreeNode* child)
{
    if (m_children.size()) {
        child->setPreviousSibling(m_children.back());
        m_children.back()->setNextSibling(child);    
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
void TreeNode<T>::setNextSibling(TreeNode* next)
{
    m_nextSibling = next;
}

template <typename T>
void TreeNode<T>::setPreviousSibling(TreeNode* previous)
{
    m_previousSibling = previous;
}

template <typename T>
TreeNode<T>* TreeNode<T>::nextSibling() const
{
    return m_nextSibling;
}

template <typename T>
TreeNode<T>* TreeNode<T>::previousSibling() const
{
    return m_previousSibling;
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
