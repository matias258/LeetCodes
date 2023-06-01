/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0); 
        //me va a ayudar para la eliminacion de nodos en la lista
        dummy-> next = head;
        ListNode* curr = head;
        ListNode* prev = dummy;

        while (curr != nullptr){
            if (curr->val == val){
                prev-> next = curr -> next;     //enlazo el anterior con el siguiente
                delete curr;                    //elimino el valor y pongo curr en el siguiente
                curr = prev -> next;       
                //como elimine curr, tengo que ayudarme de prev para seguir iterando
            }
            else{
                curr = curr -> next;
                prev = prev->next;
            }
        }
        //cuando salgo significa que iteré toda la lista enlazada

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};
