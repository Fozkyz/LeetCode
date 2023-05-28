#pragma once
#include <iostream>
#include "Problem.h"

// Runtime : 44ms -> 36.95%
// Memory : 71.4MB -> 41.11%
namespace AddTwoNumbers {
	struct ListNode {
		int val;
		ListNode* next;

		ListNode() : val(0), next(nullptr) {}
		ListNode(int x) : val(x), next(nullptr) {}
		ListNode(int x, ListNode* next) : val(x), next(next) {}
	};
	
	class AddTwoNumbersProblem : Problem {
	public:
		AddTwoNumbersProblem(ListNode* l1, ListNode* l2) : l1(l1), l2(l2) {}
		void PrintSolution();
		void PrintNumber(ListNode*);

		void SetL1(ListNode*);
		ListNode* GetL1();
		void SetL2(ListNode*);
		ListNode* GetL2();

	private:
		ListNode* l1;
		ListNode* l2;
	};

	class Solution {
	public:
		ListNode* AddTwoNumbers(ListNode*, ListNode*);
	};
}