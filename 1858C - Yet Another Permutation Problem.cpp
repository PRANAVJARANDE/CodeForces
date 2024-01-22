#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int>vis(n+1,0);
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            int in=i;
            while(in<=n)
            {
                cout<<in<<" ";
                vis[in]=1;
                in*=2;
            }
        }
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
