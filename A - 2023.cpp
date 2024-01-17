#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,k;cin>>n>>k;
    vector<ll> b(n);
    for(int i=0;i<n;i++)cin>>b[i];

    ll j=2023;
    for(int i=0;i<n;i++)
    {
        if(j%b[i]!=0)
        {
            cout<<"NO"<<endl;
            return;
        }
        j/=b[i];
    }
    cout<<"YES"<<endl;
    cout<<j<<" ";
    for(int i=0;i<k-1;i++)
    {
        cout<<"1 ";
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
