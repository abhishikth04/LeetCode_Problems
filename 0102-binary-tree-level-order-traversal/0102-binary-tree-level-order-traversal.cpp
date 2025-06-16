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
        vector<vector<int>> ans;

        if(root == nullptr) return ans;

        q.push(root);

        while(!q.empty()){
            vector<int> currentLevel;
            int levelSize = q.size();
            for(int i = 0 ; i < levelSize ; ++i){
                TreeNode* node = q.front();
                q.pop();

                currentLevel.push_back(node->val);

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(currentLevel);

        }
        return ans;
    }
};