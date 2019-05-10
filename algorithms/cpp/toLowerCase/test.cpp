#include "../catch.h"
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
#include "solution.h"

TEST_CASE("To Lower Case") {
    Solution sln;

    CHECK(sln.toLowerCase("Hello").compare("hello") == 0);
    CHECK(sln.toLowerCase("here").compare("here") == 0);
    CHECK(sln.toLowerCase("LOVELY").compare("lovely") == 0);
}
