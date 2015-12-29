#include "../catch.h"
#include "solution.h"

TEST_CASE("Nim Game", "nimGame") {
    Solution sln;
    CHECK(sln.canWinNim(3) == true);
    CHECK(sln.canWinNim(4) == false);
    CHECK(sln.canWinNim(5) == true);
    CHECK(sln.canWinNim(8) == false);
}
