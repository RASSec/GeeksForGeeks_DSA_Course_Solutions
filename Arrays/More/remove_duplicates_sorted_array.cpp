#include<bits/stdc++.h>
using namespace std;
/*You are required to complete this function */
int remove_duplicate(int [],int );
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    int n = remove_duplicate(a,sizeof(a)/sizeof(a[0]));
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}

int remove_duplicate(int arr[],int n)
{
    int j=0;
    
    //we need to compare the last element with the 
    //second last element, so we traverse upto n-2
    for(int i=0;i<n-1;i++){ 
        if(arr[i] != arr[i+1]){
            arr[j++] = arr[i];
        }
    }
    
    arr[j++] = arr[n-1];
    return j;
}