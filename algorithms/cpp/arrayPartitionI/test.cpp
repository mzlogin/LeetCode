#include "../catch.h"
#include <vector>
#include <algorithm>
using namespace std;
#include "solution.h"
#include "../myvectorutil.h"

TEST_CASE("Array Partition I", "arrayPartitionI") {
    Solution sln;

    const int len = 10;
    int a[len] = {3, -3, 1, 100, 2, 105, 108, 222, 5555, 1010};

    vector<int> vec = createVector(a, len);
    
    CHECK(sln.arrayPairSum(vec) == 1217);
}
