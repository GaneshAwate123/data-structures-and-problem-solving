#include<iostream>
using namespace std;

void missingElement(int arr[],int N){

    int temp[N+1];
    for(int i=0;i<=N;i++){
        temp[i]=0;
    }

    for(int i=0;i<N; i++){
        temp[arr[i]-1]=1;
    }

    int ans ;
    for(int i=0;i<=N; i++){
        if(temp[i]==0){
            ans=i+1;
        }
    }
    cout<<"Missing element : ";
    cout<<ans;

}

int main(){
    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements in the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    missingElement(arr,n);


}