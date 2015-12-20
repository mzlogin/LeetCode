#include "../catch.h"
#include <string>
#include <stdio.h>
using namespace std;

#include "solution.h"

TEST_CASE("Bulls And Cows", "bullsAndCows") {
    Solution sln;
    SECTION("no repeat") {
        CHECK(sln.getHint("1234", "1234") == "4A0B");
        CHECK(sln.getHint("1234", "4321") == "0A4B");
        CHECK(sln.getHint("1234", "1527") == "1A1B");
        CHECK(sln.getHint("1234", "1564") == "2A0B");
        CHECK(sln.getHint("1234", "1284") == "3A0B");
    }

    SECTION("with repeat") {
        CHECK(sln.getHint("1101", "5021") == "1A1B");
        CHECK(sln.getHint("1211", "2111") == "2A2B");
    }
}
