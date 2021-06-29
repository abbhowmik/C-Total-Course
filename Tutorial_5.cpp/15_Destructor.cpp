// when object is created, then we creat constractor, when object was not needed, then destractor was call
#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count = 0; //global variable
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }

    ~num() // this is the syntax of destractor
    {
        cout << "This is the time when my destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    { // this is a scope , after executing this the destructor will be called automatically and this memory will destruct(free)
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}
