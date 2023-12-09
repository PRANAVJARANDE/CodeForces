#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        int n;cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        vector<vector<int>>v1;
        vector<ll>ans(n,0);
        for(int i=0;i<n;i++)
        {
            v1.push_back({a[i],i});
            ans[i]=i;
        }

        sort(v1.begin(),v1.end());

        vector<ll>psum(n);
        psum[0]=v1[0][0];
        for(int i=1;i<n;i++)
        {
            psum[i]=psum[i-1]+v1[0][i];
        }

        for(int i=n-2;i>=0;i--)
        {
            if(psum[i]>=v1[0][i+1])
            {
                ans[i]=ans[i+1];
            }
        }

        vector<ll>res(n);
        for(int i=0;i<n;i++)
        {
            res[v1[1][i]]=ans[i];
        }

        for(ll x: res)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
