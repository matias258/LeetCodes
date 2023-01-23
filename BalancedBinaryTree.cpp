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
    bool isBalanced(TreeNode* root) {

        //Caso base, llegamos a un root no existente
        if (!root){
            return true;
        }

        //si el |depth| >= 2 -> entonces no puede ser balanceado
        if (abs(depth(root->left) - depth(root->right)) >= 2){
            return false;
        }
        else{

            //Sino, seguimos iterando los siguientes nodos
            return isBalanced(root -> left) && isBalanced(root-> right);
        }
        return false;
    }


    //creo un auxiliar que me diga la profundidad de un root dado.
    int depth(TreeNode* root){
        if (!root){
            return 0;
        } 

        //si no tiene hijos
        if (!(root->left) && !(root->right) ){
            return 1 + depth(root->left);
        }

        //si no tiene hijo izquierdo
        if (!(root-> left) ){
            return 1 + depth(root->right);
        }

        //si no tiene hijo derecho
        if (!(root -> right) ){
            return 1 + depth(root->left);
        }

        //sino (tiene 2 hijos)
        else{
            return 1 + max(depth(root->left), depth(root->right));
        }
        
    }
};

//Complejidades: 
//      Temporal -> O(n), en el peor de los casos se visita cada nodo una sola vez
//      Espacial -> O(n), en el peor de los casos se almacenan todos los nodos del arbol en una pila de llamadas recursivas.

//lo hice a la 2da prueba, me siento crack
