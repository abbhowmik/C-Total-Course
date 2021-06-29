#include <iostream>
using namespace std;

int glo = 8; // it is global variable
void sum()
{
    // int glo = 56;
    cout << glo;
    int a;
}
int main()
{
    int glo = 6; //it is local variable, local variable takes more precidence than global variable
    // glo = 56;
    int a = 4, b = 5;
    float pi = 3.14;
    // char c = 'a';
    // std::cout << "The value of a is: " << a << "\nAnd the value of b is: " << b; // we should not use std if we not use using namespace std
    // std::cout << "\nThe value of pi is:" << pi;
    // std::cout << "\nThe character of c is : " << c;
    sum();
    // cout << glo;
    return 0;
}
