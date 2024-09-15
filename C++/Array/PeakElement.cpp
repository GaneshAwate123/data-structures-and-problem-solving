#include<bits/stdc++.h>
using namespace std;

void peakEle(int arr[],int size){

    if(arr[0]>=arr[1]){
        cout<<"Wrong condition"<<endl;
    }
    // for(int i=1;i<size-1;i++){

    //     if(arr[i] >= arr[i-1] && arr[i] >= [i+1]){
    //         cout<<arr[i];
    //         break;
              
    //     }
    // }
    for (int i = 1; i < size- 1; i++) {
 
        // check if the neighbors are smaller
          if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]){
              cout<<"Peak element in the array is "<<arr[i]<<endl;
              break;
              }
        }


}

int main(){
    int n;
    cin>>n;
    int arr[n];

    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // cout<<endl;

    peakEle(arr,n);


    return 0;
}