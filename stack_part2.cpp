#include <iostream>

#include <stack>

#include <math.h>
using namespace std;

void reverse_string(string s)
{

    stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {
        string words = "";
        while (s[i] != ' ' && i < s.length())
        {

            words += s[i];

            i++;
        }

        st.push(words);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";

        st.pop();
    }
    cout << endl;
}

void insertAtBottom(stack<int> &st, int elem)

{

    if (st.empty())
    {
        st.push(elem);
        return;
    }

    int topelem = st.top();

    st.pop();
    insertAtBottom(st, elem);

    st.push(topelem);
}

void reverse(stack<int> &st)
{

    if (st.empty())
    {
        return;
    }

    int elem = st.top();

    st.pop();
    reverse(st);

    insertAtBottom(st, elem);
}

int prefixeval(string s)
{
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;
            }
        }
    }

    return st.top();
}

int postfixEval(string s)
{
    stack<int> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;
            }
        }
    }

    return st.top();
}

// string infix_topostfix(string s)
// {
// }

bool vaild_parenthesis(string s)
{
    stack<char> st;

    int n = s.length();

    bool ans;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '[' or s[i] == '{' or s[i] == '(')
        {
            st.push(s[i]);
        }

        else if (st.top() == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (st.top() == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }

    if (!st.empty())
        return false;

    return ans;
}

int main()
{
    string s = " hello world this is me ";

    reverse_string(s);

    stack<int> st;

    st.push(0);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);

    reverse(st);

    while (!st.empty())
    {
        cout << st.top() << "-";
        st.pop();
    }
    cout << endl;

    cout << prefixeval("-+7*45+20") << endl;
    cout << postfixEval("46+2/5*7+") << endl;

    string parent = "()";

    cout << vaild_parenthesis(parent) << endl;

    return 0;
}
