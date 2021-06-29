#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // creating files and write
    string name;
    ofstream out("sample.txt");
    cout << "Enter your name" << endl;
    cin >> name;

    out << name + " is My name";
    out.close();

    string content;
    ifstream in("sample.txt");
    in >> content;
    // getline(in, content);
    cout << "The content of this file is: " << content << endl;
    in.close();
    return 0;
}