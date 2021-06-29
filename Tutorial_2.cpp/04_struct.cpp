// #include <iostream>
// using namespace std;

// struct employee // basically structure used for storing various types of data types like int ,char, float etc.
// {
//     int eid;
//     char fav_character;
//     float salary;
// };

// int main()
// {
//     struct employee harry;
//     harry.eid = 56;
//     harry.fav_character = 'a';
//     harry.salary = 500000;
//     cout << harry.salary << endl;
//     cout << harry.eid << endl;
//     cout << harry.fav_character << endl;
//     return 0;
// }

// using typedef
#include <iostream>
using namespace std;

typedef struct employee // use of typedef
{
    int eid;
    char fav_character;
    float salary;
} ep;

int main()
{
    ep harry;
    harry.eid = 56;
    harry.fav_character = 'a';
    harry.salary = 500000;
    cout << harry.salary << endl;
    cout << harry.eid << endl;
    cout << harry.fav_character << endl;

    return 0;
}
