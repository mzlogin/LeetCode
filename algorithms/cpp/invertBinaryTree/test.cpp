#include "../catch.h"
#include "../mybinarytree.h"
#include "solution.h"

bool checkInvertTree(int* values, int* invertValues, int len) {
    Solution s;

    TreeNode* root = createBinaryTree(values, len, 0);

    TreeNode* invertRoot = s.invertTree(root);

    vector<int> vec = sequenceTree(root);

    return arrayEqualsVector(invertValues, len, vec);
}

TEST_CASE("Invert Binary Tree", "invertBinaryTree") {
    SECTION("case 1") {
        const int len = 15;
        int values[len] = {1,2,3,4,5,6,7,8,-1,-1,9,-1,10,-1,-1};
        int invertValues[len] = {1,3,2,7,6,5,4,-1,-1,10,-1,9,-1,-1,8};
        CHECK(checkInvertTree(values, invertValues, len));
    }
}
