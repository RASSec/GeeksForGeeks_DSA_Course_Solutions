#include <bits/stdc++.h>
using namespace std;
int countNonRepeated(int arr[], int n);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<countNonRepeated(arr,n)<<endl;
	    
	}
	return 0;
}


int countNonRepeated(int arr[], int n)
{
    unordered_map<int, int> m;
    int count = 0;
    
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    
    for(int i=0;i<n;i++){
        if(m[arr[i]] == 1)
            count++;
    }
    
    return count;
}