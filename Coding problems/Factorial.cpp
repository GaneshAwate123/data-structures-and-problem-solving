#include <iostream>
using namespace std;
int main()
{
    int num, fact = 1;
    cout << "Enter a number :";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "factorial of a number :" << fact << endl;

    return 0;
}