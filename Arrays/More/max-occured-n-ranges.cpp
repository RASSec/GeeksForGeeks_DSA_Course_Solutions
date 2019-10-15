#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000

int maxOccuredElement(int L[], int R[], int n);

int arr[MAX]; //declare this large array global otherwise you may get segmentation fault

int main(){
    int n, t, i, L[MAX], R[MAX];

    cin >> t;

    while(t--){
        cin >> n;
        for(i=0;i<n;i++){
            cin >> L[i];
        }

        for(i=0;i<n;i++){
            cin >> R[i];
        }

        cout << maxOccuredElement(L, R, n) << endl;
    }   
}

int maxOccuredElement(int L[], int R[], int n){
    memset(arr, 0, sizeof(arr)); 

    int maxR=-1;
    for(int i=0;i<n;i++) {
        arr[L[i]] += 1;
        arr[R[i]+1] -= 1;
        if(R[i]>maxR){
            maxR = R[i];
        }
    }

    //calculate prefix sum
    int minSum = arr[0], index;
    
    for(int i=1;i<=maxR;i++){
        arr[i] = arr[i-1] + arr[i];

        if(minSum < arr[i]) {
            minSum = arr[i];
            index = i;
        }
    }
    return index;
}