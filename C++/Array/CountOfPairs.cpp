#include<iostream>
using namespace std;

void countpairs(int arr[],int N,int sum){
    int count=0;

    for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                if(arr[i]+arr[j]==sum){
                    count++;
                }
            }
    }
    cout<<"Numaber of pairs : "<<count;
}

int main(){
    int arr[]={3, 7, -1, 3, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=6;

    countpairs(arr,n,sum);
    
}