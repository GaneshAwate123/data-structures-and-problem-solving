#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cin >> n;

    bool flag = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Non-prime";
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "prime" << endl;
    }

    // Reverse number
    // int n;
    // cin>>n;

    // int reverse=0;
    // while (n>0){
    //     int lastdigit = n%10;
    //     reverse = reverse*10+ lastdigit;
    //     n=n/10;
    // }

    // cout<<reverse<<endl;

    // int n, sum = 0;
    // cin >> n;

    // int originaln = n;
    // while (n > 0)
    // {
    //     int lastdigit = n % 10;
    //     
    //     sum = sum + lastdigit * lastdigit * lastdigit;
    //     n = n / 10;
    // }
    // if (sum == originaln)
    // {
    //     cout << "Armstrong number" << endl;
    // }
    // else
    // {
    //     cout << "number is not Armstrong" << endl;
    // }

    return 0;
}
