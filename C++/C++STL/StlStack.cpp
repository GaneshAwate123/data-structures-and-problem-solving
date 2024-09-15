#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("kit");
    s.push("cat");
    s.push("bat");

    cout << "Top element :" << s.top() << endl;
    cout << "size element :" << s.size() << endl;
    cout << "empty or not :" << s.empty() << endl;

    return 0;
}