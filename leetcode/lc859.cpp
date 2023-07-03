#include <iostream>
using namespace std;

bool buddyStrings(string s, string goal)
{
    if (s.length() != goal.length())
        return false;

    if (s == goal && unordered_set<char>(s.begin(), s.end()).size() < s.size())
        return true;
    {
    }
}

int main()
{
    return 0;
}