#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    vector<vector<ll>> a;
    ll s=0;
    for(int i=0;i<n;i++)
    {
        ll temp;cin>>temp;
        a.push_back({temp,i});
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        s+=a[i][0]-a[0][0]+1;
    }
    vector<ll>ans(n);

    ans[a[0][1]]=s;
    for(int i=1;i<n;i++)
    {
        ll diff=a[i][0]-a[i-1][0];
        s=s-(diff*(n-i))+(diff*i);
        ans[a[i][1]]=s;
    }
    
    for(auto x: ans)
    {
        cout<<x<<" ";
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

