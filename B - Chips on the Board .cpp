#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        int n;cin>>n;
        long long s1=0,s2=0,ma=INT_MAX,mb=INT_MAX;
        for(int i=0;i<n;i++)
        {
            long long x;cin>>x;
            s1+=x;
            ma=min(ma,x);
        }
        for(int i=0;i<n;i++)
        {
            long long x;cin>>x;
            s2+=x;
            mb=min(mb,x);
        }
        long long ans=min(s1+n*mb,s2+n*ma);
        cout<<ans<<endl;
    }
    return 0;
}
