#include "../catch.h"
#include <string>
#include <algorithm>
using namespace std;
#include "solution.h"

TEST_CASE("Jewels And Stones") {
    Solution sln;

    CHECK(sln.numJewelsInStones("aA", "aAAbbbb") == 3);
    CHECK(sln.numJewelsInStones("z", "ZZ") == 0);
}
