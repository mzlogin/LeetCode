#include "../catch.h"
#include <string>
using namespace std;

#include "solution.h"

TEST_CASE("Excel Sheet Column Number", "excelSheetColumnNumber") {
    Solution sln;
    CHECK(sln.titleToNumber("A") == 1);
    CHECK(sln.titleToNumber("Y") == 25);
    CHECK(sln.titleToNumber("AA") == 27);
    CHECK(sln.titleToNumber("AAA") == 703);
}
