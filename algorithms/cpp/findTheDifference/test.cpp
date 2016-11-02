#include "../catch.h"
#include <string>
using namespace std;

#include "solution.h"

TEST_CASE("Find the Difference", "findTheDifferrnce") {
    Solution sln;

    CHECK(sln.findTheDifference("abcd", "ceadb") == 'e');
    CHECK(sln.findTheDifference("a", "ca") == 'c');
}
