#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<ll>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    vector<vector<ll>>d;
    for(int i=0;i<n;i++)
    {
        d.push_back({a[i]-b[i],i+1});
    }

    sort(d.begin(),d.end());
    vector<int>ans;
    ll val=d[n-1][0];  
    int in=n-1;
    while(in>=0 && d[in][0]==val)
    {
        ans.push_back(d[in][1]);
        in--;
    }
    sort(ans.begin(),ans.end());
    cout<<(int)ans.size()<<endl;
    for(int x: ans)
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
