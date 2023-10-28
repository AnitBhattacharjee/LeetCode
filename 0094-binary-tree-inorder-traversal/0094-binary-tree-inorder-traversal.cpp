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
    void help(TreeNode* curr, vector<int>& arr)
    {
        if(curr==NULL) return;
        
        help(curr->left, arr);
        arr.push_back(curr->val);
        help(curr->right,arr);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> arr;
        help(root,arr);
        return arr;
    }
};