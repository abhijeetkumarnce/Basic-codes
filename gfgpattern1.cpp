#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int i,j,n;
        char c='A';
        cin>>n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==0 || i==(n-1))
                {
                    cout<<c;
                    c++;
                }
                else if(j==0 || j==(n-1))
                {
                     cout<<c;
                     c++;
                }   
                else {
                    cout<<"$";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}