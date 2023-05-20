#pragma once
#include <iostream>
#include "Problem.h"

// Runtime : 237ms -> 71.60%
// Memory : 114.1MB -> 91.79%
namespace PalindromeLinkedList {
	struct ListNode {
		int val;
		ListNode* next;

		ListNode() : val(0), next(nullptr) {}
		ListNode(int x) : val(x), next(nullptr) {}
		ListNode(int x, ListNode* next) : val(x), next(next) {}
	};

	class PalindromeLinkedListProblem : Problem {
	public:
		PalindromeLinkedListProblem() : head(nullptr) {}
		PalindromeLinkedListProblem(ListNode* head) : head(head) {}
		~PalindromeLinkedListProblem();

		void PrintHead();
		void PrintSolution();

		void SetHead(ListNode*);
		ListNode* GetHead();

	private:
		ListNode* head;
	};

	class Solution {
	public:
		bool IsPalindrome(ListNode*);
	};

}