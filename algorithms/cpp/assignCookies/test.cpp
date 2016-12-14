#include "../catch.h"
#include <vector>
using namespace std;
#include "solution.h"
#include "../myvectorutil.h"

TEST_CASE("Assign Cookies", "assignCookies") {
    Solution sln;

    SECTION("case 1") {
        const int len1 = 3;
        int g[len1] = {1,2,3};
        vector<int> children = createVector(g, len1);

        const int len2 = 2;
        int s[len2] = {1,5};
        vector<int> cookies = createVector(s, len2);

        CHECK(sln.findContentChildren(children, cookies) == 2);
    }

    SECTION("case 2") {
        const int len1 = 5;
        int g[len1] = {5,3,2,6,4};
        vector<int> children = createVector(g, len1);

        const int len2 = 3;
        int s[len2] = {8,2,1};
        vector<int> cookies = createVector(s, len2);

        CHECK(sln.findContentChildren(children, cookies) == 2);
    }
}
