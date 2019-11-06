#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
#define unsigned long long ll

bool checkAnagram(string a, string b);

int main(void)
{
	int t, n;
	string a, b;
	
	cin >> t;
	while(t--){
	    cin >> a;
	    cin >> b;
	    cout << (checkAnagram(a, b)?"YES":"NO") << endl;
	}
	return 0;
}

bool checkAnagram(string a, string b){
    int len1 = a.length();
    int len2 = b.length();
    int count[len1];
    
    memset(count, 0, sizeof(count));
    
    if(len1 != len2)
        return false;
        
    for(int i=0;i<len1;i++){
        count[a[i]]++;
    }
    
    for(int i=0;i<len1;i++){
        count[b[i]]--;
    }
    
    for(int i=0;i<len1;i++){
        if(count[i] > 0){
            return false;
        }
    }
    
    return true;
        
}