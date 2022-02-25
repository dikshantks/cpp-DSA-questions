#include <iostream>

#include "bits/stdc++.h"

using namespace std;

int func_one(int x, int y, int z = 0)
{

    return (x + y + z);
}

// int func_two()
// {
// }

class S
{
public:
    int square(int s); // declare the function
};

// inline int S::square(int s) // use inline prefix
// {
// }
class operation
{
    int a, b, add, sub, mul;
    float div;

public:
    void get();
    void sum();
    void difference();
    void product();
    // void division();
};
inline void operation ::get()
{
    cout << "Enter first value:";
    cin >> a;
    cout << "Enter second value:";
    cin >> b;
}

inline void operation ::sum()
{
    add = a + b;
    cout << "Addition of two numbers: " << a + b << "\n";
}

inline void operation ::difference()
{
    sub = a - b;
    cout << "Difference of two numbers: " << a - b << "\n";
}

////////////////////////////////////////

int inceremt(int x)

{
    return (x + 1);
}

int main()
{
    // FUNCTORS A RE CLASS THAT ACT AS A FUNCITONc
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << n << endl;
    cout << func_one(3, 4, 5);
    return 0;
}