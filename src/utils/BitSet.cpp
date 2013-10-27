#include"BitSet.h"
#include <assert.h>

namespace ds {
namespace utils {

BitSet::BitSet(const int size, bool setAllBits)
    : m_size(size)
{
    assert(size > 0);
    unsigned arrayLength = m_size / sizeof(int);
    if (m_size % sizeof(int))
        ++arrayLength;
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
    assert(bitPosition >= 0);
    int bucket = bitPosition / sizeof(int);
    int localPosition = bitPosition % sizeof(int);
    return (m_array[bucket] >> localPosition) & 1;
}

void BitSet::set(const int bitPosition)
{
    assert(bitPosition >= 0);
    int bucket = bitPosition / sizeof(int);
    int localPosition = bitPosition % sizeof(int);
    m_array[bucket] |= (1 << localPosition);
}

void BitSet::reset(const int bitPosition)
{
    assert(bitPosition >= 0);
    int bucket = bitPosition / sizeof(int);
    int localPosition = bitPosition % sizeof(int);
    m_array[bucket] &= ~(1 << localPosition);
}

void BitSet::flip(const int bitPosition)
{
    assert(bitPosition >= 0);
    int bucket = bitPosition / sizeof(int);
    int localPosition = bitPosition % sizeof(int);
    m_array[bucket] ^= (1 << localPosition);
}

bool BitSet::operator[](const int bitPosition) const
{
    assert(bitPosition >= 0);
    return test(bitPosition);
}

bool BitSet::all() const 
{
    unsigned arrayLength = m_size / sizeof(int);
    if (m_size % sizeof(int))
        ++arrayLength;
    for (unsigned i = 0; i < arrayLength; ++i) {
        if (static_cast<int>(m_array[i]) != ~0)
            return false;
    }
    return true;
}

bool BitSet::any() const 
{
    unsigned arrayLength = m_size / sizeof(int);
    if (m_size % sizeof(int))
        ++arrayLength;
    for (unsigned i = 0; i < arrayLength; ++i) {
        if (m_array[i] != 0)
            return true;
    }
    return false;
}

bool BitSet::none() const 
{
    unsigned arrayLength = m_size / sizeof(int);
    if (m_size % sizeof(int))
        ++arrayLength;
    for (unsigned i = 0; i < arrayLength; ++i) {
        if (m_array[i] != 0)
            return false;
    }
    return true;
}

void BitSet::flipAll()
{
    unsigned arrayLength = m_size / sizeof(int);
    if (m_size % sizeof(int))
        ++arrayLength;
    for (unsigned i = 0; i < arrayLength; ++i) {
        m_array[i] ^= (~0);
    }
}

}; // namespace utils
}; // namespace ds
