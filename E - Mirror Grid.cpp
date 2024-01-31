#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<vector<int>> a(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char ch;cin>>ch;
            if(ch=='1')a[i][j]=1;
            else a[i][j]=0;
        }
    }
    ll ans=0;
    for(int i=0;i<n/2;i++)
    {
        for(int j=i;j<n-1-i;j++)
        {
            int cnt=a[i][j]+a[j][n-i-1]+a[n-j-1][i]+a[n-1-i][n-j-1];
            if(cnt==1 || cnt==3)
            {
                ans+=1;
            }
            else if(cnt==2)
            {
                ans+=2;
            }
        }
    }
    cout<<ans<<endl;
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
