#include "../catch.h"
#include "solution.h"

TEST_CASE("Hamming Distance", "hammingDistance") {
    Solution sln;
    CHECK(sln.hammingDistance(1024, 1024) == 0);
    CHECK(sln.hammingDistance(1024, 1023) == 11);
    CHECK(sln.hammingDistance(0, 1) == 1);
    CHECK(sln.hammingDistance(7, 4) == 2);
}
