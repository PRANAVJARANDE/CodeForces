#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    vector<ll> a(n);
    ll s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(s!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    vector<ll>b(n);
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
        b[i]=a[i]+b[i-1];
    }
    
    int r=n-1;
    while(r>=0 && b[r]==0)
    {
        r--;
    }
    for(int i=0;i<=r;i++)
    {
        if(b[i]<=0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return; 
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
