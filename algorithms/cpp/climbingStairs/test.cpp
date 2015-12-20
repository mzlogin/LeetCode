#include "../catch.h"
#include "solution.h"

TEST_CASE("Climbing Stairs", "climbingStairs") {
    Solution sln;
    CHECK(sln.climbStairs(1) == 1);
    CHECK(sln.climbStairs(2) == 2);
    CHECK(sln.climbStairs(3) == 3);
    CHECK(sln.climbStairs(4) == 5);
    CHECK(sln.climbStairs(5) == 8);
    CHECK(sln.climbStairs(6) == 13);
}
