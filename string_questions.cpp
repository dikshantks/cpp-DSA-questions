#include <iostream>
#include <string>

#include <algorithm>

using namespace std;

int main()
{

    //SORT
    string s1 = "dfsdjfxzmcxtpuyp";

    sort(s1.begin(), s1.end());

    cout << s1 << endl;

    //UPPERCSAE AND LOWER CASE ORDER

    cout << 'a' - 'A' << endl; // 32 ahead

    string uc = "This IS in Upper caSe";

    for (int i = 0; i < uc.size(); i++)
    {
        if (uc[i] >= 'a' && uc[i] <= 'z')
        {
            uc[i] -= 32;
        }
    }

    cout << uc << endl;

    return 0;
}