// #include <iostream>
// using namespace std;

// // member friend function' use
// // forward decleration of class members(changes from one class's function into anothers class friend)
// class Complex;

// class Calculator
// {
// public:
//     int add(int a, int b)
//     {
//         return a + b;
//     }
//     int sumRealComplex(Complex, Complex);
// };

// class Complex
// {
// private:
//     int a, b;
//     friend int Calculator::sumRealComplex(Complex o1, Complex o2);

// public:
//     void setNumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }
//     void displayNumbre(void)
//     {
//         cout << "The number is " << a << " + " << b << "i" << endl;
//     }
// };

// int Calculator::sumRealComplex(Complex o1, Complex o2)
// {
//     return (o1.a + o2.a);
// }

// int main()
// {
//     Complex c1, c2;

//     c1.setNumber(2, 3);
//     c1.displayNumbre();

//     c2.setNumber(4, 5);
//     c2.displayNumbre();

//     Calculator cal;
//     int result = cal.sumRealComplex(c1, c2);
//     cout << "The sum of real part of the complex number is " << result << endl;
//     return 0;
// }

// use of friend class
#include <iostream>
using namespace std;
// friend calsses(wrapped all the calculator condition into a friend class)
class Complex;
class Calculator
{
public:
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
private:
    int a, b;
    // friend int Calculator::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator::sumCompComplex(Complex o1, Complex o2);
    // we can creat a class friend for making all the calculator function as friend(neither declear many times of use )
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void displayNumbre(void)
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2;

    c1.setNumber(2, 3);
    c1.displayNumbre();

    c2.setNumber(4, 5);
    c2.displayNumbre();

    Calculator cal;

    int res = cal.sumRealComplex(c1, c2);
    cout << "The sum of real part of the complex number is " << res << endl;

    int resc = cal.sumCompComplex(c1, c2);
    cout << "The sum of comp part of the complex number is " << resc << endl;

    return 0;
}

// use of friend class
