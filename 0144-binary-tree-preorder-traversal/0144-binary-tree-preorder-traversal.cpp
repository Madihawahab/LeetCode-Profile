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
    void preorder(vector<int>& ans, TreeNode* root){
        if(root == NULL){
            return;
        }

        //recursively
        //print root
        ans.push_back(root->val);
        //print left
        preorder(ans, root->left);
        //print right
        preorder(ans, root->right);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> ans;

        preorder(ans, root);

        return ans;
        

    }
};