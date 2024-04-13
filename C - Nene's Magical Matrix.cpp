#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n;cin>>n;
    ll s=0;
    for(int i=1;i<=n;i++)
    {
        s+=i*(2*i-1);
    }
    cout<<s<<" "<<2*n<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<1<<" "<<i<<" ";
        for(int j=n;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        cout<<2<<" "<<i<<endl;
        for(int j=n;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
 
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
