#include "../catch.h"
#include "solution.h"

TEST_CASE("Add Digits", "addDigits") {
    Solution sln;
    CHECK(sln.addDigits(0) == 0);
    CHECK(sln.addDigits(1) == 1);
    CHECK(sln.addDigits(10) == 1);
    CHECK(sln.addDigits(98) == 8);
    CHECK(sln.addDigits(666) == 9);
    CHECK(sln.addDigits(964) == 1);
}
