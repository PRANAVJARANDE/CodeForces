#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    ll ans=1;
    while(n!=0)
    {
        int r=n%10;
        n/=10;
        int k=0;
        for(int i=0;i<=r;i++)
        {
            for(int j=0;j<=r;j++)
            {
                if(r-i-j>=0)
                {
                    k++;
                }
            }
        }
        ans*=k;
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
