#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r);

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k, n1=m-l+1, n2=r-m;
    int left[n1], right[n2];
    
    //copy the elements from the original array and create two arrays
    for(i=0;i<n1;i++){
        left[i] = arr[l+i];
    }
    for(i=0;i<n2;i++){
        right[i] = arr[(m+1)+i];
    }
    
    i=0, j=0, k=l;
    
    while(i<n1 && j<n2){
        if(left[i] >= right[j]){
            arr[k++] = right[j++];
        }else{
            arr[k++] = left[i++];
        }
    }
    
    //copy the remaining elements
    while(i<n1){
        arr[k++] = left[i++];
    }
    
    while(j<n2){
        arr[k++] = right[j++];
    }
}