#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) 
    {
        int w, f;cin >> w >> f;
        int n;cin >> n;
        vector<int> v1(n);
        int s=0;
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            s+=v1[i];
        }

        vector<bool>dp(s+1,0);
        dp[0]=1;
        dp[s]=1;
        for(int i=0;i<n;i++)
        {
            for(int j=s;j>=v1[i];j--)
            {
                dp[j]=dp[j] || dp[j-v1[i]];
            }
        }
        
        int ans = INT_MAX;
        for (int i = 0; i <=s ; i++) 
        {
            if(dp[i])
                ans = min(ans, max((int)ceil((double)i/w), (int)ceil((double)(s-i) / f)));
        }
        cout << ans << endl;
    }
    return 0;
}
