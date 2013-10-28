#include"BitSet.h"

namespace ds {
namespace utils {

BitSet::BitSet(const int size, bool setAllBits)
    : m_size(size)
{
    unsigned arrayLength = (m_size / sizeof(int)) + ((m_size % sizeof(int)) ? 1 : 0);
    m_array = new unsigned int[arrayLength];
    for (unsigned i = 0; i < arrayLength; ++i)
        m_array[i] = (setAllBits ? ~0 : 0);
}

BitSet::~BitSet()
{
    delete[] m_array;
}

bool BitSet::test(const int bitPosition) const
{
    int bucket = bitPosition / sizeof(int);
    int localPosition = bitPosition % sizeof(int);
    return (m_array[bucket] >> localPosition) & 1;
}

void BitSet::set(const int bitPosition)
{
    int bucket = bitPosition / sizeof(int);
    int localPosition = bitPosition % sizeof(int);
    m_array[bucket] |= (1 << localPosition);
}

void BitSet::reset(const int bitPosition)
{
    int bucket = bitPosition / sizeof(int);
    int localPosition = bitPosition % sizeof(int);
    m_array[bucket] &= ~(1 << localPosition);
}

void BitSet::flip(const int bitPosition)
{
    int bucket = bitPosition / sizeof(int);
    int localPosition = bitPosition % sizeof(int);
    m_array[bucket] ^= (1 << localPosition);
}

bool BitSet::operator[](const int bitPosition) const
{
    return test(bitPosition);
}

bool BitSet::all() const 
{
    unsigned arrayLength = (m_size / sizeof(int)) + ((m_size % sizeof(int)) ? 1 : 0);
    for (unsigned i = 0; i < arrayLength; ++i) {
        if (static_cast<int>(m_array[i]) != ~0)
            return false;
    }
    return true;
}

bool BitSet::any() const 
{
    unsigned arrayLength = (m_size / sizeof(int)) + ((m_size % sizeof(int)) ? 1 : 0);
    for (unsigned i = 0; i < arrayLength; ++i) {
        if (m_array[i] != 0)
            return true;
    }
    return false;
}

bool BitSet::none() const 
{
    unsigned arrayLength = (m_size / sizeof(int)) + ((m_size % sizeof(int)) ? 1 : 0);
    for (unsigned i = 0; i < arrayLength; ++i) {
        if (m_array[i] != 0)
            return false;
    }
    return true;
}

}; // namespace utils
}; // namespace ds
