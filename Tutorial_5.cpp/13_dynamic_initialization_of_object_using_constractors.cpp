// dynamically, means(run time(when programme runs) execution of programme)
//  bank managment using costractors
#include <iostream>
using namespace std;

class Bank
{
    int principle;
    int years;
    float rate;
    float returnvalue;

public:
    Bank() {}
    Bank(int p, int y, float r);
    Bank(int p, int y, int r);
    void showDetails();
};

Bank::Bank(int p, int y, float r)
{
    principle = p;
    years = y;
    rate = r;
    returnvalue = principle;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}
Bank::Bank(int p, int y, int r)
{
    principle = p;
    years = y;
    rate = float(r) / 100;
    returnvalue = principle;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}

void Bank::showDetails()
{
    cout << "Principle amount was " << principle << ", Return money after " << years << " Years is " << returnvalue << endl;
}
int main()
{
    Bank b1, b2, b3;
    int p, y;
    int R;
    float r;
    cout << "Enter the principle, years and interest rate respectively" << endl;
    cin >> p >> y >> r;
    b1 = Bank(p, y, r);
    b1.showDetails();

    cout << "Enter the principle, years and interest rate respectively" << endl;
    cin >> p >> y >> R;
    b2 = Bank(p, y, R);
    b2.showDetails();
    return 0;
}
