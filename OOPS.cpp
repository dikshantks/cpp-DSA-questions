#include <iostream>

using namespace std;

class student
{
public:
    string name;
    int age;
    bool gender;

    student()
    {
        cout << "dfault constructor " << endl;
    } // default constructor hahahah

    student(student &a)
    {
        cout << "copy constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    student(string s, int a, bool g)
    {
        cout << "parameter constructor " << endl;
        name = s;
        age = a;
        gender = g;
    } // THIS IS  parameterized  CONSTRUCTOR (   will use in future )

    // ~student()
    // {
    //     cout << "detructor callled \n";

    // } //destructor

    void printinfo()
    {
        cout << "*********************************" << endl;
        cout << "name :";
        cout << name << endl;
        cout << "age : ";
        cout << age << endl;
        cout << "gender : ";
        cout << gender << endl;
    }

    void getname()
    {
        cout << name << endl;
    }

    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
};

class encapsulation
{
    // public private , protectoed
    // good coding practise , inc security of data
public:
    int a;
    void funca()
    {
        cout << "funca" << endl;
    }

private:
    int b;
    void funcb()
    {
        cout << "funcB \n";
    }

protected:
    int c;

    void funcC()
    {
        cout << "funcC\n";
    }
};

class A
{
public:
    void func()
    {
        cout << "inhertance" << endl;
    }
};

class B : public A
{
public:
    void funcB()
    {
        cout << "\n this is form class B\n";
    }
};

class C : public B
{
public:
};

class apnacollege
{
public:
    void fun()
    {
        cout << "func ith no argument" << endl;
    }
    void fun(int x)
    {
        cout << "func twit hint argument" << endl;
    }
    void fun(double x)
    {
        cout << "func with double argument " << endl;
    }
};

class oppoverload
{
private:
    int real, img;

public:
    oppoverload(int r, int i) // constructor
    {
        real = r;
        img = i;
    }
    oppoverload() {}

    oppoverload operator+(oppoverload const &obj)
    {
        oppoverload resut;

        resut.img = img + obj.img;

        resut.real = real + obj.real;

        return resut;
    }

    void print()
    {
        cout << real << " + i" << img << endl;
    }
};

class base
{
public:
    virtual void print()
    {
        cout << "this is function in base class (pirnt)" << endl;
    }
    void display()
    {
        cout << "this is function in base class (display)" << endl;
    }
};

class derive : public base
{
public:
    void print()
    {
        cout << "this is function in derived class (pirnt)" << endl;
    }
    void display()
    {
        cout << "this is function in derived class(display) " << endl;
    }
};

int main()
{
    // student a;

    // string name;

    // int age;

    // cout << "enter name : ";
    // cin >> name;

    // a.name = name;
    // a.age = 12;
    // a.gender = 1;

    // a.printinfo();
    // student arr[3];

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "name :";
    //     cin >> arr[i].name;
    //     cout << "age : ";
    //     cin >> arr[i].age;
    //     cout << "gender : ";
    //     cin >> arr[i].gender;
    // }

    // cout << "**************" << endl;

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printinfo();
    // }

    //      lets see        //
    student pparameter("dikshant ", 12, 1);
    pparameter.printinfo();
    pparameter.getname();

    student defult;

    student copyconst(pparameter); // or student copycont = paramet ;

    if (copyconst == pparameter) // OPERATOR OVER LOADING
    {
        cout << "SAME \n******\n";
    }
    else
    {
        cout << "not SAME \n";
    }

    // encapsulation

    encapsulation one;

    one.funca();

    // inhertance

    // B inher;

    // inher.func();

    C MultiInhert;

    MultiInhert.funcB();
    MultiInhert.func();

    apnacollege obje;

    obje.fun();
    obje.fun(4);
    obje.fun(6.2);

    oppoverload complex1(12, 6), complex2(6, 7);

    oppoverload res = complex1 + complex2;

    res.print();

    base *basepoint;

    derive D;

    basepoint = &D;

    basepoint->print();
    basepoint->display();

    D.print();
    D.display();

    return 0;
}