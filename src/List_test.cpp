#include "List.inl"

#include <assert.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>

bool testInsert()
{
    const unsigned ARRAY_SIZE = 256;
    static int array[ARRAY_SIZE];
    srand(time(0));
    List<int> intList;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        int randomNum = rand() % INT_MAX;
        intList.insert(array[i] = randomNum);
    }

    assert(intList.size() == ARRAY_SIZE);

    for (int i = 0; i < ARRAY_SIZE; ++i)
        assert(intList[i] == array[i]);

    return true;
}

bool testMergeSort()
{
    const unsigned ARRAY_SIZE = 6;
    static int array[ARRAY_SIZE];
    srand(time(0));
    List<int> intList;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        int randomNum = i; //rand() % INT_MAX;
        intList.insert(array[i] = randomNum);
    }

    intList.mergeSort();
}

int main()
{
    assert(testInsert());
    assert(testMergeSort());
    return 0;
}

