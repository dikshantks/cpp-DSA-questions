#include <iostream>
#include <string>

using namespace std;

int main()
{
    // DIFFRETN TYPES TO DECLARE STRINGS
    string str; // normal

    string str1(5, 'n'); // you want n five times

    string str2 = "dikshant sharma";

    cout << str1 << endl;
    cout << str2 << endl;
    // cin >> str;
    // cout<<"hi ,"<<str;

    getline(cin, str); //to input whole line with the space
    cout << "sentence: " << str << endl;

    /* FUNCTIONS IN STRINGS*/
    string s3 = "fam";
    string s4 = "ily";

    //s3.append(s4);
    //cout << s3 << endl;
    //s3 = s3 + s4;
    cout << s3 << endl;
    cout << s3[3] << endl;

    cout << s3.compare(s4) << endl; // if both strings are equal answer if 0 (zero yess zero)

    string ab = "what is sdfsdfsfsf";
    cout << ab << endl;
    ab.clear(); // clear everything

    if (ab.empty()) // checks if string is empty or not
    {
        cout << "string is empty" << endl;
    }
    

    return 0;
}