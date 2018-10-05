#include<iostream>
using namespace std;
int path(int m, int n)
{
    if(m==1 || n==1)
    return 1;
    else
    return path(m-1,n) + path(m,n-1);
}
int main() 
{
  int t,x,y;
  cin>>t;
  while(t--)
  {
    cin>>x>>y;
    cout<<path(x,y)<<endl;
  }
	return 0;
}