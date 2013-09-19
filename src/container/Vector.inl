#include "Vector.h"

namespace ds {
namespace container {

template <typename T>
Vector<T>::Vector()
    : m_data(0)
    , m_capacity(0)
    , m_size(0)
{
}

template <typename T>
Vector<T>::Vector(int initialCapacity)
    : m_data(0)
    , m_capacity(initialCapacity)
    , m_size(0)
{
}

template <typename T>
Vector<T>::~Vector()
{
}

template <typename T>
inline int Vector<T>::size() const
{
    return m_size;
}

template <typename T>
inline int Vector<T>::capacity() const
{
    return m_capacity;
}

template <typename T>
T Vector<T>::operator [](int index)
{
    return T();
}

template <typename T>
T Vector<T>::operator [](int index) const
{
    return T();
}

} // namespace container
} // namespace ds
