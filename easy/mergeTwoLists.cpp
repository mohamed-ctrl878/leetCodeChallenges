class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* headMain;
        ListNode* nextMain;
        if(list1 == nullptr && list2 == nullptr) return headMain;
        if(list1 != nullptr && list2 == nullptr){
            headMain = list1;
            list1 = list1->next;
        }
        if(list1 == nullptr && list2 != nullptr){
            headMain = list2;
            list2 = list2->next;
        }

        if(list1 != nullptr && list2 != nullptr){

        if(list1-> val <= list2-> val ){
            headMain = list1;
            list1 = list1->next;
        } else {
            headMain = list2;
            list2 = list2->next;
        }
        }
        nextMain = headMain;
        while(list1 != nullptr && list2 != nullptr){
            if(list1-> val <= list2-> val ){
                nextMain->next = list1;
                list1 = list1->next;
            } else {
                nextMain->next = list2;
                list2 = list2->next;
            }
            nextMain = nextMain->next;
        }
        if(list1 != nullptr){
            while(list1 != nullptr){
                nextMain->next = list1;
                list1 = list1->next;
                nextMain = nextMain->next;
            }
        } else {
            while(list2 != nullptr){
                nextMain->next = list2;
                list2 = list2->next;
                nextMain = nextMain->next;
            }
        }
        return headMain;
    }
};
