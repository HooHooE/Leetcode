/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int countLength(ListNode *head){
        ListNode *p = head;
        int count = 0;
        while(p!=NULL){
            p = p->next;
            count++;
        }
        return count;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p1 = headA;
        ListNode *p2 = headB;
        int diff = countLength(headA) - countLength(headB);
        if(diff<0){   //B is longer
            while(abs(diff) > 0){
                p2 = p2->next;
                diff++;
            }
        }
        else{
            while(diff>0){
                p1 = p1->next;
                diff--;
            }
        }
        
        //now, two linkedLists have the same length to the end
        
        while(p1 != NULL){
            if(p1 == p2) return p1;
            else{
                p1 = p1->next;
                p2 = p2->next;
            }
        }
        return p1;
    }
};
