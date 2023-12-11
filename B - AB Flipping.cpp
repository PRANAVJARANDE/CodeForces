#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    int ans=0;
    int ac=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='A')
        {
            ac++;
            if(s[i+1]=='B')
            {
                ans+=ac;
                ac=0;
                s[i+1]='A';
            }
        }
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
