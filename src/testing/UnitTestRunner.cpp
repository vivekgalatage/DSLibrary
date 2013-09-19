#include "testing/Test.h"
#include "testing/TestFramework.h"

#include <string>
#include <iostream>
using namespace std;

using namespace ds::testing;

typedef std::map<std::string, TestGenerator> TestMap;

namespace ds {
namespace testing {
class UnitTestRunner
{
public:
    bool execute();
};

bool UnitTestRunner::execute()
{
    TestMap& map = TestFramework::instance().m_registry;

    for (TestMap::iterator it = map.begin(); it != map.end(); ++it) {
        TestGenerator tg = (*it).second;
        if (tg) {
            Test* tc = (*tg)();
            if (tc) {
                cout << tc->description() << endl;
            }
        }
    }

}

}; // namespace testing
}; // namespace ds

int main(int argc, char** argv)
{
    UnitTestRunner ut;
    ut.execute();
    return 0;
}
