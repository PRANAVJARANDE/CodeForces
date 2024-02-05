#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,x;cin>>n>>x;
    vector<ll> ans(n+1,0),vis(n+1,0);
    if(n%x!=0)
    {
        cout<<"-1"<<endl;
        return;
    }
    
    ans[1]=x;
    vis[1]=1;

    vis[x]=1;
    ans[n]=1;

    for(int i=2;i<=n-1;i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            ans[i]=i;
        }
        else
        {
            for(int j=i;j<=n;j+=i)
            {
                if(n%j==0 && vis[j]==0)
                {
                    ans[i]=j;
                    vis[j]=1;
                    break;
                }
            }
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
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
