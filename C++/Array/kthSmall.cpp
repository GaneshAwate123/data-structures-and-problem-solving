#include<iostream>
using namespace std;

void KthSmall(int arr[],int size, int k){

    for(int i=0;i<size-1;i++)
    {

        int minindex=i;

        for(int j=i+1;j<size;j++){

            if(arr[j]<arr[minindex]){
                minindex = j;
            }

            if(minindex!=i){

                int temp= arr[minindex];
                arr[minindex]=arr[i];
                arr[i]=temp;
            }
        }

    }

    cout<<"Kth smallest element :"<<arr[k-1];


}

int main(){

    int n;
    cout<<"Enter the size of the array :"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    int k=2;

    KthSmall(arr,n,k);

    return 0;

}