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
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* curr = head;
        while (curr != nullptr){
            v.push_back(curr->val);
            curr = curr->next;
        }
        int c = v.size() / 2;

        for (int i = 0; i < c; i++){
            if (v[i] != v[v.size() - 1 - i]){
                return false;
            }            
        }
        return true;
    }
};



