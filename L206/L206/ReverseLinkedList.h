//Reverse Linked List

//iterative
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *tmp;
        ListNode *newhead = NULL;
        
        while(head != NULL){
            tmp = head->next; //reserve list 
            head->next = newhead; //change node's pointer to new list's head
            newhead = head; //update newlist's head
            head = tmp; //update head
        }
        return newhead;
    }
};

