#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string st = "Ashis bhai is now started coding carrer\n";
    // opening files using constructor and writting it
    ofstream out("this.txt");
    out << st;
    out << st;
    out << st;
    out << st;
    cout << st;

    // string st2;
    // // // opening files using constructor and reading it
    // ifstream in("this.txt");
    // in >> st2;
    // // getline(in, st2);
    // cout << st2;

    return 0;
}