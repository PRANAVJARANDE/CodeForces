#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll x,n;cin>>x>>n;
    for(int i=x/n;i>=1;i--)
    {
        ll rem=x-((n-1)*i);
        if(rem%i==0)
        {
            cout<<i<<endl;
            return;
        }
    }
}

bool check(int n,int x,int mid)
{
    ll rem=x-((n-1)*mid);
    if(rem%mid==0)
    {
        return 1;
    }
    return 0;
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
