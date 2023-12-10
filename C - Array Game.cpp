#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,k;cin>>n>>k;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    if(k>=3)
    {
        cout<<"0"<<endl;
        return ;
    }
    
    sort(a.begin(),a.end());
    ll d=a[0];
    for(int i=1;i<n;i++)
        d=min(d,min(a[i],a[i]-a[i-1]));
    
    if(k==1)
    {
        cout<<d<<endl;
        return;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            ll x=a[i]-a[j];
            ll in=lower_bound(a.begin(),a.end(),x)-a.begin();
            if(in<n)d=min(d,a[in]-x);
            if(in>0)d=min(d,x-a[in-1]);
        }
    }
    cout<<d<<endl;

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
