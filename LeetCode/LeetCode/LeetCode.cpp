#include <iostream>
#include "13.Roman_To_Integer.h"
#include "234.Palindrome_Linked_List.h"
#include "383.Ransom_Note.h"
#include "412.Fizz_Buzz.h"
#include "876.Middle_of_the_Linked_List.h"
#include "1337.The_K_Weakest_Rows_in_a_Matrix.h"
#include "1342.Number_of_Steps_to_Reduce_to_Zero.h"

int main()
{
	//RomanToInteger::RomanToIntegerProblem* problem = new RomanToInteger::RomanToIntegerProblem("MMCMXIV");
	//PalindromeLinkedList::PalindromeLinkedListProblem* problem = new PalindromeLinkedList::PalindromeLinkedListProblem();
	//RansomNote::RansomNoteProblem* problem = new RansomNote::RansomNoteProblem("Pyrite", "Petrify");
	//FizzBuzz::FizzBuzzProblem* problem = new FizzBuzz::FizzBuzzProblem(20);
	//MiddleOfTheLinkedList::MiddleOfTheLinkedListProblem* problem = new MiddleOfTheLinkedList::MiddleOfTheLinkedListProblem();
	//std::vector<std::vector<int>> m = { {0, 0},{0, 0},{1, 1},{1, 1} };
	/*std::vector<std::vector<int>> m = {
		{1, 1, 0, 0, 0},
		{1, 1, 1, 1, 0},
		{1, 0, 0, 0, 0},
		{1, 1, 0, 0, 0},
		{1, 1, 1, 1, 1} };
	KWeakestRowsInMatrix::KWeakestRowsInMatrixProblem* problem = new KWeakestRowsInMatrix::KWeakestRowsInMatrixProblem(m, 3);*/
	NumberOfStepsToReduceToZero::NumberOfStepsToReduceToZeroProblem* problem = new NumberOfStepsToReduceToZero::NumberOfStepsToReduceToZeroProblem(14);

	problem->PrintSolution();

	delete problem;
}
