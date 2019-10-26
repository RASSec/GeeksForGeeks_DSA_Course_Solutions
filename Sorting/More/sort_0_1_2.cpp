#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
#define unsigned long long ll

void sortArray(int arr[], int n);

int main(void)
{
	int t, n, arr[MAX];
	cin >> t;
	while(t--){
	    cin >> n;
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    sortArray(arr, n);
	}
	return 0;
}

void sortArray(int arr[], int n){
    int ones, twos;
    ones = twos = 0;
    
    for(int i=0;i<n;i++){
        if(arr[i] == 1)
            ones++;
        else if(arr[i] == 2)
            twos++;
    }
    
    int zeros = n - (ones+twos);
    
    for(int i=1;i<=n;i++){
        if(zeros-- > 0)
            cout << 0 << " ";
        else if(ones-- > 0)
            cout << 1 << " ";
        else
            cout << 2 << " ";
    }
    cout << endl;
}