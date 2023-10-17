#include <bits/stdc++.h>
using namespace std;

long long helper(long long n) {
    long long ans = (long long)n * (n - 1) / 2; 
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) 
    {
        long long n;cin >> n;
        if(n==1) cout << 2 << endl;
        else if(n==2 || n==3) cout << 3 << endl;
        else
        {
        long long i = 1, j = INT_MAX;
        long long ans=1 ;
        while (i <= j) 
        {
            long long mid =(i+j)/2;
            if (helper(mid) <= n) 
            {
                ans=mid;
                i = mid + 1;
            } 
            else 
            {
                j = mid - 1;
            }
        }
        long long x=n-(ans*(ans-1))/2;
        cout << ans + x << endl;
        }
    }
    return 0;
}
