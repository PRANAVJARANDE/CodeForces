#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    vector<ll> a(n);
    bool b=0;
    ll maxi=LLONG_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0)b=1;
        maxi=max(maxi,a[i]);
    }

    if(b==0)
    {
        cout<<maxi<<endl;
        return;
    }    

    ll a1=0,a2=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)a1+=max(0ll,a[i]);
        else a2+=max(0ll,a[i]);
    }
    cout<<max(a1,a2)<<endl;    
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
