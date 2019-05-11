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
void insertionSort(int arr[],int n){
        int i,j,key;
        for(i=0;i<n;i++){
            key=arr[i];
            j=i-1;
            while(j>=0&&arr[j]>key){
                arr[j+1]=arr[j];
                j-=1;
            }
            arr[j+1]=key;
        }

}

int main()
{
    int arr[]={9,6,5,8,7,1,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted Array:"<<endl;
    printArray(arr,n);
    insertionSort(arr,n);
    cout<<"\nSorted Array:"<<endl;
    printArray(arr,n);
    return 0;
}

