#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        long long n,m,d;cin>>n>>m>>d;
        vector<long long> a(n+1);
        for(int i=1;i<=n;i++)cin>>a[i];

        long long ans=0;
        long long s=0;
        priority_queue<long long ,vector<long long>,greater<long long>> q1;
        for(int i=1;i<=n;i++)
        {
            if(a[i]<0)
            {
                continue;
            }

            if(q1.size()<m)
            {
                s+=a[i];
                q1.push(a[i]);
            }
            else if(q1.size()==m)
            {
                int tp=q1.top();
                if(tp<a[i])
                {
                    q1.pop();
                    q1.push(a[i]);
                    s=s-tp+a[i];
                }
            }
            ans=max(ans,s-i*d);
        }
        cout<<ans<<endl;
    }
    return 0;
}
