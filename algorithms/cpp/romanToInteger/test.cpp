#include "../catch.h"
#include <string>
using namespace std;
#include "solution.h"

TEST_CASE("Roman To Integer", "romanToInteger") {
    Solution sln;

    SECTION("single num") {
        CHECK(sln.romanToInt("I") == 1);
        CHECK(sln.romanToInt("V") == 5);
        CHECK(sln.romanToInt("X") == 10);
        CHECK(sln.romanToInt("L") == 50);
        CHECK(sln.romanToInt("C") == 100);
        CHECK(sln.romanToInt("D") == 500);
        CHECK(sln.romanToInt("M") == 1000);
    }

    SECTION("normal combinations") {
        CHECK(sln.romanToInt("VIII") == 8);
        CHECK(sln.romanToInt("XIII") == 13);
        CHECK(sln.romanToInt("XVI") == 16);
        CHECK(sln.romanToInt("MDCLXVI") == 1666);
    }

    SECTION("special combinations") {
        CHECK(sln.romanToInt("IV") == 4);
        CHECK(sln.romanToInt("VI") == 6);
        CHECK(sln.romanToInt("IX") == 9);
        CHECK(sln.romanToInt("XI") == 11);
        CHECK(sln.romanToInt("XL") == 40);
        CHECK(sln.romanToInt("LX") == 60);
        CHECK(sln.romanToInt("XC") == 90);
        CHECK(sln.romanToInt("CX") == 110);
        CHECK(sln.romanToInt("CD") == 400);
        CHECK(sln.romanToInt("DC") == 600);
        CHECK(sln.romanToInt("CM") == 900);
        CHECK(sln.romanToInt("MC") == 1100);
        CHECK(sln.romanToInt("CMCDXCXLIXIV") == 1443);
    }
}
