#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[],int size,int x){

    int count=0;

    for(int i=0;i<size;i++){
        if(arr[i]==x){
            count++;
        }
    }
    cout<<"Frequency of element "<<x<<" is "<<count<<endl;
    
}

int main(){

    int n,x;
    cin>>n;

    cout<<"Enter the elements in the array : "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Elements in the array are : "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }

    cout<<"Enter the element of which we want frequency: "<<endl;
    cin>>x;
    frequency(arr,n,x);


    return 0;
}