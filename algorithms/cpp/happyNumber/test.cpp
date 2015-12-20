#include "../catch.h"
#include <vector>
using namespace std;

#include "solution.h"

TEST_CASE("Happy Number", "happyNumber") {
    Solution sln;
    CHECK(sln.isHappy(1) == true);
    CHECK(sln.isHappy(2) == false);
    CHECK(sln.isHappy(19) == true);
    CHECK(sln.isHappy(12) == false);
    CHECK(sln.isHappy(68) == true);
}
