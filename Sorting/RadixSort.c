#include <stdio.h>
#include <stdlib.h>


int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

void countSort(int arr[], int n, int exp)
{
    int output[n];
    int i, count[10] = {0};


    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;


    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];


    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }


    for (i = 0; i < n; i++)
        arr[i] = output[i];
}


void radixSort(int arr[], int n)
{
    int m = getMax(arr, n);


    for (int exp = 1; m/exp > 0; exp *= 10)
        countSort(arr, n, exp);
}


void printArray(int arr[],int size){
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}
}

int main()
{
    int arr[]={4,5,6,7,8,9,4,1,2,5,3,6,9,8,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    radixSort(arr,n);
    printf("\n\nSorted Array:\n");
    printArray(arr,n);
    printf("\n\n");
    return 0;
}
