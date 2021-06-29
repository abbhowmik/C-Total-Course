#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " "; // we can use one of them
    }
    cout << endl;
}

int main()
{
    // ways to creat a vector
    vector<int> vec1; // zero length vector
    // display(vec1);

    vector<char> vec2(4); // four length vector
    vec2.push_back('5');
    // vec2.push_back('c');
    // display(vec2);

    // vector<char> vec3(vec2);
    vector<char> vec3(8, 'd');
    // display(vec3);

    vector<int> vec4(6, 3); // 3 executed 6 times
    // display(vec4);
    // cout << vec4.size();

    int element, size = 4;
    // cout << "Enter the size of your vector" << endl;
    // cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    // vec1.pop_back();

    display(vec1);

    vector<int>::iterator iter = vec1.begin();
    // // or vector<int>::iterator iter;
    // // iter = vec1.begin();

    vec1.insert(iter + 1, 5, 23);
    display(vec1);

    return 0;
}