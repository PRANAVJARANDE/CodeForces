#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n,m;cin>>n>>m;
    vector<vector<char>>a(n,vector<char>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    if(a[0][0]==a[n-1][m-1] || a[n-1][0]==a[0][m-1])
    {
        cout<<"YES"<<endl;
        return;
    }

    if(a[0][0]==a[0][m-1])
    {
        for(int i=1;i<m-1;i++)
        {
            if(a[0][i]!=a[0][0])
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        for(int i=1;i<m-1;i++)
        {
            if(a[n-1][i]!=a[n-1][m-1])
            {
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    if(a[0][0]==a[n-1][0])
    {
        for(int i=1;i<n-1;i++)
        {
            if(a[i][0]!=a[0][0])
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        for(int i=1;i<n-1;i++)
        {
            if(a[i][m-1]!=a[n-1][m-1])
            {
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
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
