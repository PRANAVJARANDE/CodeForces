    #include <bits/stdc++.h>
    using namespace std;
    #define MOD (int)(1e9 + 7)
    #define ll long long
     
    int main() 
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
     
        int t;
        cin >> t;
        while (t--) 
        {
            long long n;
            cin >> n;
            vector<long long> v1(n);
            for (int i = 0; i < n; i++)
                cin >> v1[i];
     
            vector<long long> psum(n);
            psum[0] = v1[0];
            for (int i = 1; i < n; i++) 
            {
                psum[i] = psum[i - 1] + v1[i];
            }
     
            long long ans = 0;
            for (int i = 1; i <= n; i++) 
            {
                if (n % i == 0) 
                {
                    long long in = 0;
                    long long m1 = LLONG_MIN, m2 = LLONG_MAX;
                    for (int j = i - 1; j < n; j += i) 
                    {
                        m1 = max(m1, psum[j] - in);
                        m2 = min(m2, psum[j] - in);
                        in = psum[j];
                    }
                    if (m1 == LLONG_MIN || m2 == LLONG_MAX) 
                    {
                        continue;
                    }
                    ans = max(ans, m1 - m2);
                }
            }
            cout << ans << endl;
        }
        return 0;
    }
