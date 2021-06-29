// write a programme base on the below mention method
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operations of your chioice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using? ---> Multiple inheritance
    Q2. Which mode of Inheritance are you using? ---> public SimpleCalculator, public ScientificCalculator
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
private:
    int a, b;

public:
    void setDataForSimpleCalculator(void)
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }
    void performOperationSimpleCalculator(void)
    {
        cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
        cout << "The substraction of " << a << " and " << b << " is " << a - b << endl;
        cout << "The multliplication of " << a << " and " << b << " is " << a * b << endl;
        cout << "The division of a and " << a << " and " << b << " is " << a / b << endl;
        cout << endl;
    }
};

class ScientificCalculator
{
private:
    int a, b;

public:
    void setDataForScientificCalculator(void)
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }
    void performOperationScientificCalculator(void)
    {
        cout << "The value of cos" << (a) << " is : " << cos(a) << endl;
        cout << "The value of sin" << (a) << " is : " << sin(a) << endl;
        cout << "The value of exp" << (a) << " is : " << exp(a) << endl;
        cout << "The value of tan" << (a) << " is : " << tan(a) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    // driver programme
    HybridCalculator h;
    h.setDataForSimpleCalculator();
    h.performOperationSimpleCalculator();
    h.setDataForScientificCalculator();
    h.performOperationScientificCalculator();

    return 0;
}
