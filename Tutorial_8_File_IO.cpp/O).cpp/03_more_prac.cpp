#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    ofstream out;
    out.open("New.txt");
    out << "This is me\n";
    out << "This is asme\n";
    out << "This is dsafme";
    out.close();

    string st;
    ifstream context;
    context.open("New.txt");
    // getline(context, st);
    // context >> st;
    // cout << st << endl;

    while (context.eof() == 0)
    {
        getline(context, st);
        cout << st << endl;
    }

    // context.close();

    return 0;
};
