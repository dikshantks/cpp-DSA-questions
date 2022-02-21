#include <iostream>

using namespace std;

int getbit(int n, int pos)
{

    return ((n & (n << pos)) != 0);
}

// SET BIT MEANS TO PUT 1 AT THAT POSITION
int setbit()
{
}

int main()
{
    cout << getbit(0101, 2);
    return 0;
}