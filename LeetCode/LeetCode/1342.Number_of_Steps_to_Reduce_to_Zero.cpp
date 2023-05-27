#include "1342.Number_of_Steps_to_Reduce_to_Zero.h"

using namespace NumberOfStepsToReduceToZero;

void NumberOfStepsToReduceToZeroProblem::PrintSolution()
{
	Solution* solution = new Solution();
	int res = solution->NumberOfSteps(number);
	std::cout << number << " : number of steps : " << res << std::endl;
}

void NumberOfStepsToReduceToZeroProblem::SetNumber(int n)
{
	number = n;
}

int NumberOfStepsToReduceToZeroProblem::GetNumber()
{
	return number;
}

int Solution::NumberOfSteps(int num)
{
	int steps = 0;
	while (num) 
	{
		num = num & 1 ? num - 1 : num >> 1;
		steps++;
	}

	return steps;
}
