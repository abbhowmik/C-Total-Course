#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> markMap;
    markMap["Ashis"] = 90;
    markMap["Sourav"] = 45;
    markMap["Azjun"] = 56;
    markMap.insert({{"Provat", 67}, {"Subham", 78}}); // thus we insert

    map<string, int>::iterator itr;
    for (itr = markMap.begin(); itr != markMap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl; // here first is the key(ahsis) and second is the value(his marks 90)
    }
    cout << "The size is: " << markMap.size() << endl;
    cout << "The max_size is: " << markMap.max_size() << endl;
    cout << "The empty's return value is: " << markMap.empty() << endl;

    return 0;
}