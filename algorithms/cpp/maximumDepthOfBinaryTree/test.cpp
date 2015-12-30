#include "../catch.h"

#include <vector>
#include <queue>
using namespace std;
#include "solution.h"

TreeNode* createBinaryTree(int* values, int len, int pos = 0) {
    TreeNode* node = NULL;
    node = new TreeNode(values[pos]);
    if (pos*2+1 < len) {
        node->left = createBinaryTree(values, len, pos*2+1);
    }

    if (pos*2+2 < len) {
        node->right = createBinaryTree(values, len, pos*2+2);
    }

    return node;
}

vector<int> sequenceTree(TreeNode* root) {
    vector<int> vec;
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* node = q.front();
        vec.push_back(node->val);
        if (node->left) {
            q.push(node->left);
        }
        if (node->right) {
            q.push(node->right);
        }
        q.pop();
    }
    return vec;
}

bool arrayEqualsVector(int* values, int len, vector<int> vec) {
    int equalNumCount = 0;

    if (len == vec.size()) {
        for (int i = 0; i < len; i++) {
            if (values[i] == vec[i]) {
                equalNumCount++;
            }
        }
    }

    return (equalNumCount == len);
}

TEST_CASE("Maximum Depth Of Binary Tree", "maximumDepthOfBinaryTree") {
    Solution sln;

    const int len = 8;
    int nums[len] = {1,2,3,4,5,6,7,8};
    TreeNode* root = createBinaryTree(nums, len);

    CHECK(sln.maxDepth(root) == 4);
}
