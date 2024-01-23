#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int>a(n);
    int c=0;
    int in=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0 && in==-1) in=i;
        if(a[i]<=0) c++;
    }
    
    if(c==n)
    {
        cout<<n-1<<endl;
        for(int i=n-1;i>0;i--)
        {
            cout<<i<<" "<<i+1<<endl;
        }
    }
    else
    {
        cout<<5+2*(n-1)<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<in+1<<" "<<in+1<<endl;
        }
        
        for(int i=1;i<n;i++)
        {
            if(i==1)
            {
                cout<<i+1<<" "<<in+1<<endl;
                cout<<i+1<<" "<<in+1<<endl;
            }
            else
            {
                cout<<i+1<<" "<<i<<endl;
                cout<<i+1<<" "<<i<<endl;
            }
        }
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
