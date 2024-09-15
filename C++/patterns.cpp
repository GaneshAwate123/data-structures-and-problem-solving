#include <iostream>
using namespace std;

int main()
{

    // int n;
    // cin>>n;

    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j <= n - i)

    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }

    //  Half pyramid
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1;j<=i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n,count=1;
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << count << " ";
    //         count++;
    //     }
    //     cout << endl;
    // }

    // Butterfly pattern
    // int n;
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     int space = 2 * n - 2 * i;
    //     for (int j = 1; j <=space; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     int space = 2 * n - 2 * i;
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout <<" ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // To check prime
    // int n,i;
    // cin >> n;

    // for ( i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "Number is not prime";
    //         break;
    //     }
    // }
    // if (i == n)
    // {
    //     cout << "NUmber is prime" << endl;
    // }

    // prime between two numbers
    int a, b;
    cin >> a >> b;

    for (int num = a; num <= b; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << num << endl;
        }
    }

    return 0;
}
