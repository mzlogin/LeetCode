#include "../catch.h"
#include <vector>
#include <string>
using namespace std;

#include "solution.h"
#include "../myvectorutil.h"

TEST_CASE("Fizz Buzz", "fizzBuzz") {
    Solution sln;

    vector<string> vec29 = sln.fizzBuzz(29);
    string array[29] = {"1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", "11", "Fizz", "13", "14", "FizzBuzz", "16", "17", "Fizz", "19", "Buzz", "Fizz", "22", "23", "Fizz", "Buzz", "26", "Fizz", "28", "29"};
    CHECK(arrayEqualsVector(array, 29, vec29) == true);
}
