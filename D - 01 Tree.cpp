#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

bool isgood(int i,int n,vector<int>&a,vector<int>&prev,vector<int>&nxt)
{
    if(i<1 || i>n)return 0;

    if(a[i]==a[prev[i]]+1 || a[i]==a[nxt[i]]+1)
    {
        return 1;
    }
    return 0;
}



void solve()
{
    int n;cin>>n;
    vector<int> a(n+2,-2);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    vector<int> prev(n+2,-1),nxt(n+2,-1);
    for(int i=0;i<n+2;i++)
    {
        prev[i]=i-1;
        nxt[i]=i+1;
    }

    priority_queue<pair<int,int>> q1;
    vector<int>vis(n+2,0);
    vis[0]=1;
    vis[n+1]=1;
    for(int i=1;i<=n;i++)
    {
        if(isgood(i,n,a,prev,nxt))
        {
            q1.push({a[i],i});
            vis[i]=1;
        }
    }

    while(!q1.empty())
    {
        int in=q1.top().second;
        q1.pop();
        nxt[prev[in]]=nxt[in];
        prev[nxt[in]]=prev[in];

        if(vis[prev[in]]==0 && isgood(prev[in],n,a,prev,nxt))
        {
            vis[prev[in]]=1;
            q1.push({a[prev[in]],prev[in]});
        }

        if(vis[nxt[in]]==0 && isgood(nxt[in],n,a,prev,nxt))
        {
            vis[nxt[in]]=1;
            q1.push({a[nxt[in]],nxt[in]});
        }
    }

    int b=0,mn=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)b++;
        mn=min(mn,a[i]);
    }    

    if(mn==0 && b==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

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
