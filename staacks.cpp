#include <iostream>
using namespace std;

#define n 100

class stack
{
private:
    int *arr;
    int top;

public:
    int a;
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        top++;

        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }

    int Top()
    {

        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }

        return arr[top];
    }

    bool isempty()
    {
        return top == -1;
    }
};
int main()
{

    stack st;

    for (int i = 0; i < 5; i++)
    {
        st.push(i);
    }

    cout << st.Top();

    return 0;
}