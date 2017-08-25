#include "../catch.h"
#include <string>
using namespace std;
#include "solution.h"

TEST_CASE("Judge Route Circle", "judgeRouteCircls") {
    Solution sln;

    CHECK(sln.judgeCircle("LLUURRDD"));
    CHECK(!sln.judgeCircle("LURDD"));
    CHECK(!sln.judgeCircle("LUD"));
    CHECK(sln.judgeCircle("LURRDLUDLLUDRR"));
}
