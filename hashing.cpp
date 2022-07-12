#include <iostream>
#include <stack>
#include <map>
#include <vector>
using namespace std;

// key VALUE PAIR [2 2 1 1 4 3 4 ] CHECK FOR KEY AND INSERT THE VALUE (FREQUE   NCY

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < 0; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    return 0;
}