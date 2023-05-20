#include <iostream>
#include "13.Roman_To_Integer.h"

using namespace RomanToInteger;

void RomanToIntegerProblem::PrintSolution()
{
	Solution* solution = new Solution();

	int res = solution->romanToInt(romanString);

	std::cout << romanString << " : " << res << std::endl;

	delete solution;
}

void RomanToIntegerProblem::SetRomanString(std::string s)
{
	romanString = s;
}

std::string RomanToIntegerProblem::GetRomanString()
{
	return romanString;
}

int Solution::romanToInt(std::string s)
{
	int num = 0;

	for (int i = 0; i < s.size(); i++) {
		int val = 0;
		switch (s[i]) {
		case 'I':
			val = 1;
			if (i < s.size() - 1 && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
				val = -1;
			}
			break;
		case 'V':
			val = 5;
			break;
		case 'X':
			val = 10;
			if (i < s.size() - 1 && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
				val = -10;
			}
			break;
		case 'L':
			val = 50;
			break;
		case 'C':
			val = 100;
			if (i < s.size() - 1 && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
				val = -100;
			}
			break;
		case 'D':
			val = 500;
			break;
		case 'M':
			val = 1000;
			break;
		}
		num += val;
	}
	return num;
}
