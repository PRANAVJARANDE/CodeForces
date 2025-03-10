#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

ll n;
void solve() 
{
    cin>>n;
    vll a(n),t(n);
    ll mini=LLONG_MAX,maxi=LLONG_MIN;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>t[i];

    for(int i=0;i<n;i++)
    {
        ll op1=a[i]+t[i];
        ll op2=a[i]-t[i];
        maxi=max(maxi,max(op1,op2));
        mini=min(mini,min(op1,op2));    
    }
    ll ans=maxi+mini;
    cout<<ans/2;
    if(ans%2!=0)cout<<".5";
    cout<<endl;
}

int main() 
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t = 1;cin>>t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
