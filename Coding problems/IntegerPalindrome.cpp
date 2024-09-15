#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0, r = 0;
    cout << "Enter a number :" << endl;
    cin >> n;
    int temp = n;
    while (n > 0)
    {
        r = n % 10;
        rev = (rev * 10) + r;
        n = n / 10;
    }
    cout << "Reverse number :" << rev << endl;

    if (temp == rev)
    {
        cout << "Number is palindrome" << endl;
    }
    else
    {
        cout << "Number is not palindrome" << endl;
    }

    return 0;
}