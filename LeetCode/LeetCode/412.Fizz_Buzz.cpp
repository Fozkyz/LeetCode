#include "412.Fizz_Buzz.h"
#include <string>

using namespace FizzBuzz;

void FizzBuzzProblem::PrintSolution()
{
	Solution* solution = new Solution();

	std::vector<std::string> answer = solution->FizzBuzz((int)length);

	for (size_t i = 0; i < length; i++)
	{
		std::cout << answer[i] << " ";
	}
	std::cout << std::endl;
}

unsigned int FizzBuzzProblem::GetLength()
{
	return length;
}

void FizzBuzzProblem::SetLength(unsigned int n)
{
	length = n;
}

std::vector<std::string> Solution::FizzBuzz(int n)
{
	std::vector<std::string> answer(n);

	for (size_t i = 0; i < n; i++)
	{
		answer[i] = std::to_string(i+1);
	}

	for (size_t i = 1; i <= n / 3; i++) {
		answer[3 * i - 1] = "Fizz";
	}

	std::string t;
	for (size_t i = 1; i <= n / 5; i++) {
		t = (5 * i) % 3 == 0 ? "FizzBuzz" : "Buzz";
		answer[5 * i - 1] = t;
	}

	return answer;
}
