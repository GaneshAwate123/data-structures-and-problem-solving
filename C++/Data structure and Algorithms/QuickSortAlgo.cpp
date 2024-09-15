#include<iostream>
using namespace std;

int Partition(int arr[],int s,int e){
    int pivot = arr[e];
    int pIndex = s;

    for(int i=s;i<e;i++){
        if(arr[i]<pivot){
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex]=temp; 
            pIndex++;
        }
    }
    int temp = arr[e];
    arr[e] = arr[pIndex];
    arr[pIndex] = temp;

    return pIndex;
}

void Quicksort(int arr[],int s,int e){
    if(s<e){
        int p = Partition(arr,s,e);
        Quicksort(arr,s,(p-1));
        Quicksort(arr,(p+1),e);
    }
}

int main(){
    int n=0;
    cout<<"Enter array size : ";
    cin>>n;

    int myarr[n];
    cout<<"Enter "<<n<<" elements in the array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>myarr[i];
    }

    cout<<"Before quick sort : "<<endl;
    for(int i=0;i<n;i++){
        cout<<myarr[i]<<" ";
    }
    cout<<endl;

    Quicksort(myarr,0,(n-1));

    cout<<"After quick sort : "<<endl;
    for(int i=0;i<n;i++){
        cout<<myarr[i]<<" ";
    }



    return 0;
}