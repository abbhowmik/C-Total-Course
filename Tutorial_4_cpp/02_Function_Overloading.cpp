//  function oveloading is used for forced for work a function multiple types of work
// Polymorphism is a multiple types of form of a particular thing

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "Using 2 arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Using 3 arguments" << endl;
    return a + b + c;
}

// calculating volume of a cylinder
float volume(int r, int h)
{
    return (3.14 * r * r * h);
}
// calculating volume of a cube
float volume(int a)
{
    return (a * a * a);
}
// calculating volume of a rectangular box
float volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    cout << "The sum of a and b is " << sum(3, 4) << endl;
    cout << "The sum of a,b and c is " << sum(3, 6, 4) << endl;
    cout << "The volume of a cylinder is " << volume(3, 4) << endl;
    cout << "The volume of a cube is " << volume(3) << endl; //thus we can reuse of a function
    cout << "The volume of a rectangular box is " << volume(3, 4, 5) << endl;
    return 0;
}
