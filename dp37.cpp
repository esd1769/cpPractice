//multiset----store multiple same element
//WHY NOT array then?
//array not sorted like multiset
//so
//no repeat+sort=set
//repeat+sort=multiset
//java-pq-max value go first?
//2data 




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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode,pair<int,int>>>todo;
        map<int,map<int,mutliset<int>>>nodes;
        
    }
};