#include "../catch.h"
#include "../mybinarytree.h"
#include "solution.h"

TEST_CASE("Merge Two Binary Trees", "mergeTwoBinaryTrees") {
    const int len1 = 4;
    int a[len1] = {1,3,2,5};
    TreeNode* t1 = createBinaryTree(a, len1);
    
    const int len2 = 6;
    int b[len2] = {2,1,3,0,4,7};
    TreeNode* t2 = createBinaryTree(b, len2);

    Solution sln;
    TreeNode* t3 = sln.mergeTrees(t1, t2);
    vector<int> tv3 = sequenceTree(t3);

    const int len3 = len1 > len2 ? len1 : len2;
    int c[len3] = {3,4,5,5,4,7};
    CHECK(arrayEqualsVector(c, len3, tv3));
}
