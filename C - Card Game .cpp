#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        long long res=0,s=0;
        for(int i=n-1;i>=0;i--)
        {
            if(i%2==0)
            {
                res=max(res,s+a[i]);
            }
            else
            {
                res=max(res,s);
            }
            s+=max(0,a[i]);
        }
        cout<<res<<endl;
    }
    return 0;
}
