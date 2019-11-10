#include<bits/stdc++.h>
using namespace std;

long binarySubstring(int n, string a);

int main()
{
    int t,n,count;
    string a;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin >> n;
        cin >> a;
        
        cout << binarySubstring(n, a) << endl;
    }
}


long binarySubstring(int n, string a){
    int ones = 0;
    
    for(int i=0;i<n;i++){
        if(a[i] == '1')
            ones++;
    }
    
    return ones * (ones-1) / 2;
}