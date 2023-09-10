    #include <bits/stdc++.h>
    using namespace std;
     
    long long min(long long a, long long b) {
        return (a < b) ? a : b;
    }
     
    long long majortolocal(long long  b, long long  k, vector<vector<long long >>& v1) {
        long long ans = abs(static_cast<long long>(v1[b][0]) - v1[1][0]) + abs(static_cast<long long>(v1[b][1]) - v1[1][1]);
        for (int i = 1; i <= k; i++) {
            ans = min(ans, (abs(static_cast<long long>(v1[b][0]) - v1[i][0]) + abs(static_cast<long long>(v1[b][1]) - v1[i][1])));
        }
        return ans;
    }
     
    long long localtomajor(long long  a, long long  k, vector<vector<long long>>& v1) {
        long long ans = abs(static_cast<long long>(v1[a][0]) - v1[1][0]) + abs(static_cast<long long>(v1[a][1]) - v1[1][1]);
        for (int i = 1; i <= k; i++) {
            ans = min(ans, abs(static_cast<long long>(v1[a][0]) - v1[i][0]) + abs(static_cast<long long>(v1[a][1]) - v1[i][1]));
        }
        return ans;
    }
     
    int main() 
    {
        long long t;
        cin >> t;
        while (t--) {
            long long  n, k, a, b;
            cin >> n >> k >> a >> b;
            vector<vector<long long>> v1(n + 1);
            for (int i = 1; i <= n; i++) 
            {
                long long f, g;
                cin >> f >> g;
                v1[i].push_back(f);
                v1[i].push_back(g);
            }
            long long dir = abs(static_cast<long long>(v1[a][0]) - v1[b][0]) + abs(static_cast<long long>(v1[a][1]) - v1[b][1]);
            if(k==0)
            {
                cout<<dir<<endl;
            }
            else if (a <= k && b <= k) 
            {
                cout << "0" << endl;
            } 
            else if (a <= k) 
            {
                cout << majortolocal(b, k, v1) << endl;
            } 
            else if (b <= k) 
            {
                cout << localtomajor(a, k, v1) << endl;
            } 
            else 
            {
                long long d2 = localtomajor(a, k, v1) + majortolocal(b, k, v1);
                cout<<min(dir,d2)<<endl;
            }
        }
        return 0;
    }
