#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int i, j, k, n, sum=0, add=0;
        cin>>n;
        int arr[n];
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        for(i=0;i<n/2;i++)
        {
            sum+=arr[i];
        }
        for(k=n/2;k<n;k++)
        {
            add+=arr[k];
        }
        cout<<sum*add<<endl;
    }
    return 0;
}