#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    int xn=0,yn=0,yp=0,xp=0;
    for(int i=0;i<n;i++)
    {
        int x,y;cin>>x>>y;
        if(x<0) xn++;
        if(x>0) xp++;
        if(y<0) yn++;
        if(y>0) yp++;
    }

    if(xp==0 || xn==0 || yp==0 || yn==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
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
