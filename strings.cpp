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

    getline(cin, str); // to input whole line with the space
    cout << "sentence: " << str << endl;

    /* FUNCTIONS IN STRINGS*/
    string s3 = "fam";
    string s4 = "ily";

    s3.append(s4);
    cout << s3 << endl;
    s3 = s3 + s4;

    cout << s3[3] << endl;

    cout << s3.compare(s4) << endl; // if both strings are equal answer is 0 (zero yess zero)

    string ab = "what is sdfsdfsfsf";
    cout << ab << endl;
    ab.clear(); // clear everything

    if (ab.empty()) // checks if string is empty or not
    {
        cout << "string is empty" << endl;
    }

    string s5 = "Abigword";

    // s5.erase(3, 4); // delete from index and then how many char after that start from 3 and do 4 char after that

    // cout<<s5<<endl;

    cout << s5.find("big") << endl;

    s5.insert(1, "very");

    cout << s5 << endl;

    cout << s5.length() << endl
         << s5.size() << endl;

    for (int i = 0; i < s5.length(); i++)
    {
        cout << s5[i] << " ";
        /* code */
    }
    cout << endl;

    // SUBSTRING OF A STRING

    string s6 = "example substring";

    cout << s6.substr(5, 8) << endl;

    string ints = "177013";

    // string to int

    int x = stoi(ints);

    cout << x + 1 << endl;

    int z = 34;

    cout << to_string(z) + "append this " << endl;

    return 0;
}
