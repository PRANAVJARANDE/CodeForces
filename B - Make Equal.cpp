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
    int k=s/n;
    vector<ll> psum(n);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=k)
        {
            c+=a[i]-k;
        }
        else
        {
            ll nd=k-a[i];
            c-=nd;
            if(c<0)
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
