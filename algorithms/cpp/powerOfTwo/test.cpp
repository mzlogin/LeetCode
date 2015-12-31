#include "../catch.h"
#include "solution.h"

TEST_CASE("Power of Two", "powerOfTwo") {
    Solution sln;

    CHECK(sln.isPowerOfTwo(1) == true);
    CHECK(sln.isPowerOfTwo(2) == true);
    CHECK(sln.isPowerOfTwo(3) == false);
    CHECK(sln.isPowerOfTwo(4) == true);
    CHECK(sln.isPowerOfTwo(5) == false);
    CHECK(sln.isPowerOfTwo(8) == true);
    CHECK(sln.isPowerOfTwo(96) == false);
}
