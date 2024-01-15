#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n,m;cin>>n>>m;
    vector<ll>a(n),b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
 
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
 
    ll ans=0,la=0,lb=0,ra=n-1,rb=m-1;
    while(la<=ra)
    {
        ll op1=abs(a[la]-b[lb]);
        ll op2=abs(a[la]-b[rb]);
        ll op3=abs(a[ra]-b[lb]);
        ll op4=abs(a[ra]-b[rb]);
 
        ll ta=max(max(op1,op2),max(op3,op4));
        ans+=ta;
        if(ta==op1)
        {
            la++;
            lb++;
        }
        else if(ta==op2)
        {
            la++;
            rb--;
        }
        else if(ta==op3)
        {
            ra--;
            lb++;
        }
        else
        {
            ra--;
            rb--;
        }
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
