#include <bits/stdc++.h>
using namespace std;
    
void bfs(int n,vector<vector<int>>&gra,vector<int>&dist,int x)
{
        queue<pair<int,int>> q1;
        q1.push({x,0});
        vector<int>vis(n+1,0);
        while(!q1.empty())
        {
            int t=q1.front().first;
            int u=q1.front().second;
            vis[t]=1;
            q1.pop();

            dist[t]=max(dist[t],u);
            for(int c: gra[t])
            {
                if(vis[c]==0)
                {
                    q1.push({c,u+1});
                }
            }
        }
}

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        int n,k;cin>>n>>k;
        vector<int> mar(k);
        for(int i=0;i<k;i++)cin>>mar[i];
        vector<vector<int>> gra(n+1);
        for(int i=0;i<n-1;i++)
        {
            int u,v;cin>>u>>v;
            gra[u].push_back(v);
            gra[v].push_back(u);
        }
        vector<int>dist(n+1,INT_MIN);
        
        bfs(n,gra,dist,mar[0]);
        int u=mar[0];
        for(int x: mar)
        {
            if(dist[u]<dist[x])
            {
                u=x;
            }
        }
        bfs(n,gra,dist,u);

        int ans=0;
        for(int x: mar)
            ans=max(ans,dist[x]);

        cout<<ans/2+ans%2<<endl;
    
    }
    return 0;
}
