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
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return isMirror(root->left,root->right);    
    }

    bool isMirror(TreeNode* root1, TreeNode* root2){
        if (!root1 && !root2){
             return true;
        }
        if (!root1 || !root2) {
            return false;
        }
        return root1->val == root2-> val && isMirror(root1->left, root2->right) && isMirror(root1->right, root2->left);
    }

    //si hago el reverse y muestro que son iguales ya lo resolvi
    TreeNode* reverse (TreeNode* root){
        if (!root->left && root->right){
            TreeNode* newLeft = new TreeNode(root->right->val);
            root->left = newLeft; 
        }
        if (root->left && !root->right){
            TreeNode* newRight = new TreeNode(root->left->val);
            root->right = newRight; 
        }

        //recursion
        if(root->left) reverse(root->left);
        if(root->right) reverse(root->right);

        return root;
    }
};

/*

Complejidad: 

Temporal-> O(n), donde n es la cantidad de nodos en el árbol.
Espacial-> O(h), donde h es la altura del árbol.


La función isSymmetric llama a la función isMirror y esta última recorre recursivamente 
cada par de nodos hijo izquierdo y derecho. En el peor de los casos, la función isMirror 
visita todos los nodos del árbol, lo que lleva un tiempo proporcional al número de nodos en el árbol. 
Es por eso que la complejidad temporal es O(n).

En el peor de los casos, la función isMirror llama a sí misma h veces en la pila de llamadas, 
donde h es la altura del árbol, entonces la complejidad espacial es O(h).

*/
