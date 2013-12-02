#include "String.h"

namespace ds {
namespace base {

class StringPrivate {
public:
    StringPrivate();
    StringPrivate(const char*, int);

private:
    int length_;

    friend class String;
};

StringPrivate::StringPrivate()
    : length_(0)
{
}

StringPrivate::StringPrivate(const char* data, int length)
    : length_(length)
{

}


String::String()
    : pvt_(0)
{
    pvt_ = new StringPrivate();
}

String::String(const char* data, int length)
    : pvt_(0)
{
    pvt_ = new StringPrivate(data, length);
}

int String::length() const
{
    return pvt_->length_;
}

bool String::empty() const
{
    return !(pvt_->length_);
}

String::operator std::string()
{
    return std::string();
}
}; // namespace base
}; // namespace ds
