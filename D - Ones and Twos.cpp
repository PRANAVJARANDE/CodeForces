#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    ll sum = 0;
    set<int> s1;
    for (int i = 1; i <= n; i++) // Start index from 1 to match the style
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] == 1)
            s1.insert(i);
    }

    while (q--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            ll s;
            cin >> s;
            if (s > sum)
            {
                cout << "NO" << endl;
                continue;
            }

            if (sum % 2 == s % 2)
            {
                cout << "YES" << endl;
                continue;
            }

            if (s1.empty())
            {
                cout << "NO" << endl;
                continue;
            }

            int l = *s1.begin();
            auto p = s1.end();
            p--;
            int r = *p;
            if (sum - (l - 1) * 2 - 1 >= s || sum - 2 * (n - r) - 1 >= s) // Corrected the calculation
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            int i, v;
            cin >> i >> v;
            if (a[i] != v)
            {
                if (a[i] == 2)
                {
                    s1.insert(i);
                }
                else
                {
                    s1.erase(s1.find(i));
                }
                sum += v - a[i];
                a[i] = v;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
