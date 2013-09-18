#ifndef DSLIBRARY_CONTAINER_LIST
#define DSLIBRARY_CONTAINER_LIST
namespace DSLibrary {
namespace Container {
template <typename T>
class List
{
private:
    class Node
    {
        friend class List<T>;
    public:
        Node(const T& value);

    private:
        T value_;
        Node* next_;
        Node* previous_;
    };

public:
    class iterator
    {
    public:
        iterator& operator++();
        iterator& operator++(int);
        iterator& operator--();
        iterator& operator--(int);
    };

public:
    List();
    ~List();

    bool insert(const T& value);
    bool clear();

    T operator[](int index) const;

    int size() const { return size_; }

protected:
    Node* head_;
    Node* tail_;
    int size_;
};
};
};
#endif // DSLIBRARY_CONTAINER_LIST

