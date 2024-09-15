#include<iostream>
using namespace std;

int binarysearch(int arr[],int left,int right,int n){
    while(left<=right){
        int mid= left +(right-left)/2;

        if(arr[mid]==n){
            return mid;
        }
        else if(arr[mid]<n){
            left= mid + 1;
        }
        else{
            right=mid-1;
        }
    }

    return -1;
}

int main(){
    int num;
    int myarr[8];
    int output;
    cout<<"Enter the digits in ascending order :  "<<endl;
    for(int i=0;i<8;i++){
        cin>>myarr[i];
    }

    cout<<"Enter a number you want search : "<<endl;
    cin>>num;


    output=binarysearch(myarr,0,7,num);

    if(output==-1){
        cout<<"No match found."<<endl;
    }
    else{
        cout<<"Match found at location : "<<output<<endl;
    }

    return 0;
}