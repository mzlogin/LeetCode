#include "../catch.h"
#include "solution.h"

TEST_CASE("Number Of 1 Bits", "numberOf1Bits") {
    Solution sln;

    CHECK(sln.hammingWeight(3) == 2);
    CHECK(sln.hammingWeight(1024) == 1);
    CHECK(sln.hammingWeight(255) == 8);
}
