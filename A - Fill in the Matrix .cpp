#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long t;cin >> t;
    while (t--) 
    {
        long long n,m;cin>>n>>m;
        if(m==1)
        {
            cout<<"0"<<endl;
            for(int i=0;i<n;i++)
                cout<<"0"<<endl;
        }
        else if(m>n+1)
        {
            cout<<n+1<<endl;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<(i+j)%m<<" ";
                }
                cout<<endl;
            }
        }
        else
        {
            cout<<m<<endl;
            for(int i=0;i<m-1;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<(i+j)%m<<" ";
                }
                cout<<endl;
            }
            for(int i=0;i<n-m+1;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }
        
    }
    return 0;
}
