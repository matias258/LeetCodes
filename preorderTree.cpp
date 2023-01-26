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
        /* este codigo sigue el axioma del TAD siguiente:
           preorder(a) = if nil?(a) then <> else (raiz(a) . preorder(izq(a))) & preorder(der(a))
        */ 


        /* 1) if nil?(a) then <> */
        if (!root){
            return vector<int>();
        }
        vector<int> left = preorderTraversal(root->left);
        vector<int> right = preorderTraversal(root->right);

        /* 2) (raiz(a) . preorder(izq(a))) */
        left.insert(left.begin(), root->val);

        /* 3) & preorder(der(a)) */
        left.insert(left.end(), right.begin(), right.end());

        return left;
    }
};

Console

