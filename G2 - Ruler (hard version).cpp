#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

ll ask(int i,int j)
{
    cout<<"? "<<i<<" "<<j<<endl;
    cout.flush();
    ll res;cin>>res;
    return res;
}

void solve()
{
    ll l=2,r=999;
    ll ans=999;
    while(l<=r)
    {
        ll l1=l+(r-l)/3;
        ll l2=l+(2*(r-l))/3;
        ll res=ask(l1,l2);
        if(res==((l1+1)*(l2+1)))
        {
            ans=l1;
            r=l1-1;
        }
        else if(res==(l1*(l2+1)))
        {
            ans=l2;
            l=l1+1;
            r=l2-1;
        }
        else
        {
            l=l2+1;
        }
    }
    cout<<"! "<<ans<<endl;
}


int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    ll t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
