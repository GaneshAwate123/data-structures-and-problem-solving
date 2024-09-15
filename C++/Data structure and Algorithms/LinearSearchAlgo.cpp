#include<iostream>
using namespace std;

void Linearsearch(int a[],int n){
    int temp=-1;
    for(int i=0;i<5;i++){
        if(a[i]==n){
            cout<<"Match found at location : "<<i<<endl;
            temp = 0;
        }
    }
    if(temp==-1){
        cout<<"No match found."<<endl;
    }
        
}


int main(){
    int arr[5]= {15,25,65,54,34};
    for(int i=0;i<5;i++){
        cout<< arr[i] <<endl;
    }
    cout<<"Enter the number that you want :"<<endl;
    int num;
    cin>>num;

    Linearsearch(arr,num);


    return 0;
}