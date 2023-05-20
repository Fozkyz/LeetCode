#include "234.Palindrome_Linked_List.h"

using namespace PalindromeLinkedList;

PalindromeLinkedListProblem::~PalindromeLinkedListProblem()
{
	ListNode* temp;
	while (head != nullptr) {
		temp = head->next;
		delete head;
		head = temp;
	}
}

void PalindromeLinkedListProblem::PrintHead()
{
	ListNode* h = head;
	while (h != nullptr) {
		std::cout << h->val << " >> ";
		h = h->next;
	}
	std::cout << std::endl;
}

void PalindromeLinkedListProblem::PrintSolution()
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

	PrintHead();

	Solution* solution = new Solution();

	std::string res = solution->IsPalindrome(head) ? "Palindrome" : "Not palindrome";

	std::cout << res << std::endl;

	delete solution;
}

void PalindromeLinkedListProblem::SetHead(ListNode* h)
{
	head = h;
}

ListNode* PalindromeLinkedListProblem::GetHead()
{
	return head;
}

bool Solution::IsPalindrome(ListNode* head)
{
	ListNode* fast = head;
	ListNode* slow = head;

	while (fast != nullptr && fast->next != nullptr) {
		slow = slow->next;
		fast = fast->next;
		fast = fast->next;
	}

	ListNode* prev = nullptr;
	ListNode* temp = nullptr;
	while (slow != nullptr) {
		temp = slow->next;
		slow->next = prev;
		prev = slow;
		slow = temp;
	}

	ListNode* h = head;
	while (prev != nullptr) {
		if (head->val != prev->val) {
			return false;
		}
		head = head->next;
		prev = prev->next;
	}
	return true;
}
