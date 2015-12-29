#include "../catch.h"
#include "solution.h"

TEST_CASE("Ugly Number", "uglyNumber") {
    Solution sln;

    CHECK(sln.isUgly(1) == true);
    CHECK(sln.isUgly(2) == true);
    CHECK(sln.isUgly(3) == true);
    CHECK(sln.isUgly(4) == true);
    CHECK(sln.isUgly(5) == true);
    CHECK(sln.isUgly(10) == true);
    CHECK(sln.isUgly(15) == true);
    CHECK(sln.isUgly(30) == true);
    CHECK(sln.isUgly(42) == false);
    CHECK(sln.isUgly(165) == false);
}
