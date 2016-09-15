#include "../catch.h"
#include "../mybinarytree.h"
#include "../myvectorutil.h"
#include "solution.h"

TEST_CASE("Same Tree", "sameTree") {
    Solution sln;

    const int len = 8;
    int nums[len] = {1,2,3,4,5,6,7,8};
    TreeNode* root = createBinaryTree(nums, len);
    TreeNode* root2 = createBinaryTree(nums, len);

    int nums2[len] = {1,2,3,4,5,7,6,8};
    TreeNode* root3 = createBinaryTree(nums2, len);

    CHECK(sln.isSameTree(root, root2) == true);
    CHECK(sln.isSameTree(root, root3) == false);
}
