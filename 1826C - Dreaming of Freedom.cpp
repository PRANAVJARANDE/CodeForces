#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n,m;cin>>n>>m;
    if(n==1 || m==1)
    {
        cout<<"YES"<<endl;
        return;
    }

    if(n%2==0)
    {
        if(m>=2)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    else
    {
        if(m>=n)
        {
            cout<<"NO"<<endl;
            return;
        }
        int k=-1;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                k=i;
                break;
            }
        }

        if(k==-1)
        {
            cout<<"YES"<<endl;
        }
        else if(k>m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
}


int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
