#include <bits/stdc++.h>
using namespace std;
#define ll long long
    
int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        ll n;cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        ll maxi=a[n-1];
        ll ans=0;
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>maxi)
            {
                ll pieces=ceil((double)a[i]/(double)maxi);
                ans+=pieces-1;
                maxi=a[i]/pieces;
            }
            else
            {
                maxi=a[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
