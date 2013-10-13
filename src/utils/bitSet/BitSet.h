#ifndef BITSET_H
#define BITSET_H

namespace ds {
namespace utils {
class BitSet {
public:
    BitSet(int);
    int valueAt(int) const;
    void setValueAt(const int, const int);
    int operator[](const int) const;

private:
    int m_size;
    int m_array[];
    int m_sizeOfInt;
}; // BitSet
}; // namespace utils
}; // namespace ds
#endif
