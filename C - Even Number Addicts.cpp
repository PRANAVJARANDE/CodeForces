//1738C - Even Number Addicts
#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
  
void solve()
{
    ll n;cin>>n;
    ll e=0,o=0;
    for(int i=0;i<n;i++)
    {
        ll temp;cin>>temp;
        if(temp%2==0)e++;
        else o++;
    }
    if(o%4==0 || o%4==3 || (o%4==1 && e%2==1))
    {
        cout<<"Alice"<<endl;
        return;
    }
    cout<<"Bob"<<endl;
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
