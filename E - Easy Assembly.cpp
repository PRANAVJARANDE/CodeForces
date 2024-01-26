#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<vector<int>> v1(n);
    vector<int> dp;
    for(int i=0;i<n;i++)
    {
        int k;cin>>k;
        for(int j=0;j<k;j++)
        {
            int a;cin>>a;
            v1[i].push_back(a);
            dp.push_back(a);
        }
    }
    map<int,int> m;
    sort(dp.begin(),dp.end());
    for(int i=0;i<dp.size();i++)
    {
        m[dp[i]]=i;
    }
    ll s=0;
    for(auto x: v1)
    {
        for(int i=0;i<x.size()-1;i++)
        {
            if(m[x[i]]!=m[x[i+1]]-1)
            {
                s++;
            }
        }
    }
    ll c=n+s-1;
    cout<<s<<" "<<c<<endl;
}


int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    solve();
    return 0;
}

