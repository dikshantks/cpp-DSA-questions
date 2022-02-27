#include <iostream>
using namespace std;

bool ispower_of2(int n)
{
    /* bits of power of 2 has only one setbit (only one 1) so you know the rest
     * aka n-1 hass only one 0 therfore ther ANDD give alwass 0000 therforer it is power of 2*/

    bool ispower = 0;
    if ((n & n - 1) == 0000)
    {
        ispower = true;
    }
    else
    {
        ispower = false;
    }

    return ispower;
}

int count_one(int n)
{
    int count = 0;

    while (n != 0000)
    {
        count += 1;
        n = n & (n - 1);
        cout << " me ";
    }

    return count;
}

void print_subset(int arr[], int n)
{

    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    print_subset(arr, n);

    return 0;
}
