#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int>a(n+2),d(n+2);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>d[i];

    vector<int>prev(n+2),nxt(n+2);
    for(int i=1;i<n;i++)
    {
        prev[i+1]=i;
        nxt[i]=i+1;
    }

    vector<int> to_die;
    for(int i=1;i<=n;i++)
    {
        if(a[i-1]+a[i+1]>d[i])
        {
            to_die.push_back(i);
        }
    }

    vector<int>vis(n+2,0);
    for(int i=1;i<=n;i++)
    {
        cout<<(int)to_die.size()<<" ";
        set<int> s1;
        for(int x: to_die)
        {
            vis[x]=1;
            s1.insert(prev[x]);
            s1.insert(nxt[x]);

            if(nxt[x]!=0 && prev[x]!=0)
            {
                nxt[prev[x]]=nxt[x];
                prev[nxt[x]]=prev[x];
            }
            else if(nxt[x]!=0)
            {
                prev[nxt[x]]=0;
            }
            else
            {
                nxt[prev[x]]=0;
            }
        }
        s1.erase(0);
        vector<int> new_die;
        for(int x: s1)
        {
            if(vis[x]==0 && a[nxt[x]]+a[prev[x]]>d[x])
            {
                new_die.push_back(x);
            }
        }
        to_die=new_die;
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
