#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n;cin>>n;
    vector<ll> a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    vector<ll> ndiff(n+1,n+1);
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==a[i+1])
        {
            ndiff[i]=ndiff[i+1];
        }   
        else
        {
            ndiff[i]=i+1;
        }
    }
    ll q;cin>>q;
    while(q--)
    {
        ll i,j;cin>>i>>j;
        if(ndiff[i]<=j)
        {
            cout<<i<<" "<<ndiff[i]<<endl;
        }
        else
        {
            cout<<"-1 -1"<<endl;
        }
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
