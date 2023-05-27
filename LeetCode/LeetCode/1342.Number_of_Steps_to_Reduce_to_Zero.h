#pragma once
#include <iostream>
#include "Problem.h"

// Runtime : 2ms -> 37.60%
// Memory : 6.1MB -> 9.3%
namespace NumberOfStepsToReduceToZero {
	class NumberOfStepsToReduceToZeroProblem : Problem {
	public:
		NumberOfStepsToReduceToZeroProblem(int n) : number(n) {}
		void PrintSolution();

		void SetNumber(int);
		int GetNumber();

	private:
		int number;
	};

	class Solution {
	public:
		int NumberOfSteps(int);
	};
}