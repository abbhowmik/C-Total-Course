#include <iostream>
using namespace std;

class Complex
{
private:
    int a;
    int b;
    friend Complex sumNumber(Complex o1, Complex o2); // by this, we give the access to take data(private members data) from here

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void displayNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i " << endl;
    }
};

Complex sumNumber(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(2, 3);
    c1.displayNumber();

    c2.setNumber(4, 3);
    c2.displayNumber();

    sum = sumNumber(c1, c2);
    sum.displayNumber();

    return 0;
}