#include <iostream>
using namespace std;

int RecursivePower(int n,int p);

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n,p;
	    cin>>n>>p;
	    cout<<RecursivePower(n,p)<<endl;
	}
	return 0;
}

int RecursivePower(int n,int p)
{
    if(p == 0)
        return 1;
    else
        return n * RecursivePower(n, p-1);
}