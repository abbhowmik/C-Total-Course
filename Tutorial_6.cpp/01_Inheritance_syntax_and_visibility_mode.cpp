#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee() {}     //default constractors
    Employee(int eid) // parameterized constracors
    {
        id = eid;
        salary = 50.0;
    }
};

// derived class syntax
/*
class {{derived_class_name}}:{{visibility_mode}} {{base_class_name}}      // {{}} means that it is replaced by something
{
    class members/methods/etc.....
};

NOTE::: 
        (1)-> default visibility mode is also private
        (2)-> Public visibility mode-> public members of the  base class becomes public members of the derived class
        (3)-> Private visibility mode-> public members of the base class becomes private members of the derived class
*/

class Programmer : public Employee //(inherited from base class)
{
public:
    int languageCode;
    Programmer(int pid)
    {
        id = pid;
        languageCode = 9;
    }
    void getData()
    {
        cout << "Id is " << id << endl;
    }
};
int main()
{
    Employee harry(4), ashis(5);
    cout << harry.id << endl;
    cout << harry.salary << endl;
    cout << ashis.salary << endl;
    cout << ashis.id << endl;
    Programmer p(45);
    cout << p.languageCode << endl;
    cout << p.id << endl;
    p.getData();

    return 0;
}
