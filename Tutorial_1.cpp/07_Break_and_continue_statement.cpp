#include <iostream>
using namespace std;

int main()
{
    // use of break statement
    // for (int i = 0; i < 5; i++)
    // {
    //     if (i == 2)
    //     {
    //         break;
    //     }
    //     cout << i << endl;
    // }

    // use of continue statement
    for (int i = 0; i < 11; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}