#include <iostream>
using namespace std;

bool issorted(int n, int arr[])
{

    if (n == 1)
    {
        return true;
    }
    bool nextarr = issorted(n - 1, arr + 1);
    return (arr[0] < arr[1] && nextarr);
}

void till_n_DEC(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << " ";
    till_n_DEC(n - 1);
}

void till_n_INC(int n)
{

    till_n_INC(n - 1);

    cout << n << " ";
}

int first_occ(int n, int arr[], int x, int i)
{

    if (i == n)
    {
        return -1;
    }

    if (arr[i] == x)
    {
        return i;
    }
    return first_occ(n, arr, x, i + 1);
}

int last_occ(int n, int arr[], int x, int i) {}

int main()
{
    int arr[] = {1, 4, 2, 2, 4};

    cout << first_occ(5, arr, 2, 0);

    return 0;
}