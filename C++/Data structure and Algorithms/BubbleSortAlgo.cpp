#include <iostream>
using namespace std;

void bubblesort(int arr[])
{
    int rounds=0;
    for (int i = 0; i < 5; i++)
    {
        rounds++;
        int flag = false;
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = true;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if(flag == false){
            break;
        }
    }
    cout<<"No.of rounds:"<<rounds<<endl;
}

int main()
{
    int myarr[5];
    cout << "Enter an integers in random way : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> myarr[i];
    }

    cout << "unsorted array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
    }
    cout << endl;

    bubblesort(myarr);

    cout << "sorted array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
    }

    return 0;
}