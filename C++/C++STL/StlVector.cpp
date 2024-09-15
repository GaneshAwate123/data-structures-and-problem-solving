#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    cout << "capacity :" << v.capacity() << endl;
    v.push_back(1);
    cout << "capacity :" << v.capacity() << endl;
    v.push_back(3);
    cout << "capacity :" << v.capacity() << endl;
    v.push_back(10);
    cout << "capacity :" << v.capacity() << endl;
    cout << "size :" << v.size() << endl;

    cout << "element at 2:" << v.at(2) << endl;
    cout << "front :" << v.front() << endl;
    cout << "BAck:" << v.back() << endl;

    cout << "Before POP" << endl;
    for (int i : v)
    {
        cout << i << endl;
    }
    cout << endl;

    v.pop_back();
    cout << "After POP :" << endl;
    for (int i : v)
    {
        cout << i << endl;
    }
    cout << endl;

    return 0;
}