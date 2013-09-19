#ifndef DS_BASE_STRING_H
#define DS_BASE_STRING_H

#include <string>

namespace ds {
namespace base {
class StringPrivate;

class String {
public:
    String();
    String(char* data, int length);

    int length() const;

    operator std::string();

private:
    StringPrivate* m_pvt;
}; // class String
}; // namespace base
}; // namespace ds

#endif // DS_BASE_STRING_H
