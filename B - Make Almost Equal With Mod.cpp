#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    ll ans=1;
    for(int j=0;j<57;j++)
    {
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==1)
            {
                c++;
            }
            a[i]=a[i]/2;
        }
        ans*=2;
        if(c!=0 && c!=n)
        {
            cout<<ans<<endl;
            return;
        }
    }
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
