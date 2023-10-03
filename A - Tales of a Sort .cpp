#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        int n;cin>>n;
        vector<int>arr(n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                ans=max(ans,arr[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
