#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no, exam_no;

public:
    void set_number(int a, int b)
    {
        roll_no = a;
        exam_no = b;
    }
    void print_number(void)
    {
        cout << "Your roll number is " << roll_no << endl;
        cout << "Your exam number is " << exam_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your result is here: " << endl;
        cout << "Maths: " << maths << endl;
        cout << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student // this is virtual class
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your score is " << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Total number is " << total << endl;
    }
};
int main()
{
    Result r;
    r.set_number(4566, 56);
    r.set_marks(45.6, 67.8);
    r.set_score(56);
    // r.print_number();
    // r.print_marks();
    // r.print_score();
    r.display();

    return 0;
}