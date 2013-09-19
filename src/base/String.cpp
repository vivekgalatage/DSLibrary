#include "String.h"

namespace ds {
namespace base {

class StringPrivate {
public:
    StringPrivate() {}
    StringPrivate(char*, int) {}

private:
    int m_length;

    friend class String;
};

String::String()
    : m_pvt(0)
{
    m_pvt = new StringPrivate();
}

String::String(char* data, int length)
    : m_pvt(0)
{
    m_pvt = new StringPrivate(data, length);
}

int String::length() const
{
    return m_pvt->m_length;
}

String::operator std::string()
{
    return std::string();
}
}; // namespace base
}; // namespace ds
