#include <iostream>
using namespace std;

int main()
{
    int n, flag = 0;
    cout << "Enter a number to check prime" << endl;
    cin >> n;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << "number is not prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "number is not prime" << endl;
    }

    return 0;
}