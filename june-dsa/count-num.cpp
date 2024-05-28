#include <iostream>
using namespace std;

// int main()
// {
//     int n;

//     cin >> n;

//     int m = 0;

//     while (n > 0 )
//     {
//         m++;
//         n = n / 10;
//     }

//     cout << "digits" << m;

//     return 0;
// }

// for apporach 2
#include <cmath>
#include <algorithm>

int main()
{

    int n;

    cin >> n;

    int m = (int)(log10(n) + 1);

    cout << "digits : " << m;

    return 0;
}