#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    multiset<int> ms;

    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(2);
    s.insert(5);

    for (int i = 0; i < s.size(); i++)
    {
        /* code */
    }

    return 0;
}