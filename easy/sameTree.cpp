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
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // si p y q son nulos, llegamos al final y concluimos verdadero
        if (p==nullptr && q == nullptr){
            return true;
        }

        //si p o q son nullptr, entonces false, esto sirve pues chequeamos antes si los 2 eran.
        //para simplificar, esta condicion funciona como un xor.
        if (p == nullptr || q == nullptr){
            return false;
        }

        // Si val(p) y val(q) difieren, es false 
        if (p-> val != q-> val){
            return false;
        }

        // recorro por recurrencia
        return isSameTree(p->left, q-> left) && isSameTree( p->right, q->right);

    }
};

