#pragma once
#include <iostream>
#include "Problem.h"

// Runtime : 0ms -> 100%
// Memory : 6.9MB -> 100%
namespace MiddleOfTheLinkedList {
	struct ListNode {
		int val;
		ListNode* next;

		ListNode() : val(0), next(nullptr) {}
		ListNode(int x) : val(x), next(nullptr) {}
		ListNode(int x, ListNode* next) : val(x), next(next) {}
	};

	class MiddleOfTheLinkedListProblem : Problem {
	public:
		MiddleOfTheLinkedListProblem(ListNode* h = nullptr) : head(h) {}
		~MiddleOfTheLinkedListProblem();
	
		void PrintSolution();
		void PrintHead();

		ListNode* GetHead();
		void SetHead(ListNode*);

	private:
		ListNode* head;
	};

	class Solution {
	public:
		ListNode* MiddleNode(ListNode*);
	};
}