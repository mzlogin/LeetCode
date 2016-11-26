#include "../catch.h"
#include <vector>
using namespace std;
#include "solution.h"
#include "../myvectorutil.h"

TEST_CASE("Island Perimeter", "islandPerimeter") {
    Solution sln;

    int nums[4][4] = {
        {0,1,0,0},
        {1,1,1,0},
        {0,1,0,0},
        {1,1,0,0}
    };

    vector<vector<int> > island = create2DVector(&nums[0][0], 4, 4);

    CHECK(sln.islandPerimeter(island) == 16);
    CHECK(sln.islandPerimeter2(island) == 16);
}
