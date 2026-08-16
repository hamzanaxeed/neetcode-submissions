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
void postorder_Traversal(TreeNode* root,vector<int>&ans){
    if(!root)return;
    postorder_Traversal(root->left,ans);
    postorder_Traversal(root->right,ans);
    ans.push_back(root->val);

}

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder_Traversal(root,ans);

        return ans;
    }
};