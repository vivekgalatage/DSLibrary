#ifndef DS_TESTING_TEST_H
#define DS_TESTING_TEST_H

#include <string>

namespace ds {
namespace testing {

class Test
{
public:
    virtual ~Test() { }
    virtual bool run() = 0;
    virtual std::string description() = 0;
};

}; // namespace testing
}; // namespace ds

#endif // DS_TESTING_TEST_H
