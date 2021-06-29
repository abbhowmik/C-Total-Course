// base class constractor first calls, then derived class

#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constractor called" << endl;
    }
    void printDataBase1(void)
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constractor called" << endl;
    }
    void printDataBase2(void)
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2; // its default value is private

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b) // it is the the defination of constractor in derived class
    {
        derived1 = c;
        derived2 = d;
    }

    void printDataDerived(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    // Let's write driver programme
    // Let's define object
    Derived d(4, 55, 3, 4);
    d.printDataBase1();
    d.printDataBase2();
    d.printDataDerived();

    return 0;
}