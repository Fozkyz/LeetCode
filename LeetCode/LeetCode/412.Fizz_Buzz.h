#pragma once
#include <iostream>
#include <vector>
#include "Problem.h"

// Runtime : 4ms -> 48.96%
// Memory : 7.2MB -> 89.9%
namespace FizzBuzz {
	class FizzBuzzProblem : Problem {
	public:
		FizzBuzzProblem(unsigned int n) : length(n) {}

		void PrintSolution();

		unsigned int GetLength();
		void SetLength(unsigned int n);

	private:
		unsigned int length;
	};

	class Solution {
	public:
		std::vector<std::string> FizzBuzz(int n);
	};
}