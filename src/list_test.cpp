#include "list.inl"

#include <assert.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>

bool TestInsert()
{
    const unsigned ARRAY_SIZE = 256;
    static int array[ARRAY_SIZE];
    srand(time(0));
    List<int> intList;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        int randomNum = rand() % INT_MAX;
        intList.insert(array[i] = randomNum);
    }

    for (int i = 0; i < ARRAY_SIZE; ++i)
        assert(intList[i] == array[i]);

    return true;
}

int main()
{
    assert(TestInsert());
    return 0;
}
