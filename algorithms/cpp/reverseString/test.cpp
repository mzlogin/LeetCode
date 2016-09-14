#include "../catch.h"

#include <string>
#include <algorithm>
using namespace std;

#include "solution.h"

TEST_CASE("Reverse String", "reverseString") {
    Solution sln;
    string s1 = "hello";
    CHECK(sln.reverseString(s1) == "olleh");
    s1 = "";
    CHECK(sln.reverseString(s1) == "");
    s1 = "a";
    CHECK(sln.reverseString(s1) == "a");
}
