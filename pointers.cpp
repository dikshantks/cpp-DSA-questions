// stores the addres of other variable

// why  = coz pointer se we can access the value

#include <iostream>
using namespace std;

void pointer()
{
    int a = 10;

    int *aptr; // star"*" coz  for  int(means pointer is an int type ) not with the name

    aptr = &a;

    cout << a << endl;
    cout << &a << endl;
    cout << aptr << endl;
    cout << *aptr << endl; // derefrencing

    *aptr = 20;

    cout << "channged value" << endl;

    cout << a << endl;
    cout << &a << endl;
    cout << *aptr << endl; // derefrencing
    cout << aptr << endl;

    // pointer arithmetic ++ , -- , add and subtracftt

    aptr++; // + 4 coz int is 4 byte and char is 1 byte
    cout << *aptr << endl;
}

// pointers and ARRAY (wtf one was enough)

void one_D()
{
    // Declare an array
    int val[3] = {5, 10, 15};

    // Declare pointer variable
    int *ptr;

    // Assign address of val[0] to ptr.
    // We can use ptr=&val[0];(both are same)
    ptr = val;
    cout << "Elements of the array are: ";
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2] << endl;

    int arr[5] = {10, 11, 12, 13, 14};

    int *ptrr = arr;

    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << endl;
    }

    return;
}

void two_D()
{
    int nums[2][3] = {{16, 18, 20}, {25, 26, 27}};
    cout << " lol this url" << endl;
    cout << "https://www.geeksforgeeks.org/pointers-in-c-and-c-set-1-introduction-arithmetic-and-array/" << endl;
}

void opaqu()
{
    /*What is an opaque pointer?
     * Opaque as the name suggests is something we can’t see through. e.g. wood is opaque.
     * Opaque pointer is a pointer which points to a data structure whose contents are not exposed at the
     * time of its definition.*/

    struct STest *pSTest;
    pSTest = NULL;

    /* Why Opaque pointer?
     * There are places where we just want to hint the compiler that “Hey! This is some data structure which will be used by our clients.
     * Don’t worry, clients will provide its implementation while preparing compilation unit”.
     * Such type of design is robust when we deal with shared code. Please see below example:*/
    // MORE INFO : https://www.geeksforgeeks.org/opaque-pointer/
}

void refrence()

{
    int x = 10;

    // ref is a reference to x.
    int &ref = x;

    cout << &ref << endl;
    cout << &x << endl;

    // Value of x is now changed to 20
    ref = 20;
    cout << "x = " << x << endl;

    // Value of x is now changed to 30
    x = 30;
    cout << "ref = " << ref << endl;

    cout << &ref << endl;
    cout << &x << endl;
}

void diffrence()
{
    /*1. A pointer can be declared as void but a reference can never be void For example
     * 2. The pointer variable has n-levels/multiple levels of indirection
     *i.e. single-pointer, double-pointer, triple-pointer. Whereas, the reference variable has only one/single level of indirection.
     *3.Reference variable cannot be updated.
     *4.Reference variable is an internal pointer .
     *5.Declaration of Reference variable is preceded with ‘&’ symbol ( but do not read it as “address of”).*/

    int i = 10;       // simple or ordinary variable.
    int *p = &i;      // single pointer
    int **pt = &p;    // double pointer
    int ***ptr = &pt; // triple pointer
    // All the above pointers differ in the value they store or point to.
    cout << "i=" << i << "\t"
         << "p=" << p << "\t"
         << "pt=" << pt << "\t"
         << "ptr=" << ptr << "\n";
}

class Test
{
private:
    int x;

public:
    void setX(int x)
    {
        // The 'this' pointer is used to retrieve the object's x  hidden by the local variable 'x'
        this->x = x;
    }
    void print() { cout << "x = " << x << endl; }
};

int main()
{
    // pointer();
    cout << endl;
    one_D();
    cout << endl;
    two_D();
    cout << endl;
    opaqu();
    cout << endl;
    refrence();
    cout << endl;
    diffrence();
    cout << endl;
    Test t;
    t.setX(30);
    t.print();

    return 0;
}