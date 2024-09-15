#include<iostream>
using namespace std;

void printunion(int arr[],int arr1[],int l1,int l2){
    int i=0,j=0;

    while(i<l1 && j<l2){
        if(arr[i]<arr1[j])
            cout<<arr[i++]<<" ";


        else if(arr1[j]<arr[i])
            cout<<arr1[j++]<<" ";

        else{
            cout<<arr1[j++]<<" ";
            i++;
        }
        
    }

    while(i<l1){
        cout<<arr[i++]<<" ";
    }
    while(j<l2){
        cout<<arr1[j++]<<" ";
    }

}


int main(){

    int arr[] = {1,2,4,5,6 };
    int arr1[] = {2,3,5,7};

    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr1)/sizeof(arr1[0]);

    printunion(arr,arr1,m,n);

    return 0;
}