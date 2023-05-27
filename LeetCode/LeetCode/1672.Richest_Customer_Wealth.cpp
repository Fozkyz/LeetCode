#include "1672.Richest_Customer_Wealth.h"

using namespace RichestClientWealth;

void RichestClientWealthProblem::PrintSolution()
{
	PrintAccounts();
	Solution* solution = new Solution();
	int res = solution->MaximumWealth(accounts);
	std::cout << "Maximum wealth : " << res << std::endl;
}

void RichestClientWealthProblem::PrintAccounts()
{
	for (size_t i = 0; i < accounts.size(); i++)
	{
		for (size_t j = 0; j < accounts[i].size(); j++)
		{
			std::cout << accounts[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void RichestClientWealthProblem::SetAccounts(std::vector<std::vector<int>> acc)
{
	accounts = acc;
}

std::vector<std::vector<int>> RichestClientWealthProblem::GetAccounts()
{
	return accounts;
}

int Solution::MaximumWealth(std::vector<std::vector<int>>& accounts)
{
	int max = 0;
	for (size_t i = 0; i < accounts.size(); i++)
	{
		int wealth = 0;
		for (size_t j = 0; j < accounts[i].size(); j++)
		{
			wealth += accounts[i][j];
		}
		if (wealth > max)
		{
			max = wealth;
		}
	}
	return max;
}
