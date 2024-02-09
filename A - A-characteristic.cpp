#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n,k;cin>>n>>k;
    vector<int> ans(n,1);
    for(int i=0;i<n;i++)
    {
        ll res=(i*(i-1)/2) + ((n-i)*(n-i-1)/2);
        if(res==k)
        {
            cout<<"YES"<<endl;
            for(int x: ans)
            {
                cout<<x<<" ";
            }
            cout<<endl;
            return;
        }
        ans[i]=-1;
    }
    cout<<"NO"<<endl;
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
