#include <iostream>
using namespace std;

// factorial of a number
// n! = n * (n-1)!
// int factorial(int n)
// {
//     if (n <= 1) // or (n==0 || n==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial(n - 1);
//     }
// }

// fibonacci sequence
int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        return (fib(n - 2) + fib(n - 1)); // it is recursive  appeoach
    }
}

int main()
{
    int number;
    cout << "Enter a position number" << endl;
    cin >> number;
    // cout << "The factoial of " << number << " is " << factorial(number) << endl;
    cout << "The value at position " << number << " in fibonacci sequence is " << fib(number) << endl;

    return 0;
}