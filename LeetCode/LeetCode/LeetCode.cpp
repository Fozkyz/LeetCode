#include <iostream>
#include "13.Roman_To_Integer.h"
#include "234.Palindrome_Linked_List.h"
#include "383.Ransom_Note.h"
#include "412.Fizz_Buzz.h"
#include "876.Middle_of_the_Linked_List.h"

int main()
{
	//RomanToInteger::RomanToIntegerProblem* problem = new RomanToInteger::RomanToIntegerProblem("MMCMXIV");
	//PalindromeLinkedList::PalindromeLinkedListProblem* problem = new PalindromeLinkedList::PalindromeLinkedListProblem();
	//RansomNote::RansomNoteProblem* problem = new RansomNote::RansomNoteProblem("Pyrite", "Petrify");
	//FizzBuzz::FizzBuzzProblem* problem = new FizzBuzz::FizzBuzzProblem(20);
	MiddleOfTheLinkedList::MiddleOfTheLinkedListProblem* problem = new MiddleOfTheLinkedList::MiddleOfTheLinkedListProblem();

	problem->PrintSolution();

	delete problem;
}
