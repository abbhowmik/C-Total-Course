#include <iostream>
using namespace std;
template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b) // this is multiparameter template
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << data1 << endl
             << data2 << endl;
    }
};

int main()
{
    myClass<char, int> obj('a', 454);
    obj.display();

    return 0;
}