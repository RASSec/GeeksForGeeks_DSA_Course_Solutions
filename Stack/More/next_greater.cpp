/**
 * Code snippet of a solution that prints in indiscriminate order
 * 
 * stack<long long int> s;
	    
	    s.push(arr[0]);
	    
	    for(int i=1;i<n;i++){
	        if(s.empty()){
	            s.push(arr[i]);
	            continue;
	        }
	        
	        while(!s.empty() && arr[i] > s.top()){
	            cout << arr[i] << " ";
	            s.pop();
	        }
	        
	        s.push(arr[i]);
	    }
	    
	    while(!s.empty()){
	        cout << "-1";
	        s.pop();
	    }
**/



#include<bits/stdc++.h>
using namespace std;
#define MAX 100000


int main(void)
{
    int t;
	long long int n, arr[MAX];
	cin >> t;
	while(t--){
	    cin >> n;
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	    
	    stack<long long int> s;
	    
	    long long int temp[n];
	    
	    for(int i=n-1;i>=0;i--){
	        while(!s.empty() && arr[i] > s.top()){
	            s.pop();
	        }
	        
	        if(s.empty()){
	            temp[i] = -1;
	        }else{
	            temp[i] = s.top();
	        }
	        
	        s.push(arr[i]);
	    }
	    
	    for(int i=0;i<n;i++){
	        cout << temp[i] << " ";
	    }
	    
	    cout << endl;
	}
	return 0;
}