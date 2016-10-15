#include "../catch.h"
#include "solution.h"

TEST_CASE("Power of Three", "PowerOfThree") {
    Solution sln;

    SECTION("Solution 1") {
        CHECK(sln.isPowerOfThree(0) == false);
        CHECK(sln.isPowerOfThree(1) == true);
        CHECK(sln.isPowerOfThree(2) == false);
        CHECK(sln.isPowerOfThree(81) == true);
        CHECK(sln.isPowerOfThree(99) == false);
        CHECK(sln.isPowerOfThree(2147483647) == false);
    }

    SECTION("Solution 2") {
        CHECK(sln.isPowerOfThree2(0) == false);
        CHECK(sln.isPowerOfThree2(1) == true);
        CHECK(sln.isPowerOfThree2(2) == false);
        CHECK(sln.isPowerOfThree2(81) == true);
        CHECK(sln.isPowerOfThree2(99) == false);
        CHECK(sln.isPowerOfThree2(2147483647) == false);
    }
}
