// #include <iostream>
// using namespace std;
// A union is a special class type that can hold only one of its non-static data members at a time.

// typedef union employee // using by typedef
// {
//     int rice;
//     char car;
//     float pounds;
// } ep;

// int main()
// {
//     ep harry;
//     harry.rice = 56;
//     harry.pounds = 500000;
//     harry.car = 'c';
//     cout << harry.rice << endl;
//     cout << harry.pounds << endl;
//     cout << harry.car << endl; // union executes last character
//     return 0;
// }

// use of Enums
#include <iostream>
using namespace std;

typedef union employee // use of typedef
{
    int rice;
    char car;
    float pounds;
} ep;

int main()
{
    enum News //Enumeration is a user defined datatype in C/C++ language. It is used to assign names to--
              //  the integral constants which makes a program easy to read and maintain.
              // now News is a data type
    {
        Laptop,
        Mobile,
        Radio
    };
    News n1 = Mobile;
    cout << n1 << endl;
    cout << Laptop << endl;
    cout << Mobile << endl;
    cout << Radio << endl;
    ep harry;
    harry.rice = 56;
    harry.pounds = 500000;
    harry.car = 'c';
    cout << harry.rice << endl;
    cout << harry.pounds << endl;
    cout << harry.car << endl; // union executes last character

    return 0;
}
