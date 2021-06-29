#include <iostream>
using namespace std;
// float funcAvg(int a, int b)
// {
//     float avg;
//     avg = (a + b) / 2;
//     return avg;
// }

// float funcAvg2(int a, float b)
// {
//     float avg;
//     avg = (a + b) / 2;
//     return avg;
// }

// this is syntax of function template
template <class t1, class t2>
float funcAvg(t1 a, t2 b)
{
    float avg;
    avg = (a + b) / 2;
    return avg;
}

template <class t>
void swp(t &a, t &b)
{
    t temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    a = funcAvg(2, 4);
    printf("The average of this two number is: %0.2f\n", a);

    // int x = 5, y = 4;
    char x = 'c';
    int y = 3;
    swp(x, y);
    cout << x << endl
         << y << endl;

    return 0;
}