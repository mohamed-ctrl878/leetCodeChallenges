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
    ListNode* addList(int num){
        ListNode* node = new ListNode();
        node->val = num;
        node->next = nullptr;
        return node;
    }
    ListNode* resultFunc(ListNode* l1, ListNode* l2, int num){
        if(l1 == nullptr && l2 == nullptr){
            if(num>0){
                return addList(num);
            }
            return nullptr;
        }
        int one = 0;
        int two = 0;
        if(l1 != nullptr){
            one = l1->val;
        }
        if(l2 != nullptr){
            two = l2->val;
        }
        int sum = one + two + num;
        ListNode* head = addList(sum % 10);
        head->next = resultFunc(l1 !=nullptr ? l1->next : nullptr , l2 !=nullptr ? l2->next : nullptr,sum >=10 ? sum /10:0);
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return resultFunc(l1,l2,0);
    }
};
