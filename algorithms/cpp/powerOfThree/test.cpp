#include "../catch.h"
//#include "solution.h"
#include "solution2.h"

TEST_CASE("Power of Three", "PowerOfThree") {
    Solution sln;
    CHECK(sln.isPowerOfThree(0) == false);
    CHECK(sln.isPowerOfThree(1) == true);
    CHECK(sln.isPowerOfThree(2) == false);
    CHECK(sln.isPowerOfThree(81) == true);
    CHECK(sln.isPowerOfThree(99) == false);
    CHECK(sln.isPowerOfThree(2147483647) == false);
}
