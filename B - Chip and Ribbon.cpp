#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        int n;cin>>n;
        vector<int> c(n);
        for(int i=0;i<n;i++)cin>>c[i];

        int cur=0;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            if(c[i]>cur)
            {
                ans+=c[i]-cur;
            }
            cur=c[i];
        }
        cout<<ans-1<<endl;
    }
    return 0;
}
