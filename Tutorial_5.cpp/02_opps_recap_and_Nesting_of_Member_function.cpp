#include <iostream>
using namespace std;

class Check_binary_number
{
    // private:
    // void chk_bin(void); // if we decleare here, so we can't call this inside main function
    string s;

public:
    void read(void);
    void chk_bin(void);
    void convert(void);
    void display();
};

void Check_binary_number::read(void)
{
    cout << "Enter a number:" << endl;
    cin >> s;
}

void Check_binary_number::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1') // it checks the each element of a string
        {
            cout << "Your entered number is not a binary number" << endl;
            exit(0);
        }
    }
}

void Check_binary_number::convert(void)
{
    // chk_bin(); // we can decleare it here if we were not decleare this in main function
    // and so, it is called nested member function,it does not need any object
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void Check_binary_number::display()
{
    // chk_bin(); // we can decleare it here if we were not decleare this in main function
    cout << "Displaying your converted number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    Check_binary_number b;
    b.read();
    b.chk_bin();
    b.convert();
    b.display();
    return 0;
}