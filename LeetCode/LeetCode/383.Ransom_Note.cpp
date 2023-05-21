#include <unordered_map>
#include "383.Ransom_Note.h"

using namespace RansomNote;

void RansomNoteProblem::PrintSolution()
{
    Solution* solution = new Solution();

    std::string res = solution->CanConstruct(ransomNote, magazine) ? " can" : " cannot";

    std::cout << ransomNote << res << " be constructed with the letters from " << magazine << "." << std::endl;
}

std::string RansomNoteProblem::GetRansomNote()
{
    return ransomNote;
}

void RansomNoteProblem::SetRansomNote(std::string r)
{
    ransomNote = r;
}

std::string RansomNoteProblem::GetMagazine()
{
    return magazine;
}

void RansomNoteProblem::SetMagazine(std::string m)
{
    magazine = m;
}

bool Solution::CanConstruct(std::string ransomNote, std::string magazine)
{
    std::unordered_map<char, int> map;
    for (size_t i = 0; i < magazine.size(); i++)
    {
        map[magazine[i]]++;
    }

    for (size_t i = 0; i < ransomNote.size(); i++)
    {
        if (map[ransomNote[i]] > 0)
        {
            map[ransomNote[i]]--;
        }
        else
        {
            return false;
        }
    }

    return true;
}