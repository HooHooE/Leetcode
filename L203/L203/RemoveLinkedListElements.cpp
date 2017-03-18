#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeElements(ListNode* head, int val) {
	ListNode *tmp;
	while (head != NULL && head->val == val) {
		tmp = head;
		head = head->next;
		delete tmp;
	}
	if (head == NULL) return NULL;

	ListNode *p = head;
	while (p->next != NULL) {
		if (p->next->val == val) {
			tmp = p->next;
			p->next = p->next->next;
			delete tmp;
		}
		else {
			p = p->next;
		}
	}
	return head;
}

void printList(ListNode *head) {
	ListNode *p = head;
	while (p != NULL) {
		cout << p->val << " ";
		p = p->next;
	}
}


int main() {
	ListNode *head;
	head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(6);
	head->next->next->next = new ListNode(5);
	ListNode *result = removeElements(head, 6);

	return 0;
}