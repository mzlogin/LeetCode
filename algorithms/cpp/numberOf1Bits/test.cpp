#include "../catch.h"
typedef unsigned int uint32_t;
#include "solution.h"

TEST_CASE("Number Of 1 Bits", "numberOf1Bits") {
    Solution sln;

    SECTION("Solution 1") {
        CHECK(sln.hammingWeight(3) == 2);
        CHECK(sln.hammingWeight(1024) == 1);
        CHECK(sln.hammingWeight(255) == 8);
    }

    SECTION("Solution 2") {
        CHECK(sln.hammingWeight2(3) == 2);
        CHECK(sln.hammingWeight2(1024) == 1);
        CHECK(sln.hammingWeight2(255) == 8);
    }

    SECTION("Solution 2") {
        CHECK(sln.hammingWeight3(3) == 2);
        CHECK(sln.hammingWeight3(1024) == 1);
        CHECK(sln.hammingWeight3(255) == 8);
    }

    SECTION("Solution 2") {
        CHECK(sln.hammingWeight4(3) == 2);
        CHECK(sln.hammingWeight4(1024) == 1);
        CHECK(sln.hammingWeight4(255) == 8);
    }
}
