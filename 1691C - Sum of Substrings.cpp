#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,k;cin>>n>>k;
    string s;cin>>s;
    ll oc=0;
    ll maxi=0,mini=n-1;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            oc++;
            maxi=max(maxi,i);
            mini=min(mini,i);
        }
    }
    if(oc==0)
    {
        cout<<"0"<<endl;
        return;
    }
    ll ans=0;
    ll m1=mini;
    ll m2=n-1-maxi;
    if(oc>0 && m2<=k)
    {
        k-=m2;
        oc--;
        ans++;
    }

    if(oc>0 && m1<=k)
    {
        k-=m1;
        oc--;
        ans+=10;
    }
    ans+=11*oc;
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
