// // simple example of Friend function(ex-1)
// #include <iostream>
// using namespace std;
// class Y;
// class X
// {
// private:
//     int a;
//     friend void add(X, Y);

// public:
//     void setValue(int value)
//     {
//         a = value;
//     }
// };

// class Y
// {
// private:
//     int b;
//     friend void add(X, Y);

// public:
//     void setData(int data)
//     {
//         b = data;
//     }
// };

// void add(X o1, Y o2)
// {
//     cout << "The summing details of X and Y is " << o1.a + o2.b << endl;
// }

// int main()
// {
//     X a1;
//     a1.setValue(2);

//     Y a2;
//     a2.setData(4);

//     add(a1, a2);

//     return 0;
// }

// ex--2
#include <iostream>
using namespace std;
class B;
class A
{
    int a;
    friend void exchange(A &, B &);

public:
    void indata(int data)
    {
        a = data;
    }
    void display(void)
    {
        // cout << "After exchanging" << endl;
        cout << a << endl;
    }
};

class B
{
    int b;
    friend void exchange(A &, B &);

public:
    void indata(int data)
    {
        b = data;
    }
    void display(void)
    {
        cout << b << endl;
    }
};

void exchange(A &x, B &y) // method of call by referrence
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main()
{
    A a1;
    a1.indata(45);
    a1.display();

    B a2;
    a2.indata(3);
    a2.display();

    exchange(a1, a2);
    cout << "After exchanging " << endl;
    cout << "The value of a is ";
    a1.display();
    cout << "The value of b is ";
    a2.display();

    return 0;
}