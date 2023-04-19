#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{

    int x = 1;

    if (fork() && fork())
    {
        x = fork();
    }

    if (x)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
    }

    return 0;
}