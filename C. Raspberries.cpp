#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;cin >> t;

    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        vector<int> v1(n);
        int ans=INT_MAX;
        for (int i = 0; i < n; i++) 
        {
            cin >> v1[i];
            int te=v1[i]%k;
            if(te==0)
            {
                ans=0;
            }
            ans=min(ans,k-te);
        }

        if (k == 4) 
        {
            int te=0;
            for(int x: v1)
            {
                if(x%2==0)
                {
                    te++;
                }
            }
            if(te>=2)
            {
                ans=0;
            }
            else if(te==1 && n>1)
            {
                ans=min(ans,1);
            }
            else
            {
                ans=min(ans,2);
            }
        }
        cout<<ans<<endl;        
        
    }
    return 0;
}
