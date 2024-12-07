//November 29th, 2022


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //have to have end case
        if (p==nullptr || q==nullptr){
            if (p==q){
               
                    return true;
            }
            return false;
        
        }
            
        if (p->val==q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right)){
            return true;
        }
        return false;
    }
};
