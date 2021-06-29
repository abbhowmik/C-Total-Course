// #include <iostream>
// using namespace std;

// class employee
// {
// private:
//     int id;
//     static int count; // means count executed for all the functions as count++..... It is now a class variable and it is now a class's property

// public:
//     void getdata(void)
//     {
//         cout << "Enter employee's Id number" << endl;
//         cin >> id;
//         count++;
//     }
//     void setdata(void)
//     {
//         cout << "The Id of the employee is " << id << " and count is " << count << endl;
//     }
// };

// int employee::count; // its defautlt value is 0... if we give a value (int employee::count = 100), then it returns with 100 and count
// // :: is called scop resolution(scope --> the region where the functions or variable exists)

// int main()
// {
//     employee ashis, arjun, sourav;

//     ashis.getdata();
//     ashis.setdata();

//     arjun.getdata();
//     arjun.setdata();

//     sourav.getdata();
//     sourav.setdata();

//     return 0;
// }

// use of static functions
#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    static int count;

public:
    void getdata(void)
    {
        cout << "Enter employee's Id number" << endl;
        cin >> id;
        count++;
    }
    void setdata(void)
    {
        cout << "The Id of the employee is " << id << " and count is " << count << endl;
    }
    static void getcount(void) // it is called static method and it is called static function that store just static variable's value
    {
        // cout << id << endl; // can't decleare here .
        cout << "count is " << count << endl;
    }
};

int employee::count;
int main()
{
    employee ashis, arjun, sourav;

    ashis.getdata();
    ashis.setdata();
    employee::getcount();

    arjun.getdata();
    arjun.setdata();
    employee::getcount();

    sourav.getdata();
    sourav.setdata();
    employee::getcount();

    return 0;
}