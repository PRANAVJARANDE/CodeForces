#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    ll ans=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        ans+=a[i];
        if(a[i]%2==1)
        {
            cnt++;
        }

        if(i==0)
        {
            cout<<ans<<" ";
        }
        else if(cnt%3==1)
        {
            cout<<(ans-(cnt/3)-1)<<" ";
        }
        else
        {
            cout<<(ans-(cnt/3))<<" ";
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
