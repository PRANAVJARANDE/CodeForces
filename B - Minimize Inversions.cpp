#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    vector<vector<ll>>a(2,vector<ll>(n,0));
    for(int i=0;i<n;i++)cin>>a[0][i];
    for(int i=0;i<n;i++)cin>>a[1][i];
    sort(a.begin(),a.end());
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
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
