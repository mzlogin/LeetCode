#include "../catch.h"
#include "solution.h"
#include <stdio.h>

TEST_CASE("Number Complement", "numberComplement") {
    Solution sln;

    CHECK(sln.findComplement(1) == 0);
    CHECK(sln.findComplement(2) == 1);
    CHECK(sln.findComplement(255) == 0);
    CHECK(sln.findComplement(256) == 255);
    CHECK(sln.findComplement(2147483647) ==  0);
}
