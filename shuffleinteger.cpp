#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while (t--)
	{
	    int n;
	    cin>>n;
	    int A[n];
	    for (int i=0;i<n;i++)
	    cin>>A[i];
	    for (int i=0;i<n/2;i++)
	    cout<<A[i]<<" "<<A[n/2+i]<<" ";
	    if (n%2!=0)
	    cout<<A[n-1];
	    cout<<endl;
	}
	return 0;
}