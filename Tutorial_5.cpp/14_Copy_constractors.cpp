#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }

    number(number &obj) // copy constractor decleration
    {
        cout << "******Copy constractor called*****" << endl; // when no copy constractor is found , compiler supplies its own copy constractor
        a = obj.a;
    }

    void display(void)
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    number x, y, z(34), z2;
    x.display();
    y.display();
    z.display();

    number z1(z); // copy constractors invoked(call)
    z1.display();

    z2 = z; // copy constractors not called

    number z3 = z; // copy constractors invoked
    z3.display();

    return 0;
}