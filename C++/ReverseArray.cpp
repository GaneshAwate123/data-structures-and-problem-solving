#include <iostream>
using namespace std;

void reversearray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int arr[4];
    int i;
    int n = sizeof(arr) / sizeof(arr[i]);
    cout << "Enter the elements in the array" << endl;
    for (i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    cout << "Before:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reversearray(arr, 0, n - 1);

    cout << "after:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}