#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n,m;cin>>n>>m;
    vector<vector<int>>arr(m,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[j][i];
        }
    }
    ll ans=0;
    for(auto x: arr)
    {
        sort(x.begin(),x.end());
        for(int i=0;i<n-1;i++)
        {
            ll diff=x[i+1]-x[i];
            ans+=(diff*(n-i-1)*(i+1));
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
