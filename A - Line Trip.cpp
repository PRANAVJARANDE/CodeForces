#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long 

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        int n,x;cin>>n>>x;
        vector<ll>v1(n+1);
        v1[0]=0;
        for(int i=1;i<=n;i++)cin>>v1[i];
        ll ans=2*(x-v1.back());

        for(int i=1;i<v1.size();i++)
            ans=max(ans,v1[i]-v1[i-1]);
        
        cout<<ans<<endl;
    }
    return 0;
}
