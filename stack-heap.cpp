#include<iostream>
using namespace std;

int main()
{
    int a= 10;

    int  *p = new int(); //allocated memeory in heap 

    *p =10;

    delete(p);

    p= new int();

    delete[]p;

    p= NULL;

    
    return 0;
}