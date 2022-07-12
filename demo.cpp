#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i < -1; i--)
    {

        int current = arr[i];
        int j = i - 1;
    }

    return 0;
}
