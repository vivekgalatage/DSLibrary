#include"BitSet.h"

using namespace ds::utils;

BitSet::BitSet(int size)
{
    m_sizeOfInt = sizeof(int);
    m_size = size/m_sizeOfInt + 1;
    m_array[m_size];
}

int BitSet::valueAt(int pos) const
{
    int bucket = 0;
    int localPosition = 0;
    bucket = pos/m_sizeOfInt;
    localPosition = pos%m_sizeOfInt;	
    int ans, temp;
    temp = m_array[bucket];
    ans = temp >> localPosition & 1;
    return ans;
}

void BitSet::setValueAt(const int pos, const int value)
{
    int bucket = 0;
    int localPosition = 0;
    bucket = pos/m_sizeOfInt;
    localPosition = pos%m_sizeOfInt;
    if (value)
        m_array[bucket] = m_array[bucket] | (1 << localPosition);
    else
        m_array[bucket] = m_array[bucket] & ~(1 << localPosition);
}

int BitSet::operator[](const int pos) const
{
    return valueAt(pos);
}
