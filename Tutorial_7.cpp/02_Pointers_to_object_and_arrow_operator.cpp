#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getData(void)
    {
        cout << "The real part is " << real << endl;
        cout << "The real imaginary is " << imaginary << endl;
    }
};

int main()
{
    Complex c;
    // c.setData(4, 6);
    // c.getData();

    // it is as same
    // Complex *ptr = new Complex; // decleration of Pointers to Object
    // (*ptr).setData(45, 5);
    // (*ptr).getData();

    Complex c;
    Complex *ptr = &c; // it is an another example of decleration of Pointers to Object
    (*ptr).setData(45, 5);
    // it is as same
    ptr->setData(45, 5); // it is called arrow operator
    ptr->getData();
    // it is as same
    (*ptr).getData();

    // array of object
    // Complex *ptr = new Complex[4];
    // ptr->setData(5, 5);
    // ptr->getData();

    return 0;
}