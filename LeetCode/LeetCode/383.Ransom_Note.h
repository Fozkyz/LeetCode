#pragma once
#include <iostream>
#include "Problem.h"

// Runtime : 23ms -> 39.29% -> could be improved
// Memory : 8.7MB -> 91.20%
namespace RansomNote {
	class RansomNoteProblem : Problem {
	public:
		RansomNoteProblem(std::string r, std::string m) : ransomNote(r), magazine(m) {}

		void PrintSolution();

		std::string GetRansomNote();
		void SetRansomNote(std::string);
		std::string GetMagazine();
		void SetMagazine(std::string);

	private:
		std::string ransomNote;
		std::string magazine;
	};

	class Solution {
	public:
		bool CanConstruct(std::string, std::string);
	};
}