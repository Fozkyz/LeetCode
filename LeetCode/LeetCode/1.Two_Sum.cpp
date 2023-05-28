#include "1.Two_Sum.h"

using namespace TwoSum;

void TwoSumProblem::PrintSolution()
{
	for (size_t i = 0; i < nums.size(); i++)
	{
		std::cout << nums[i] << " ";
	}
	
	Solution* solution = new Solution();
	std::vector<int> res = solution->TwoSum(nums, target);
	if (res.size() < 2)
	{
		std::cout << std::endl << "Could not find solution" << std::endl;
		return;
	}
	std::cout << std::endl << nums[res[0]] << " + " << nums[res[1]] << " = " << target << std::endl;
}

void TwoSumProblem::SetNum(std::vector<int> nums)
{
	this->nums = nums;
}

std::vector<int> TwoSumProblem::GetNum()
{
	return nums;
}

void TwoSumProblem::SetTarget(int target)
{
	target = this->target;
}

int TwoSumProblem::GetTarget()
{
	return target;
}

std::vector<int> Solution::TwoSum(std::vector<int>& nums, int target)
{
	int n;
	for (int i = 0; i < nums.size() - 1; i++)
	{
		n = target - nums[i];
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (nums[j] == n)
			{
				return std::vector<int> {i, j};
			}
		}
	}
	return std::vector<int>();
}
