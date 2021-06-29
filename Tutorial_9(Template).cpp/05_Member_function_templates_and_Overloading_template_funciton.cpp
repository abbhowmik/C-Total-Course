#include <iostream>
using namespace std;
template <class t>

class Ashis
{
public:
    t data;
    Ashis(t a)
    {
        data = a;
    }
    void display();
};

template <class t>
void Ashis<t>::display(void) // it is the example of template of member function
{
    cout << "The value of data is: " << data << endl;
}

void func1(int a)
{
    cout << "I am first fucn(): " << a << endl;
}

template <class t>
void func2(t a)
{
    cout << "I am templetized fucn(): " << a << endl;
}

int main()
{

    // Ashis<float> a(3.5);
    Ashis<char> a('c');
    cout << a.data << endl;
    a.display();

    func1(45); // exact match takes the highest priority
    func2(45.3434213);

    return 0;
}