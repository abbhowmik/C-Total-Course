// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a, b;

// public:
//     Complex(int, int); // constractor decleration

//     void printNumber(void)
//     {
//         cout << "The Number is " << a << " + "
//              << "i" << b << endl;
//     }
// };

// Complex::Complex(int x, int y) // it is parameterized contractors
// {
//     a = x;
//     b = y;
// }

// int main()
// {
//     Complex c1(4, 5);
//     c1.printNumber();
//     Complex c2(3, 4);
//     c2.printNumber();

//     return 0;
// }

// another example of parameterized constrators
// #include <iostream>
// using namespace std;

// class point
// {
//     int x, y;

// public:
//     point(int a, int b)
//     {
//         x = a;
//         y = b;
//     }
//     void displayNumbers(void)
//     {
//         cout << "The point is (" << x << "," << y << ")" << endl;
//     }
// };

// int main()
// {

//     point p1(4, 3);
//     p1.displayNumbers();

//     point p2(2, 3);
//     p2.displayNumbers();

//     return 0;
// }

// example to find the distance between two points placed in spaces
// #include <iostream>
// #include <cmath> //(#include <bits/stdc++.h>), we can also use this headerfile
// using namespace std;
// class point
// {

//     int x, y;
//     friend int distance(point p, point q);

// public:
//     void first(int a, int b)
//     {
//         x = a;
//         y = b;
//     }
// };

// int distance(point p, point q)
// {
//     return sqrt(pow(q.x - p.x, 2) + pow(q.y - p.y, 2));
// }

// int main()
// {
//     point p1, p2;
//     p1.first(1, 0);
//     p2.first(70, 0);
//     cout << "The distance is " << distance(p1, p2) << " cm" << endl;
//     return 0;
// }

// another method
#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

    friend void distance(Point p1, Point p2);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void display(void)
    {
        cout << "The point is"
             << "(" << x << "," << y << ")" << endl;
    }
};

void distance(Point p1, Point p2)
{
    int x1 = (p2.x - p1.x) * (p2.x - p1.x);
    int x2 = (p2.y - p1.y) * (p2.y - p1.y);
    int d = x1 + x2;

    cout << "The distance between this two point is " << sqrt(d) << " unit" << endl;
}

int main()
{
    Point p1(1, 0), p2(70, 0);
    p1.display();
    p2.display();
    distance(p1, p2);
}