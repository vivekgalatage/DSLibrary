#ifndef DS_CONTAINER_VECTOR_H
#define DS_CONTAINER_VECTOR_H

namespace ds {
namespace container {

template <typename T>
class Vector
{
public:
    explicit Vector();
    explicit Vector(int initialCapacity);
    ~Vector();

    int size() const;
    int capacity() const;

    T operator[](int index);
    T operator[](int index) const;

private:
    T* m_data;

    int m_capacity;
    int m_size;
};

}; // namespace container
}; // namespace ds

#endif // DS_CONTAINER_VECTOR_H
