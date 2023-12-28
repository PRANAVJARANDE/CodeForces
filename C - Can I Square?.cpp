#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
bool isp(ll num) {
    if (num <= 0) {
        return false;
    }
 
    long long sqrtNum = static_cast<ll>(sqrt(num));
    return (sqrtNum * sqrtNum == num);
}
 
 
void solve()
{
    int n;cin>>n;
    vector<ll> a(n);
    ll s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(isp(s))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
