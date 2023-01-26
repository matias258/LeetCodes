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
    vector<int> inorderTraversal(TreeNode* root) {
        
        if (!root){
            return vector<int> ();
        }

        // 1. Se recorre el subarbol izquierdo y se guarda en un vector llamado "left"
        vector<int> left = inorderTraversal(root->left);

        // 2. Se agrega el valor del nodo raiz al vector "left"
        left.push_back(root->val);
        
        // 3. Se recorre el subarbol derecho y se guarda en un vector llamado "right"
        vector<int> right = inorderTraversal(root->right);

        // 4. Se concatenan los elementos del vector "right" al final del vector "left"
        left.insert(left.end(), right.begin(), right.end());
     
        // 5. Se retorna el vector "left" con los elementos en orden inorder.
        return left;
    }
    
};

// esto sigue el axioma del TAD:
// inorder(a) = if nil?(a) then <> else inorder(izq(a)) & (raiz(a) . inorder(der(a)))

//complejidades:

// TEMPORAL: O(n) donde n es el num de nodos en el arbol. La función recorre cada nodo del árbol una sola vez.
// ESPACIAL:  O(n), en cada llamada recursiva se crea un vector temporal que guarda los elementos del subárbol correspondiente

