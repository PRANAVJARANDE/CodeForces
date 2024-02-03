#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,k;cin>>n>>k;
    map<ll,ll> m;
    for(int i=0;i<n;i++)
    {
        ll temp;cin>>temp;
        m[temp]++;
    }

    vector<ll> v1;
    for(auto x: m)
    {
        if(x.second>=k)v1.push_back(x.first);
    }

    if(v1.size()==0)
    {
        cout<<"-1"<<endl;
        return;
    }
    if(v1.size()==1)
    {
        cout<<v1[0]<<" "<<v1[0]<<endl;
        return;
    }
    ll ans=-1;
    int cl=-1,cr=-1;

    for(int l=0;l<v1.size();l++)
    {
        int i=l;
        while(i<v1.size()-1 && v1[i]+1==v1[i+1])
        {
            i++;
        }
        
        if(i-l+1>ans)
        {
            ans=i-l+1;
            cl=v1[l],cr=v1[i];
        }
        l=i;
    }
    cout<<cl<<" "<<cr<<endl;
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
