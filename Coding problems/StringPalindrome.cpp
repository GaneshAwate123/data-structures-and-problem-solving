#include <iostream>
using namespace std;

int main()
{
    string a;
    cout << "Enter a string :" << endl;
    cin >> a;
    string b = "";
    a.length();
    for (int i = a.length() - 1; i >= 0; i--)
    {
        b = b + a[i];
    }
    cout << "Reverse string :" << b << endl;

    if (a == b)
    {
        cout << "String is palindrome";
    }
    else
    {
        cout << "String is not palindrome";
    }
    return 0;
}