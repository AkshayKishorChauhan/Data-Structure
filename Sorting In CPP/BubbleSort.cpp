//BubbleSort
#include <iostream>

using namespace std;


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void swap(int *x,int *y){
    int temp =*x;
    *x=*y;
    *y=temp;
}
void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int myEle=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            swap(&arr[i],&arr[j]);
            }

        }
    }


}

int main()
{
    int arr[]={9,6,5,8,7,1,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted Array:"<<endl;
    printArray(arr,n);
    bubbleSort(arr,n);
    cout<<"\nSorted Array:"<<endl;
    printArray(arr,n);

    return 0;
}

