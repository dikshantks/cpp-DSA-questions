#include <iostream>
using namespace std;

string palindrome(int n, char arr[n])
{
    bool check = 1;
    string ans;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }

    if (check == true)
        ans = " string is  a palindrome";
    else
    {
        ans = " word is not palindrom";
    }
    return ans;
}

int main()
{
    /*
    char arry[100] = "apple";

    int i =0;

    while (arry[i]!='\0')
    {
        cout<<i<<arry[i]<<endl;
        i++;
    }
*/
    // input out put
    /*
    char arr[100];
    cout<<"enter name: ";
    cin>>arr;
    cout<<arr<<endl;
   */

    // PALINDROM

    int n;
    cout << "number of letter: ";
    cin >> n;

    char ary[n + 1];
    cout << "enter word: ";
    cin >> ary;
    cout << endl
         << palindrome(n, ary[n + 1]);

    // LARGEST WORD IN SENTENCE

    /* int n;
     char arr[n + 1];
     int max = 0, current = 0;
     int st = 0, maxst = 0;

     cout << "enter 10 (this  includes space and end char '/0') : ";
     cin >> n;
     cin.ignore();

     cout << "enter sentence : ";

     cin.getline(arr, n);
     cin.ignore();

     int i = 0;

     while (true)
     {
         if (arr[i] == ' ' || arr[i] == '\0')
         {
             if (current > max)
             {
                 max = current;
                 maxst = st;
             }
             current = 0;
             st = i + 1;
         }
         else
         {
             current++;
         }

         if (arr[i] == '\0')
         {
             break;
         }
         i++;
         for (int j = 0; j <= st; j++)
         {
             cout << arr[i + maxst];
         }
     }
     cout << st << endl;
     cout << maxst << endl;

     cout << arr << endl;
     cout << max;*/

    return 0;
}
