#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool buddyStrings(string s, string goal)
{
    int n = s.length();
    if (s.length() != goal.length())
    {
        return false;
    }
    if (s == goal && set<char>(s.begin(), s.end()).size() < goal.size())
    {
        return true;
    }
    vector<int> index;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != goal[i])
        {
            index.push_back(i);
        }
    }

    if (index.size() != 2)
    {
        return false;
    }

    swap(s[index[0]], s[index[1]]);
    return s == goal;
}

int main()
{
    cout << buddyStrings("ab", "ba") << endl;
    return 0;
}