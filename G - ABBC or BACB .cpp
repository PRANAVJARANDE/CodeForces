#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long t;cin >> t;
    while (t--) 
    {
        string s;cin>>s;
        int ans=0,cnt=0,l=INT_MAX;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            {
                cnt++;
            }
            else
            {
                l=min(l,cnt);
                ans+=cnt;
                cnt=0;
            }
        }
        ans+=cnt;
        l=min(l,cnt);
        ans-=l;
        cout<<ans<<endl;
    }
    return 0;
}
