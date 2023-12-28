#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    int n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
 
    unordered_map<ll,int> m;
    m[0]++;
    ll diff=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            diff+=a[i];
        }
        else
        {
            diff-=a[i];
        }
 
        if(m[diff]!=0)
        {
            cout<<"YES"<<endl;
            return;
        }
        m[diff]++;
    }
    cout<<"NO"<<endl;
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
