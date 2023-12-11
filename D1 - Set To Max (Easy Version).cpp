#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    for(int i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    for(int i=0;i<n;i++)
    {
        int l=i,r=i;
        
        while(l>=0 && a[l]!=b[i])
        {
            l--;
        }
        while(r<n && a[r]!=b[i])
        {
            r++;
        }

        int mx1=a[i],mx2=a[i];
        int mn1=b[i],mn2=b[i];
        if(l!=-1)
        {
            for(int j=l;j<i;j++)
            {
                mx1=max(mx1,a[j]);
                mn1=min(mn1,b[j]);
            }
            if(mx1==b[i] && mn1==b[i])
            {
                continue;
            }
        }

        if(r!=n)
        {
            for(int j=i;j<=r;j++)
            {
                mx2=max(mx2,a[j]);
                mn2=min(mn2,b[j]);
            }
            if(mx2==b[i] && mn2==b[i])
            {
                continue;
            }
        }

        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
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
