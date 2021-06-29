#include <iostream>
using namespace std;

int main()
{
    int marks[] = {4, 52, 56, 7};
    int *p = marks; // here p is a pointer points to marks array's element

    // cout << *p << endl;
    // cout << *(p + 1) << endl;
    // cout << *(p++) << endl;
    // cout << *p << endl;
    // cout << *(++p) << endl;

    cout << "The value of *p is : " << *p << endl;
    cout << "The value of *(p+1) is : " << *(p + 1) << endl;
    cout << "The value of *(p+2) is : " << *(p + 2) << endl;
    cout << "The value of *(p+3) is : " << *(p + 3) << endl;
    // return 0;
}