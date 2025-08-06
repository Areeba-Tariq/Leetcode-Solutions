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

 //note=>same code of level order traversal with 1 minor change of i when i is even so reverse the vector otherwise not
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
           queue<TreeNode*>q;
      vector<vector<int>>ans;
      if(!root)return ans;
      q.push(root);
      vector<int>v;
      v.push_back(root->val);
      ans.push_back(v);
      q.push(NULL);
      int i=1;
      TreeNode* front;
      while(!q.empty())
      {
        front=q.front();
        vector<int>v;
        i++;
        while(front!=nullptr)
        {
            if(front->left!=nullptr){
            q.push(front->left);
            v.push_back(front->left->val);
            }
            if(front->right!=nullptr){
            q.push(front->right);
            v.push_back(front->right->val);
            }
            q.pop();
            front=q.front();
            if(front==nullptr && !v.empty())
            {
                q.push(nullptr);
                if(i%2==0){
                    reverse(v.begin(),v.end());
                }
                ans.push_back(v);
            }
        }
       
        q.pop();
      }
      return ans;
    }
};