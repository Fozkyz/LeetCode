#include <iostream>
#include "13.Roman_To_Integer.h"
#include "234.Palindrome_Linked_List.h"

int main()
{
	//RomanToInteger::RomanToIntegerProblem* problem = new RomanToInteger::RomanToIntegerProblem("MMCMXIV");
	PalindromeLinkedList::PalindromeLinkedListProblem* problem = new PalindromeLinkedList::PalindromeLinkedListProblem();

	problem->PrintSolution();

	delete problem;
}
