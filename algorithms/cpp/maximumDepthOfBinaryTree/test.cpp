#include "../catch.h"
#include "../mybinarytree.h"
#include "solution.h"

TEST_CASE("Maximum Depth Of Binary Tree", "maximumDepthOfBinaryTree") {
    Solution sln;

    const int len = 8;
    int nums[len] = {1,2,3,4,5,6,7,8};
    TreeNode* root = createBinaryTree(nums, len);

    CHECK(sln.maxDepth(root) == 4);
}
