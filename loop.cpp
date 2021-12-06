#include<iostream>
using namespace std;

int main()
{
    int i;
    cout<<"enter i:";
    cin>>i;
    for ( i>=1; i<31; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        cout<<i;
        cout<<"its odd"<<endl;
        
    }
    return 0;
}
