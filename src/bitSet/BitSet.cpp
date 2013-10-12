#include"BitSet.h"

BitSet::BitSet(int size)
{
	m_size = size/32 + 1;
    for (int i = 0; i < m_size; ++i)
        m_array.push_back(0);
}

int BitSet::valueAt(int pos) const
{
	int bucket = 0;
	int localPosition = 0;
	bucket = pos/32;
	localPosition = pos%32;	
	int ans, temp;
    //std::cout << "bucket" << bucket << std::endl;
	temp = m_array[bucket];
    ans = temp >> localPosition & 1;
	return ans;
}

void BitSet::setValueAt(const int pos, const int value)
{
	int bucket = 0;
	int localPosition = 0;
	bucket = pos/32;
	localPosition = pos%32;
    if (value)
        m_array[bucket] = m_array[bucket] | (1 << localPosition);
    else
        m_array[bucket] = m_array[bucket] & ~(1 << localPosition);
}

int BitSet::operator[](const int pos) const
{
    return valueAt(pos);
}

/*int main()
{
    BitSet bitSet(3);
    bitSet.setValueAt(0, 1);
    bitSet.setValueAt(1, 0);
    bitSet.setValueAt(2, 1);
    std::cout << bitSet[0] << std::endl;
    std::cout << bitSet[1] << std::endl;
    std::cout << bitSet[2] << std::endl;
}*/