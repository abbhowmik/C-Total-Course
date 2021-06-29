// // example of array of object
// #include <iostream>
// using namespace std;

// class employee
// {
//     int id;
//     int salary;

// public:
//     void setId(void)
//     {
//         salary = 100;
//         cout << "Enter the Id of the employee " << endl;
//         cin >> id;
//     }
//     void getId()
//     {
//         cout << "The id of this employee is " << id << endl;
//     }
// };

// int main()
// {
//     employee harry, ashis, rohan;

//     // harry.setId();
//     // harry.getId();
//     employee facebook[4]; // this is called Array of Object
//     for (int i = 0; i < 4; i++)
//     {
//         facebook[i].setId();
//         facebook[i].getId();
//     }

//     return 0;
// }

// passing object as function argument's example
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(complex c1, complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
    void displayNumbers(void)
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex d, e, f;

    d.setData(2, 3);
    d.displayNumbers();

    e.setData(4, 5);
    e.displayNumbers();

    f.setDataBySum(d, e);
    f.displayNumbers();

    return 0;
}