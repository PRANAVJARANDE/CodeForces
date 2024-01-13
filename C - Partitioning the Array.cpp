
#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
 
    vector<int> tp;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            tp.push_back(i);
            if(n/i!=i)
            {
                tp.push_back(n/i);
            }
        }
    }
 
    ll ans=0;
    for(int k:tp)
    {
        int gc=0;
        for(int i=0;i<n-k;i++)
        {
            int diff=abs(a[i]-a[i+k]);
            gc=__gcd(gc,diff);
        }
        if(gc!=1)
        {
            ans++;
        }
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
