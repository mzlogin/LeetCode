/**
 * Source : https://leetcode.com/problems/same-tree/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2015-11-05
 * */

/**
 * Problem:
 * Given two binary trees, write a function to check if they are equal or not.
 *
 * Two binary trees are considered equal if they are structurally identical and
 * the nodes have the same value.
 */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) {
            return true;
        } else if ((p && !q) || (!p && q)) {
            return false;
        }
        
        if (p->val != q->val) {
            return false;
        }
        
        return (isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
};
