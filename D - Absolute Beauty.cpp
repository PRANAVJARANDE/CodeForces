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
        ll n;cin>>n;
        vector<ll>a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(a[i]<b[i])swap(a[i],b[i]);
            ans+=a[i]-b[i];
        }
        vector<ll> pmin(n),pmax(n);
        pmin[0]=INT_MAX;
        pmax[0]=INT_MIN;
        for(int i=1;i<n;i++)
        {
            pmin[i]=min(pmin[i-1],a[i-1]);
            pmax[i]=max(pmax[i-1],b[i-1]);
        }
        vector<ll>fmax(n),fmin(n);
        fmin[n-1]=INT_MAX;
        fmax[n-1]=INT_MIN;
        for(int i=n-2;i>=0;i--)
        {
            fmin[i]=min(fmin[i+1],a[i+1]);
            fmax[i]=max(fmax[i+1],b[i+1]);
        }

        ll add=0;
        for(int i=0;i<n;i++)
        {
            ll mini=min(pmin[i],fmin[i]);
            ll maxi=max(pmax[i],fmax[i]);

            ll op1=2*(max(b[i],maxi)-mini);
            ll op2=2*(maxi-min(a[i],mini));

            add=max(max(op1,op2),add);
        }
        cout<<ans+add<<endl;        
    }
    return 0;
}
