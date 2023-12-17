#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    vector<int> l;
    for(int i=0;i<n;i++)
    {
        while(!l.empty() && s[i]>s[l.back()])
        {
            l.pop_back();
        }
        l.push_back(i);
    }
    
    int m=l.size();
    int in=0;
    while(in<m && s[l[in]]==s[l[0]])
    {
        in++;
    }
    ll ans=m-in;
    for(int i=0;i<m;i++)
    {
        if(i<m-i)
        {
            swap(s[l[i]],s[l[m-i-1]]);
        }
    }

    for(int i=1;i<n;i++)
    {
        if(s[i]<s[i-1])
        {
            cout<<"-1"<<endl;
            return;
        }
    }
    cout<<ans<<endl;
}


int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin>>t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
