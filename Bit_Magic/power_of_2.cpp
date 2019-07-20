#include<bits/stdc++.h>
using namespace std;

bool isPowerofTwo(long long n);

int main()
{
    int t;
    cin>>t;//testcases
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n<=0) // if n is less than equal to zero then it can't be a power of 2
        {
            cout<<"NO"<<endl; //so we print No
            continue; //continue and check for other values
        }
         if(isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
    }
    return 0;
}

bool isPowerofTwo(long long n){
    // n must not be zero
    // subtraction of 1 from a number toggles all the bits (from right to left) till the rightmost set bit(including the rightmost set bit).
    return (n && !(n & (n - 1)));
}