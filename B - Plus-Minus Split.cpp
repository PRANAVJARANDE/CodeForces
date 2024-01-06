#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    int p=0,k=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='+')
        {
            p++;
        }
        else
        {
            k++;
        }
    }
    ll ans=abs(p-k);
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
