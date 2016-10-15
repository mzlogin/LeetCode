#include "../catch.h"
#include "solution.h"

TEST_CASE("Power of Two", "powerOfTwo") {
    Solution sln;

    SECTION("Solution 1") {
        CHECK(sln.isPowerOfTwo(1) == true);
        CHECK(sln.isPowerOfTwo(2) == true);
        CHECK(sln.isPowerOfTwo(3) == false);
        CHECK(sln.isPowerOfTwo(4) == true);
        CHECK(sln.isPowerOfTwo(5) == false);
        CHECK(sln.isPowerOfTwo(8) == true);
        CHECK(sln.isPowerOfTwo(96) == false);
    }

    SECTION("Solution 2") {
        CHECK(sln.isPowerOfTwo2(1) == true);
        CHECK(sln.isPowerOfTwo2(2) == true);
        CHECK(sln.isPowerOfTwo2(3) == false);
        CHECK(sln.isPowerOfTwo2(4) == true);
        CHECK(sln.isPowerOfTwo2(5) == false);
        CHECK(sln.isPowerOfTwo2(8) == true);
        CHECK(sln.isPowerOfTwo2(96) == false);
    }
}
