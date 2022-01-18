//stores the addres of other variable 

// why  = coz pointer se we can access the value

#include<iostream>
using namespace std;

int main()
{
    int a=10;

    int *aptr; // star"*" coz  for  int(means pointer is an int type ) not with the name 

    aptr= &a;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl; // derefrencing
    

    *aptr=20;

    cout<<"channged value"<<endl;

    cout<<a<<endl; 
    cout<<&a<<endl;
    cout<<*aptr<<endl; // derefrencing
    cout<<aptr<<endl;

    // pointer arithmetic ++ , -- , add and subtracftt 

    aptr++; // + 4 coz int is 4 byte and char is 1 byte 
    cout<<*aptr<<endl; 

    //pointers and ARRAY (wtf one was enough)

    int arr[5] = {10,11,12,13,14};

    int *ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        cout<<*(arr+i) <<endl;
        /* code */
    }

    
    
    return 0;
}