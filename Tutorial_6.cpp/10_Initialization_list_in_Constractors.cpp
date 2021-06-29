/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j){constructor-body}
};

*/
#include <iostream>
using namespace std;

class Test
{
private:
    int a, b;

public:
    // Test(int i, int j) : a(i), b(j)
    // {
    //     cout << "Constructor executed " << endl;
    // }
    // Test(int i, int j) : a(i), b(i + j)
    // {
    //     cout << "Constructor executed " << endl;
    // }
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a + j)

    // Test(int i, int j) : b(j), a(i + b)
    // {
    //     cout << "Constructor executed " << endl;
    //     cout << "The value of a is " << a << endl;
    //     cout << "The value of b is " << b << endl;
    // } //-->RED Flag,, this will create problems because a will be initialized first
    Test(int i, int j) : a(i), b(j)
    {
        cout << "This is a example of initialization list in contructor" << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
