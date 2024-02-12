#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,m,k;cin>>n>>m>>k;
    vector<ll> a(m);
    for(int i=0;i<m;i++)cin>>a[i];
    ll c=n/k;
    ll rem=n%k;
    sort(a.begin(),a.end(),greater<ll>());

    for(int i=0;i<n && a[i]>c;i++)
    {
        ll diff=a[i]-c;
        if(diff>1)
        {
            cout<<"NO"<<endl;
            return;
        }
        else if(diff==1)
        {
            rem--;
            if(rem<0)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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
