#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
 
    vector<int> dp(n,0);
 
    string s(n,'a');
    for(int i=0;i<n;i++)
    {
        int in=a[i];
        char ch=dp[in]+'a';
        dp[in]++;
        s[i]=ch;
    }
    cout<<s<<endl;
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
