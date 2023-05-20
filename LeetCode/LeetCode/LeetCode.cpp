#include <iostream>
#include "13.Roman_To_Integer.h"

int main()
{
	RomanToInteger::RomanToIntegerProblem* problem = new RomanToInteger::RomanToIntegerProblem("MMCMXIV");
	
	problem->PrintSolution();

	delete problem;
}
