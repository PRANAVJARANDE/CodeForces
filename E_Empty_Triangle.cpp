#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

ll ask(int i,int j,int k)
{
    cout<<"? "<<i<<" "<<j<<" "<<k<<endl;
    cout.flush();
    ll res;cin>>res;
    return res;
}

void solve()
{
    ll n;cin>>n;
    ll i=1,j=2,k=3;
    while(1)
    {
        ll res=ask(i,j,k);
        if(res==0)
        {
            cout<<"! "<<i<<" "<<j<<" "<<k<<endl;
            return;
        }
        ll r=rand()%3;
        if(r==0)i=res;
        else if(r==1)j=res;
        else k=res;
    }
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
