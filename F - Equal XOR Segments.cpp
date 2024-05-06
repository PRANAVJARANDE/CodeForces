#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n,q;cin>>n>>q;
    map<int,vector<int>> m;
    vector<int> a(n+1,0);
    for(int i=1;i<=n;i++)cin>>a[i];

    vector<int>xorr(n+1,0);
    
    
    m[0].push_back(0);
    
    for(int i=1;i<=n;i++)
    {
        xorr[i]=xorr[i-1]^a[i];
        m[xorr[i]].push_back(i);
    }

    while(q--)
    {
        ll l,r;cin>>l>>r;
        ll xr=xorr[r];
        ll xl=xorr[l-1];
        if(xr==xl)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int i1=*--lower_bound(m[xl].begin(),m[xl].end(),r);
        ll i2=*lower_bound(m[xr].begin(),m[xr].end(),l);
        if(i1>i2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
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
