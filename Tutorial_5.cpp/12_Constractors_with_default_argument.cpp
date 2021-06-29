#include <iostream>
using namespace std;
class simple
{
    int a, b;

public:
    simple(int x = 3, int y = 4) // this is called default value(optional, if we don't pass two argument,then it will initiallized)
    {
        a = x;
        b = y;
    }
    void printNumber(void)
    {
        cout << "two numbers is " << a << " and " << b << endl;
    }
};

int main()
{
    simple s1(45, 67); // this value is take more prority than the default value passed in the argument paramerer
    s1.printNumber();
    return 0;
}