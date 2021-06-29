// #include <iostream>
// using namespace std;

// int main()
// {

//     int sum = 0;
//     for (int i = 0; i < 11; i++)
//     {
//         sum = sum + i;
//     }
//     cout << "The sum is " << sum;

//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n + 1; i++)
    {
        sum = sum + i;
    }
    cout << "The sum is " << sum;

    return 0;
}