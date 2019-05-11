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
void shellSort(int arr[],int n){
            for(int gap=n/2;gap>0;gap/=2){
                for(int i=gap;i<n;i++){
                        int temp =arr[i];
                        int j;
                    for(j=i;j>=gap&&arr[j-gap]>temp;j-=gap){
                        arr[j]=arr[j-gap];
                    }
                    arr[j]=temp;

                }
            }

}

int main()
{
    int arr[]={9,6,5,8,7,1,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted Array:"<<endl;
    printArray(arr,n);
    shellSort(arr,n);
    cout<<"\nSorted Array:"<<endl;
    printArray(arr,n);
    return 0;
}

