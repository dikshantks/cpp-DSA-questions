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

// int last_occ(int n, int arr[], int x, int i) {}

int power(int n, int p)
{

    if (p == 0)
    {
        return 1;
    }

    if (n == 0)
    {
        return 0;
    }

    int prevpower = power(n, p - 1);

    return n * prevpower;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int prev = factorial(n - 1);

    return n * prev;
}
////////////////////////////////////

///////////////////////////////////
bool issafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool backtraching(int **arr, int x, int y, int n, int **solArr)
{
    // rat in a maze

    if (x == n - 1 && y == n - 1)
    {
        solArr[x][y] = 1;
        return true;
    }

    if (issafe(arr, x, y, n))
    {
        solArr[x][y] = 1;
        if (backtraching(arr, x + 1, y, n, solArr))
        {
            return true;
        }
        if (backtraching(arr, x, y + 1, n, solArr))
        {
            return true;
        }
        solArr[x][y] = 0;
        return false;
    }

    return false;
}

bool N_QUEEN()
{
}
int main()
{

    int n;

    cin >> n;

    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int **solarr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        solarr[i] = new int[n];

        for (int j = 0; j < n; j++)
        {
            solarr[i][j] = 0;
        }
    }

    cout << "" << endl;

    if (backtraching(arr, 0, 0, n, solarr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solarr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

/*
1 0 1 0 1
1 1 1 1 0
0 1 0 1 0
1 0 0 1 1
1 1 1 0 1


*/