#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

long long lcm(long long a, long long b) 
{
    return abs(a * b) / __gcd(a,b);
}

void solve()
{
    ll n;cin>>n;
    vector<int>a(n+2,1);
    for(int i=1;i<=n;i++)cin>>a[i];
    
    vector<int> b(n+2,1);
    for(int i=1;i<=n+1;i++)
    {
        b[i]=lcm(a[i],a[i-1]);  
    }
    for(int i=1;i<=n;i++)
    {
        if(__gcd(b[i],b[i+1])!=a[i])
        {
            cout<<"NO"<<endl;
            return;
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
