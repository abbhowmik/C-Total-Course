// as same as function overloading, it is called polimorphism of a constractor

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 78;
    }
    complex()
    {
        a = 0;
        b = 0;
    }
    void printNumber(void)
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1(3, 4), c2(4);
    complex c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}