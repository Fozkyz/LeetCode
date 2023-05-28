#include "2.Add_Two_Numbers.h"

using namespace AddTwoNumbers;

void AddTwoNumbersProblem::PrintSolution()
{
	std::cout << "L1 : ";
	PrintNumber(l1);
	std::cout << std::endl << "L2 : ";
	PrintNumber(l2);
	Solution* solution = new Solution();
	ListNode* res = solution->AddTwoNumbers(l1, l2);
	std::cout << std::endl << "Res: ";
	PrintNumber(res);
}

void AddTwoNumbersProblem::PrintNumber(ListNode* l)
{
	if (l != nullptr)
	{
		PrintNumber(l->next);
		std::cout << l->val;
	}
}

void AddTwoNumbersProblem::SetL1(ListNode* l1)
{
	this->l1 = l1;
}

ListNode* AddTwoNumbersProblem::GetL1()
{
	return l1;
}

void AddTwoNumbersProblem::SetL2(ListNode* l2)
{
	this->l2 = l2;
}

ListNode* AddTwoNumbersProblem::GetL2()
{
	return l2;
}

ListNode* Solution::AddTwoNumbers(ListNode* l1, ListNode* l2)
{
	ListNode* l = new ListNode(0);
	ListNode* head = l;
	ListNode* tl1 = l1;
	ListNode* tl2 = l2;
	bool flag = 0;
	while (tl1 || tl2 || flag)
	{
		ListNode* t = new ListNode(flag);
		l->next = t;

		flag = 0;
		if (tl1)
		{
			flag = (t->val + tl1->val) > 9;
			t->val += tl1->val;
			tl1 = tl1->next;
		}

		if (tl2) 
		{
			flag = flag || ((t->val + tl2->val) > 9);
			t->val += tl2->val;
			tl2 = tl2->next;
		}

		t->val -= flag * 10;
		
		l = t;
	}

	l = head->next;
	delete head;
	return l;
}
