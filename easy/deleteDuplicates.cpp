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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ptrH = head;
        if(head == nullptr) return head;
        while(ptrH->next != nullptr){
            if(ptrH->val == ptrH->next->val){
                ptrH->next = ptrH->next->next;
            }else{
                ptrH = ptrH->next;
            }
        }
        return head;
    }
};
