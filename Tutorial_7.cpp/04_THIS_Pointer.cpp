#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    void getData(void)
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{

    A a;
    a.setData(4);
    a.getData();
    // if the name of member functions argument is as same of the private member of the class,
    // then we have to require this-> keyword
    return 0;
}