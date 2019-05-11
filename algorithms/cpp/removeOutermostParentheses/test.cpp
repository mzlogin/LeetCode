#include "../catch.h"
#include <string>
#include <stack>
using namespace std;
#include "solution.h"

TEST_CASE("Remove Outermost Parentheses") {
    Solution sln;

    CHECK(sln.removeOuterParentheses("(()())(())").compare("()()()") == 0);
    CHECK(sln.removeOuterParentheses("(()())(())(()(()))").compare("()()()()(())") == 0);
    CHECK(sln.removeOuterParentheses("()()").compare("") == 0);
    CHECK(sln.removeOuterParentheses("").compare("") == 0);
    CHECK(sln.removeOuterParentheses("(()())").compare("()()") == 0);
}
