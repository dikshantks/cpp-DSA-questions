#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, m;
    cout << "enter the order of matrix [i][j]\n";
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int arr2[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr2[i][j] = arr[i][j];
        }
    }

    cout << "matrix is " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {

                for (int i1 = 0; i1 < n; i1++)
                {
                    arr2[i1][j] = 0;
                }
                for (int i2 = 0; i2 < m; i2++)
                {
                    arr2[i][i2] = 0;
                }
            }
        }
    }
    cout << "matrix is after swap " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}