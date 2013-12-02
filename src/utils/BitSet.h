#ifndef DS_UTILS_BITSET_H
#define DS_UTILS_BITSET_H

namespace ds {
namespace utils {

class BitSet {
public:
    explicit BitSet(const int size, bool setAllBits = false);
    ~BitSet();

    void set(const int bitPosition);
    void reset(const int bitPosition);
    void flip(const int bitPosition);
    void flipAll();
    
    bool test(const int bitPosition) const;
    bool operator[](const int bitPosition) const;
    bool all() const;
    bool any() const;
    bool none() const;

    unsigned size() const { return size_; }

private:
    unsigned size_;
    unsigned int* array_;
}; // BitSet

}; // namespace utils
}; // namespace ds
#endif // DS_UTILS_BITSET_H
