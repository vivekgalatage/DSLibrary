#include<iostream>
#include<vector>

class BitSet {
public:
	BitSet(int);
	int valueAt(int) const;
	void setValueAt(const int, const int);
    int operator[](const int);
private:
	int m_size;
	std::vector<int> m_array;
};