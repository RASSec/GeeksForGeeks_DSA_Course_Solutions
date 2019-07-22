#include <iostream>
using namespace std;

int countDigits(int n)
{
    if(n == 0)
        return 0;
    else
        return (1 + countDigits(n / 10));
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    cout<<countDigits(n)<<endl;
	}
	return 0;
}