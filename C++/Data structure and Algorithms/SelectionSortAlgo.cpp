#include <iostream>
using namespace std;

void selectionsort(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        int min = i;

        for (int j = i + 1; j < 5; j++)

        {
            if (arr[j] < arr[i])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

int main()
{
    // int n;
    // cin >> n;

    int myarr[5];
    cout << "Enter integers in random order : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> myarr[i];
    }
    cout << "Unsorted array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
    }
    cout << endl;

    selectionsort(myarr);

    cout << "Sorted array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
    }

    return 0;
}