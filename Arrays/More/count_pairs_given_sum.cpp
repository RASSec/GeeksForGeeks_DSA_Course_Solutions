#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
#define unsigned long long ll

int countPair(int arr[], int n, int sum);

int main(void)
{
	int t, n, sum, arr[MAX];
	cin >> t;
	while(t--){
	    cin >> n;
	    cin >> sum;
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	        
	    cout << countPair(arr, n, sum) << endl;
	}
	return 0;
}

int countPair(int arr[], int n, int sum){
    unordered_map <int, int> m;
    
    for(int i=0;i<n;i++)
        m[arr[i]]++;
        
    int count = 0;
        
    for(int i=0;i<n;i++){
        int diff = sum - arr[i];
        count = count + m[diff];
        
        if(diff == arr[i])
            count--;
    }
    
    return count/2;
}