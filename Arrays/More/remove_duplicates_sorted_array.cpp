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
    int res = 1;
    
    //res stores the count of unique elements in the array
    for(int i=1;i<n;i++){
        if(arr[i] != arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    
    return res;
}