#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    int n;cin>>n;
    vector<int>a(n);
    bool b=0;
    int nc=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            b=1;
        }
        if(a[i]<0)
        {
            nc++;
        }
    }
 
    if(b==1)
    {
        cout<<"0"<<endl;
        return;
    }
 
    if(nc%2==0)
    {
        cout<<"1"<<endl;
        cout<<"1 0"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
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
