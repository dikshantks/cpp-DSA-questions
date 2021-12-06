#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    bool gender ;

    void printinfo(){

        cout<<"name :";
        cout<< name<<endl;
        cout<<"age : ";
        cout<<age<<endl;
        cout<<"gender : ";
         cout<<gender<<endl;
    }
    
};

class idk_what_this_is
{
    string what_is_this;
    int what_am_i_even_doing;
};


int main()
{
    student a; // a is object of class student

    /*
    string name;
    int age ;

    cout<<"enter name : ";
    cin>>name;

    a.name=name;
    a.age = 12;
    a.gender= 0;

    cout<<endl;
    cout<<"name : "<<a.name;*/

    student arr[1];

    for (int i = 0; i <=1; i++)
    {
        cout<<"name :";
        cin>> arr[i].name;
        cout<<"age : ";
        cin>>arr[i].age;
        cout<<"gender : ";
        cin>>arr[i].gender;
        
    }

    cout<<"**************"<<endl;

    for (int i = 0; i <= 1; i++)
    {
        arr[i].printinfo();
    }
    
    return 0;
}