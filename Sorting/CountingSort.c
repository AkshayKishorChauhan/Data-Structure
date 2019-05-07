#include <stdio.h>
#include <stdlib.h>

void swap(int *xp,int *yp){
int temp= *xp;
*xp=*yp;
*yp=temp;
}

void countingSort(int A[],int N,int B[],int K){
int i,j,c[K];
for(i=0;i<K;i++){
    c[i]=0;
}
for(j=0;j<N;j++){
    c[A[j]]=c[A[j]]+1;
}
for(i=1;i<K;i++){
    c[i]=c[i]+c[i-1];
}
for(j=N-1;j>=0;j--){
    B[c[A[j]]-1]=A[j];
    c[A[j]]=c[A[j]]-1;
}


}

void printArray(int arr[],int size){
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}
}

int main()
{
    int arr[]={4,5,6,7,8,9,4,1,2,5,3,6,9,8,7};
    int b[15];
    int k=10;
    int n=15;
    printArray(arr,n);
    countingSort(arr,n,b,k);
    printf("\n\nSorted Array:\n");
    printArray(b,n);
    printf("\n\n");
    return 0;
}
