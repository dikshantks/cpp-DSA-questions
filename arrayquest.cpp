#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Q1 of 1D array : size n find first repeating element and index of first ocuurent is smallense

    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    const int N = 1e6 + 2;

    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = 6000000;

    int max;

    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }
    if (minidx == 6000000)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
    }

    return 0;
}