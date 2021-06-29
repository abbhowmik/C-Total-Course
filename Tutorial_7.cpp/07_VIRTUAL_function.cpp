#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 4;
    virtual void display(void) // if we put virtual then derived class's display is executed
    {
        cout << "1: Displaying Base class's variable var_base = " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 5;
    void display(void)
    {
        cout << "1: Displaying Base class's variable var_base " << var_base << endl;
        cout << "2: Displaying Derived class's variable var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}
