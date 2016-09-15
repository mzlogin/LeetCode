#include "../catch.h"
#include "../mybinarytree.h"
#include "solution.h"

TEST_CASE("Lowest Common Ancestor Of A Binary Search Tree", "lowestCommonAncestorOfABinarySearchTree") {
    Solution sln;
    const int len = 15;
    int nums[len] = {6,2,8,0,4,7,9,-1,-1,3,5,-1,-1,-1,-1};
    TreeNode* root = createBinaryTree(nums, len);

    CHECK(sln.lowestCommonAncestor(root, root->left->right, root->right->right)->val == 6);
    CHECK(sln.lowestCommonAncestor(root, root->left->left, root->left->right->right)->val == 2);
}
