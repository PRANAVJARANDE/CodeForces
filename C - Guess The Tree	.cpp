#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

ll ask(int i,int j)
{
    cout<<"? "<<i<<" "<<j<<endl<<flush;
    ll res;cin>>res;
    return res;
}

void solve()
{
    ll n;cin>>n;
    vector<vector<ll>>ans;
    for(int i=2;i<=n;i++)
    {
        ll root=1;
        while(1)
        {
            ll mid=ask(root,i);
            if(mid==i || mid==root)
            {
                ans.push_back({root,i});
                break;
            }
            root=mid;
        }
    }
    cout<<"! ";
    for(auto x: ans)
    {
        cout<<x[0]<<" "<<x[1]<<" ";
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
