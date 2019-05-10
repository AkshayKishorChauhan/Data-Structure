#include <stdio.h>
#include <stdlib.h>
void bucketSort(int array[], int n)
{
    int i, j;
    int count[n];
    for (i = 0; i < n; i++)
        count[i] = 0;

    for (i = 0; i < n; i++)
        (count[array[i]])++;

    for (i = 0, j = 0; i < n; i++)
        for(; count[i] > 0; (count[i])--)
            array[j++] = i;
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
    bucketSort(arr,n);
    printf("\n\nSorted Array:\n");
    printArray(arr,n);
    printf("\n\n");
    return 0;
}
