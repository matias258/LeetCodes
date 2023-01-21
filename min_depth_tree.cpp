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
    int minDepth(TreeNode* root) {
        if (root == nullptr){
            return 0;
        }

        if (root -> left == nullptr && root -> right != nullptr){ 
            return 1 + minDepth(root ->right); //no tiene hijo derecho
        }
        
        if (root -> right == nullptr && root -> left != nullptr){
            return 1 + minDepth(root -> left); // no tiene hijo izquierdo
        }

        if (root -> right == nullptr && root -> left == nullptr){
            return 1;                          // es hoja
        }

        else{
            return 1 + min(minDepth(root -> left) , minDepth(root -> right));
            //devuelve el menor de los calculados
        }
            
        
    }
};

