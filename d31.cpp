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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        traverse(root, ans);
        return ans;
    }
    
private:
    void traverse(TreeNode* node, vector<int>& ans) {
        if (node == nullptr) {
            return;
        }
        ans.push_back(node->val);
        traverse(node->left, ans);
        traverse(node->right, ans);
    }
};
// class Solution {
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         if (root == nullptr) return ans; // Fixed: return empty vector
//         ans.push_back(root->val);
//         vector<int> left = preorderTraversal(root->left); // Capture left subtree
//         vector<int> right = preorderTraversal(root->right); // Capture right subtree
//         ans.insert(ans.end(), left.begin(), left.end()); // Merge left
//         ans.insert(ans.end(), right.begin(), right.end()); // Merge right
//         return ans;
//     }
// };