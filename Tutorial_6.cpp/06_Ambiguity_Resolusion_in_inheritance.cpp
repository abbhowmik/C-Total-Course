#include <iostream>
using namespace std;
class Base1
{
public:
    void greet(void)
    {
        cout << "What is your name?" << endl;
    }
};
class Base2
{
public:
    void greet(void)
    {
        cout << "Apka name kiya hain?" << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    void greet()
    { //syntax of maintain ambiguity resolusion
        Base2 ::greet();
    }
};

int main()
{
    Base1 b1;
    Base2 b2;
    b1.greet();
    b2.greet();
    Derived d;
    d.greet();
    return 0;
}