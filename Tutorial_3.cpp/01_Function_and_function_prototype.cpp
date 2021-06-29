#include <iostream>
using namespace std;

int sum(int, int); // it is called function prototype(firstly decleared to compiler)
// int sum(int a , int b); // both are same
void greet();

int main()
{
    int n1, n2; // n1 and n2 is an actural parameter
    cout << "Enter the first number " << endl;
    cin >> n1;
    cout << "Enter the second number " << endl;
    cin >> n2;
    int s = sum(n1, n2);
    cout << "The sum of " << n1 << " and " << n2 << " is " << s << endl;
    greet();

    return 0;
}

int sum(int a, int b) // a and b is an formal parameter(used inside function)
{
    int c = a + b;
    return c;
}

void greet()
{
    cout << "Hello Good Morning!";
}