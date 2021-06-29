#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int r);
    void get_roll_number();
};

void Student::set_roll_number(int r)
{
    roll_number = r;
}

void Student::get_roll_number(void)
{
    cout << "The roll Number of the student is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float, float);
    void get_marks();
};
void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam::get_marks(void)
{
    cout << "Maths marks is " << maths << endl;
    cout << "Pysics marks is " << physics << endl;
}

class result : public Exam
{
protected:
    float percentage;

public:
    void display_result(void)
    {
        // get_roll_number();
        // get_marks();
        cout << "Your got " << (maths + physics) / 2 << "%"
             << " in the exam" << endl;
    }
};
int main()
{
    // let's write driver programme
    result ashis;
    ashis.set_roll_number(4);
    ashis.set_marks(91.3, 56.4);
    ashis.get_roll_number(); // we can write this function inside display_result function
    ashis.get_marks();
    ashis.display_result();

    return 0;
}