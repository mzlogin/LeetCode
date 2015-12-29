#include "../catch.h"
#include <string>
#include <algorithm>
using namespace std;
#include "solution.h"

TEST_CASE("Valid Anagram", "validAnagram") {
    Solution sln;

    CHECK(sln.isAnagram("hello", "leloh"));
    CHECK(sln.isAnagram("nihao", "nlhao") == false);
}
