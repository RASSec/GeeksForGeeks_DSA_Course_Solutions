#include <iostream>
using namespace std;
#define MAX 100000

int main() {
	int t, n, i;
	long arr[MAX];
    cin>>t;
	while(t--){
	    cin>>n;
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int rem = 0;
	    for(i=0;i<n;i++){
	        rem = rem ^ arr[i];
	    }
	    cout << rem << endl;
	}
	return 0;
}