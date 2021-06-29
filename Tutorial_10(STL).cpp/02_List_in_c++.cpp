#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator iter;
    // iter = lst.begin();
    for (iter = lst.begin(); iter != lst.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{

    list<int> list1; // list of 0 length
    list1.push_back(67);
    list1.push_back(234);
    list1.push_back(32);
    list1.push_back(89);
    list1.push_back(7);
    display(list1);

    // removing element form the list
    // list1.pop_back(); // it delete an element from the back of the list
    // list1.pop_back();
    // list1.pop_front(); // it delete an element from the front
    // list1.remove(32);  // it remove the element from the list

    // sorting the list
    // list1.sort();
    // display(list1);

    // reversing the list
    // list1.reverse();
    // display(list1);

    // lets write iterator(iterator is a one type of pointer that points the begin element of the list)
    // this is the syntax of writing iterator
    // list<int>::iterator iter;
    // iter = list1.begin();
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // instead of writing this we are now write a display function
    // display(list1);

    list<int> list2(3); // Empty list of size 4
    list<int>::iterator it;
    it = list2.begin();
    *it = 34;
    it++;
    *it = 6;
    it++;
    *it = 4;
    it++;
    display(list2);
    // list1.sort();
    // list2.sort();
    list1.merge(list2);
    cout << "After merging: ";
    display(list1);
    // list2.merge(list1);
    // cout << "After merging: ";
    // display(list2);

    return 0;
}