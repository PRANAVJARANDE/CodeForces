#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    
    vector<bool>vis(n+1);
    deque<pair<ll,int>> q1;
    ll mex=0;
    ll temp=0;
    for(int i=0;i<n;i++)
    {
        vis[a[i]]=1;
        while(vis[mex])
        {
            mex++;
        }
        temp+=mex;
        q1.push_back({mex,1});
    }

    ll ans=temp;
    for(int i=0;i<n;i++)
    {
        ll ta=a[i];
        q1.front().second--;
        temp-=q1.front().first;
        if(q1.front().second==0)
        {
            q1.pop_front();
        }
        
        int c=0;
        while(!q1.empty() && q1.back().first >= ta)
        {
            temp-=(q1.back().first*q1.back().second);
            c+=q1.back().second;
            q1.pop_back();
        }
        q1.push_back({ta,c});
        temp+=ta*c;
        q1.push_back({n,1});
        temp+=n;
        ans=max(ans,temp);
    }
    cout<<ans<<endl;
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
