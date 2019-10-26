#include <iostream>
using namespace std;

void binSort(int A[], int N);

int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}


void binSort(int A[], int N)
{
    int ones = 0;
    
    for(int i=0;i<N;i++)
        if(A[i] == 1)
            ones++;
            
    int zeros = N - ones;
            
    for(int i=0;i<N;i++){
        if(zeros-- > 0){
            A[i] = 0;
        }else{
            A[i] = 1;
        }
    }
}