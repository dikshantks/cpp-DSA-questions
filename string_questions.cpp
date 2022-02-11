#include <iostream>
#include <string>

#include <algorithm>

using namespace std;

int main()
{

    // SORT
    string s1 = "dfsdjfxzmcxtpuyp";

    sort(s1.begin(), s1.end());

    cout << s1 << endl;

    // UPPERCSAE AND LOWER CASE ORDER

    cout << 'a' - 'A' << endl; // 32 ahead

    string uc = "This IS in Upper caSe  AND LOWER case";

    /*
        for (int i = 0; i < uc.size(); i++)
        {
            if (uc[i] >= 'a' && uc[i] <= 'z')
            {
                uc[i] -= 32;
            }
        }

        cout << uc << endl;

        for (int i = 0; i < uc.size(); i++)
        {
            if (uc[i] >= 'A' && uc[i] <= 'Z')
            {
                uc[i] += 32;
            }
        }
        cout << uc << endl;
    */

    /// NOW INBUILT FUNCITON FOR STRINGS
    /*
        transform(uc.begin(), uc.end(), uc.begin(), ::toupper);
        cout << uc << endl;

        transform(uc.begin(), uc.end(), uc.begin(), ::tolower);
        cout << uc << endl;
    */

    // MAKE LAGEST NUMBER FORM STRING

    string num = " 10569";

    // just use SORT() LOL
    sort(num.begin(), num.end(), greater<int>());

    cout << num << endl;

    // THIRD QUESTION MAXIMUM CHARCTER

    string count = " abaaacbhhhhbcdzhg";

    int freq[26];

    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;

    } // every elemetn is zero here

    for (int i = 0; i < count.size(); i++)
    {
        freq[count[i] - 'a']++;
    }
    // FOR ME
    for (int i = 0; i < 26; i++)
    {
        cout << freq[i];
    }
    cout << endl;

    char ans = 'a';
    int maxf = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxf)

        {
            maxf = freq[i];
            ans = i + 'a';
        }
    }

    cout << maxf << endl;
    cout << ans << endl;

    return 0;
}