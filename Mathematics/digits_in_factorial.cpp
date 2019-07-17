#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int digitsInFactorial(int N);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
//User function Template for C++
//You need to complete this function
int digitsInFactorial(int N)
{
    double digits = 0;
    if(N<=1)
        return N;
        
    for(int i=2;i<=N;i++){
        digits += log10(i);
    }
    return floor(digits) + 1;
}