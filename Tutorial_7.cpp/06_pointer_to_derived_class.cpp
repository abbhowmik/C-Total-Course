#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    // BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    // base_class_pointer = &obj_derived;

    // base_class_pointer->var_base = 45;
    // base_class_pointer->var_derived = 45;
    // this will throws an error as it points to the base class
    // base_class_pointer->display();

    DerivedClass *derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 456;
    derived_class_pointer->var_derived = 676;
    derived_class_pointer->display();

    return 0;
}