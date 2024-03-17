#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n;cin>>n;
    vector<ll> a(n);
    vector<ll> freq(n+1,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        freq[a[i]]++;
    }
 
    bool b=0;
    for(int i=0;i<=n;i++)
    {
        if(freq[i]==0)
        {
            cout<<i<<endl;
            return;
        }
        else if(freq[i]==1)
        {
            if(b==0)
            {
                b=1;
            }
            else
            {
                cout<<i<<endl;
                return;
            }
        }
    }
    cout<<n<<endl;
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
