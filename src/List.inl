#include "List.h"

#include <stdio.h>

using namespace DSLibrary::Container;

template <typename T>
List<T>::Node::Node(const T& value)
    : value_(value)
    , next_(0)
    , previous_(0)
{
}

template <typename T>
List<T>::List()
    : head_(0)
    , tail_(0)
    , size_(0)
{
}

template <typename T>
List<T>::~List()
{
}

template <typename T>
bool List<T>::insert(const T& value)
{
    Node* newNode = new Node(value);
    ++size_;

    if (!head_) {
        head_ = tail_ = newNode;
        return true;
    }

    tail_->next_ = newNode;
    newNode->previous_ = tail_;
    tail_ = newNode;
    return true;
}

template <typename T>
bool List<T>::clear()
{
    if (!head_ && !tail_)
        return true;

    Node* iter = head_;
    while (iter) {
        Node* tmp = iter;
        iter = iter->next_;
        delete tmp;
    }
    head_ = tail_ = size_ = 0;
    return true;
}

template <typename T>
bool List<T>::mergeSort()
{
    mergeSort(head_, tail_, size_);
    return true;
}

template <typename T>
bool List<T>::mergeSort(Node* start, Node* end, int size)
{
    if (size <= 1)
        return true;

    if (start == end)
        return true;

    if (!start)
        return true;

    if (!end)
        return true;

    int mid = size/2;
    Node* middle = head_;
    int i = mid;
    while(i)
        middle = middle->next_, i--;

    printf("%d\n", middle->value_);


    mergeSort(start, middle, mid);
    mergeSort(middle->next_, end, size - mid);
    return true;
}

template <typename T>
T List<T>::operator [](int index) const
{
    Node* temp = head_;
    while (temp && index)
        temp = temp->next_, index--;
    if (temp && !index)
        return temp->value_;
    else
        return T();
}

