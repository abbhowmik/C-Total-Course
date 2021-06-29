// array is a collection of same type of date types in contigiuous memory location(ram)

#include <iostream>
using namespace std;

int main()
{
    int marks[] = {4, 5, 6, 7};
    // int mathmarks[4];
    // cout << "These are marks" << endl;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // mathmarks[0] = 45;
    // mathmarks[1] = 5;
    // mathmarks[2] = 453;
    // mathmarks[3] = 4343;
    // cout << "These are mathmarks" << endl;
    // cout << mathmarks[0] << endl;
    // mathmarks[1] = 56; // we can change the value of an array here
    // cout << mathmarks[1] << endl;
    // cout << mathmarks[2] << endl;
    // cout << mathmarks[3] << endl;

    // cout << "Now these are the marks using loops" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << marks[i] << endl;
    }

    // int i = 0;
    // while (i < 4)
    // {
    //     cout << marks[i] << endl;
    //     i++;
    // }

    return 0;
}
