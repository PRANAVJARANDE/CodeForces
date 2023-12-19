#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t; cin >> t;
    while (t--) 
    {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        vector<vector<int>> v1(n);
        for(int i = 0; i < n; i++)
            v1[i] = {a[i] + b[i], i};
        
        sort(v1.begin(), v1.end());
        ll ans = 0;
        for(int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                ans += a[v1[i][1]] - 1;
            else
                ans += -b[v1[i][1]] + 1;
        }
        cout << ans << endl;
    }
    
    return 0;
}
