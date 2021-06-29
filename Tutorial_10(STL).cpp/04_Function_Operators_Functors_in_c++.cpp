#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // function objects : Function wrapped in a class so that it availabe like an object
    int arr[] = {3, 454, 566, 343, 63, 23};
    // sort(arr, arr + 6); // sorting the array list by increasing order(accerding order)
    sort(arr, arr + 6, greater<int>()); // here grater is a fucntion operator(Functors)
    // it sort the array list by decreasing(decending) order
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}