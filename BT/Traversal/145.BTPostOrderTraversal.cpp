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
void postOrderHelper(TreeNode*root,vector<int>&ans)
{
    if(root==nullptr)return;
    postOrderHelper(root->left,ans);
    postOrderHelper(root->right,ans);
    ans.push_back(root->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postOrderHelper(root,ans);
        return ans;
    }
};