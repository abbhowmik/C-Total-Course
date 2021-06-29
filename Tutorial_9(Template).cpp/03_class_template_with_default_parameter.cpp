#include <iostream>
using namespace std;

template <class t1 = int, class t2 = float, class t3 = char>
class Ashis
{
public:
    t1 a;
    t2 b;
    t3 c;
    Ashis(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
    }
};

int main()
{
    Ashis<> a(45, 4.67, 'c'); // this is the syntax of default parameterized template
    a.display();

    cout << endl;

    Ashis<float, int, char> b(45.90, 4, 'c');
    b.display();

    return 0;
}