#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    int in=n-1;
    vector<bool> vis(n,0);
 
    while(in>=0)
    {
        if(s[in]=='a' || s[in]=='e')
        {
            in-=2;
        }
        else
        {
            in-=3;
        }
        if(in>=0) vis[in]=1;
    }
 
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
        if(vis[i]==1)
        {
            cout<<".";
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
