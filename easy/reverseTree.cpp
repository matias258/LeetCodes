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
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr){
            return root;
        }
        //declaramos un temp que guarde el lado izq
        TreeNode *temp = root -> left;

        // el lado izq es el lado derecho, y el lado derecho es el temp
        root -> left = root-> right;
        root -> right = temp;

        // hacemos recursion
        invertTree(root->left);
        invertTree(root ->right);
    
        return root;   
    }
};


