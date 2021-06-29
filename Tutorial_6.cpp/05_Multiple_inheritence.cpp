#include <iostream>
using namespace std;

class Base1
{
protected:
    int data1;

public:
    void setData1(int a)
    {
        data1 = a;
    }
};

class Base2
{
protected:
    int data2;

public:
    void setData2(int b)
    {
        data2 = b;
    }
};

class Base3
{
protected:
    int data3;

public:
    void setData3(int c)
    {
        data3 = c;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void display(void)
    {
        cout << "The value of data1 is " << data1 << endl;
        cout << "The value of data2 is " << data2 << endl;
        cout << "The value of data3 is " << data3 << endl;
        cout << "The sum of these values is " << data1 + data2 + data3 << endl;
    }
};

int main()
{
    // driver programme
    Derived d;
    d.setData1(45);
    d.setData2(5);
    d.setData3(10);
    d.display();

    return 0;
}