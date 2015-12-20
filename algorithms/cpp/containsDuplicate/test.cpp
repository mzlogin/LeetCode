#include "../catch.h"
#include <set>
#include <vector>
using namespace std;

#include "solution.h"

TEST_CASE("Contains Dumplicate", "containsDumplicate") {
    Solution sln;
    vector<int> v;

    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    CHECK(sln.containsDuplicate(v) == false);

    v.push_back(0);
    CHECK(sln.containsDuplicate(v) == true);
}
