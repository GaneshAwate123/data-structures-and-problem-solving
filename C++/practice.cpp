#include <iostream>

using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int flag = 0;

    // for (int i = 2; i < n / 2; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "Number is not prime" << endl;
    //         flag = 1;
    //         break;
    //     }
    // }
    // if (flag == 0)
    // {
    //     cout << "Number is prime" << endl;
    // }

    // int n, reverse = 0;
    // cin >> n;

    // while (n > 0)
    // {
    //     int lastdigit = n % 10;
    //     reverse = reverse * 10 + lastdigit;
    //     n = n / 10;
    // }
    // cout << reverse;

    int n, sum = 0;
    cin >> n;
    int originaln = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum = sum + lastdigit * lastdigit * lastdigit;
        n = n / 10;
    }
    if (sum == originaln)
    {
        cout << "numebr is armstrong number";
    }
    else
    {
        cout << "numebr is not armstrong number";
    }

    return 0;
}
