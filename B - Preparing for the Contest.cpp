#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    int n,k;cin>>n>>k;
    for(int i=1;i<=k;i++)
    {
        cout<<i<<" ";
    }
    for(int i=n;i>=k+1;i--)
    {
        cout<<i<<" ";
    }
    cout<<endl;
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
