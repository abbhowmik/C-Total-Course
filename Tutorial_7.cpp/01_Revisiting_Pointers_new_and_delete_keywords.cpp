#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is " << *ptr << endl;

    // new operator
    // int *p = new int(45); //in c language , we use calloc, malloc but in c++, we use new operator
    float *p = new float(45.443);
    cout << "The value of a is " << *p << endl;

    int *arr = new int[4];
    arr[0] = 10;
    *(arr + 1) = 72;
    arr[2] = 36;
    arr[3] = 84;
    delete arr; // delete operator
    cout << "The vlaue of arr[0] is " << arr[0] << endl;
    cout << "The vlaue of arr[1] is " << arr[1] << endl;
    cout << "The vlaue of arr[2] is " << arr[2] << endl;
    cout << "The vlaue of arr[3] is " << arr[3] << endl;

    return 0;
}