#include<iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};



bool isP(ListNode * &p, ListNode *mid) {
	if (mid->next == NULL) return (mid->val == p->val);
	else {
		ListNode *tmp = mid;
		mid = mid->next;
		if (!isP(p, mid)) return false;
		p = p->next;
		return (tmp->val == p->val);
	}
}


bool isPalindrome(ListNode* head) {
	if (head == NULL || head->next == NULL) return true;
	ListNode *p1 = head;
	ListNode *p2 = head;
	while (p2 != NULL && p2->next != NULL) {
		p1 = p1->next;
		p2 = p2->next->next;
	}
	ListNode *list2;
	if (p2 != NULL) list2 = p1->next;
	else list2 = p1;
	return isP(head, list2);
}

int main() {
	ListNode *head;
	head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(4);
	head->next->next->next->next->next = new ListNode(3);
	head->next->next->next->next->next->next = new ListNode(2);
	head->next->next->next->next->next->next->next = new ListNode(1);
	bool result = isPalindrome(head);
	return 0;
}


