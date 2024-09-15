#include<bits/stdc++.h>
using namespace std;

void minmaxarr(int arr[],int size){

    int min=arr[0];
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Min :"<<min<<endl;
    cout<<"Max :"<<max<<endl;

}

int main(){
    int n;
    cin>>n;

    int arr[n];

    cout<<"Enter the elements in the array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     
    cout<<"Elements in the array are :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    } 
    minmaxarr(arr,n);

    return 0;
}