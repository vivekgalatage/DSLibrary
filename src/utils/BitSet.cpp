#include"BitSet.h"

namespace ds {
namespace utils {

BitSet::BitSet(int size)
{
    m_size = size / sizeof(int) + 1;
    m_array = new int[m_size];
}

bool BitSet::test(int bitPosition) const
{
    int bucket = 0;
    int localPosition = 0;
    bucket = bitPosition / sizeof(int);
    localPosition = bitPosition % sizeof(int);	
    int ans = 0, temp = 0;
    temp = m_array[bucket];
    ans = temp >> localPosition & 1;
    return ans;
}

void BitSet::set(const int bitPosition)
{
    int bucket = 0;
    int localPosition = 0;
    bucket = bitPosition / sizeof(int);
    localPosition = bitPosition % sizeof(int); 
    m_array[bucket] = m_array[bucket] | (1 << localPosition);
}

void BitSet::reset(const int bitPosition)
{
    int bucket = 0;
    int localPosition = 0;
    bucket = bitPosition / sizeof(int);
    localPosition = bitPosition % sizeof(int); 
    m_array[bucket] = m_array[bucket] & ~(1 << localPosition);   
}

bool BitSet::operator[](const int bitPosition) const
{
    return test(bitPosition);
}

}; // namespace utils
}; // namespace ds
