#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
} // this is called (call of call by value)

void swapPointers(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swapReferencePointers(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
} // this is called (call by referrence)
int main()
{
    int x = 3, y = 5;
    cout << "The value of a is " << x << " and the value of b is " << y << endl;
    // swap(x, y);
    // cout << "The value of a is " << x << " and the value of b is " << y << endl; // did not work as it sends a copy of variable

    // swapPointers(&x, &y);
    // cout << "The value of a is " << x << " and the value of b is " << y << endl; // did not work as it sends a copy of variable
    // this is called call by reference

    swapReferencePointers(x, y);
    cout << "The value of a is " << x << " and the value of b is " << y << endl; // it also work(second method of calling by reference)
    return 0;
}