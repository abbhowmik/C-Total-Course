#include <iostream>
using namespace std;

class shop
{
private:
    int itemId[20];
    int itemPrice[20];
    int count;

public:
    void initialCount(void) { count = 0; }
    void setprice(void);
    void displayPrice(void);
    // void justPractice(void);
};

void shop::setprice(void)
{
    cout << "Enter Id of your item number " << count << endl;
    cin >> itemId[count];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[count];
    count++;
}
// void shop::justPractice(void)
// {
//     cout << count << endl;
// }

void shop::displayPrice(void)
{
    for (int i = 0; i < count; i++)
    {
        cout << "The Id of your item is " << itemId[i] << " and price is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop s; // here s is a object of shop class
    s.initialCount();
    s.setprice();
    // s.justPractice();
    s.setprice();
    // s.justPractice();
    s.setprice();
    // s.justPractice();
    s.displayPrice();

    return 0;
}