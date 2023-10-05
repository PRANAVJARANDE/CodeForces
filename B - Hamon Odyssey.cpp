//B - Hamon Odyssey 
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
        vector<int>v1(n);
        for(int i=0;i<n;i++)
            cin>>v1[i];
        
        int a=v1[0];
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            a=a&v1[i];
            if(a==0)
            {
                ans++;
                if(i+1<n)
                    a=v1[i+1];
            }
        }
        if(ans==0)
        {
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
