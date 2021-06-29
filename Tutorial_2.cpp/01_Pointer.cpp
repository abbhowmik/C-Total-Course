#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *b = &a;
    cout << "The value at address b is : " << b << endl;
    cout << "The address of a is : " << &a << endl;
    cout << "The address of b is : " << &b << endl;
    cout << "The value of b is : " << *b << endl; // dereferencing the pointers

    // int **c = &b; // it points a pointers(pointers to pointers)
    // cout << "The address of b is: " << &b << endl;
    // cout << "The address of b is: " << c << endl;
    // cout << "The value at address c is: " << *c << endl;
    // cout << "The value at address c(original value) is: " << **c << endl;
    return 0;
}