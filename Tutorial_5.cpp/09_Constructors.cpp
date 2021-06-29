#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void); //constractors name should same as class's name
    // decleration of Constractor(its name same as class and it is a member function of classes, we can initialize its value)

    void printData(void)
    {
        cout << "The Complex number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // defination of constractor(this is a default constractor because it takes no argument or parameter)
{
    a = 8;
    b = 3;
    cout << "Hello world" << endl;
}

int main()
{
    Complex c;
    c.printData(); //(invoiking or calling a function)

    return 0;
}

/* Characteristics of Constructors

1) It should be decleared in the public section in the class
2) They are automatically invoked(call) himself
3) Do not have a return value and return types
4) It can have default arguments
5) We cannot refer to their address
6) It's name should same as the class 
*/
