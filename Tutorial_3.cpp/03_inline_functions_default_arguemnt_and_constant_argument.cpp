#include <iostream>
using namespace std;

// inline int product(int a, int b) // if we call a function multiple times than we should use inline function. It executed all the call into a one time call, so the programme will executed very fastly
// {                                // inline used for short functions
//     int c = a * b;               // if the function is very compleceted than inline use is not recomended
//     return c;
// }

float moneyReceived(int currentMoney, float interest = 1.40) // this interest value can be changed
{
    return currentMoney * interest;
}

// use of static variable;
int sum(int a, int b)
{
    static int c = 0; // A static variable is a variable that is declared using the keyword static.
                      //  The space for the static variable is allocated only one time and this is used for the entirety of the program.
                      //  Once this variable is declared, it exists till the program executes.
    c = c + 1;
    return a + b + c;
}

int main()
{
    int a = 3, b = 4;
    // cout << "The value of sum is: " << sum(a, b) << endl;
    // cout << "The value of sum is: " << sum(a, b) << endl;
    // cout << "The value of sum is: " << sum(a, b) << endl;
    // cout << product(a, b);

    int money = 100;
    cout << "If you have " << money << " Rs. in your bank account, you will receive " << moneyReceived(money) << " after 1 year" << endl;
    cout << "For a VIP account, if " << money << " Rs. in his bank account, he will receive " << moneyReceived(money, 1.20) << " after 1 year" << endl;

    return 0;
}