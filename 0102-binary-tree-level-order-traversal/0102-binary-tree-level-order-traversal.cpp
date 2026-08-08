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
    vector<vector<int>> levelOrder(TreeNode* root) {

        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> finalAns;

        while(!q.empty()){
            int levelsize = q.size();
            vector<int> ans;
            while(levelsize--){
                TreeNode* front = q.front();
                q.pop();
                if(front == NULL){
                    continue;
                }else{
                    ans.push_back(front->val);
                    if(front->left != NULL){
                        q.push(front->left);
                    }
                    if(front->right != NULL){
                        q.push(front->right);
                    }
                }
            }
            if(!ans.empty()){
                finalAns.push_back(ans);
            }
        }
        return finalAns;

    }
};