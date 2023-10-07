#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

    int t;cin >> t;
    while (t--) 
    {
        int n;cin>>n;
        vector<int>c(n);
        for(int i=0;i<n;i++)cin>>c[i];
        int k;cin>>k;
        vector<int> ans(n);
        for(int i=n-2;i>=0;i--)
        {
            c[i]=min(c[i],c[i+1]);
        }
        ans[0]=k/c[0];
        k=k%c[0];
        for(int i=1;i<n;i++)
        {
            if(c[i]==c[i-1])
            {
                ans[i]=ans[i-1];
            }
            else
            {
                int o=c[i]-c[i-1];
                ans[i]=min(ans[i-1],k/o);
                k-=ans[i]*o;
            }
        }
        for(int x: ans)
            cout<<x<<" ";

        cout<<endl;
    }
    return 0;
}
