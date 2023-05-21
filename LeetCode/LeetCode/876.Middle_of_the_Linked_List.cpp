#include "876.Middle_of_the_Linked_List.h"

using namespace MiddleOfTheLinkedList;

MiddleOfTheLinkedListProblem::~MiddleOfTheLinkedListProblem()
{
	ListNode* temp;
	while (head != nullptr) {
		temp = head->next;
		delete head;
		head = temp;
	}
}

void MiddleOfTheLinkedListProblem::PrintSolution()
{
	if (head == nullptr) {
		ListNode* h = new ListNode(0);
		head = h;
		for (int i = 0; i < 5; i++)
		{
			ListNode* t = new ListNode(i + 1);
			h->next = t;
			h = t;
		}

		for (int i = 0; i < 5; i++)
		{
			ListNode* t = new ListNode(5 - i - 1);
			h->next = t;
			h = t;
		}
	}

	Solution* solution = new Solution();

	ListNode* res = solution->MiddleNode(head);
	
	PrintHead();
	std::cout << "Middle node : " << res->val << std::endl;
}

void MiddleOfTheLinkedListProblem::PrintHead()
{
	ListNode* h = head;
	while (h != nullptr) {
		std::cout << h->val << " >> ";
		h = h->next;
	}
	std::cout << std::endl;
}

ListNode* MiddleOfTheLinkedListProblem::GetHead()
{
	return head;
}

void MiddleOfTheLinkedListProblem::SetHead(ListNode* h)
{
	head = h;
}

ListNode* Solution::MiddleNode(ListNode* head)
{
	ListNode* slow = head;
	ListNode* fast = head;

	while (fast != nullptr && fast->next != nullptr) {
		slow = slow->next;
		fast = fast->next;
		fast = fast->next;
	}

	return slow;
}
