#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
#define unsigned long long ll

bool findPair(int arr[], int n, int sum);

int main(void)
{
	int t, n, sum, arr[MAX];
	cin >> t;
	while(t--){
	    cin >> n;
	    cin >> sum;
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	        
	    findPair(arr, n, sum)?cout<<"Yes":cout<<"No";
	    cout << endl;
	}
	return 0;
}

bool findPair(int arr[], int n, int sum){
    unordered_set <int> numbers;
    
    numbers.insert(arr[0]);
    for(int i=1;i<n;i++){
        int diff = sum - arr[i];
        if(numbers.find(diff) != numbers.end())
            return true;
        
        numbers.insert(arr[i]);
    }
    return false;
}