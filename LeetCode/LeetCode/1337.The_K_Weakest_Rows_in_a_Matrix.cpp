#include "1337.The_K_Weakest_Rows_in_a_Matrix.h"

using namespace KWeakestRowsInMatrix;

void KWeakestRowsInMatrixProblem::PrintMatrix()
{
	for (std::vector<int> row : mat)
	{
		for (int element : row)
		{
			std::cout << element << " ";
		}
		std::cout << std::endl;
	}
}

void KWeakestRowsInMatrixProblem::PrintSolution()
{
	Solution* solution = new Solution();
	PrintMatrix();
	auto res = solution->KWeakestRows(mat, k);
	std::cout << k << " weakest rows : ";
	for (int e : res)
	{
		std::cout << e << " - ";
	}
	std::cout << std::endl;
}

void KWeakestRowsInMatrixProblem::SetMat(std::vector<std::vector<int>> m)
{
	mat = m;
}

std::vector<std::vector<int>> KWeakestRowsInMatrixProblem::GetMat()
{
	return mat;
}

void KWeakestRowsInMatrixProblem::SetK(int k)
{
	this->k = k;
}

int KWeakestRowsInMatrixProblem::GetK()
{
	return k;
}

std::vector<int> Solution::KWeakestRows(std::vector<std::vector<int>>& mat, int k)
{
	std::vector<int> weakestRows(k, 0);
	std::vector<size_t> weight(k, mat[0].size() + 1);

	for (int i = mat.size() - 1; i >= 0; i--)
	{
		int sum = 0;
		size_t j = 0;
		while (j < mat[i].size())
		{
			int t = mat[i][j];
			if (t == 0)
			{
				break;
			}
			sum += mat[i][j];
			if (sum > weight[k - 1])
			{
				goto exit;
			}
			j++;
		}
		weight[k - 1] = sum;
		weakestRows[k - 1] = i;
		for (int l = k - 2; l >= 0; l--)
		{
			if (sum > weight[l])
			{
				break;
			}
			weight[l + 1] = weight[l];
			weakestRows[l + 1] = weakestRows[l];
			weight[l] = sum;
			weakestRows[l] = i;
		}
	exit:
		continue;
	}

	return weakestRows;
}
