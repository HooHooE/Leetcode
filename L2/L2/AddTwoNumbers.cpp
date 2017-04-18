#include<iostream>
using namespace std;


struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	int c = 0;
	ListNode res(0);
	ListNode *tmp = &res; 
	while (l1 || l2 || c) {
		int sum = c;
		if (l1) { sum += l1->val; l1 = l1->next; }
		if (l2) { sum += l2->val; l2 = l2->next; }
		tmp->next = new ListNode(sum % 10);
		c = sum / 10;
		tmp = tmp->next;
	}

	return res.next;
}

int main() {
	ListNode *l1, *l2;
	l1 = new ListNode(2);
	l1->next = new ListNode(4);
	l1->next->next = new ListNode(3);

	l2 = new ListNode(5);
	l2->next = new ListNode(6);
	l2->next->next = new ListNode(4);

	ListNode *result = addTwoNumbers(l1, l2);
	return 0;
}