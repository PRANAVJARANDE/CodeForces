#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
 
    if(n==1)
    {
        cout<<"0\n";
        return;
    }
    
    int p1=a[0],p2;
    ll ans=0;
    int i=1;
    while(i<n)
    {
        if(p1>=a[i])
        {
            p1=a[i];
            i++;
        }
        else
        {
            p2=a[i];
            i++;
            break;
        }
    }
 
    while(i<n)
    {
        if(p1==a[i] || p2==a[i])
        {
            i++;
            continue;
        }
        else if(a[i]>p1 && a[i]>p2)
        {
            ans++;
            if(p1<p2)
            {
                p1=a[i];
            }
            else
            {
                p2=a[i];
            }
        }
        else if(a[i]<p1 && a[i]<p2)
        {
            if(p1>p2)
            {
                p2=a[i];
            }
            else
            {
                p1=a[i];
            }
        }
        else
        {
            if(p1>a[i])
            {
                p1=a[i];
            }
            else
            {
                p2=a[i];
            }
        }
        i++;
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
