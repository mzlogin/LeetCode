#include "../catch.h"
#include "solution.h"

TEST_CASE("Sum of Two Integers", "sumOfTwoIntegers") {
    Solution sln;

    CHECK(sln.getSum(12, 3) == 15);
    CHECK(sln.getSum(5, 5) == 10);
    CHECK(sln.getSum(12, 5) == 17);
}
