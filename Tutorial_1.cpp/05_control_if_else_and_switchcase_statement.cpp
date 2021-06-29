#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age : " << endl; // this 'end' is called manupulator and it creat a new line
    cin >> age;
    // if (age < 18)
    // {
    //     cout << "You are a teenager, so you can not participate in the party ";
    // }
    // else
    // {
    //     cout << "You can Join the party";
    // }
    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;
    case 10:
        cout << "You are 10" << endl;
        break;
    default:
        cout << "No special cases" << endl;
        break;
    }
    cout << "Thanks for using our code!" << endl;
    return 0;
}
