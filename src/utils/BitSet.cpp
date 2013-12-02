#include"BitSet.h"

namespace ds {
namespace utils {

BitSet::BitSet(const int size, bool setAllBits)
    : size_(size)
{
    unsigned arrayLength = (size_ / sizeof(int)) + ((size_ % sizeof(int)) ? 1 : 0);
    array_ = new unsigned int[arrayLength];
    for (unsigned i = 0; i < arrayLength; ++i)
        array_[i] = (setAllBits ? ~0 : 0);
}

BitSet::~BitSet()
{
    delete[] array_;
}

bool BitSet::test(const int bitPosition) const
{
    int bucket = bitPosition / sizeof(int);
    int localPosition = bitPosition % sizeof(int);
    return (array_[bucket] >> localPosition) & 1;
}

void BitSet::set(const int bitPosition)
{
    int bucket = bitPosition / sizeof(int);
    int localPosition = bitPosition % sizeof(int);
    array_[bucket] |= (1 << localPosition);
}

void BitSet::reset(const int bitPosition)
{
    int bucket = bitPosition / sizeof(int);
    int localPosition = bitPosition % sizeof(int);
    array_[bucket] &= ~(1 << localPosition);
}

void BitSet::flip(const int bitPosition)
{
    int bucket = bitPosition / sizeof(int);
    int localPosition = bitPosition % sizeof(int);
    array_[bucket] ^= (1 << localPosition);
}

bool BitSet::operator[](const int bitPosition) const
{
    return test(bitPosition);
}

bool BitSet::all() const 
{
    unsigned arrayLength = (size_ / sizeof(int)) + ((size_ % sizeof(int)) ? 1 : 0);
    for (unsigned i = 0; i < arrayLength; ++i) {
        if (static_cast<int>(array_[i]) != ~0)
            return false;
    }
    return true;
}

bool BitSet::any() const 
{
    unsigned arrayLength = (size_ / sizeof(int)) + ((size_ % sizeof(int)) ? 1 : 0);
    for (unsigned i = 0; i < arrayLength; ++i) {
        if (array_[i] != 0)
            return true;
    }
    return false;
}

bool BitSet::none() const 
{
    unsigned arrayLength = (size_ / sizeof(int)) + ((size_ % sizeof(int)) ? 1 : 0);
    for (unsigned i = 0; i < arrayLength; ++i) {
        if (array_[i] != 0)
            return false;
    }
    return true;
}

void BitSet::flipAll()
{
    unsigned arrayLength = (size_ / sizeof(int)) + ((size_ % sizeof(int)) ? 1 : 0);
    for (unsigned i = 0; i < arrayLength; ++i)
        array_[i] ^= static_cast<unsigned>(~0);
}

}; // namespace utils
}; // namespace ds
