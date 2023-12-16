#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

int __gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return __gcd(b, a % b);
}

void solve()
{
    ll n;cin>>n;
    vector<ll>a(n);
    map<ll,bool> m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]=1;
    }
    sort(a.begin(),a.end());
    int hcf=(n==1?1:0);
    for(int i=1;i<n;i++)
    {
        hcf=__gcd(hcf,a[i]-a[i-1]);
    }

    ll an=a[n-1]+hcf;
    ll num=a[n-1];
    while(an>a[0])
    {
        if(!m[num])
        {
            an=num;
            break;
        }
        else
        {
            num-=hcf;
        }
    }
    a.push_back(an);
    sort(a.begin(),a.end());
    ll ans=0;
    for (int i = 0; i < n; i++) 
    {
        ans += abs(a[n] - a[i]) / hcf;
    }

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
