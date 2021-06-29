#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Id is: " << id << endl;
        cout << "price is: " << price << endl;
    }
};

int main()
{

    int size;
    cout << "Enter how many item will you purchase" << endl;
    cin >> size;
    shop *ptr = new shop[size]; // it is the example of array of object
    shop *ptrTemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Id and price of No. " << i + 1 << " item respectively " << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    cout << "*******Here the Details" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "For Item No = " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}