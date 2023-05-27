#pragma once
#include <iostream>
#include <vector>
#include "Problem.h"

// Runtime : 12ms -> 70.90%
// Memory : 10.4MB -> 87.22%
namespace KWeakestRowsInMatrix {
	class KWeakestRowsInMatrixProblem : Problem {
	public:
		KWeakestRowsInMatrixProblem(std::vector<std::vector<int>>& m, int k) : mat(m), k(k) {}
		void PrintMatrix();
		void PrintSolution();

		void SetMat(std::vector<std::vector<int>>);
		std::vector<std::vector<int>> GetMat();
		void SetK(int);
		int GetK();

	private:
		std::vector<std::vector<int>> mat;
		int k;
	};

	class Solution {
	public:
		std::vector<int> KWeakestRows(std::vector<std::vector<int>>&, int);
	};
}