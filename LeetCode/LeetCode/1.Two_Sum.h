#pragma once
#include <iostream>
#include <vector>
#include "Problem.h"

// Runtime : 292ms -> 45.45%
// Memory : 10.1MB -> 81.31%
namespace TwoSum {
	class TwoSumProblem : Problem {
	public:
		TwoSumProblem(std::vector<int> nums, int target) : nums(nums), target(target) {}
		void PrintSolution();

		void SetNum(std::vector<int>);
		std::vector<int> GetNum();
		void SetTarget(int);
		int GetTarget();

	private:
		std::vector<int> nums;
		int target;
	};

	class Solution {
	public:
		std::vector<int> TwoSum(std::vector<int>&, int);
	};
}