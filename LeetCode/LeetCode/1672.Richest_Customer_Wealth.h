#pragma once
#include <iostream>
#include <vector>
#include "Problem.h"

// Runtime : 5ms -> 59.14%
// Memory : 7.8MB -> 42.3%
namespace RichestClientWealth {
	class RichestClientWealthProblem : Problem {
	public:
		RichestClientWealthProblem(std::vector<std::vector<int>> acc) : accounts(acc) {}
		void PrintSolution();
		void PrintAccounts();

		void SetAccounts(std::vector<std::vector<int>>);
		std::vector<std::vector<int>> GetAccounts();
	
	private:
		std::vector<std::vector<int>> accounts;
	};

	class Solution {
	public:
		int MaximumWealth(std::vector<std::vector<int>>&);
	};
}