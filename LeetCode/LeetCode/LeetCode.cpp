#include <iostream>
#include "13.Roman_To_Integer.h"

int main()
{
	RomanToIntegerProblem* problem = new RomanToIntegerProblem("MMCMXIV");

	problem->PrintSolution();

	delete problem;
}
