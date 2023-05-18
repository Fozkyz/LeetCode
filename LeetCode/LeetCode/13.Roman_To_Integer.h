#pragma once
#include "Problem.h"
#include <iostream>

// Runtime : 7ms -> 87%
// Memory : 6MB -> 72.92%
class RomanToIntegerProblem : Problem {
public:
    RomanToIntegerProblem(std::string s = "MCMXCIV") : romanString(s) {}

    void PrintSolution();

    void SetRomanString(std::string);
    std::string GetRomanString();

private:
    std::string romanString;
};

class Solution {
public:
    int romanToInt(std::string s);
};
