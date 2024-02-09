#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    map<int,int> m;
    for(int j=0;j<n;j++)
    {
        int k=a[j];
        for(int i=2;i<=sqrt(k);i++)
        {
            while(k%i==0)
            {
                m[i]++;
                k/=i;
            }
        }
        if(k>1)m[k]++;
    }

    ll ans=0;
    ll c=0;
    for(auto x: m)
    {
        int in=x.second;
        ans+=in/2;
        if(in%2)
        {
            c++;
        }
    }
    ans+=c/3;
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
