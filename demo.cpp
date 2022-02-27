#include <iostream>
using namespace std;

// DIVISIBLE

int divisble(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);

    int ans = c1 + c2 - c3;

    return ans;
}

// HCF with euclid  wtf

int gcd_euclid(int n, int m)
{
    while (m != 0)
    {
        int rem = n % m;
        n = m;
        m = rem;
    }
    return n;
}
int main()
{

    cout << divisble(100, 5, 6) << endl;
    cout << gcd_euclid(12, 34);

    return 0;
}
