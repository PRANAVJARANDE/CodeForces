#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    int n;cin>>n;
    ll maxi=LLONG_MIN,mini=LLONG_MAX;
    set<ll>temp;
    for(int i=0;i<n;i++)
    {
        ll a,x;cin>>a>>x;
        if(a==1)
        {
            maxi=max(maxi,x);
        }
        else if(a==2)
        {
            mini=min(mini,x);
        }
        else
        {
            temp.insert(x);
        }
    }
    ll ans=mini-maxi+1;
    for(auto  x:temp)
    {
        if(x<=mini && x>=maxi)
        {
            ans--;
        }
    }
 
    if(ans<0)
    {
        cout<<"0"<<endl;
        return;
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
