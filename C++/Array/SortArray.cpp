#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){

    for(int i=0;i<n-1;i++){

        int min_ind = i;

        for(int j=i+1; j<n; j++){

            if(arr[j]<arr[min_ind]){

                min_ind=j;
            }
            
        }
        if(min_ind!=i){
            int temp=arr[min_ind];
            arr[min_ind]=arr[i];
            arr[i]=temp;
                
        }    
        
    }

}

int main(){

    int n;
    cin>>n;

    int arr[n];

    cout<<"Enter the elements in the array: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i] ;

    }

    selectionsort(arr,n);
    cout<<"sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}