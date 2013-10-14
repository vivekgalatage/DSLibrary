#ifndef DS_UTILS_BITSET_H
#define DS_UTILS_BITSET_H

namespace ds {
namespace utils {
class BitSet {
public:
    explicit BitSet(int);
    bool test(int) const;
    void set(const int);
    void reset(const int);
    bool operator[](const int) const;

private:
    int m_size;
    int m_array[];
}; // BitSet
}; // namespace utils
}; // namespace ds
#endif // DS_UTILS_BITSET_H
