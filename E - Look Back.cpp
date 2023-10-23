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
        vector<long long> v1(n);
        for(int i=0;i<n;i++)cin>>v1[i]; 

        long long ans=0,c=0;
        for(int i=1;i<n;i++)
        {
            if(v1[i]>v1[i-1])
            {
                c-=(int)log2(1.0*v1[i]/v1[i-1]);
            }
            else
            {
                c+=ceil(log2(1.0*v1[i-1]/v1[i]));
            }
            c=max(c,(long long)0);
            ans+=c;
        }
        cout<<ans<<endl;        
    }
    return 0;
}
