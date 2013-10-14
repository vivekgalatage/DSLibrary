#include"BitSet.h"

namespace ds {
namespace utils {

BitSet::BitSet(int size)
{
    m_size = size / sizeof(int) + 1;
    m_array[m_size];
}

bool BitSet::test(int bitPosition) const
{
    int bucket = bitPosition / sizeof(int);
    int localPosition = bitPosition % sizeof(int);
    return (m_array[bucket] >> localPosition) & 1;
}

void BitSet::set(const int bitPosition)
{
    int bucket = bitPosition / sizeof(int);
    int localPosition = bitPosition % sizeof(int);
    m_array[bucket] = m_array[bucket] | (1 << localPosition);
}

void BitSet::reset(const int bitPosition)
{
    int bucket = bitPosition / sizeof(int);
    int localPosition = bitPosition % sizeof(int);
    m_array[bucket] = m_array[bucket] & ~(1 << localPosition);
}

bool BitSet::operator[](const int bitPosition) const
{
    return test(bitPosition);
}

}; // namespace utils
}; // namespace ds
