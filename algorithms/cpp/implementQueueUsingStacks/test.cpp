#include "../catch.h"
#include <stack>
using std::stack;

#include "solution.h"

TEST_CASE("Implement Queue Using Stacks", "implementQueueUsingStacks") {
    Queue q;

    SECTION("test push and peek") {
        q.push(1);
        CHECK(q.peek() == 1);
    }

    SECTION("test queue order") {
        q.push(1);
        q.push(2);
        CHECK(q.peek() == 1);
    }

    SECTION("test pop") {
        q.push(1);
        q.push(2);
        q.pop();
        CHECK(q.peek() == 2);
    }

    SECTION("test empty") {
        q.push(1);
        q.push(2);
        q.pop();
        CHECK(q.empty() == false);
        q.pop();
        CHECK(q.empty() == true);
    }
}
