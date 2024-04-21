#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

int cntt(int n)
{
    ll ans=0;
    while(n!=0)
    {
        ans++;
        n/=2;
    }
    return ans;
}

void solve()
{
    ll n,k;cin>>n>>k;
    if(n==1)
    {
        cout<<k<<endl;
        return;
    }
    int p=cntt(k)-1;
    int a1=(1<<p);
    a1--;
    ll a2=k-a1;
    cout<<a1<<" "<<a2<<" ";
    for(int i=0;i<n-2;i++)
    {
        cout<<"0 ";
    }
    cout<<endl;
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
