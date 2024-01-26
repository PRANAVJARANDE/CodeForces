#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int m,k,a1,ak;cin>>m>>k>>a1>>ak;
    int take1=m%k;
    int takek=m/k;
    int takef1=max(0,take1-a1);
    int takefk=max(0,takek-ak);

    int left1=max(0,a1-take1);
    int rep=min(left1/k,takefk);
    int ans=takef1+takefk-rep;
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
