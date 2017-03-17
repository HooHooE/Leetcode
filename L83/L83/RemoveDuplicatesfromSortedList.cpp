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
    ListNode* remove(ListNode* head, ListNode* tail){
        while(head != tail){
            ListNode *tmp = head;
            head = head->next;
            delete tmp;
        }
        head = head->next;
        delete tail;
        return head;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p1 = head;
        ListNode *p2 = head;
        while(p1 != NULL){
            while(p2->next != NULL && p2->val == p2->next->val) p2 = p2->next;
            if(p1 != p2) {
                p1->next = remove(p1->next,p2);
                p2 = p1;
            }
            else{
                p1 = p1->next;
                p2 = p2->next;
            }
        }
        return head;
    }
};
