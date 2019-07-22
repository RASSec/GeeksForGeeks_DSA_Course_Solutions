#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
#define ll unsigned long long

ll reverse(ll n);
long modPow(ll n, ll r);

int main(void)
{
	int t;
	ll n, r;
	cin >> t;
	while(t--){
	    cin >> n;
	    r = reverse(n);
	    cout << modPow(n, r) << endl;
	}
	return 0;
}

ll reverse(ll n){
    ll r = 0;
    int temp;
    while(n > 0){
        temp = n % 10;
        r = temp + (r * 10);
        n = n / 10;
    }
    return r;
}

long modPow(ll n, ll r){
    int result = 1;
    
    n = n % m;
    
    while(r > 0){
        if(r & 1){
            result = (n * result) % m;
        }
        
        r = r >> 1;
        n = (n * n) % m;
    }
    
    return result;
}