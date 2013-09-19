#ifndef DS_TESTING_TESTFRAMEWORK_H
#define DS_TESTING_TESTFRAMEWORK_H

#include <string>
#include <map>

namespace ds {
namespace testing {

class Test;
class UnitTestRunner;

typedef Test* (*TestGenerator)();

class TestFramework
{
public:
    static Test* create(const std::string& id);
    static bool addToRegistry(const std::string& id, TestGenerator);

private:
    static TestFramework& instance();

private:
    std::map<std::string, TestGenerator> m_registry;

    friend class UnitTestRunner;
};

template <typename T>
Test* testGenerator()
{
    return new T();
}

#define REGISTER_TEST(className) \
    bool _id##className = TestFramework::addToRegistry(#className, testGenerator<className>)

}; // namespace testing
}; // namespace ds

#endif // DS_TESTING_TESTFRAMEWORK_H
